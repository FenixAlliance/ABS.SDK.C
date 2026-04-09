/*
 * item_price_dto.h
 *
 * 
 */

#ifndef _item_price_dto_H_
#define _item_price_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_price_dto_t item_price_dto_t;




typedef struct item_price_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *item_id; // string
    char *unit_id; // string
    char *currency_id; // string
    char *discount_id; // string
    char *unit_group_id; // string
    char *price_list_id; // string
    char *discount_list_id; // string
    char *rounding_policy_id; // string
    char *enrollment_id; // string
    char *tenant_id; // string
    double price; //numeric
    double percent; //numeric

} item_price_dto_t;

item_price_dto_t *item_price_dto_create(
    char *id,
    char *timestamp,
    char *item_id,
    char *unit_id,
    char *currency_id,
    char *discount_id,
    char *unit_group_id,
    char *price_list_id,
    char *discount_list_id,
    char *rounding_policy_id,
    char *enrollment_id,
    char *tenant_id,
    double price,
    double percent
);

void item_price_dto_free(item_price_dto_t *item_price_dto);

item_price_dto_t *item_price_dto_parseFromJSON(cJSON *item_price_dtoJSON);

cJSON *item_price_dto_convertToJSON(item_price_dto_t *item_price_dto);

#endif /* _item_price_dto_H_ */

