/*
 * account_type_create_dto.h
 *
 * 
 */

#ifndef _account_type_create_dto_H_
#define _account_type_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct account_type_create_dto_t account_type_create_dto_t;




typedef struct account_type_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *description; // string

} account_type_create_dto_t;

account_type_create_dto_t *account_type_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description
);

void account_type_create_dto_free(account_type_create_dto_t *account_type_create_dto);

account_type_create_dto_t *account_type_create_dto_parseFromJSON(cJSON *account_type_create_dtoJSON);

cJSON *account_type_create_dto_convertToJSON(account_type_create_dto_t *account_type_create_dto);

#endif /* _account_type_create_dto_H_ */

