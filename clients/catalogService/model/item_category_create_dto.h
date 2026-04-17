/*
 * item_category_create_dto.h
 *
 * 
 */

#ifndef _item_category_create_dto_H_
#define _item_category_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_category_create_dto_t item_category_create_dto_t;




typedef struct item_category_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *description; // string
    char *image_url; // string
    char *parent_item_category_id; // string

} item_category_create_dto_t;

item_category_create_dto_t *item_category_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *image_url,
    char *parent_item_category_id
);

void item_category_create_dto_free(item_category_create_dto_t *item_category_create_dto);

item_category_create_dto_t *item_category_create_dto_parseFromJSON(cJSON *item_category_create_dtoJSON);

cJSON *item_category_create_dto_convertToJSON(item_category_create_dto_t *item_category_create_dto);

#endif /* _item_category_create_dto_H_ */

