/*
 * invoice_line_applied_tax_dto.h
 *
 * 
 */

#ifndef _invoice_line_applied_tax_dto_H_
#define _invoice_line_applied_tax_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct invoice_line_applied_tax_dto_t invoice_line_applied_tax_dto_t;




typedef struct invoice_line_applied_tax_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *tenant_id; // string
    char *invoice_id; // string
    char *enrollment_id; // string
    char *invoice_line_id; // string
    char *tax_policy_id; // string
    char *item_price_id; // string
    char *item_id; // string
    double tax_amount_in_usd; //numeric
    double tax_base_amount_in_usd; //numeric
    char *tax_policy_name; // string
    char *tax_policy_description; // string

} invoice_line_applied_tax_dto_t;

invoice_line_applied_tax_dto_t *invoice_line_applied_tax_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *invoice_id,
    char *enrollment_id,
    char *invoice_line_id,
    char *tax_policy_id,
    char *item_price_id,
    char *item_id,
    double tax_amount_in_usd,
    double tax_base_amount_in_usd,
    char *tax_policy_name,
    char *tax_policy_description
);

void invoice_line_applied_tax_dto_free(invoice_line_applied_tax_dto_t *invoice_line_applied_tax_dto);

invoice_line_applied_tax_dto_t *invoice_line_applied_tax_dto_parseFromJSON(cJSON *invoice_line_applied_tax_dtoJSON);

cJSON *invoice_line_applied_tax_dto_convertToJSON(invoice_line_applied_tax_dto_t *invoice_line_applied_tax_dto);

#endif /* _invoice_line_applied_tax_dto_H_ */

