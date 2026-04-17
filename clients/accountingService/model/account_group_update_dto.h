/*
 * account_group_update_dto.h
 *
 * 
 */

#ifndef _account_group_update_dto_H_
#define _account_group_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct account_group_update_dto_t account_group_update_dto_t;




typedef struct account_group_update_dto_t {
    char *title; // string
    char *description; // string
    char *parent_account_group_id; // string

} account_group_update_dto_t;

account_group_update_dto_t *account_group_update_dto_create(
    char *title,
    char *description,
    char *parent_account_group_id
);

void account_group_update_dto_free(account_group_update_dto_t *account_group_update_dto);

account_group_update_dto_t *account_group_update_dto_parseFromJSON(cJSON *account_group_update_dtoJSON);

cJSON *account_group_update_dto_convertToJSON(account_group_update_dto_t *account_group_update_dto);

#endif /* _account_group_update_dto_H_ */

