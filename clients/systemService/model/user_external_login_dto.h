/*
 * user_external_login_dto.h
 *
 * 
 */

#ifndef _user_external_login_dto_H_
#define _user_external_login_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct user_external_login_dto_t user_external_login_dto_t;




typedef struct user_external_login_dto_t {
    char *login_provider; // string
    char *provider_key; // string
    char *provider_display_name; // string

} user_external_login_dto_t;

user_external_login_dto_t *user_external_login_dto_create(
    char *login_provider,
    char *provider_key,
    char *provider_display_name
);

void user_external_login_dto_free(user_external_login_dto_t *user_external_login_dto);

user_external_login_dto_t *user_external_login_dto_parseFromJSON(cJSON *user_external_login_dtoJSON);

cJSON *user_external_login_dto_convertToJSON(user_external_login_dto_t *user_external_login_dto);

#endif /* _user_external_login_dto_H_ */

