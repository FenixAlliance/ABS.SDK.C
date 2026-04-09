/*
 * item_category_update_dto.h
 *
 * 
 */

#ifndef _item_category_update_dto_H_
#define _item_category_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_category_update_dto_t item_category_update_dto_t;




typedef struct item_category_update_dto_t {
    char *title; // string
    char *description; // string
    char *image_url; // string
    int is_featured; //boolean
    int enable_for_courses; //boolean
    int enable_for_products; //boolean
    int enable_for_licenses; //boolean
    int enable_for_services; //boolean
    int enable_for_subscriptions; //boolean

} item_category_update_dto_t;

item_category_update_dto_t *item_category_update_dto_create(
    char *title,
    char *description,
    char *image_url,
    int is_featured,
    int enable_for_courses,
    int enable_for_products,
    int enable_for_licenses,
    int enable_for_services,
    int enable_for_subscriptions
);

void item_category_update_dto_free(item_category_update_dto_t *item_category_update_dto);

item_category_update_dto_t *item_category_update_dto_parseFromJSON(cJSON *item_category_update_dtoJSON);

cJSON *item_category_update_dto_convertToJSON(item_category_update_dto_t *item_category_update_dto);

#endif /* _item_category_update_dto_H_ */

