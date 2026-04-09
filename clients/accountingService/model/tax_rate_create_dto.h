/*
 * tax_rate_create_dto.h
 *
 * 
 */

#ifndef _tax_rate_create_dto_H_
#define _tax_rate_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct tax_rate_create_dto_t tax_rate_create_dto_t;




typedef struct tax_rate_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    double rate; //numeric
    double value; //numeric
    char *um; // string
    char *unit_id; // string
    char *unit_group_id; // string
    int priority; //numeric
    int compound; //boolean
    int shipping; //boolean
    int withholding; //boolean
    double single_transaction_threshold; //numeric
    double cumulative_transaction_threshold; //numeric
    char *fiscal_authority_id; // string
    char *fiscal_year_id; // string
    char *tenant_id; // string
    char *country_id; // string
    char *tax_class_id; // string
    char *currency_id; // string
    char *tax_policy_id; // string
    char *enrollment_id; // string

} tax_rate_create_dto_t;

tax_rate_create_dto_t *tax_rate_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    double rate,
    double value,
    char *um,
    char *unit_id,
    char *unit_group_id,
    int priority,
    int compound,
    int shipping,
    int withholding,
    double single_transaction_threshold,
    double cumulative_transaction_threshold,
    char *fiscal_authority_id,
    char *fiscal_year_id,
    char *tenant_id,
    char *country_id,
    char *tax_class_id,
    char *currency_id,
    char *tax_policy_id,
    char *enrollment_id
);

void tax_rate_create_dto_free(tax_rate_create_dto_t *tax_rate_create_dto);

tax_rate_create_dto_t *tax_rate_create_dto_parseFromJSON(cJSON *tax_rate_create_dtoJSON);

cJSON *tax_rate_create_dto_convertToJSON(tax_rate_create_dto_t *tax_rate_create_dto);

#endif /* _tax_rate_create_dto_H_ */

