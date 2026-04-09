/*
 * item_type_update_dto.h
 *
 * 
 */

#ifndef _item_type_update_dto_H_
#define _item_type_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_type_update_dto_t item_type_update_dto_t;




typedef struct item_type_update_dto_t {
    char *plural_title; // string
    char *singular_title; // string
    char *description; // string
    char *image_url; // string
    char *google_category_taxonomy; // string

} item_type_update_dto_t;

item_type_update_dto_t *item_type_update_dto_create(
    char *plural_title,
    char *singular_title,
    char *description,
    char *image_url,
    char *google_category_taxonomy
);

void item_type_update_dto_free(item_type_update_dto_t *item_type_update_dto);

item_type_update_dto_t *item_type_update_dto_parseFromJSON(cJSON *item_type_update_dtoJSON);

cJSON *item_type_update_dto_convertToJSON(item_type_update_dto_t *item_type_update_dto);

#endif /* _item_type_update_dto_H_ */

