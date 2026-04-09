#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dashboard_options.h"



dashboard_options_t *dashboard_options_create(
    char *color,
    char *title,
    char *icon,
    char *icon_color,
    char *favicon
    ) {
    dashboard_options_t *dashboard_options_local_var = malloc(sizeof(dashboard_options_t));
    if (!dashboard_options_local_var) {
        return NULL;
    }
    dashboard_options_local_var->color = color;
    dashboard_options_local_var->title = title;
    dashboard_options_local_var->icon = icon;
    dashboard_options_local_var->icon_color = icon_color;
    dashboard_options_local_var->favicon = favicon;

    return dashboard_options_local_var;
}


void dashboard_options_free(dashboard_options_t *dashboard_options) {
    if(NULL == dashboard_options){
        return ;
    }
    listEntry_t *listEntry;
    if (dashboard_options->color) {
        free(dashboard_options->color);
        dashboard_options->color = NULL;
    }
    if (dashboard_options->title) {
        free(dashboard_options->title);
        dashboard_options->title = NULL;
    }
    if (dashboard_options->icon) {
        free(dashboard_options->icon);
        dashboard_options->icon = NULL;
    }
    if (dashboard_options->icon_color) {
        free(dashboard_options->icon_color);
        dashboard_options->icon_color = NULL;
    }
    if (dashboard_options->favicon) {
        free(dashboard_options->favicon);
        dashboard_options->favicon = NULL;
    }
    free(dashboard_options);
}

cJSON *dashboard_options_convertToJSON(dashboard_options_t *dashboard_options) {
    cJSON *item = cJSON_CreateObject();

    // dashboard_options->color
    if(dashboard_options->color) {
    if(cJSON_AddStringToObject(item, "color", dashboard_options->color) == NULL) {
    goto fail; //String
    }
    }


    // dashboard_options->title
    if(dashboard_options->title) {
    if(cJSON_AddStringToObject(item, "title", dashboard_options->title) == NULL) {
    goto fail; //String
    }
    }


    // dashboard_options->icon
    if(dashboard_options->icon) {
    if(cJSON_AddStringToObject(item, "icon", dashboard_options->icon) == NULL) {
    goto fail; //String
    }
    }


    // dashboard_options->icon_color
    if(dashboard_options->icon_color) {
    if(cJSON_AddStringToObject(item, "iconColor", dashboard_options->icon_color) == NULL) {
    goto fail; //String
    }
    }


    // dashboard_options->favicon
    if(dashboard_options->favicon) {
    if(cJSON_AddStringToObject(item, "favicon", dashboard_options->favicon) == NULL) {
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

dashboard_options_t *dashboard_options_parseFromJSON(cJSON *dashboard_optionsJSON){

    dashboard_options_t *dashboard_options_local_var = NULL;

    // dashboard_options->color
    cJSON *color = cJSON_GetObjectItemCaseSensitive(dashboard_optionsJSON, "color");
    if (color) { 
    if(!cJSON_IsString(color) && !cJSON_IsNull(color))
    {
    goto end; //String
    }
    }

    // dashboard_options->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(dashboard_optionsJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // dashboard_options->icon
    cJSON *icon = cJSON_GetObjectItemCaseSensitive(dashboard_optionsJSON, "icon");
    if (icon) { 
    if(!cJSON_IsString(icon) && !cJSON_IsNull(icon))
    {
    goto end; //String
    }
    }

    // dashboard_options->icon_color
    cJSON *icon_color = cJSON_GetObjectItemCaseSensitive(dashboard_optionsJSON, "iconColor");
    if (icon_color) { 
    if(!cJSON_IsString(icon_color) && !cJSON_IsNull(icon_color))
    {
    goto end; //String
    }
    }

    // dashboard_options->favicon
    cJSON *favicon = cJSON_GetObjectItemCaseSensitive(dashboard_optionsJSON, "favicon");
    if (favicon) { 
    if(!cJSON_IsString(favicon) && !cJSON_IsNull(favicon))
    {
    goto end; //String
    }
    }


    dashboard_options_local_var = dashboard_options_create (
        color && !cJSON_IsNull(color) ? strdup(color->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        icon && !cJSON_IsNull(icon) ? strdup(icon->valuestring) : NULL,
        icon_color && !cJSON_IsNull(icon_color) ? strdup(icon_color->valuestring) : NULL,
        favicon && !cJSON_IsNull(favicon) ? strdup(favicon->valuestring) : NULL
        );

    return dashboard_options_local_var;
end:
    return NULL;

}
