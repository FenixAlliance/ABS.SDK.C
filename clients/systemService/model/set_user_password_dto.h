/*
 * set_user_password_dto.h
 *
 * 
 */

#ifndef _set_user_password_dto_H_
#define _set_user_password_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct set_user_password_dto_t set_user_password_dto_t;




typedef struct set_user_password_dto_t {
    char *new_password; // string

} set_user_password_dto_t;

set_user_password_dto_t *set_user_password_dto_create(
    char *new_password
);

void set_user_password_dto_free(set_user_password_dto_t *set_user_password_dto);

set_user_password_dto_t *set_user_password_dto_parseFromJSON(cJSON *set_user_password_dtoJSON);

cJSON *set_user_password_dto_convertToJSON(set_user_password_dto_t *set_user_password_dto);

#endif /* _set_user_password_dto_H_ */

