/*
 * menu_context_update_dto.h
 *
 * 
 */

#ifndef _menu_context_update_dto_H_
#define _menu_context_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct menu_context_update_dto_t menu_context_update_dto_t;




typedef struct menu_context_update_dto_t {
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

} menu_context_update_dto_t;

menu_context_update_dto_t *menu_context_update_dto_create(
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
    char *web_portal_id
);

void menu_context_update_dto_free(menu_context_update_dto_t *menu_context_update_dto);

menu_context_update_dto_t *menu_context_update_dto_parseFromJSON(cJSON *menu_context_update_dtoJSON);

cJSON *menu_context_update_dto_convertToJSON(menu_context_update_dto_t *menu_context_update_dto);

#endif /* _menu_context_update_dto_H_ */

