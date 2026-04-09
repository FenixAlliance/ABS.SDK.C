/*
 * item_type_dto.h
 *
 * 
 */

#ifndef _item_type_dto_H_
#define _item_type_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_type_dto_t item_type_dto_t;




typedef struct item_type_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *plural_title; // string
    char *singular_title; // string
    char *description; // string
    char *image_url; // string
    char *google_category_taxonomy; // string
    char *business_id; // string
    char *item_category_id; // string
    char *item_google_category_id; // string

} item_type_dto_t;

item_type_dto_t *item_type_dto_create(
    char *id,
    char *timestamp,
    char *plural_title,
    char *singular_title,
    char *description,
    char *image_url,
    char *google_category_taxonomy,
    char *business_id,
    char *item_category_id,
    char *item_google_category_id
);

void item_type_dto_free(item_type_dto_t *item_type_dto);

item_type_dto_t *item_type_dto_parseFromJSON(cJSON *item_type_dtoJSON);

cJSON *item_type_dto_convertToJSON(item_type_dto_t *item_type_dto);

#endif /* _item_type_dto_H_ */

