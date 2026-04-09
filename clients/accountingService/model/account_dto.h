/*
 * account_dto.h
 *
 * 
 */

#ifndef _account_dto_H_
#define _account_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct account_dto_t account_dto_t;

#include "money.h"

// Enum ACCOUNTCATEGORY for account_dto

typedef enum  { accountingservice_account_dto_ACCOUNTCATEGORY_NULL = 0, accountingservice_account_dto_ACCOUNTCATEGORY_Assets, accountingservice_account_dto_ACCOUNTCATEGORY_Equity, accountingservice_account_dto_ACCOUNTCATEGORY_Revenue, accountingservice_account_dto_ACCOUNTCATEGORY_Expense, accountingservice_account_dto_ACCOUNTCATEGORY_Liabilities } accountingservice_account_dto_ACCOUNTCATEGORY_e;

char* account_dto_account_category_ToString(accountingservice_account_dto_ACCOUNTCATEGORY_e account_category);

accountingservice_account_dto_ACCOUNTCATEGORY_e account_dto_account_category_FromString(char* account_category);



typedef struct account_dto_t {
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
    char *qualified_name; // string
    char *account_type_id; // string
    double debits_balance; //numeric
    double credits_balance; //numeric
    char *parent_account_id; // string
    char *tenant_id; // string
    char *enrollment_id; // string
    int children_accounts_count; //numeric
    accountingservice_account_dto_ACCOUNTCATEGORY_e account_category; //enum
    struct money_t *balance_amount; //model
    struct money_t *credits_balance_amount; //model
    struct money_t *debits_balance_amount; //model

} account_dto_t;

account_dto_t *account_dto_create(
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
    char *qualified_name,
    char *account_type_id,
    double debits_balance,
    double credits_balance,
    char *parent_account_id,
    char *tenant_id,
    char *enrollment_id,
    int children_accounts_count,
    accountingservice_account_dto_ACCOUNTCATEGORY_e account_category,
    money_t *balance_amount,
    money_t *credits_balance_amount,
    money_t *debits_balance_amount
);

void account_dto_free(account_dto_t *account_dto);

account_dto_t *account_dto_parseFromJSON(cJSON *account_dtoJSON);

cJSON *account_dto_convertToJSON(account_dto_t *account_dto);

#endif /* _account_dto_H_ */

