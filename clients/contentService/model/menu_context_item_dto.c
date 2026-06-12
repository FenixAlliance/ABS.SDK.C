#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "menu_context_item_dto.h"



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
    ) {
    menu_context_item_dto_t *menu_context_item_dto_local_var = malloc(sizeof(menu_context_item_dto_t));
    if (!menu_context_item_dto_local_var) {
        return NULL;
    }
    menu_context_item_dto_local_var->id = id;
    menu_context_item_dto_local_var->timestamp = timestamp;
    menu_context_item_dto_local_var->order = order;
    menu_context_item_dto_local_var->name = name;
    menu_context_item_dto_local_var->text = text;
    menu_context_item_dto_local_var->url = url;
    menu_context_item_dto_local_var->icon = icon;
    menu_context_item_dto_local_var->target = target;
    menu_context_item_dto_local_var->tooltip = tooltip;
    menu_context_item_dto_local_var->parent_menu_context_item_id = parent_menu_context_item_id;
    menu_context_item_dto_local_var->menu_context_id = menu_context_id;

    return menu_context_item_dto_local_var;
}


void menu_context_item_dto_free(menu_context_item_dto_t *menu_context_item_dto) {
    if(NULL == menu_context_item_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (menu_context_item_dto->id) {
        free(menu_context_item_dto->id);
        menu_context_item_dto->id = NULL;
    }
    if (menu_context_item_dto->timestamp) {
        free(menu_context_item_dto->timestamp);
        menu_context_item_dto->timestamp = NULL;
    }
    if (menu_context_item_dto->name) {
        free(menu_context_item_dto->name);
        menu_context_item_dto->name = NULL;
    }
    if (menu_context_item_dto->text) {
        free(menu_context_item_dto->text);
        menu_context_item_dto->text = NULL;
    }
    if (menu_context_item_dto->url) {
        free(menu_context_item_dto->url);
        menu_context_item_dto->url = NULL;
    }
    if (menu_context_item_dto->icon) {
        free(menu_context_item_dto->icon);
        menu_context_item_dto->icon = NULL;
    }
    if (menu_context_item_dto->target) {
        free(menu_context_item_dto->target);
        menu_context_item_dto->target = NULL;
    }
    if (menu_context_item_dto->tooltip) {
        free(menu_context_item_dto->tooltip);
        menu_context_item_dto->tooltip = NULL;
    }
    if (menu_context_item_dto->parent_menu_context_item_id) {
        free(menu_context_item_dto->parent_menu_context_item_id);
        menu_context_item_dto->parent_menu_context_item_id = NULL;
    }
    if (menu_context_item_dto->menu_context_id) {
        free(menu_context_item_dto->menu_context_id);
        menu_context_item_dto->menu_context_id = NULL;
    }
    free(menu_context_item_dto);
}

cJSON *menu_context_item_dto_convertToJSON(menu_context_item_dto_t *menu_context_item_dto) {
    cJSON *item = cJSON_CreateObject();

    // menu_context_item_dto->id
    if(menu_context_item_dto->id) {
    if(cJSON_AddStringToObject(item, "id", menu_context_item_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // menu_context_item_dto->timestamp
    if(menu_context_item_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", menu_context_item_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // menu_context_item_dto->order
    if(menu_context_item_dto->order) {
    if(cJSON_AddNumberToObject(item, "order", menu_context_item_dto->order) == NULL) {
    goto fail; //Numeric
    }
    }


    // menu_context_item_dto->name
    if(menu_context_item_dto->name) {
    if(cJSON_AddStringToObject(item, "name", menu_context_item_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // menu_context_item_dto->text
    if(menu_context_item_dto->text) {
    if(cJSON_AddStringToObject(item, "text", menu_context_item_dto->text) == NULL) {
    goto fail; //String
    }
    }


    // menu_context_item_dto->url
    if(menu_context_item_dto->url) {
    if(cJSON_AddStringToObject(item, "url", menu_context_item_dto->url) == NULL) {
    goto fail; //String
    }
    }


    // menu_context_item_dto->icon
    if(menu_context_item_dto->icon) {
    if(cJSON_AddStringToObject(item, "icon", menu_context_item_dto->icon) == NULL) {
    goto fail; //String
    }
    }


    // menu_context_item_dto->target
    if(menu_context_item_dto->target) {
    if(cJSON_AddStringToObject(item, "target", menu_context_item_dto->target) == NULL) {
    goto fail; //String
    }
    }


    // menu_context_item_dto->tooltip
    if(menu_context_item_dto->tooltip) {
    if(cJSON_AddStringToObject(item, "tooltip", menu_context_item_dto->tooltip) == NULL) {
    goto fail; //String
    }
    }


    // menu_context_item_dto->parent_menu_context_item_id
    if(menu_context_item_dto->parent_menu_context_item_id) {
    if(cJSON_AddStringToObject(item, "parentMenuContextItemId", menu_context_item_dto->parent_menu_context_item_id) == NULL) {
    goto fail; //String
    }
    }


    // menu_context_item_dto->menu_context_id
    if(menu_context_item_dto->menu_context_id) {
    if(cJSON_AddStringToObject(item, "menuContextId", menu_context_item_dto->menu_context_id) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

menu_context_item_dto_t *menu_context_item_dto_parseFromJSON(cJSON *menu_context_item_dtoJSON){

    menu_context_item_dto_t *menu_context_item_dto_local_var = NULL;

    // menu_context_item_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(menu_context_item_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // menu_context_item_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(menu_context_item_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // menu_context_item_dto->order
    cJSON *order = cJSON_GetObjectItemCaseSensitive(menu_context_item_dtoJSON, "order");
    if (order) { 
    if(!cJSON_IsNumber(order))
    {
    goto end; //Numeric
    }
    }

    // menu_context_item_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(menu_context_item_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // menu_context_item_dto->text
    cJSON *text = cJSON_GetObjectItemCaseSensitive(menu_context_item_dtoJSON, "text");
    if (text) { 
    if(!cJSON_IsString(text) && !cJSON_IsNull(text))
    {
    goto end; //String
    }
    }

    // menu_context_item_dto->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(menu_context_item_dtoJSON, "url");
    if (url) { 
    if(!cJSON_IsString(url) && !cJSON_IsNull(url))
    {
    goto end; //String
    }
    }

    // menu_context_item_dto->icon
    cJSON *icon = cJSON_GetObjectItemCaseSensitive(menu_context_item_dtoJSON, "icon");
    if (icon) { 
    if(!cJSON_IsString(icon) && !cJSON_IsNull(icon))
    {
    goto end; //String
    }
    }

    // menu_context_item_dto->target
    cJSON *target = cJSON_GetObjectItemCaseSensitive(menu_context_item_dtoJSON, "target");
    if (target) { 
    if(!cJSON_IsString(target) && !cJSON_IsNull(target))
    {
    goto end; //String
    }
    }

    // menu_context_item_dto->tooltip
    cJSON *tooltip = cJSON_GetObjectItemCaseSensitive(menu_context_item_dtoJSON, "tooltip");
    if (tooltip) { 
    if(!cJSON_IsString(tooltip) && !cJSON_IsNull(tooltip))
    {
    goto end; //String
    }
    }

    // menu_context_item_dto->parent_menu_context_item_id
    cJSON *parent_menu_context_item_id = cJSON_GetObjectItemCaseSensitive(menu_context_item_dtoJSON, "parentMenuContextItemId");
    if (parent_menu_context_item_id) { 
    if(!cJSON_IsString(parent_menu_context_item_id) && !cJSON_IsNull(parent_menu_context_item_id))
    {
    goto end; //String
    }
    }

    // menu_context_item_dto->menu_context_id
    cJSON *menu_context_id = cJSON_GetObjectItemCaseSensitive(menu_context_item_dtoJSON, "menuContextId");
    if (menu_context_id) { 
    if(!cJSON_IsString(menu_context_id) && !cJSON_IsNull(menu_context_id))
    {
    goto end; //String
    }
    }


    menu_context_item_dto_local_var = menu_context_item_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        order ? order->valuedouble : 0,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        text && !cJSON_IsNull(text) ? strdup(text->valuestring) : NULL,
        url && !cJSON_IsNull(url) ? strdup(url->valuestring) : NULL,
        icon && !cJSON_IsNull(icon) ? strdup(icon->valuestring) : NULL,
        target && !cJSON_IsNull(target) ? strdup(target->valuestring) : NULL,
        tooltip && !cJSON_IsNull(tooltip) ? strdup(tooltip->valuestring) : NULL,
        parent_menu_context_item_id && !cJSON_IsNull(parent_menu_context_item_id) ? strdup(parent_menu_context_item_id->valuestring) : NULL,
        menu_context_id && !cJSON_IsNull(menu_context_id) ? strdup(menu_context_id->valuestring) : NULL
        );

    return menu_context_item_dto_local_var;
end:
    return NULL;

}
