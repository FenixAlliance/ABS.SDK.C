/*
 * item_tag_update_dto.h
 *
 * 
 */

#ifndef _item_tag_update_dto_H_
#define _item_tag_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_tag_update_dto_t item_tag_update_dto_t;




typedef struct item_tag_update_dto_t {
    char *title; // string
    char *description; // string

} item_tag_update_dto_t;

item_tag_update_dto_t *item_tag_update_dto_create(
    char *title,
    char *description
);

void item_tag_update_dto_free(item_tag_update_dto_t *item_tag_update_dto);

item_tag_update_dto_t *item_tag_update_dto_parseFromJSON(cJSON *item_tag_update_dtoJSON);

cJSON *item_tag_update_dto_convertToJSON(item_tag_update_dto_t *item_tag_update_dto);

#endif /* _item_tag_update_dto_H_ */

