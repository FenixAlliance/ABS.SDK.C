/*
 * user_admin_update_dto.h
 *
 * 
 */

#ifndef _user_admin_update_dto_H_
#define _user_admin_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct user_admin_update_dto_t user_admin_update_dto_t;




typedef struct user_admin_update_dto_t {
    char *email; // string
    char *user_name; // string
    char *handler; // string
    char *name; // string
    char *last_name; // string
    char *public_name; // string
    char *about; // string
    int two_factor_enabled; //boolean
    int lockout_enabled; //boolean
    char *lockout_end; //date time

} user_admin_update_dto_t;

user_admin_update_dto_t *user_admin_update_dto_create(
    char *email,
    char *user_name,
    char *handler,
    char *name,
    char *last_name,
    char *public_name,
    char *about,
    int two_factor_enabled,
    int lockout_enabled,
    char *lockout_end
);

void user_admin_update_dto_free(user_admin_update_dto_t *user_admin_update_dto);

user_admin_update_dto_t *user_admin_update_dto_parseFromJSON(cJSON *user_admin_update_dtoJSON);

cJSON *user_admin_update_dto_convertToJSON(user_admin_update_dto_t *user_admin_update_dto);

#endif /* _user_admin_update_dto_H_ */

