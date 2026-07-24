/*
 * budget_account_entry_create_dto.h
 *
 * 
 */

#ifndef _budget_account_entry_create_dto_H_
#define _budget_account_entry_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct budget_account_entry_create_dto_t budget_account_entry_create_dto_t;




typedef struct budget_account_entry_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *description; // string
    double planned_amount; //numeric
    char *currency_id; // string
    char *debit_account_id; // string
    char *credit_account_id; // string
    char *budget_id; // string

} budget_account_entry_create_dto_t;

budget_account_entry_create_dto_t *budget_account_entry_create_dto_create(
    char *id,
    char *timestamp,
    char *description,
    double planned_amount,
    char *currency_id,
    char *debit_account_id,
    char *credit_account_id,
    char *budget_id
);

void budget_account_entry_create_dto_free(budget_account_entry_create_dto_t *budget_account_entry_create_dto);

budget_account_entry_create_dto_t *budget_account_entry_create_dto_parseFromJSON(cJSON *budget_account_entry_create_dtoJSON);

cJSON *budget_account_entry_create_dto_convertToJSON(budget_account_entry_create_dto_t *budget_account_entry_create_dto);

#endif /* _budget_account_entry_create_dto_H_ */

