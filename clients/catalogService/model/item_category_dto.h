/*
 * item_category_dto.h
 *
 * 
 */

#ifndef _item_category_dto_H_
#define _item_category_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_category_dto_t item_category_dto_t;




typedef struct item_category_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *description; // string
    char *image_url; // string
    int is_featured; //boolean
    int enable_for_courses; //boolean
    int enable_for_products; //boolean
    int enable_for_licenses; //boolean
    int enable_for_services; //boolean
    int enable_for_subscriptions; //boolean
    char *business_id; // string
    char *business_profile_record_id; // string
    char *parent_item_category_id; // string

} item_category_dto_t;

item_category_dto_t *item_category_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *image_url,
    int is_featured,
    int enable_for_courses,
    int enable_for_products,
    int enable_for_licenses,
    int enable_for_services,
    int enable_for_subscriptions,
    char *business_id,
    char *business_profile_record_id,
    char *parent_item_category_id
);

void item_category_dto_free(item_category_dto_t *item_category_dto);

item_category_dto_t *item_category_dto_parseFromJSON(cJSON *item_category_dtoJSON);

cJSON *item_category_dto_convertToJSON(item_category_dto_t *item_category_dto);

#endif /* _item_category_dto_H_ */

