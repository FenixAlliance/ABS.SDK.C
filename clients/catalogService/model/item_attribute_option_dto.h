/*
 * item_attribute_option_dto.h
 *
 * 
 */

#ifndef _item_attribute_option_dto_H_
#define _item_attribute_option_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_attribute_option_dto_t item_attribute_option_dto_t;




typedef struct item_attribute_option_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *description; // string
    char *business_id; // string

} item_attribute_option_dto_t;

item_attribute_option_dto_t *item_attribute_option_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *business_id
);

void item_attribute_option_dto_free(item_attribute_option_dto_t *item_attribute_option_dto);

item_attribute_option_dto_t *item_attribute_option_dto_parseFromJSON(cJSON *item_attribute_option_dtoJSON);

cJSON *item_attribute_option_dto_convertToJSON(item_attribute_option_dto_t *item_attribute_option_dto);

#endif /* _item_attribute_option_dto_H_ */

