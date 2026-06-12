/*
 * bank_account_update_dto.h
 *
 * 
 */

#ifndef _bank_account_update_dto_H_
#define _bank_account_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct bank_account_update_dto_t bank_account_update_dto_t;




typedef struct bank_account_update_dto_t {
    char *name; // string
    char *iban; // string
    char *swift; // string
    char *branch_code; // string
    char *bank_account_number; // string
    char *bank_id; // string
    char *bank_profile_id; // string
    char *wallet_id; // string

} bank_account_update_dto_t;

bank_account_update_dto_t *bank_account_update_dto_create(
    char *name,
    char *iban,
    char *swift,
    char *branch_code,
    char *bank_account_number,
    char *bank_id,
    char *bank_profile_id,
    char *wallet_id
);

void bank_account_update_dto_free(bank_account_update_dto_t *bank_account_update_dto);

bank_account_update_dto_t *bank_account_update_dto_parseFromJSON(cJSON *bank_account_update_dtoJSON);

cJSON *bank_account_update_dto_convertToJSON(bank_account_update_dto_t *bank_account_update_dto);

#endif /* _bank_account_update_dto_H_ */

