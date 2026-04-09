/*
 * item_price_update_dto.h
 *
 * 
 */

#ifndef _item_price_update_dto_H_
#define _item_price_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_price_update_dto_t item_price_update_dto_t;




typedef struct item_price_update_dto_t {
    double price; //numeric
    char *item_id; // string
    char *unit_id; // string
    double percent; //numeric
    char *unit_group_id; // string
    char *currency_id; // string
    char *discount_list_id; // string
    char *rounding_policy_id; // string

} item_price_update_dto_t;

item_price_update_dto_t *item_price_update_dto_create(
    double price,
    char *item_id,
    char *unit_id,
    double percent,
    char *unit_group_id,
    char *currency_id,
    char *discount_list_id,
    char *rounding_policy_id
);

void item_price_update_dto_free(item_price_update_dto_t *item_price_update_dto);

item_price_update_dto_t *item_price_update_dto_parseFromJSON(cJSON *item_price_update_dtoJSON);

cJSON *item_price_update_dto_convertToJSON(item_price_update_dto_t *item_price_update_dto);

#endif /* _item_price_update_dto_H_ */

