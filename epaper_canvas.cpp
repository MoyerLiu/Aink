#include "epaper_canvas.h"

#include <Arduino.h>
#include <string.h>

#include "EPD_1in54_V2.h"

static UBYTE s_blackImage[5000];
static bool s_epaperPartialReady = false;
static bool s_portalMirror = false;

static const UWORD kRowBytes = (EPD_1IN54_V2_WIDTH + 7) / 8;

static void mapToBuffer(UWORD lx, UWORD ly, UWORD *px, UWORD *py) {
#if EPAPER_ROTATE_CW90
  *px = ly;
  *py = lx;
  if (s_portalMirror) {
    *py = EPD_1IN54_V2_WIDTH - lx - 1;
  }
#else
  *px = lx;
  *py = ly;
  if (s_portalMirror) {
    *px = EPD_1IN54_V2_WIDTH - lx - 1;
  }
#endif
}

UBYTE *epaper_get_buffer(void) {
  return s_blackImage;
}

void epaper_set_portal_mirror(bool enabled) {
  s_portalMirror = enabled;
}

void epaper_set_pixel(UWORD lx, UWORD ly, bool black) {
  UWORD x;
  UWORD y;
  mapToBuffer(lx, ly, &x, &y);
  if (x >= EPD_1IN54_V2_WIDTH || y >= EPD_1IN54_V2_HEIGHT) {
    return;
  }
  const UWORD index = (x / 8) + y * kRowBytes;
  const UBYTE mask = 0x80 >> (x % 8);
  if (black) {
    s_blackImage[index] &= ~mask;
  } else {
    s_blackImage[index] |= mask;
  }
}

void epaper_clear_white(void) {
  memset(s_blackImage, 0xFF, sizeof(s_blackImage));
}

void epaper_clear_main_area(void) {
  for (UWORD ly = EPAPER_STATUS_BAR_HEIGHT; ly < EPD_1IN54_V2_HEIGHT; ly++) {
    for (UWORD lx = 0; lx < EPD_1IN54_V2_WIDTH; lx++) {
      epaper_set_pixel(lx, ly, false);
    }
  }
}

bool epaper_is_partial_ready(void) {
  return s_epaperPartialReady;
}

void epaper_upload(bool fullRefresh) {
  epaper_upload_mode(fullRefresh, false);
}

void epaper_upload_mode(bool fullInit, bool fastPartial) {
  if (fullInit || !s_epaperPartialReady) {
    Serial.println("[EPD] upload full init...");
    EPD_1IN54_V2_Init();
    EPD_1IN54_V2_DisplayPartBaseImage(s_blackImage);
    EPD_1IN54_V2_Init_Partial();
    s_epaperPartialReady = true;
    return;
  }

  if (fastPartial) {
    EPD_1IN54_V2_DisplayPart(s_blackImage);
    return;
  }

  EPD_1IN54_V2_DisplayPartBaseImage(s_blackImage);
}
