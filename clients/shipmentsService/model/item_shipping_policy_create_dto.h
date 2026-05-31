/*
 * item_shipping_policy_create_dto.h
 *
 * 
 */

#ifndef _item_shipping_policy_create_dto_H_
#define _item_shipping_policy_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_shipping_policy_create_dto_t item_shipping_policy_create_dto_t;




typedef struct item_shipping_policy_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *description; // string
    char *type; // string
    char *code; // string
    int is_express_shipment_policy; //boolean
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
    char *shipping_courier_id; // string

} item_shipping_policy_create_dto_t;

item_shipping_policy_create_dto_t *item_shipping_policy_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *type,
    char *code,
    int is_express_shipment_policy,
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
    char *shipping_courier_id
);

void item_shipping_policy_create_dto_free(item_shipping_policy_create_dto_t *item_shipping_policy_create_dto);

item_shipping_policy_create_dto_t *item_shipping_policy_create_dto_parseFromJSON(cJSON *item_shipping_policy_create_dtoJSON);

cJSON *item_shipping_policy_create_dto_convertToJSON(item_shipping_policy_create_dto_t *item_shipping_policy_create_dto);

#endif /* _item_shipping_policy_create_dto_H_ */

