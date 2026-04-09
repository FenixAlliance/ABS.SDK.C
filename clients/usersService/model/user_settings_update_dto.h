/*
 * user_settings_update_dto.h
 *
 * 
 */

#ifndef _user_settings_update_dto_H_
#define _user_settings_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct user_settings_update_dto_t user_settings_update_dto_t;


// Enum SITETHEME for user_settings_update_dto

typedef enum  { usersservice_user_settings_update_dto_SITETHEME_NULL = 0, usersservice_user_settings_update_dto_SITETHEME_System, usersservice_user_settings_update_dto_SITETHEME_Light, usersservice_user_settings_update_dto_SITETHEME_Dark } usersservice_user_settings_update_dto_SITETHEME_e;

char* user_settings_update_dto_site_theme_ToString(usersservice_user_settings_update_dto_SITETHEME_e site_theme);

usersservice_user_settings_update_dto_SITETHEME_e user_settings_update_dto_site_theme_FromString(char* site_theme);



typedef struct user_settings_update_dto_t {
    int page_size; //numeric
    char *date_format; // string
    char *currency_format; // string
    char *date_time_format; // string
    usersservice_user_settings_update_dto_SITETHEME_e site_theme; //enum

} user_settings_update_dto_t;

user_settings_update_dto_t *user_settings_update_dto_create(
    int page_size,
    char *date_format,
    char *currency_format,
    char *date_time_format,
    usersservice_user_settings_update_dto_SITETHEME_e site_theme
);

void user_settings_update_dto_free(user_settings_update_dto_t *user_settings_update_dto);

user_settings_update_dto_t *user_settings_update_dto_parseFromJSON(cJSON *user_settings_update_dtoJSON);

cJSON *user_settings_update_dto_convertToJSON(user_settings_update_dto_t *user_settings_update_dto);

#endif /* _user_settings_update_dto_H_ */

