#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "menu_context_create_dto.h"



menu_context_create_dto_t *menu_context_create_dto_create(
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
    char *web_portal_id
    ) {
    menu_context_create_dto_t *menu_context_create_dto_local_var = malloc(sizeof(menu_context_create_dto_t));
    if (!menu_context_create_dto_local_var) {
        return NULL;
    }
    menu_context_create_dto_local_var->id = id;
    menu_context_create_dto_local_var->timestamp = timestamp;
    menu_context_create_dto_local_var->name = name;
    menu_context_create_dto_local_var->category = category;
    menu_context_create_dto_local_var->component = component;
    menu_context_create_dto_local_var->enable = enable;
    menu_context_create_dto_local_var->studio_menu = studio_menu;
    menu_context_create_dto_local_var->custom_css = custom_css;
    menu_context_create_dto_local_var->custom_js = custom_js;
    menu_context_create_dto_local_var->custom_html = custom_html;
    menu_context_create_dto_local_var->logged_in_only = logged_in_only;
    menu_context_create_dto_local_var->background_image = background_image;
    menu_context_create_dto_local_var->web_portal_id = web_portal_id;

    return menu_context_create_dto_local_var;
}


void menu_context_create_dto_free(menu_context_create_dto_t *menu_context_create_dto) {
    if(NULL == menu_context_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (menu_context_create_dto->id) {
        free(menu_context_create_dto->id);
        menu_context_create_dto->id = NULL;
    }
    if (menu_context_create_dto->timestamp) {
        free(menu_context_create_dto->timestamp);
        menu_context_create_dto->timestamp = NULL;
    }
    if (menu_context_create_dto->name) {
        free(menu_context_create_dto->name);
        menu_context_create_dto->name = NULL;
    }
    if (menu_context_create_dto->category) {
        free(menu_context_create_dto->category);
        menu_context_create_dto->category = NULL;
    }
    if (menu_context_create_dto->component) {
        free(menu_context_create_dto->component);
        menu_context_create_dto->component = NULL;
    }
    if (menu_context_create_dto->custom_css) {
        free(menu_context_create_dto->custom_css);
        menu_context_create_dto->custom_css = NULL;
    }
    if (menu_context_create_dto->custom_js) {
        free(menu_context_create_dto->custom_js);
        menu_context_create_dto->custom_js = NULL;
    }
    if (menu_context_create_dto->custom_html) {
        free(menu_context_create_dto->custom_html);
        menu_context_create_dto->custom_html = NULL;
    }
    if (menu_context_create_dto->logged_in_only) {
        free(menu_context_create_dto->logged_in_only);
        menu_context_create_dto->logged_in_only = NULL;
    }
    if (menu_context_create_dto->background_image) {
        free(menu_context_create_dto->background_image);
        menu_context_create_dto->background_image = NULL;
    }
    if (menu_context_create_dto->web_portal_id) {
        free(menu_context_create_dto->web_portal_id);
        menu_context_create_dto->web_portal_id = NULL;
    }
    free(menu_context_create_dto);
}

cJSON *menu_context_create_dto_convertToJSON(menu_context_create_dto_t *menu_context_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // menu_context_create_dto->id
    if(menu_context_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", menu_context_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // menu_context_create_dto->timestamp
    if(menu_context_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", menu_context_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // menu_context_create_dto->name
    if (!menu_context_create_dto->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", menu_context_create_dto->name) == NULL) {
    goto fail; //String
    }


    // menu_context_create_dto->category
    if(menu_context_create_dto->category) {
    if(cJSON_AddStringToObject(item, "category", menu_context_create_dto->category) == NULL) {
    goto fail; //String
    }
    }


    // menu_context_create_dto->component
    if(menu_context_create_dto->component) {
    if(cJSON_AddStringToObject(item, "component", menu_context_create_dto->component) == NULL) {
    goto fail; //String
    }
    }


    // menu_context_create_dto->enable
    if(menu_context_create_dto->enable) {
    if(cJSON_AddBoolToObject(item, "enable", menu_context_create_dto->enable) == NULL) {
    goto fail; //Bool
    }
    }


    // menu_context_create_dto->studio_menu
    if(menu_context_create_dto->studio_menu) {
    if(cJSON_AddBoolToObject(item, "studioMenu", menu_context_create_dto->studio_menu) == NULL) {
    goto fail; //Bool
    }
    }


    // menu_context_create_dto->custom_css
    if(menu_context_create_dto->custom_css) {
    if(cJSON_AddStringToObject(item, "customCss", menu_context_create_dto->custom_css) == NULL) {
    goto fail; //String
    }
    }


    // menu_context_create_dto->custom_js
    if(menu_context_create_dto->custom_js) {
    if(cJSON_AddStringToObject(item, "customJs", menu_context_create_dto->custom_js) == NULL) {
    goto fail; //String
    }
    }


    // menu_context_create_dto->custom_html
    if(menu_context_create_dto->custom_html) {
    if(cJSON_AddStringToObject(item, "customHtml", menu_context_create_dto->custom_html) == NULL) {
    goto fail; //String
    }
    }


    // menu_context_create_dto->logged_in_only
    if(menu_context_create_dto->logged_in_only) {
    if(cJSON_AddStringToObject(item, "loggedInOnly", menu_context_create_dto->logged_in_only) == NULL) {
    goto fail; //String
    }
    }


    // menu_context_create_dto->background_image
    if(menu_context_create_dto->background_image) {
    if(cJSON_AddStringToObject(item, "backgroundImage", menu_context_create_dto->background_image) == NULL) {
    goto fail; //String
    }
    }


    // menu_context_create_dto->web_portal_id
    if(menu_context_create_dto->web_portal_id) {
    if(cJSON_AddStringToObject(item, "webPortalId", menu_context_create_dto->web_portal_id) == NULL) {
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

menu_context_create_dto_t *menu_context_create_dto_parseFromJSON(cJSON *menu_context_create_dtoJSON){

    menu_context_create_dto_t *menu_context_create_dto_local_var = NULL;

    // menu_context_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(menu_context_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // menu_context_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(menu_context_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // menu_context_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(menu_context_create_dtoJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // menu_context_create_dto->category
    cJSON *category = cJSON_GetObjectItemCaseSensitive(menu_context_create_dtoJSON, "category");
    if (category) { 
    if(!cJSON_IsString(category) && !cJSON_IsNull(category))
    {
    goto end; //String
    }
    }

    // menu_context_create_dto->component
    cJSON *component = cJSON_GetObjectItemCaseSensitive(menu_context_create_dtoJSON, "component");
    if (component) { 
    if(!cJSON_IsString(component) && !cJSON_IsNull(component))
    {
    goto end; //String
    }
    }

    // menu_context_create_dto->enable
    cJSON *enable = cJSON_GetObjectItemCaseSensitive(menu_context_create_dtoJSON, "enable");
    if (enable) { 
    if(!cJSON_IsBool(enable))
    {
    goto end; //Bool
    }
    }

    // menu_context_create_dto->studio_menu
    cJSON *studio_menu = cJSON_GetObjectItemCaseSensitive(menu_context_create_dtoJSON, "studioMenu");
    if (studio_menu) { 
    if(!cJSON_IsBool(studio_menu))
    {
    goto end; //Bool
    }
    }

    // menu_context_create_dto->custom_css
    cJSON *custom_css = cJSON_GetObjectItemCaseSensitive(menu_context_create_dtoJSON, "customCss");
    if (custom_css) { 
    if(!cJSON_IsString(custom_css) && !cJSON_IsNull(custom_css))
    {
    goto end; //String
    }
    }

    // menu_context_create_dto->custom_js
    cJSON *custom_js = cJSON_GetObjectItemCaseSensitive(menu_context_create_dtoJSON, "customJs");
    if (custom_js) { 
    if(!cJSON_IsString(custom_js) && !cJSON_IsNull(custom_js))
    {
    goto end; //String
    }
    }

    // menu_context_create_dto->custom_html
    cJSON *custom_html = cJSON_GetObjectItemCaseSensitive(menu_context_create_dtoJSON, "customHtml");
    if (custom_html) { 
    if(!cJSON_IsString(custom_html) && !cJSON_IsNull(custom_html))
    {
    goto end; //String
    }
    }

    // menu_context_create_dto->logged_in_only
    cJSON *logged_in_only = cJSON_GetObjectItemCaseSensitive(menu_context_create_dtoJSON, "loggedInOnly");
    if (logged_in_only) { 
    if(!cJSON_IsString(logged_in_only) && !cJSON_IsNull(logged_in_only))
    {
    goto end; //String
    }
    }

    // menu_context_create_dto->background_image
    cJSON *background_image = cJSON_GetObjectItemCaseSensitive(menu_context_create_dtoJSON, "backgroundImage");
    if (background_image) { 
    if(!cJSON_IsString(background_image) && !cJSON_IsNull(background_image))
    {
    goto end; //String
    }
    }

    // menu_context_create_dto->web_portal_id
    cJSON *web_portal_id = cJSON_GetObjectItemCaseSensitive(menu_context_create_dtoJSON, "webPortalId");
    if (web_portal_id) { 
    if(!cJSON_IsString(web_portal_id) && !cJSON_IsNull(web_portal_id))
    {
    goto end; //String
    }
    }


    menu_context_create_dto_local_var = menu_context_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(name->valuestring),
        category && !cJSON_IsNull(category) ? strdup(category->valuestring) : NULL,
        component && !cJSON_IsNull(component) ? strdup(component->valuestring) : NULL,
        enable ? enable->valueint : 0,
        studio_menu ? studio_menu->valueint : 0,
        custom_css && !cJSON_IsNull(custom_css) ? strdup(custom_css->valuestring) : NULL,
        custom_js && !cJSON_IsNull(custom_js) ? strdup(custom_js->valuestring) : NULL,
        custom_html && !cJSON_IsNull(custom_html) ? strdup(custom_html->valuestring) : NULL,
        logged_in_only && !cJSON_IsNull(logged_in_only) ? strdup(logged_in_only->valuestring) : NULL,
        background_image && !cJSON_IsNull(background_image) ? strdup(background_image->valuestring) : NULL,
        web_portal_id && !cJSON_IsNull(web_portal_id) ? strdup(web_portal_id->valuestring) : NULL
        );

    return menu_context_create_dto_local_var;
end:
    return NULL;

}
