#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "item_google_category_dto.h"



item_google_category_dto_t *item_google_category_dto_create(
    char *id,
    char *timestamp,
    char *path,
    char *icon,
    char *name,
    int disabled,
    int featured,
    int display_on_menu,
    int has_children,
    char *menu_image,
    char *banner_code,
    char *banner_image,
    char *primary_image,
    char *parent_category_id,
    double starting_at_amount_in_usd
    ) {
    item_google_category_dto_t *item_google_category_dto_local_var = malloc(sizeof(item_google_category_dto_t));
    if (!item_google_category_dto_local_var) {
        return NULL;
    }
    item_google_category_dto_local_var->id = id;
    item_google_category_dto_local_var->timestamp = timestamp;
    item_google_category_dto_local_var->path = path;
    item_google_category_dto_local_var->icon = icon;
    item_google_category_dto_local_var->name = name;
    item_google_category_dto_local_var->disabled = disabled;
    item_google_category_dto_local_var->featured = featured;
    item_google_category_dto_local_var->display_on_menu = display_on_menu;
    item_google_category_dto_local_var->has_children = has_children;
    item_google_category_dto_local_var->menu_image = menu_image;
    item_google_category_dto_local_var->banner_code = banner_code;
    item_google_category_dto_local_var->banner_image = banner_image;
    item_google_category_dto_local_var->primary_image = primary_image;
    item_google_category_dto_local_var->parent_category_id = parent_category_id;
    item_google_category_dto_local_var->starting_at_amount_in_usd = starting_at_amount_in_usd;

    return item_google_category_dto_local_var;
}


void item_google_category_dto_free(item_google_category_dto_t *item_google_category_dto) {
    if(NULL == item_google_category_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (item_google_category_dto->id) {
        free(item_google_category_dto->id);
        item_google_category_dto->id = NULL;
    }
    if (item_google_category_dto->timestamp) {
        free(item_google_category_dto->timestamp);
        item_google_category_dto->timestamp = NULL;
    }
    if (item_google_category_dto->path) {
        free(item_google_category_dto->path);
        item_google_category_dto->path = NULL;
    }
    if (item_google_category_dto->icon) {
        free(item_google_category_dto->icon);
        item_google_category_dto->icon = NULL;
    }
    if (item_google_category_dto->name) {
        free(item_google_category_dto->name);
        item_google_category_dto->name = NULL;
    }
    if (item_google_category_dto->menu_image) {
        free(item_google_category_dto->menu_image);
        item_google_category_dto->menu_image = NULL;
    }
    if (item_google_category_dto->banner_code) {
        free(item_google_category_dto->banner_code);
        item_google_category_dto->banner_code = NULL;
    }
    if (item_google_category_dto->banner_image) {
        free(item_google_category_dto->banner_image);
        item_google_category_dto->banner_image = NULL;
    }
    if (item_google_category_dto->primary_image) {
        free(item_google_category_dto->primary_image);
        item_google_category_dto->primary_image = NULL;
    }
    if (item_google_category_dto->parent_category_id) {
        free(item_google_category_dto->parent_category_id);
        item_google_category_dto->parent_category_id = NULL;
    }
    free(item_google_category_dto);
}

cJSON *item_google_category_dto_convertToJSON(item_google_category_dto_t *item_google_category_dto) {
    cJSON *item = cJSON_CreateObject();

    // item_google_category_dto->id
    if(item_google_category_dto->id) {
    if(cJSON_AddStringToObject(item, "id", item_google_category_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // item_google_category_dto->timestamp
    if(item_google_category_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", item_google_category_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // item_google_category_dto->path
    if (!item_google_category_dto->path) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "path", item_google_category_dto->path) == NULL) {
    goto fail; //String
    }


    // item_google_category_dto->icon
    if(item_google_category_dto->icon) {
    if(cJSON_AddStringToObject(item, "icon", item_google_category_dto->icon) == NULL) {
    goto fail; //String
    }
    }


    // item_google_category_dto->name
    if (!item_google_category_dto->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", item_google_category_dto->name) == NULL) {
    goto fail; //String
    }


    // item_google_category_dto->disabled
    if(item_google_category_dto->disabled) {
    if(cJSON_AddBoolToObject(item, "disabled", item_google_category_dto->disabled) == NULL) {
    goto fail; //Bool
    }
    }


    // item_google_category_dto->featured
    if(item_google_category_dto->featured) {
    if(cJSON_AddBoolToObject(item, "featured", item_google_category_dto->featured) == NULL) {
    goto fail; //Bool
    }
    }


    // item_google_category_dto->display_on_menu
    if(item_google_category_dto->display_on_menu) {
    if(cJSON_AddBoolToObject(item, "displayOnMenu", item_google_category_dto->display_on_menu) == NULL) {
    goto fail; //Bool
    }
    }


    // item_google_category_dto->has_children
    if(item_google_category_dto->has_children) {
    if(cJSON_AddBoolToObject(item, "hasChildren", item_google_category_dto->has_children) == NULL) {
    goto fail; //Bool
    }
    }


    // item_google_category_dto->menu_image
    if(item_google_category_dto->menu_image) {
    if(cJSON_AddStringToObject(item, "menuImage", item_google_category_dto->menu_image) == NULL) {
    goto fail; //String
    }
    }


    // item_google_category_dto->banner_code
    if(item_google_category_dto->banner_code) {
    if(cJSON_AddStringToObject(item, "bannerCode", item_google_category_dto->banner_code) == NULL) {
    goto fail; //String
    }
    }


    // item_google_category_dto->banner_image
    if(item_google_category_dto->banner_image) {
    if(cJSON_AddStringToObject(item, "bannerImage", item_google_category_dto->banner_image) == NULL) {
    goto fail; //String
    }
    }


    // item_google_category_dto->primary_image
    if(item_google_category_dto->primary_image) {
    if(cJSON_AddStringToObject(item, "primaryImage", item_google_category_dto->primary_image) == NULL) {
    goto fail; //String
    }
    }


    // item_google_category_dto->parent_category_id
    if(item_google_category_dto->parent_category_id) {
    if(cJSON_AddStringToObject(item, "parentCategoryId", item_google_category_dto->parent_category_id) == NULL) {
    goto fail; //String
    }
    }


    // item_google_category_dto->starting_at_amount_in_usd
    if(item_google_category_dto->starting_at_amount_in_usd) {
    if(cJSON_AddNumberToObject(item, "startingAtAmountInUsd", item_google_category_dto->starting_at_amount_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

item_google_category_dto_t *item_google_category_dto_parseFromJSON(cJSON *item_google_category_dtoJSON){

    item_google_category_dto_t *item_google_category_dto_local_var = NULL;

    // item_google_category_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(item_google_category_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // item_google_category_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(item_google_category_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // item_google_category_dto->path
    cJSON *path = cJSON_GetObjectItemCaseSensitive(item_google_category_dtoJSON, "path");
    if (!path) {
        goto end;
    }

    
    if(!cJSON_IsString(path))
    {
    goto end; //String
    }

    // item_google_category_dto->icon
    cJSON *icon = cJSON_GetObjectItemCaseSensitive(item_google_category_dtoJSON, "icon");
    if (icon) { 
    if(!cJSON_IsString(icon) && !cJSON_IsNull(icon))
    {
    goto end; //String
    }
    }

    // item_google_category_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(item_google_category_dtoJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // item_google_category_dto->disabled
    cJSON *disabled = cJSON_GetObjectItemCaseSensitive(item_google_category_dtoJSON, "disabled");
    if (disabled) { 
    if(!cJSON_IsBool(disabled))
    {
    goto end; //Bool
    }
    }

    // item_google_category_dto->featured
    cJSON *featured = cJSON_GetObjectItemCaseSensitive(item_google_category_dtoJSON, "featured");
    if (featured) { 
    if(!cJSON_IsBool(featured))
    {
    goto end; //Bool
    }
    }

    // item_google_category_dto->display_on_menu
    cJSON *display_on_menu = cJSON_GetObjectItemCaseSensitive(item_google_category_dtoJSON, "displayOnMenu");
    if (display_on_menu) { 
    if(!cJSON_IsBool(display_on_menu))
    {
    goto end; //Bool
    }
    }

    // item_google_category_dto->has_children
    cJSON *has_children = cJSON_GetObjectItemCaseSensitive(item_google_category_dtoJSON, "hasChildren");
    if (has_children) { 
    if(!cJSON_IsBool(has_children))
    {
    goto end; //Bool
    }
    }

    // item_google_category_dto->menu_image
    cJSON *menu_image = cJSON_GetObjectItemCaseSensitive(item_google_category_dtoJSON, "menuImage");
    if (menu_image) { 
    if(!cJSON_IsString(menu_image) && !cJSON_IsNull(menu_image))
    {
    goto end; //String
    }
    }

    // item_google_category_dto->banner_code
    cJSON *banner_code = cJSON_GetObjectItemCaseSensitive(item_google_category_dtoJSON, "bannerCode");
    if (banner_code) { 
    if(!cJSON_IsString(banner_code) && !cJSON_IsNull(banner_code))
    {
    goto end; //String
    }
    }

    // item_google_category_dto->banner_image
    cJSON *banner_image = cJSON_GetObjectItemCaseSensitive(item_google_category_dtoJSON, "bannerImage");
    if (banner_image) { 
    if(!cJSON_IsString(banner_image) && !cJSON_IsNull(banner_image))
    {
    goto end; //String
    }
    }

    // item_google_category_dto->primary_image
    cJSON *primary_image = cJSON_GetObjectItemCaseSensitive(item_google_category_dtoJSON, "primaryImage");
    if (primary_image) { 
    if(!cJSON_IsString(primary_image) && !cJSON_IsNull(primary_image))
    {
    goto end; //String
    }
    }

    // item_google_category_dto->parent_category_id
    cJSON *parent_category_id = cJSON_GetObjectItemCaseSensitive(item_google_category_dtoJSON, "parentCategoryId");
    if (parent_category_id) { 
    if(!cJSON_IsString(parent_category_id) && !cJSON_IsNull(parent_category_id))
    {
    goto end; //String
    }
    }

    // item_google_category_dto->starting_at_amount_in_usd
    cJSON *starting_at_amount_in_usd = cJSON_GetObjectItemCaseSensitive(item_google_category_dtoJSON, "startingAtAmountInUsd");
    if (starting_at_amount_in_usd) { 
    if(!cJSON_IsNumber(starting_at_amount_in_usd))
    {
    goto end; //Numeric
    }
    }


    item_google_category_dto_local_var = item_google_category_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(path->valuestring),
        icon && !cJSON_IsNull(icon) ? strdup(icon->valuestring) : NULL,
        strdup(name->valuestring),
        disabled ? disabled->valueint : 0,
        featured ? featured->valueint : 0,
        display_on_menu ? display_on_menu->valueint : 0,
        has_children ? has_children->valueint : 0,
        menu_image && !cJSON_IsNull(menu_image) ? strdup(menu_image->valuestring) : NULL,
        banner_code && !cJSON_IsNull(banner_code) ? strdup(banner_code->valuestring) : NULL,
        banner_image && !cJSON_IsNull(banner_image) ? strdup(banner_image->valuestring) : NULL,
        primary_image && !cJSON_IsNull(primary_image) ? strdup(primary_image->valuestring) : NULL,
        parent_category_id && !cJSON_IsNull(parent_category_id) ? strdup(parent_category_id->valuestring) : NULL,
        starting_at_amount_in_usd ? starting_at_amount_in_usd->valuedouble : 0
        );

    return item_google_category_dto_local_var;
end:
    return NULL;

}
