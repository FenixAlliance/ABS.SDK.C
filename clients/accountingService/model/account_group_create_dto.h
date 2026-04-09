/*
 * account_group_create_dto.h
 *
 * 
 */

#ifndef _account_group_create_dto_H_
#define _account_group_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct account_group_create_dto_t account_group_create_dto_t;




typedef struct account_group_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *description; // string
    char *parent_account_group_id; // string
    char *tenant_id; // string
    char *enrollment_id; // string

} account_group_create_dto_t;

account_group_create_dto_t *account_group_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *parent_account_group_id,
    char *tenant_id,
    char *enrollment_id
);

void account_group_create_dto_free(account_group_create_dto_t *account_group_create_dto);

account_group_create_dto_t *account_group_create_dto_parseFromJSON(cJSON *account_group_create_dtoJSON);

cJSON *account_group_create_dto_convertToJSON(account_group_create_dto_t *account_group_create_dto);

#endif /* _account_group_create_dto_H_ */

