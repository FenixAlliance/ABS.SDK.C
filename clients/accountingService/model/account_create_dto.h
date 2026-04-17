/*
 * account_create_dto.h
 *
 * 
 */

#ifndef _account_create_dto_H_
#define _account_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct account_create_dto_t account_create_dto_t;


// Enum ACCOUNTCATEGORY for account_create_dto

typedef enum  { accountingservice_account_create_dto_ACCOUNTCATEGORY_NULL = 0, accountingservice_account_create_dto_ACCOUNTCATEGORY_Assets, accountingservice_account_create_dto_ACCOUNTCATEGORY_Equity, accountingservice_account_create_dto_ACCOUNTCATEGORY_Revenue, accountingservice_account_create_dto_ACCOUNTCATEGORY_Expense, accountingservice_account_create_dto_ACCOUNTCATEGORY_Liabilities } accountingservice_account_create_dto_ACCOUNTCATEGORY_e;

char* account_create_dto_account_category_ToString(accountingservice_account_create_dto_ACCOUNTCATEGORY_e account_category);

accountingservice_account_create_dto_ACCOUNTCATEGORY_e account_create_dto_account_category_FromString(char* account_category);



typedef struct account_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    int group; //boolean
    int frozen; //boolean
    char *name; // string
    char *code; // string
    char *path; // string
    char *prefix; // string
    char *currency_id; // string
    char *account_type_id; // string
    char *parent_account_id; // string
    accountingservice_account_create_dto_ACCOUNTCATEGORY_e account_category; //enum

} account_create_dto_t;

account_create_dto_t *account_create_dto_create(
    char *id,
    char *timestamp,
    int group,
    int frozen,
    char *name,
    char *code,
    char *path,
    char *prefix,
    char *currency_id,
    char *account_type_id,
    char *parent_account_id,
    accountingservice_account_create_dto_ACCOUNTCATEGORY_e account_category
);

void account_create_dto_free(account_create_dto_t *account_create_dto);

account_create_dto_t *account_create_dto_parseFromJSON(cJSON *account_create_dtoJSON);

cJSON *account_create_dto_convertToJSON(account_create_dto_t *account_create_dto);

#endif /* _account_create_dto_H_ */

