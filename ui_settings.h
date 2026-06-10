#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <lvgl.h>
#include <stdbool.h>

typedef enum {
  SETTINGS_ACT_NONE = 0,
  SETTINGS_ACT_RESTART,
  SETTINGS_ACT_LOCALE,
} SettingsActivateResult;

void ui_settings_init(void);
void ui_settings_show(void);
void ui_settings_refresh(void);
void ui_settings_next_row(void);
void ui_settings_prev_row(void);
SettingsActivateResult ui_settings_activate(void);
bool ui_settings_back(void);
bool ui_settings_is_active(void);

lv_obj_t *ui_settings_get_screen(void);

#endif
