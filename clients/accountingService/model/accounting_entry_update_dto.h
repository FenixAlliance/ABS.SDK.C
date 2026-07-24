/*
 * accounting_entry_update_dto.h
 *
 * 
 */

#ifndef _accounting_entry_update_dto_H_
#define _accounting_entry_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct accounting_entry_update_dto_t accounting_entry_update_dto_t;


// Enum DIRECTION for accounting_entry_update_dto

typedef enum  { accountingservice_accounting_entry_update_dto_DIRECTION_NULL = 0, accountingservice_accounting_entry_update_dto_DIRECTION_Debit, accountingservice_accounting_entry_update_dto_DIRECTION_Credit } accountingservice_accounting_entry_update_dto_DIRECTION_e;

char* accounting_entry_update_dto_direction_ToString(accountingservice_accounting_entry_update_dto_DIRECTION_e direction);

accountingservice_accounting_entry_update_dto_DIRECTION_e accounting_entry_update_dto_direction_FromString(char* direction);



typedef struct accounting_entry_update_dto_t {
    char *journal_entry_id; // string
    char *account_id; // string
    accountingservice_accounting_entry_update_dto_DIRECTION_e direction; //enum
    double transaction_amount; //numeric
    char *transaction_currency_id; // string
    char *description; // string

} accounting_entry_update_dto_t;

accounting_entry_update_dto_t *accounting_entry_update_dto_create(
    char *journal_entry_id,
    char *account_id,
    accountingservice_accounting_entry_update_dto_DIRECTION_e direction,
    double transaction_amount,
    char *transaction_currency_id,
    char *description
);

void accounting_entry_update_dto_free(accounting_entry_update_dto_t *accounting_entry_update_dto);

accounting_entry_update_dto_t *accounting_entry_update_dto_parseFromJSON(cJSON *accounting_entry_update_dtoJSON);

cJSON *accounting_entry_update_dto_convertToJSON(accounting_entry_update_dto_t *accounting_entry_update_dto);

#endif /* _accounting_entry_update_dto_H_ */

