/*
 * bank_account_create_dto.h
 *
 * 
 */

#ifndef _bank_account_create_dto_H_
#define _bank_account_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct bank_account_create_dto_t bank_account_create_dto_t;


// Enum ACCOUNTCATEGORY for bank_account_create_dto

typedef enum  { accountingservice_bank_account_create_dto_ACCOUNTCATEGORY_NULL = 0, accountingservice_bank_account_create_dto_ACCOUNTCATEGORY_Assets, accountingservice_bank_account_create_dto_ACCOUNTCATEGORY_Equity, accountingservice_bank_account_create_dto_ACCOUNTCATEGORY_Revenue, accountingservice_bank_account_create_dto_ACCOUNTCATEGORY_Expense, accountingservice_bank_account_create_dto_ACCOUNTCATEGORY_Liabilities } accountingservice_bank_account_create_dto_ACCOUNTCATEGORY_e;

char* bank_account_create_dto_account_category_ToString(accountingservice_bank_account_create_dto_ACCOUNTCATEGORY_e account_category);

accountingservice_bank_account_create_dto_ACCOUNTCATEGORY_e bank_account_create_dto_account_category_FromString(char* account_category);



typedef struct bank_account_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    int group; //boolean
    int frozen; //boolean
    char *name; // string
    char *code; // string
    char *path; // string
    char *prefix; // string
    char *tenant_id; // string
    char *currency_id; // string
    char *enrollment_id; // string
    char *account_type_id; // string
    char *parent_account_id; // string
    accountingservice_bank_account_create_dto_ACCOUNTCATEGORY_e account_category; //enum
    char *iban; // string
    char *swift; // string
    char *branch_code; // string
    char *bank_account_number; // string
    char *qualified_name; // string
    char *bank_id; // string
    char *bank_profile_id; // string

} bank_account_create_dto_t;

bank_account_create_dto_t *bank_account_create_dto_create(
    char *id,
    char *timestamp,
    int group,
    int frozen,
    char *name,
    char *code,
    char *path,
    char *prefix,
    char *tenant_id,
    char *currency_id,
    char *enrollment_id,
    char *account_type_id,
    char *parent_account_id,
    accountingservice_bank_account_create_dto_ACCOUNTCATEGORY_e account_category,
    char *iban,
    char *swift,
    char *branch_code,
    char *bank_account_number,
    char *qualified_name,
    char *bank_id,
    char *bank_profile_id
);

void bank_account_create_dto_free(bank_account_create_dto_t *bank_account_create_dto);

bank_account_create_dto_t *bank_account_create_dto_parseFromJSON(cJSON *bank_account_create_dtoJSON);

cJSON *bank_account_create_dto_convertToJSON(bank_account_create_dto_t *bank_account_create_dto);

#endif /* _bank_account_create_dto_H_ */

