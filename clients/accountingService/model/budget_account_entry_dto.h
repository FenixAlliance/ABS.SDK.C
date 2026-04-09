/*
 * budget_account_entry_dto.h
 *
 * 
 */

#ifndef _budget_account_entry_dto_H_
#define _budget_account_entry_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct budget_account_entry_dto_t budget_account_entry_dto_t;

#include "money.h"

// Enum ACCOUNTINGENTRYTYPE for budget_account_entry_dto

typedef enum  { accountingservice_budget_account_entry_dto_ACCOUNTINGENTRYTYPE_NULL = 0, accountingservice_budget_account_entry_dto_ACCOUNTINGENTRYTYPE_None, accountingservice_budget_account_entry_dto_ACCOUNTINGENTRYTYPE_Debit, accountingservice_budget_account_entry_dto_ACCOUNTINGENTRYTYPE_Credit } accountingservice_budget_account_entry_dto_ACCOUNTINGENTRYTYPE_e;

char* budget_account_entry_dto_accounting_entry_type_ToString(accountingservice_budget_account_entry_dto_ACCOUNTINGENTRYTYPE_e accounting_entry_type);

accountingservice_budget_account_entry_dto_ACCOUNTINGENTRYTYPE_e budget_account_entry_dto_accounting_entry_type_FromString(char* accounting_entry_type);



typedef struct budget_account_entry_dto_t {
    char *id; // string
    char *timestamp; //date time
    double debit; //numeric
    double credit; //numeric
    char *description; // string
    double forex_rate; //numeric
    char *account_id; // string
    char *tenant_id; // string
    char *date; //date time
    char *enrollment_id; // string
    char *currency_id; // string
    char *debit_account_id; // string
    char *credit_account_id; // string
    char *journal_entry_id; // string
    char *debit_account_name; // string
    char *credit_account_name; // string
    accountingservice_budget_account_entry_dto_ACCOUNTINGENTRYTYPE_e accounting_entry_type; //enum
    struct money_t *debit_amount; //model
    struct money_t *credit_amount; //model
    char *budget_id; // string

} budget_account_entry_dto_t;

budget_account_entry_dto_t *budget_account_entry_dto_create(
    char *id,
    char *timestamp,
    double debit,
    double credit,
    char *description,
    double forex_rate,
    char *account_id,
    char *tenant_id,
    char *date,
    char *enrollment_id,
    char *currency_id,
    char *debit_account_id,
    char *credit_account_id,
    char *journal_entry_id,
    char *debit_account_name,
    char *credit_account_name,
    accountingservice_budget_account_entry_dto_ACCOUNTINGENTRYTYPE_e accounting_entry_type,
    money_t *debit_amount,
    money_t *credit_amount,
    char *budget_id
);

void budget_account_entry_dto_free(budget_account_entry_dto_t *budget_account_entry_dto);

budget_account_entry_dto_t *budget_account_entry_dto_parseFromJSON(cJSON *budget_account_entry_dtoJSON);

cJSON *budget_account_entry_dto_convertToJSON(budget_account_entry_dto_t *budget_account_entry_dto);

#endif /* _budget_account_entry_dto_H_ */

