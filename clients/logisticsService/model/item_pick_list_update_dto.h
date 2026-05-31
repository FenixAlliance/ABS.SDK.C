/*
 * item_pick_list_update_dto.h
 *
 * 
 */

#ifndef _item_pick_list_update_dto_H_
#define _item_pick_list_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_pick_list_update_dto_t item_pick_list_update_dto_t;




typedef struct item_pick_list_update_dto_t {
    char *name; // string
    char *description; // string
    char *order_id; // string

} item_pick_list_update_dto_t;

item_pick_list_update_dto_t *item_pick_list_update_dto_create(
    char *name,
    char *description,
    char *order_id
);

void item_pick_list_update_dto_free(item_pick_list_update_dto_t *item_pick_list_update_dto);

item_pick_list_update_dto_t *item_pick_list_update_dto_parseFromJSON(cJSON *item_pick_list_update_dtoJSON);

cJSON *item_pick_list_update_dto_convertToJSON(item_pick_list_update_dto_t *item_pick_list_update_dto);

#endif /* _item_pick_list_update_dto_H_ */

