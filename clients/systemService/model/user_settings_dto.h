/*
 * user_settings_dto.h
 *
 * 
 */

#ifndef _user_settings_dto_H_
#define _user_settings_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct user_settings_dto_t user_settings_dto_t;


// Enum SITETHEME for user_settings_dto

typedef enum  { systemservice_user_settings_dto_SITETHEME_NULL = 0, systemservice_user_settings_dto_SITETHEME_System, systemservice_user_settings_dto_SITETHEME_Light, systemservice_user_settings_dto_SITETHEME_Dark } systemservice_user_settings_dto_SITETHEME_e;

char* user_settings_dto_site_theme_ToString(systemservice_user_settings_dto_SITETHEME_e site_theme);

systemservice_user_settings_dto_SITETHEME_e user_settings_dto_site_theme_FromString(char* site_theme);



typedef struct user_settings_dto_t {
    char *id; // string
    char *timestamp; //date time
    int page_size; //numeric
    char *date_format; // string
    char *currency_format; // string
    char *date_time_format; // string
    systemservice_user_settings_dto_SITETHEME_e site_theme; //enum

} user_settings_dto_t;

user_settings_dto_t *user_settings_dto_create(
    char *id,
    char *timestamp,
    int page_size,
    char *date_format,
    char *currency_format,
    char *date_time_format,
    systemservice_user_settings_dto_SITETHEME_e site_theme
);

void user_settings_dto_free(user_settings_dto_t *user_settings_dto);

user_settings_dto_t *user_settings_dto_parseFromJSON(cJSON *user_settings_dtoJSON);

cJSON *user_settings_dto_convertToJSON(user_settings_dto_t *user_settings_dto);

#endif /* _user_settings_dto_H_ */

