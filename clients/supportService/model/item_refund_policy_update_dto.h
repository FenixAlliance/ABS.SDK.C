/*
 * item_refund_policy_update_dto.h
 *
 * 
 */

#ifndef _item_refund_policy_update_dto_H_
#define _item_refund_policy_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_refund_policy_update_dto_t item_refund_policy_update_dto_t;




typedef struct item_refund_policy_update_dto_t {
    char *title; // string
    char *description; // string
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

} item_refund_policy_update_dto_t;

item_refund_policy_update_dto_t *item_refund_policy_update_dto_create(
    char *title,
    char *description,
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
    char *city_id
);

void item_refund_policy_update_dto_free(item_refund_policy_update_dto_t *item_refund_policy_update_dto);

item_refund_policy_update_dto_t *item_refund_policy_update_dto_parseFromJSON(cJSON *item_refund_policy_update_dtoJSON);

cJSON *item_refund_policy_update_dto_convertToJSON(item_refund_policy_update_dto_t *item_refund_policy_update_dto);

#endif /* _item_refund_policy_update_dto_H_ */

