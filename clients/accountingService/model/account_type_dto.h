/*
 * account_type_dto.h
 *
 * 
 */

#ifndef _account_type_dto_H_
#define _account_type_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct account_type_dto_t account_type_dto_t;




typedef struct account_type_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *description; // string
    char *tenant_id; // string
    char *enrollment_id; // string

} account_type_dto_t;

account_type_dto_t *account_type_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *tenant_id,
    char *enrollment_id
);

void account_type_dto_free(account_type_dto_t *account_type_dto);

account_type_dto_t *account_type_dto_parseFromJSON(cJSON *account_type_dtoJSON);

cJSON *account_type_dto_convertToJSON(account_type_dto_t *account_type_dto);

#endif /* _account_type_dto_H_ */

