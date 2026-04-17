/*
 * account_relation_create_dto.h
 *
 * 
 */

#ifndef _account_relation_create_dto_H_
#define _account_relation_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct account_relation_create_dto_t account_relation_create_dto_t;




typedef struct account_relation_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *account_id; // string

} account_relation_create_dto_t;

account_relation_create_dto_t *account_relation_create_dto_create(
    char *id,
    char *timestamp,
    char *account_id
);

void account_relation_create_dto_free(account_relation_create_dto_t *account_relation_create_dto);

account_relation_create_dto_t *account_relation_create_dto_parseFromJSON(cJSON *account_relation_create_dtoJSON);

cJSON *account_relation_create_dto_convertToJSON(account_relation_create_dto_t *account_relation_create_dto);

#endif /* _account_relation_create_dto_H_ */

