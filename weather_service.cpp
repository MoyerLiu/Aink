#include "weather_service.h"

#include "app_locale.h"

#include <HTTPClient.h>
#include <WiFi.h>
#include <WiFiClientSecure.h>
#include <time.h>

#include <Arduino.h>
#include <stdio.h>
#include <string.h>

#define WEATHER_FETCH_INTERVAL_MS  (30UL * 60UL * 1000)
#define WEATHER_RETRY_INTERVAL_MS  (5UL * 60UL * 1000)

static WeatherSnapshot s_snapshot = {};
static unsigned long s_lastFetchMs = 0;
static unsigned long s_lastAttemptMs = 0;

static int roundTemp(float tempC) {
  return (int)(tempC + (tempC >= 0.0f ? 0.5f : -0.5f));
}

static bool findDailyArrayStart(const String &body, const char *field, int *outStart);
static bool parseJsonStringAt(const String &body, int start, int index, char *out, size_t outLen);

WeatherIconKind weather_service_wmo_to_icon(int wmo) {
  switch (wmo) {
    case 0:
    case 1:
      return WEATHER_ICON_SUNNY;
    case 2:
    case 3:
      return WEATHER_ICON_CLOUDY;
    case 45:
    case 48:
      return WEATHER_ICON_FOG;
    case 51:
    case 53:
    case 55:
    case 56:
    case 57:
    case 61:
    case 63:
    case 65:
    case 66:
    case 67:
    case 80:
    case 81:
    case 82:
      return WEATHER_ICON_RAIN;
    case 71:
    case 73:
    case 75:
    case 77:
    case 85:
    case 86:
      return WEATHER_ICON_SNOW;
    case 95:
    case 96:
    case 99:
      return WEATHER_ICON_LIGHTNING;
    default:
      return WEATHER_ICON_CLOUDY;
  }
}

const char *weather_service_wmo_to_label(int wmo) {
  const bool zh = app_locale_get() == APP_LANG_ZH;
  switch (weather_service_wmo_to_icon(wmo)) {
    case WEATHER_ICON_SUNNY:
      return zh ? "晴" : "Clear";
    case WEATHER_ICON_CLOUDY:
      return zh ? "多云" : "Cloudy";
    case WEATHER_ICON_RAIN:
      return zh ? "雨" : "Rain";
    case WEATHER_ICON_SNOW:
      return zh ? "雪" : "Snow";
    case WEATHER_ICON_LIGHTNING:
      return zh ? "雷暴" : "Storm";
    case WEATHER_ICON_FOG:
      return zh ? "雾" : "Fog";
    default:
      return zh ? "多云" : "Cloudy";
  }
}

const char *weather_service_uv_level(int uvIndexTenths) {
  if (uvIndexTenths < 0) {
    return "--";
  }
  const bool zh = app_locale_get() == APP_LANG_ZH;
  const float uv = uvIndexTenths / 10.0f;
  if (uv < 3.0f) {
    return zh ? "低" : "Low";
  }
  if (uv < 6.0f) {
    return zh ? "中" : "Mod";
  }
  if (uv < 8.0f) {
    return zh ? "高" : "High";
  }
  return zh ? "极" : "Extreme";
}

const char *weather_service_aqi_level(int usAqi) {
  if (usAqi < 0) {
    return "--";
  }
  const bool zh = app_locale_get() == APP_LANG_ZH;
  if (usAqi <= 50) {
    return zh ? "优" : "Good";
  }
  if (usAqi <= 100) {
    return zh ? "良" : "Mod";
  }
  if (usAqi <= 150) {
    return zh ? "敏" : "Sens";
  }
  if (usAqi <= 200) {
    return zh ? "中度" : "Unh";
  }
  return zh ? "重度" : "Bad";
}

void weather_service_reset(void) {
  memset(&s_snapshot, 0, sizeof(s_snapshot));
  s_snapshot.humidityPct = -1;
  s_snapshot.uvIndexTenths = -1;
  s_snapshot.windSpeedKmh = -1;
  s_snapshot.pressureHpa = -1;
  s_snapshot.usAqi = -1;
  s_snapshot.pm25Tenths = -1;
  s_lastFetchMs = 0;
  s_lastAttemptMs = 0;
}

void weather_service_get_snapshot(WeatherSnapshot *out) {
  if (out == nullptr) {
    return;
  }
  *out = s_snapshot;
}

static bool parseJsonQuotedString(const String &body, const char *fieldKey, char *out,
                                  size_t outLen) {
  char search[32];
  snprintf(search, sizeof(search), "\"%s\":\"", fieldKey);
  const int idx = body.indexOf(search);
  if (idx < 0) {
    return false;
  }

  const int start = idx + (int)strlen(search);
  const int end = body.indexOf('"', start);
  if (end < 0) {
    return false;
  }

  const String value = body.substring(start, end);
  snprintf(out, outLen, "%s", value.c_str());
  return out[0] != '\0';
}

static bool fetchGeoLocation(float *outLat, float *outLon, char *outLocation, size_t locationLen) {
  HTTPClient http;
  http.setTimeout(10000);
  if (!http.begin("http://ip-api.com/json/?fields=status,lat,lon,city,countryCode")) {
    return false;
  }

  const int code = http.GET();
  if (code != HTTP_CODE_OK) {
    Serial.printf("[Weather] geo HTTP %d\n", code);
    http.end();
    return false;
  }

  const String body = http.getString();
  http.end();

  if (body.indexOf("\"status\":\"success\"") < 0) {
    Serial.println("[Weather] geo status failed");
    return false;
  }

  const int latIdx = body.indexOf("\"lat\":");
  const int lonIdx = body.indexOf("\"lon\":");
  if (latIdx < 0 || lonIdx < 0) {
    return false;
  }

  *outLat = body.substring(latIdx + 6).toFloat();
  *outLon = body.substring(lonIdx + 6).toFloat();

  char city[20] = {};
  char countryCode[4] = {};
  parseJsonQuotedString(body, "city", city, sizeof(city));
  parseJsonQuotedString(body, "countryCode", countryCode, sizeof(countryCode));

  if (outLocation != nullptr && locationLen > 0) {
    if (city[0] != '\0' && countryCode[0] != '\0') {
      snprintf(outLocation, locationLen, "%s, %s", city, countryCode);
    } else if (city[0] != '\0') {
      snprintf(outLocation, locationLen, "%s", city);
    } else {
      outLocation[0] = '\0';
    }
  }

  Serial.printf("[Weather] geo lat=%.4f lon=%.4f loc=%s\n",
                *outLat, *outLon,
                (outLocation != nullptr && outLocation[0] != '\0') ? outLocation : "?");
  return true;
}

static bool parseJsonFloatAfterKey(const String &body, int sectionIdx, const char *fieldKey,
                                   float *outVal) {
  if (sectionIdx < 0) {
    return false;
  }

  char search[40];
  snprintf(search, sizeof(search), "\"%s\":", fieldKey);
  const int keyIdx = body.indexOf(search, sectionIdx);
  if (keyIdx < 0) {
    return false;
  }

  *outVal = body.substring(keyIdx + (int)strlen(search)).toFloat();
  return true;
}

static bool parseCurrentWeather(const String &body, int *outWmo, float *outTemp) {
  const int sectionIdx = body.indexOf("\"current_weather\"");
  if (sectionIdx < 0) {
    return false;
  }

  const int wmoIdx = body.indexOf("\"weathercode\":", sectionIdx);
  const int tempIdx = body.indexOf("\"temperature\":", sectionIdx);
  if (wmoIdx < 0 || tempIdx < 0) {
    return false;
  }

  *outWmo = body.substring(wmoIdx + 14).toInt();
  *outTemp = body.substring(tempIdx + 14).toFloat();
  return true;
}

static bool parseCurrentBlock(const String &body, WeatherSnapshot *out) {
  const int sectionIdx = body.indexOf("\"current\":");
  if (sectionIdx < 0) {
    int wmo = 0;
    float tempC = 0.0f;
    if (!parseCurrentWeather(body, &wmo, &tempC)) {
      return false;
    }
    out->tempC = roundTemp(tempC);
    out->wmoCode = wmo;
    out->feelsLikeC = out->tempC;
    out->icon = weather_service_wmo_to_icon(wmo);
    snprintf(out->condition, sizeof(out->condition), "%s", weather_service_wmo_to_label(wmo));
    return true;
  }

  float tempC = 0.0f;
  float feelsC = 0.0f;
  float wmoF = 0.0f;
  float humidity = 0.0f;
  float uv = 0.0f;
  float wind = 0.0f;
  float pressure = 0.0f;

  if (!parseJsonFloatAfterKey(body, sectionIdx, "temperature_2m", &tempC) ||
      !parseJsonFloatAfterKey(body, sectionIdx, "weather_code", &wmoF)) {
    return false;
  }

  if (parseJsonFloatAfterKey(body, sectionIdx, "apparent_temperature", &feelsC)) {
    out->feelsLikeC = roundTemp(feelsC);
  } else {
    out->feelsLikeC = roundTemp(tempC);
  }
  parseJsonFloatAfterKey(body, sectionIdx, "relative_humidity_2m", &humidity);
  parseJsonFloatAfterKey(body, sectionIdx, "uv_index", &uv);
  parseJsonFloatAfterKey(body, sectionIdx, "wind_speed_10m", &wind);
  parseJsonFloatAfterKey(body, sectionIdx, "surface_pressure", &pressure);

  const int wmo = (int)wmoF;
  out->tempC = roundTemp(tempC);
  out->wmoCode = wmo;
  out->icon = weather_service_wmo_to_icon(wmo);
  snprintf(out->condition, sizeof(out->condition), "%s", weather_service_wmo_to_label(wmo));

  if (humidity >= 0.0f && humidity <= 100.0f) {
    out->humidityPct = (int)(humidity + 0.5f);
  }
  if (uv >= 0.0f) {
    out->uvIndexTenths = (int)(uv * 10.0f + 0.5f);
  }
  if (wind >= 0.0f) {
    out->windSpeedKmh = (int)(wind + 0.5f);
  }
  if (pressure > 800.0f) {
    out->pressureHpa = (int)(pressure + 0.5f);
  }
  return true;
}

static void formatIsoSunTime(const char *isoTime, char *out, size_t outLen) {
  const char *tPos = strchr(isoTime, 'T');
  if (tPos == nullptr || strlen(tPos) < 6) {
    snprintf(out, outLen, "--:--");
    return;
  }
  snprintf(out, outLen, "%.5s", tPos + 1);
}

static bool parseDailySunTimes(const String &body, WeatherSnapshot *out) {
  int riseStart = 0;
  int setStart = 0;
  if (!findDailyArrayStart(body, "sunrise", &riseStart) ||
      !findDailyArrayStart(body, "sunset", &setStart)) {
    return false;
  }

  char riseIso[32] = {};
  char setIso[32] = {};
  if (!parseJsonStringAt(body, riseStart, 0, riseIso, sizeof(riseIso)) ||
      !parseJsonStringAt(body, setStart, 0, setIso, sizeof(setIso))) {
    return false;
  }

  formatIsoSunTime(riseIso, out->sunrise, sizeof(out->sunrise));
  formatIsoSunTime(setIso, out->sunset, sizeof(out->sunset));
  return true;
}

static bool fetchAirQuality(float lat, float lon, WeatherSnapshot *out) {
  char url[256];
  snprintf(url, sizeof(url),
           "https://air-quality-api.open-meteo.com/v1/air-quality?latitude=%.4f&longitude=%.4f"
           "&current=us_aqi,pm2_5&timezone=auto",
           lat, lon);

  WiFiClientSecure client;
  client.setInsecure();

  HTTPClient http;
  http.setTimeout(12000);
  if (!http.begin(client, url)) {
    Serial.println("[Weather] aqi begin failed");
    return false;
  }

  const int code = http.GET();
  if (code != HTTP_CODE_OK) {
    Serial.printf("[Weather] aqi HTTP %d\n", code);
    http.end();
    return false;
  }

  const String body = http.getString();
  http.end();

  const int sectionIdx = body.indexOf("\"current\":");
  if (sectionIdx < 0) {
    return false;
  }

  float aqiF = -1.0f;
  float pmF = -1.0f;
  if (!parseJsonFloatAfterKey(body, sectionIdx, "us_aqi", &aqiF)) {
    return false;
  }
  parseJsonFloatAfterKey(body, sectionIdx, "pm2_5", &pmF);

  out->usAqi = (int)(aqiF + 0.5f);
  out->pm25Tenths = pmF >= 0.0f ? (int)(pmF * 10.0f + 0.5f) : -1;
  out->aqiValid = out->usAqi >= 0;
  Serial.printf("[Weather] aqi=%d pm2.5=%.1f\n", out->usAqi, pmF);
  return out->aqiValid;
}

static bool findDailyArrayStart(const String &body, const char *field, int *outStart) {
  const int dailyIdx = body.indexOf("\"daily\"");
  if (dailyIdx < 0) {
    return false;
  }

  char key[40];
  snprintf(key, sizeof(key), "\"%s\":[", field);
  const int keyIdx = body.indexOf(key, dailyIdx);
  if (keyIdx < 0) {
    return false;
  }

  *outStart = keyIdx + (int)strlen(key);
  return true;
}

static bool parseJsonNumberAt(const String &body, int start, int index, float *outVal) {
  int pos = start;
  for (int i = 0; i < index; i++) {
    pos = body.indexOf(',', pos);
    if (pos < 0) {
      return false;
    }
    pos++;
  }

  int end = body.indexOf(',', pos);
  const int endBracket = body.indexOf(']', pos);
  if (end < 0 || (endBracket >= 0 && endBracket < end)) {
    end = endBracket;
  }
  if (end < 0) {
    return false;
  }

  String token = body.substring(pos, end);
  token.trim();
  *outVal = token.toFloat();
  return true;
}

static bool parseJsonStringAt(const String &body, int start, int index, char *out, size_t outLen) {
  int pos = start;
  for (int i = 0; i < index; i++) {
    pos = body.indexOf('"', pos);
    if (pos < 0) {
      return false;
    }
    pos = body.indexOf('"', pos + 1);
    if (pos < 0) {
      return false;
    }
    pos++;
  }

  const int q1 = body.indexOf('"', pos);
  if (q1 < 0) {
    return false;
  }
  const int q2 = body.indexOf('"', q1 + 1);
  if (q2 < 0) {
    return false;
  }

  const String value = body.substring(q1 + 1, q2);
  snprintf(out, outLen, "%s", value.c_str());
  return true;
}

static int wdayFromIsoDate(const char *isoDate) {
  int year = 0;
  int month = 0;
  int day = 0;
  if (sscanf(isoDate, "%d-%d-%d", &year, &month, &day) != 3) {
    return 0;
  }

  struct tm timeInfo = {};
  timeInfo.tm_year = year - 1900;
  timeInfo.tm_mon = month - 1;
  timeInfo.tm_mday = day;
  timeInfo.tm_isdst = -1;
  mktime(&timeInfo);
  return timeInfo.tm_wday;
}

static void dayLabelFromIsoDate(const char *isoDate, int index, char *out, size_t outLen) {
  (void)index;
  snprintf(out, outLen, "%s", app_tr_weekday(wdayFromIsoDate(isoDate)));
}

static bool parseDailyForecast(const String &body, WeatherSnapshot *out) {
  int timeStart = 0;
  int wmoStart = 0;
  int maxStart = 0;
  int minStart = 0;
  if (!findDailyArrayStart(body, "time", &timeStart) ||
      !findDailyArrayStart(body, "weathercode", &wmoStart) ||
      !findDailyArrayStart(body, "temperature_2m_max", &maxStart) ||
      !findDailyArrayStart(body, "temperature_2m_min", &minStart)) {
    return false;
  }

  for (int i = 0; i < WEATHER_DAILY_COUNT; i++) {
    char isoDate[16] = {};
    float hi = 0.0f;
    float lo = 0.0f;
    float wmoF = 0.0f;

    if (!parseJsonStringAt(body, timeStart, i, isoDate, sizeof(isoDate)) ||
        !parseJsonNumberAt(body, maxStart, i, &hi) ||
        !parseJsonNumberAt(body, minStart, i, &lo) ||
        !parseJsonNumberAt(body, wmoStart, i, &wmoF)) {
      return false;
    }

    const int wmo = (int)wmoF;
    out->daily[i].hi = roundTemp(hi);
    out->daily[i].lo = roundTemp(lo);
    out->daily[i].wmoCode = wmo;
    out->daily[i].icon = weather_service_wmo_to_icon(wmo);
    snprintf(out->daily[i].condition, sizeof(out->daily[i].condition), "%s",
             weather_service_wmo_to_label(wmo));
    out->daily[i].wday = wdayFromIsoDate(isoDate);
    dayLabelFromIsoDate(isoDate, i, out->daily[i].label, sizeof(out->daily[i].label));
  }

  out->hiToday = out->daily[0].hi;
  out->loToday = out->daily[0].lo;
  return true;
}

static bool fetchWeather(WeatherSnapshot *out) {
  float lat = 0.0f;
  float lon = 0.0f;
  char location[sizeof(out->location)] = {};
  if (!fetchGeoLocation(&lat, &lon, location, sizeof(location))) {
    return false;
  }

  char url[512];
  snprintf(url, sizeof(url),
           "https://api.open-meteo.com/v1/forecast?latitude=%.4f&longitude=%.4f"
           "&current=temperature_2m,weather_code,apparent_temperature,"
           "relative_humidity_2m,uv_index,wind_speed_10m,surface_pressure"
           "&daily=weathercode,temperature_2m_max,temperature_2m_min,sunrise,sunset"
           "&timezone=auto&forecast_days=3",
           lat, lon);

  WiFiClientSecure client;
  client.setInsecure();

  HTTPClient http;
  http.setTimeout(15000);
  if (!http.begin(client, url)) {
    Serial.println("[Weather] forecast begin failed");
    return false;
  }

  const int code = http.GET();
  if (code != HTTP_CODE_OK) {
    Serial.printf("[Weather] forecast HTTP %d\n", code);
    http.end();
    return false;
  }

  const String body = http.getString();
  http.end();

  WeatherSnapshot snapshot = {};
  snapshot.humidityPct = -1;
  snapshot.uvIndexTenths = -1;
  snapshot.windSpeedKmh = -1;
  snapshot.pressureHpa = -1;
  snapshot.usAqi = -1;
  snapshot.pm25Tenths = -1;
  if (!parseCurrentBlock(body, &snapshot)) {
    Serial.println("[Weather] parse current failed");
    return false;
  }
  snapshot.valid = true;

  if (!parseDailyForecast(body, &snapshot)) {
    Serial.println("[Weather] parse daily failed");
    snapshot.hiToday = snapshot.tempC;
    snapshot.loToday = snapshot.tempC;
    snprintf(snapshot.daily[0].label, sizeof(snapshot.daily[0].label), "---");
    snapshot.daily[0].hi = snapshot.tempC;
    snapshot.daily[0].lo = snapshot.tempC;
    snapshot.daily[0].wmoCode = snapshot.wmoCode;
    snapshot.daily[0].icon = snapshot.icon;
    snprintf(snapshot.daily[0].condition, sizeof(snapshot.daily[0].condition), "%s",
             snapshot.condition);
  }

  if (!parseDailySunTimes(body, &snapshot)) {
    snprintf(snapshot.sunrise, sizeof(snapshot.sunrise), "--:--");
    snprintf(snapshot.sunset, sizeof(snapshot.sunset), "--:--");
  }

  fetchAirQuality(lat, lon, &snapshot);

  snprintf(snapshot.location, sizeof(snapshot.location), "%s", location);

  *out = snapshot;
  Serial.printf("[Weather] %dC feel=%d loc=%s hum=%d uv=%.1f wind=%d aqi=%d\n",
                snapshot.tempC, snapshot.feelsLikeC, snapshot.location,
                snapshot.humidityPct,
                snapshot.uvIndexTenths / 10.0f, snapshot.windSpeedKmh,
                snapshot.aqiValid ? snapshot.usAqi : -1);
  return true;
}

void weather_service_update(bool force) {
  if (WiFi.status() != WL_CONNECTED) {
    return;
  }

  const unsigned long now = millis();
  if (!force && s_snapshot.valid &&
      (now - s_lastFetchMs) < WEATHER_FETCH_INTERVAL_MS) {
    return;
  }
  if (!force && !s_snapshot.valid && s_lastAttemptMs != 0 &&
      (now - s_lastAttemptMs) < WEATHER_RETRY_INTERVAL_MS) {
    return;
  }

  s_lastAttemptMs = now;
  WeatherSnapshot fresh = {};
  if (fetchWeather(&fresh)) {
    s_snapshot = fresh;
    s_lastFetchMs = now;
  }
}
