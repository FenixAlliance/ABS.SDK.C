/*
 * applied_item_tax_record_update_dto.h
 *
 * 
 */

#ifndef _applied_item_tax_record_update_dto_H_
#define _applied_item_tax_record_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct applied_item_tax_record_update_dto_t applied_item_tax_record_update_dto_t;




typedef struct applied_item_tax_record_update_dto_t {
    char *tax_policy_id; // string
    char *invoice_id; // string
    char *item_id; // string
    double tax_amount_in_usd; //numeric
    double tax_base_amount_in_usd; //numeric
    char *billing_item_record_id; // string

} applied_item_tax_record_update_dto_t;

applied_item_tax_record_update_dto_t *applied_item_tax_record_update_dto_create(
    char *tax_policy_id,
    char *invoice_id,
    char *item_id,
    double tax_amount_in_usd,
    double tax_base_amount_in_usd,
    char *billing_item_record_id
);

void applied_item_tax_record_update_dto_free(applied_item_tax_record_update_dto_t *applied_item_tax_record_update_dto);

applied_item_tax_record_update_dto_t *applied_item_tax_record_update_dto_parseFromJSON(cJSON *applied_item_tax_record_update_dtoJSON);

cJSON *applied_item_tax_record_update_dto_convertToJSON(applied_item_tax_record_update_dto_t *applied_item_tax_record_update_dto);

#endif /* _applied_item_tax_record_update_dto_H_ */

