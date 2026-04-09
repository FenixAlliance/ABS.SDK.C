/*
 * account_relation_dto.h
 *
 * 
 */

#ifndef _account_relation_dto_H_
#define _account_relation_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct account_relation_dto_t account_relation_dto_t;




typedef struct account_relation_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *account_id; // string
    char *tenant_id; // string
    char *enrollment_id; // string

} account_relation_dto_t;

account_relation_dto_t *account_relation_dto_create(
    char *id,
    char *timestamp,
    char *account_id,
    char *tenant_id,
    char *enrollment_id
);

void account_relation_dto_free(account_relation_dto_t *account_relation_dto);

account_relation_dto_t *account_relation_dto_parseFromJSON(cJSON *account_relation_dtoJSON);

cJSON *account_relation_dto_convertToJSON(account_relation_dto_t *account_relation_dto);

#endif /* _account_relation_dto_H_ */

