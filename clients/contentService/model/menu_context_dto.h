/*
 * menu_context_dto.h
 *
 * 
 */

#ifndef _menu_context_dto_H_
#define _menu_context_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct menu_context_dto_t menu_context_dto_t;

#include "menu_context_item_dto.h"



typedef struct menu_context_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *category; // string
    char *component; // string
    int enable; //boolean
    int studio_menu; //boolean
    char *custom_css; // string
    char *custom_js; // string
    char *custom_html; // string
    char *logged_in_only; // string
    char *background_image; // string
    char *web_portal_id; // string
    char *tenant_id; // string
    list_t *items; //nonprimitive container

} menu_context_dto_t;

menu_context_dto_t *menu_context_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *category,
    char *component,
    int enable,
    int studio_menu,
    char *custom_css,
    char *custom_js,
    char *custom_html,
    char *logged_in_only,
    char *background_image,
    char *web_portal_id,
    char *tenant_id,
    list_t *items
);

void menu_context_dto_free(menu_context_dto_t *menu_context_dto);

menu_context_dto_t *menu_context_dto_parseFromJSON(cJSON *menu_context_dtoJSON);

cJSON *menu_context_dto_convertToJSON(menu_context_dto_t *menu_context_dto);

#endif /* _menu_context_dto_H_ */

