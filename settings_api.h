#ifndef SETTINGS_API_H
#define SETTINGS_API_H

#include <stddef.h>
#include <stdbool.h>

#include "app_locale.h"

void settings_api_get_wifi_ssid(char *out, size_t outLen);
void settings_api_get_ip(char *out, size_t outLen);
bool settings_api_is_wifi_connected(void);
void settings_api_get_model_name(char *out, size_t outLen);

AppLanguage settings_api_get_language(void);
void settings_api_set_language(AppLanguage lang);

void settings_api_request_portal_restart(void);
void settings_api_forget_wifi_and_restart(void);

bool settings_api_consume_force_portal_boot(void);

#endif
