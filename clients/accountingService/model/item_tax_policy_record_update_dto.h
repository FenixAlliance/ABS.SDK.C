/*
 * item_tax_policy_record_update_dto.h
 *
 * 
 */

#ifndef _item_tax_policy_record_update_dto_H_
#define _item_tax_policy_record_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_tax_policy_record_update_dto_t item_tax_policy_record_update_dto_t;




typedef struct item_tax_policy_record_update_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *tax_policy_id; // string
    char *item_price_id; // string
    char *item_id; // string

} item_tax_policy_record_update_dto_t;

item_tax_policy_record_update_dto_t *item_tax_policy_record_update_dto_create(
    char *id,
    char *timestamp,
    char *tax_policy_id,
    char *item_price_id,
    char *item_id
);

void item_tax_policy_record_update_dto_free(item_tax_policy_record_update_dto_t *item_tax_policy_record_update_dto);

item_tax_policy_record_update_dto_t *item_tax_policy_record_update_dto_parseFromJSON(cJSON *item_tax_policy_record_update_dtoJSON);

cJSON *item_tax_policy_record_update_dto_convertToJSON(item_tax_policy_record_update_dto_t *item_tax_policy_record_update_dto);

#endif /* _item_tax_policy_record_update_dto_H_ */

