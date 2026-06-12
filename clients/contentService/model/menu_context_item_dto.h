/*
 * menu_context_item_dto.h
 *
 * 
 */

#ifndef _menu_context_item_dto_H_
#define _menu_context_item_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct menu_context_item_dto_t menu_context_item_dto_t;




typedef struct menu_context_item_dto_t {
    char *id; // string
    char *timestamp; //date time
    int order; //numeric
    char *name; // string
    char *text; // string
    char *url; // string
    char *icon; // string
    char *target; // string
    char *tooltip; // string
    char *parent_menu_context_item_id; // string
    char *menu_context_id; // string

} menu_context_item_dto_t;

menu_context_item_dto_t *menu_context_item_dto_create(
    char *id,
    char *timestamp,
    int order,
    char *name,
    char *text,
    char *url,
    char *icon,
    char *target,
    char *tooltip,
    char *parent_menu_context_item_id,
    char *menu_context_id
);

void menu_context_item_dto_free(menu_context_item_dto_t *menu_context_item_dto);

menu_context_item_dto_t *menu_context_item_dto_parseFromJSON(cJSON *menu_context_item_dtoJSON);

cJSON *menu_context_item_dto_convertToJSON(menu_context_item_dto_t *menu_context_item_dto);

#endif /* _menu_context_item_dto_H_ */

