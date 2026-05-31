/*
 * item_pick_list_dto.h
 *
 * 
 */

#ifndef _item_pick_list_dto_H_
#define _item_pick_list_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_pick_list_dto_t item_pick_list_dto_t;




typedef struct item_pick_list_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *description; // string
    char *order_id; // string
    char *tenant_id; // string

} item_pick_list_dto_t;

item_pick_list_dto_t *item_pick_list_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *order_id,
    char *tenant_id
);

void item_pick_list_dto_free(item_pick_list_dto_t *item_pick_list_dto);

item_pick_list_dto_t *item_pick_list_dto_parseFromJSON(cJSON *item_pick_list_dtoJSON);

cJSON *item_pick_list_dto_convertToJSON(item_pick_list_dto_t *item_pick_list_dto);

#endif /* _item_pick_list_dto_H_ */

