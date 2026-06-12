/*
 * item_tax_policy_record_dto.h
 *
 * 
 */

#ifndef _item_tax_policy_record_dto_H_
#define _item_tax_policy_record_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_tax_policy_record_dto_t item_tax_policy_record_dto_t;




typedef struct item_tax_policy_record_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *tenant_id; // string
    char *enrollment_id; // string
    char *tax_policy_id; // string
    char *item_price_id; // string
    char *item_id; // string

} item_tax_policy_record_dto_t;

item_tax_policy_record_dto_t *item_tax_policy_record_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *enrollment_id,
    char *tax_policy_id,
    char *item_price_id,
    char *item_id
);

void item_tax_policy_record_dto_free(item_tax_policy_record_dto_t *item_tax_policy_record_dto);

item_tax_policy_record_dto_t *item_tax_policy_record_dto_parseFromJSON(cJSON *item_tax_policy_record_dtoJSON);

cJSON *item_tax_policy_record_dto_convertToJSON(item_tax_policy_record_dto_t *item_tax_policy_record_dto);

#endif /* _item_tax_policy_record_dto_H_ */

