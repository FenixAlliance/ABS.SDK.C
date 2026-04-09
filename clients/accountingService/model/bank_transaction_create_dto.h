/*
 * bank_transaction_create_dto.h
 *
 * 
 */

#ifndef _bank_transaction_create_dto_H_
#define _bank_transaction_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct bank_transaction_create_dto_t bank_transaction_create_dto_t;




typedef struct bank_transaction_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *bank_profile_id; // string
    char *bank_account_id; // string

} bank_transaction_create_dto_t;

bank_transaction_create_dto_t *bank_transaction_create_dto_create(
    char *id,
    char *timestamp,
    char *bank_profile_id,
    char *bank_account_id
);

void bank_transaction_create_dto_free(bank_transaction_create_dto_t *bank_transaction_create_dto);

bank_transaction_create_dto_t *bank_transaction_create_dto_parseFromJSON(cJSON *bank_transaction_create_dtoJSON);

cJSON *bank_transaction_create_dto_convertToJSON(bank_transaction_create_dto_t *bank_transaction_create_dto);

#endif /* _bank_transaction_create_dto_H_ */

