#ifndef UI_WEATHER_H
#define UI_WEATHER_H

#include <lvgl.h>

void ui_weather_init(void);
void ui_weather_show(void);
void ui_weather_refresh(void);
bool ui_weather_is_active(void);

lv_obj_t *ui_weather_get_screen(void);

#endif
