/*
 * tax_policy_create_dto.h
 *
 * 
 */

#ifndef _tax_policy_create_dto_H_
#define _tax_policy_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct tax_policy_create_dto_t tax_policy_create_dto_t;




typedef struct tax_policy_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *code; // string
    char *title; // string
    char *description; // string
    int is_free; //boolean
    int reduce; //boolean
    int is_enabled; //boolean
    int is_default; //boolean
    int allow_international; //boolean
    int hours; //numeric
    int days; //numeric
    int weeks; //numeric
    int months; //numeric
    int years; //numeric
    double value; //numeric
    double percentage; //numeric
    char *currency_id; // string
    char *country_id; // string
    char *country_state_id; // string
    char *custom_state; // string
    char *custom_city; // string
    char *city_id; // string
    char *enrollment_id; // string
    char *tenant_id; // string
    int zero; //boolean
    int reduced; //boolean
    int withholding; //boolean
    char *fiscal_authority_id; // string

} tax_policy_create_dto_t;

tax_policy_create_dto_t *tax_policy_create_dto_create(
    char *id,
    char *timestamp,
    char *code,
    char *title,
    char *description,
    int is_free,
    int reduce,
    int is_enabled,
    int is_default,
    int allow_international,
    int hours,
    int days,
    int weeks,
    int months,
    int years,
    double value,
    double percentage,
    char *currency_id,
    char *country_id,
    char *country_state_id,
    char *custom_state,
    char *custom_city,
    char *city_id,
    char *enrollment_id,
    char *tenant_id,
    int zero,
    int reduced,
    int withholding,
    char *fiscal_authority_id
);

void tax_policy_create_dto_free(tax_policy_create_dto_t *tax_policy_create_dto);

tax_policy_create_dto_t *tax_policy_create_dto_parseFromJSON(cJSON *tax_policy_create_dtoJSON);

cJSON *tax_policy_create_dto_convertToJSON(tax_policy_create_dto_t *tax_policy_create_dto);

#endif /* _tax_policy_create_dto_H_ */

