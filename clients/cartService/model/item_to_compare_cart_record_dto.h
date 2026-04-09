/*
 * item_to_compare_cart_record_dto.h
 *
 * 
 */

#ifndef _item_to_compare_cart_record_dto_H_
#define _item_to_compare_cart_record_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_to_compare_cart_record_dto_t item_to_compare_cart_record_dto_t;




typedef struct item_to_compare_cart_record_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *cart_id; // string
    char *item_id; // string
    char *item_title; // string
    char *item_short_description; // string
    char *item_primary_image_url; // string
    char *brand_id; // string
    char *brand_name; // string
    char *category_name; // string
    char *category_id; // string
    char *google_category_id; // string
    char *google_category_name; // string
    double total_taxes_in_usd; //numeric
    double total_price_in_usd; //numeric
    char *shipping_country_id; // string
    char *tenant_id; // string

} item_to_compare_cart_record_dto_t;

item_to_compare_cart_record_dto_t *item_to_compare_cart_record_dto_create(
    char *id,
    char *timestamp,
    char *cart_id,
    char *item_id,
    char *item_title,
    char *item_short_description,
    char *item_primary_image_url,
    char *brand_id,
    char *brand_name,
    char *category_name,
    char *category_id,
    char *google_category_id,
    char *google_category_name,
    double total_taxes_in_usd,
    double total_price_in_usd,
    char *shipping_country_id,
    char *tenant_id
);

void item_to_compare_cart_record_dto_free(item_to_compare_cart_record_dto_t *item_to_compare_cart_record_dto);

item_to_compare_cart_record_dto_t *item_to_compare_cart_record_dto_parseFromJSON(cJSON *item_to_compare_cart_record_dtoJSON);

cJSON *item_to_compare_cart_record_dto_convertToJSON(item_to_compare_cart_record_dto_t *item_to_compare_cart_record_dto);

#endif /* _item_to_compare_cart_record_dto_H_ */

