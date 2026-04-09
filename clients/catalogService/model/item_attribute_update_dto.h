/*
 * item_attribute_update_dto.h
 *
 * 
 */

#ifndef _item_attribute_update_dto_H_
#define _item_attribute_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_attribute_update_dto_t item_attribute_update_dto_t;




typedef struct item_attribute_update_dto_t {
    char *name; // string
    char *description; // string

} item_attribute_update_dto_t;

item_attribute_update_dto_t *item_attribute_update_dto_create(
    char *name,
    char *description
);

void item_attribute_update_dto_free(item_attribute_update_dto_t *item_attribute_update_dto);

item_attribute_update_dto_t *item_attribute_update_dto_parseFromJSON(cJSON *item_attribute_update_dtoJSON);

cJSON *item_attribute_update_dto_convertToJSON(item_attribute_update_dto_t *item_attribute_update_dto);

#endif /* _item_attribute_update_dto_H_ */

