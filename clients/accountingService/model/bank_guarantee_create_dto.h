/*
 * bank_guarantee_create_dto.h
 *
 * 
 */

#ifndef _bank_guarantee_create_dto_H_
#define _bank_guarantee_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct bank_guarantee_create_dto_t bank_guarantee_create_dto_t;


// Enum BANKGUARANTEETYPE for bank_guarantee_create_dto

typedef enum  { accountingservice_bank_guarantee_create_dto_BANKGUARANTEETYPE_NULL = 0, accountingservice_bank_guarantee_create_dto_BANKGUARANTEETYPE_Receiving, accountingservice_bank_guarantee_create_dto_BANKGUARANTEETYPE_Providing } accountingservice_bank_guarantee_create_dto_BANKGUARANTEETYPE_e;

char* bank_guarantee_create_dto_bank_guarantee_type_ToString(accountingservice_bank_guarantee_create_dto_BANKGUARANTEETYPE_e bank_guarantee_type);

accountingservice_bank_guarantee_create_dto_BANKGUARANTEETYPE_e bank_guarantee_create_dto_bank_guarantee_type_FromString(char* bank_guarantee_type);



typedef struct bank_guarantee_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    double margin; //numeric
    double charges; //numeric
    char *beneficiary_name; // string
    char *guarantee_number; // string
    char *guarantee_conditions; // string
    double fixed_deposit_number; //numeric
    char *start_date; //date time
    char *end_date; //date time
    int validity_in_days; //numeric
    char *tenant_id; // string
    accountingservice_bank_guarantee_create_dto_BANKGUARANTEETYPE_e bank_guarantee_type; //enum
    char *enrollment_id; // string
    char *contact_id; // string
    char *project_id; // string
    char *order_id; // string
    char *bank_profile_id; // string
    char *bank_account_id; // string
    char *currency_id; // string

} bank_guarantee_create_dto_t;

bank_guarantee_create_dto_t *bank_guarantee_create_dto_create(
    char *id,
    char *timestamp,
    double margin,
    double charges,
    char *beneficiary_name,
    char *guarantee_number,
    char *guarantee_conditions,
    double fixed_deposit_number,
    char *start_date,
    char *end_date,
    int validity_in_days,
    char *tenant_id,
    accountingservice_bank_guarantee_create_dto_BANKGUARANTEETYPE_e bank_guarantee_type,
    char *enrollment_id,
    char *contact_id,
    char *project_id,
    char *order_id,
    char *bank_profile_id,
    char *bank_account_id,
    char *currency_id
);

void bank_guarantee_create_dto_free(bank_guarantee_create_dto_t *bank_guarantee_create_dto);

bank_guarantee_create_dto_t *bank_guarantee_create_dto_parseFromJSON(cJSON *bank_guarantee_create_dtoJSON);

cJSON *bank_guarantee_create_dto_convertToJSON(bank_guarantee_create_dto_t *bank_guarantee_create_dto);

#endif /* _bank_guarantee_create_dto_H_ */

