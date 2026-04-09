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


// Enum ACCOUNTINGENTRYTYPE for budget_account_entry_create_dto

typedef enum  { accountingservice_budget_account_entry_create_dto_ACCOUNTINGENTRYTYPE_NULL = 0, accountingservice_budget_account_entry_create_dto_ACCOUNTINGENTRYTYPE_None, accountingservice_budget_account_entry_create_dto_ACCOUNTINGENTRYTYPE_Debit, accountingservice_budget_account_entry_create_dto_ACCOUNTINGENTRYTYPE_Credit } accountingservice_budget_account_entry_create_dto_ACCOUNTINGENTRYTYPE_e;

char* budget_account_entry_create_dto_accounting_entry_type_ToString(accountingservice_budget_account_entry_create_dto_ACCOUNTINGENTRYTYPE_e accounting_entry_type);

accountingservice_budget_account_entry_create_dto_ACCOUNTINGENTRYTYPE_e budget_account_entry_create_dto_accounting_entry_type_FromString(char* accounting_entry_type);



typedef struct budget_account_entry_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *tenant_id; // string
    char *enrollment_id; // string
    char *description; // string
    char *date; //date time
    double amount; //numeric
    char *currency_id; // string
    char *debit_account_id; // string
    char *credit_account_id; // string
    char *journal_entry_id; // string
    accountingservice_budget_account_entry_create_dto_ACCOUNTINGENTRYTYPE_e accounting_entry_type; //enum
    char *budget_id; // string

} budget_account_entry_create_dto_t;

budget_account_entry_create_dto_t *budget_account_entry_create_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *enrollment_id,
    char *description,
    char *date,
    double amount,
    char *currency_id,
    char *debit_account_id,
    char *credit_account_id,
    char *journal_entry_id,
    accountingservice_budget_account_entry_create_dto_ACCOUNTINGENTRYTYPE_e accounting_entry_type,
    char *budget_id
);

void budget_account_entry_create_dto_free(budget_account_entry_create_dto_t *budget_account_entry_create_dto);

budget_account_entry_create_dto_t *budget_account_entry_create_dto_parseFromJSON(cJSON *budget_account_entry_create_dtoJSON);

cJSON *budget_account_entry_create_dto_convertToJSON(budget_account_entry_create_dto_t *budget_account_entry_create_dto);

#endif /* _budget_account_entry_create_dto_H_ */

