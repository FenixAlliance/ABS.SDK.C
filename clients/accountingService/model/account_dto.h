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

// Enum INCOMESTATEMENTSUBTYPE for account_dto

typedef enum  { accountingservice_account_dto_INCOMESTATEMENTSUBTYPE_NULL = 0, accountingservice_account_dto_INCOMESTATEMENTSUBTYPE_OperatingRevenue, accountingservice_account_dto_INCOMESTATEMENTSUBTYPE_Gain, accountingservice_account_dto_INCOMESTATEMENTSUBTYPE_OperatingExpense, accountingservice_account_dto_INCOMESTATEMENTSUBTYPE_Loss } accountingservice_account_dto_INCOMESTATEMENTSUBTYPE_e;

char* account_dto_income_statement_sub_type_ToString(accountingservice_account_dto_INCOMESTATEMENTSUBTYPE_e income_statement_sub_type);

accountingservice_account_dto_INCOMESTATEMENTSUBTYPE_e account_dto_income_statement_sub_type_FromString(char* income_statement_sub_type);

// Enum NORMALBALANCE for account_dto

typedef enum  { accountingservice_account_dto_NORMALBALANCE_NULL = 0, accountingservice_account_dto_NORMALBALANCE_Debit, accountingservice_account_dto_NORMALBALANCE_Credit } accountingservice_account_dto_NORMALBALANCE_e;

char* account_dto_normal_balance_ToString(accountingservice_account_dto_NORMALBALANCE_e normal_balance);

accountingservice_account_dto_NORMALBALANCE_e account_dto_normal_balance_FromString(char* normal_balance);



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
    char *contact_id; // string
    char *account_type; // string
    char *qualified_name; // string
    char *account_type_id; // string
    double debits_balance; //numeric
    double credits_balance; //numeric
    double balance_in_usd; //numeric
    double debits_balance_in_usd; //numeric
    double credits_balance_in_usd; //numeric
    double forex_rate; //numeric
    char *parent_account_id; // string
    char *tenant_id; // string
    char *enrollment_id; // string
    int children_accounts_count; //numeric
    accountingservice_account_dto_ACCOUNTCATEGORY_e account_category; //enum
    int is_contra; //boolean
    int is_monetary; //boolean
    accountingservice_account_dto_INCOMESTATEMENTSUBTYPE_e income_statement_sub_type; //enum
    accountingservice_account_dto_NORMALBALANCE_e normal_balance; //enum
    struct money_t *balance_amount; //model
    struct money_t *credits_balance_amount; //model
    struct money_t *debits_balance_amount; //model
    struct money_t *balance_amount_in_usd; //model
    struct money_t *debits_balance_amount_in_usd; //model
    struct money_t *credits_balance_amount_in_usd; //model

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
    char *contact_id,
    char *account_type,
    char *qualified_name,
    char *account_type_id,
    double debits_balance,
    double credits_balance,
    double balance_in_usd,
    double debits_balance_in_usd,
    double credits_balance_in_usd,
    double forex_rate,
    char *parent_account_id,
    char *tenant_id,
    char *enrollment_id,
    int children_accounts_count,
    accountingservice_account_dto_ACCOUNTCATEGORY_e account_category,
    int is_contra,
    int is_monetary,
    accountingservice_account_dto_INCOMESTATEMENTSUBTYPE_e income_statement_sub_type,
    accountingservice_account_dto_NORMALBALANCE_e normal_balance,
    money_t *balance_amount,
    money_t *credits_balance_amount,
    money_t *debits_balance_amount,
    money_t *balance_amount_in_usd,
    money_t *debits_balance_amount_in_usd,
    money_t *credits_balance_amount_in_usd
);

void account_dto_free(account_dto_t *account_dto);

account_dto_t *account_dto_parseFromJSON(cJSON *account_dtoJSON);

cJSON *account_dto_convertToJSON(account_dto_t *account_dto);

#endif /* _account_dto_H_ */

