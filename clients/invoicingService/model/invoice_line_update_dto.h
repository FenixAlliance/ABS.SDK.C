/*
 * invoice_line_update_dto.h
 *
 * 
 */

#ifndef _invoice_line_update_dto_H_
#define _invoice_line_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct invoice_line_update_dto_t invoice_line_update_dto_t;




typedef struct invoice_line_update_dto_t {
    double price; //numeric
    char *unit_id; // string
    double percent; //numeric
    char *unit_group_id; // string
    char *currency_id; // string
    char *discount_list_id; // string
    char *rounding_policy_id; // string
    int quantity; //numeric
    char *item_id; // string
    char *item_price_id; // string
    char *invoice_line_id; // string
    double tax_amount_in_usd; //numeric
    double tax_base_amount_in_usd; //numeric

} invoice_line_update_dto_t;

invoice_line_update_dto_t *invoice_line_update_dto_create(
    double price,
    char *unit_id,
    double percent,
    char *unit_group_id,
    char *currency_id,
    char *discount_list_id,
    char *rounding_policy_id,
    int quantity,
    char *item_id,
    char *item_price_id,
    char *invoice_line_id,
    double tax_amount_in_usd,
    double tax_base_amount_in_usd
);

void invoice_line_update_dto_free(invoice_line_update_dto_t *invoice_line_update_dto);

invoice_line_update_dto_t *invoice_line_update_dto_parseFromJSON(cJSON *invoice_line_update_dtoJSON);

cJSON *invoice_line_update_dto_convertToJSON(invoice_line_update_dto_t *invoice_line_update_dto);

#endif /* _invoice_line_update_dto_H_ */

