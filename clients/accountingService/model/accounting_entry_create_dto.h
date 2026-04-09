/*
 * accounting_entry_create_dto.h
 *
 * 
 */

#ifndef _accounting_entry_create_dto_H_
#define _accounting_entry_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct accounting_entry_create_dto_t accounting_entry_create_dto_t;


// Enum ACCOUNTINGENTRYTYPE for accounting_entry_create_dto

typedef enum  { accountingservice_accounting_entry_create_dto_ACCOUNTINGENTRYTYPE_NULL = 0, accountingservice_accounting_entry_create_dto_ACCOUNTINGENTRYTYPE_None, accountingservice_accounting_entry_create_dto_ACCOUNTINGENTRYTYPE_Debit, accountingservice_accounting_entry_create_dto_ACCOUNTINGENTRYTYPE_Credit } accountingservice_accounting_entry_create_dto_ACCOUNTINGENTRYTYPE_e;

char* accounting_entry_create_dto_accounting_entry_type_ToString(accountingservice_accounting_entry_create_dto_ACCOUNTINGENTRYTYPE_e accounting_entry_type);

accountingservice_accounting_entry_create_dto_ACCOUNTINGENTRYTYPE_e accounting_entry_create_dto_accounting_entry_type_FromString(char* accounting_entry_type);



typedef struct accounting_entry_create_dto_t {
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
    accountingservice_accounting_entry_create_dto_ACCOUNTINGENTRYTYPE_e accounting_entry_type; //enum

} accounting_entry_create_dto_t;

accounting_entry_create_dto_t *accounting_entry_create_dto_create(
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
    accountingservice_accounting_entry_create_dto_ACCOUNTINGENTRYTYPE_e accounting_entry_type
);

void accounting_entry_create_dto_free(accounting_entry_create_dto_t *accounting_entry_create_dto);

accounting_entry_create_dto_t *accounting_entry_create_dto_parseFromJSON(cJSON *accounting_entry_create_dtoJSON);

cJSON *accounting_entry_create_dto_convertToJSON(accounting_entry_create_dto_t *accounting_entry_create_dto);

#endif /* _accounting_entry_create_dto_H_ */

