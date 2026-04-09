/*
 * bank_account_dto.h
 *
 * 
 */

#ifndef _bank_account_dto_H_
#define _bank_account_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct bank_account_dto_t bank_account_dto_t;

#include "money.h"

// Enum ACCOUNTCATEGORY for bank_account_dto

typedef enum  { accountingservice_bank_account_dto_ACCOUNTCATEGORY_NULL = 0, accountingservice_bank_account_dto_ACCOUNTCATEGORY_Assets, accountingservice_bank_account_dto_ACCOUNTCATEGORY_Equity, accountingservice_bank_account_dto_ACCOUNTCATEGORY_Revenue, accountingservice_bank_account_dto_ACCOUNTCATEGORY_Expense, accountingservice_bank_account_dto_ACCOUNTCATEGORY_Liabilities } accountingservice_bank_account_dto_ACCOUNTCATEGORY_e;

char* bank_account_dto_account_category_ToString(accountingservice_bank_account_dto_ACCOUNTCATEGORY_e account_category);

accountingservice_bank_account_dto_ACCOUNTCATEGORY_e bank_account_dto_account_category_FromString(char* account_category);



typedef struct bank_account_dto_t {
    char *id; // string
    char *timestamp; //date time
    int group; //boolean
    int frozen; //boolean
    char *name; // string
    char *code; // string
    char *path; // string
    char *title; // string
    char *prefix; // string
    double balance; //numeric
    char *currency_id; // string
    char *account_type; // string
    char *account_type_id; // string
    double debits_balance; //numeric
    double credits_balance; //numeric
    char *parent_account_id; // string
    char *tenant_id; // string
    char *enrollment_id; // string
    int children_accounts_count; //numeric
    accountingservice_bank_account_dto_ACCOUNTCATEGORY_e account_category; //enum
    struct money_t *balance_amount; //model
    struct money_t *credits_balance_amount; //model
    struct money_t *debits_balance_amount; //model
    char *iban; // string
    char *swift; // string
    char *branch_code; // string
    char *bank_account_number; // string
    char *qualified_name; // string
    char *bank_id; // string
    char *bank_profile_id; // string

} bank_account_dto_t;

bank_account_dto_t *bank_account_dto_create(
    char *id,
    char *timestamp,
    int group,
    int frozen,
    char *name,
    char *code,
    char *path,
    char *title,
    char *prefix,
    double balance,
    char *currency_id,
    char *account_type,
    char *account_type_id,
    double debits_balance,
    double credits_balance,
    char *parent_account_id,
    char *tenant_id,
    char *enrollment_id,
    int children_accounts_count,
    accountingservice_bank_account_dto_ACCOUNTCATEGORY_e account_category,
    money_t *balance_amount,
    money_t *credits_balance_amount,
    money_t *debits_balance_amount,
    char *iban,
    char *swift,
    char *branch_code,
    char *bank_account_number,
    char *qualified_name,
    char *bank_id,
    char *bank_profile_id
);

void bank_account_dto_free(bank_account_dto_t *bank_account_dto);

bank_account_dto_t *bank_account_dto_parseFromJSON(cJSON *bank_account_dtoJSON);

cJSON *bank_account_dto_convertToJSON(bank_account_dto_t *bank_account_dto);

#endif /* _bank_account_dto_H_ */

