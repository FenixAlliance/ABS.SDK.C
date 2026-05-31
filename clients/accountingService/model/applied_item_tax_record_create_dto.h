/*
 * applied_item_tax_record_create_dto.h
 *
 * 
 */

#ifndef _applied_item_tax_record_create_dto_H_
#define _applied_item_tax_record_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct applied_item_tax_record_create_dto_t applied_item_tax_record_create_dto_t;




typedef struct applied_item_tax_record_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *tax_policy_id; // string
    char *invoice_id; // string
    char *item_id; // string
    double tax_amount_in_usd; //numeric
    double tax_base_amount_in_usd; //numeric
    char *billing_item_record_id; // string

} applied_item_tax_record_create_dto_t;

applied_item_tax_record_create_dto_t *applied_item_tax_record_create_dto_create(
    char *id,
    char *timestamp,
    char *tax_policy_id,
    char *invoice_id,
    char *item_id,
    double tax_amount_in_usd,
    double tax_base_amount_in_usd,
    char *billing_item_record_id
);

void applied_item_tax_record_create_dto_free(applied_item_tax_record_create_dto_t *applied_item_tax_record_create_dto);

applied_item_tax_record_create_dto_t *applied_item_tax_record_create_dto_parseFromJSON(cJSON *applied_item_tax_record_create_dtoJSON);

cJSON *applied_item_tax_record_create_dto_convertToJSON(applied_item_tax_record_create_dto_t *applied_item_tax_record_create_dto);

#endif /* _applied_item_tax_record_create_dto_H_ */

