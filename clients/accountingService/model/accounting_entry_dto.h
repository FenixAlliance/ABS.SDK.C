/*
 * accounting_entry_dto.h
 *
 * 
 */

#ifndef _accounting_entry_dto_H_
#define _accounting_entry_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct accounting_entry_dto_t accounting_entry_dto_t;

#include "money.h"

// Enum ACCOUNTINGENTRYTYPE for accounting_entry_dto

typedef enum  { accountingservice_accounting_entry_dto_ACCOUNTINGENTRYTYPE_NULL = 0, accountingservice_accounting_entry_dto_ACCOUNTINGENTRYTYPE_None, accountingservice_accounting_entry_dto_ACCOUNTINGENTRYTYPE_Debit, accountingservice_accounting_entry_dto_ACCOUNTINGENTRYTYPE_Credit } accountingservice_accounting_entry_dto_ACCOUNTINGENTRYTYPE_e;

char* accounting_entry_dto_accounting_entry_type_ToString(accountingservice_accounting_entry_dto_ACCOUNTINGENTRYTYPE_e accounting_entry_type);

accountingservice_accounting_entry_dto_ACCOUNTINGENTRYTYPE_e accounting_entry_dto_accounting_entry_type_FromString(char* accounting_entry_type);



typedef struct accounting_entry_dto_t {
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
    accountingservice_accounting_entry_dto_ACCOUNTINGENTRYTYPE_e accounting_entry_type; //enum
    struct money_t *debit_amount; //model
    struct money_t *credit_amount; //model

} accounting_entry_dto_t;

accounting_entry_dto_t *accounting_entry_dto_create(
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
    accountingservice_accounting_entry_dto_ACCOUNTINGENTRYTYPE_e accounting_entry_type,
    money_t *debit_amount,
    money_t *credit_amount
);

void accounting_entry_dto_free(accounting_entry_dto_t *accounting_entry_dto);

accounting_entry_dto_t *accounting_entry_dto_parseFromJSON(cJSON *accounting_entry_dtoJSON);

cJSON *accounting_entry_dto_convertToJSON(accounting_entry_dto_t *accounting_entry_dto);

#endif /* _accounting_entry_dto_H_ */

