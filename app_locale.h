#ifndef APP_LOCALE_H
#define APP_LOCALE_H

#include <stddef.h>

typedef enum {
  APP_LANG_EN = 0,
  APP_LANG_ZH = 1,
} AppLanguage;

typedef enum {
  TR_TILE_WEATHER,
  TR_TILE_APP2,
  TR_TILE_APP3,
  TR_TILE_SETTINGS,
  TR_ONLINE,
  TR_OFFLINE,
  TR_DETAIL,
  TR_COMING_SOON,
  TR_APP,

  TR_SETTINGS,
  TR_WIFI,
  TR_MODEL,
  TR_DISPLAY,
  TR_ABOUT,
  TR_NETWORK,
  TR_RECONFIGURE_WIFI,
  TR_FORGET_WIFI,
  TR_CURRENT,
  TR_DEFAULT,
  TR_VOICE_SOON,
  TR_PANEL,
  TR_REFRESH_AUTO,
  TR_VERSION,
  TR_LANGUAGE,
  TR_LANG_ENGLISH,
  TR_LANG_CHINESE,

  TR_NO_DATA,
  TR_CHECK_WIFI,
  TR_FMT_FEELS,
  TR_FMT_HUM,
  TR_FMT_HUM_NA,
  TR_FMT_WIND,
  TR_FMT_WIND_NA,
  TR_FMT_UV_NA,
  TR_FMT_UV_INT,
  TR_FMT_UV_FRAC,
  TR_FMT_AQI,
  TR_FMT_AQI_NA,

  TR_WEEKDAY_SUN,
  TR_WEEKDAY_MON,
  TR_WEEKDAY_TUE,
  TR_WEEKDAY_WED,
  TR_WEEKDAY_THU,
  TR_WEEKDAY_FRI,
  TR_WEEKDAY_SAT,

  TR_COUNT,
} AppStrId;

void app_locale_init(void);
AppLanguage app_locale_get(void);
void app_locale_set(AppLanguage lang);
void app_locale_toggle(void);
const char *app_tr(AppStrId id);
const char *app_tr_weekday(int tmWday);
void app_locale_refresh_all(void);

#endif
