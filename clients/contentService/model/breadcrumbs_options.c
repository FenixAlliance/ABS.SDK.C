#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "breadcrumbs_options.h"



breadcrumbs_options_t *breadcrumbs_options_create(
    int enable_breadcrumbs_on_mobile_devices,
    int enable_categories_on_breadcrumbs,
    int enable_post_types_on_breadcrumbs,
    char *breadcrumbs_prefix,
    char *breadcrumbs_font_size,
    char *breadcrumbs_separator,
    char *breadcrumbs_font_color,
    char *breadcrumbs_font_color_hover
    ) {
    breadcrumbs_options_t *breadcrumbs_options_local_var = malloc(sizeof(breadcrumbs_options_t));
    if (!breadcrumbs_options_local_var) {
        return NULL;
    }
    breadcrumbs_options_local_var->enable_breadcrumbs_on_mobile_devices = enable_breadcrumbs_on_mobile_devices;
    breadcrumbs_options_local_var->enable_categories_on_breadcrumbs = enable_categories_on_breadcrumbs;
    breadcrumbs_options_local_var->enable_post_types_on_breadcrumbs = enable_post_types_on_breadcrumbs;
    breadcrumbs_options_local_var->breadcrumbs_prefix = breadcrumbs_prefix;
    breadcrumbs_options_local_var->breadcrumbs_font_size = breadcrumbs_font_size;
    breadcrumbs_options_local_var->breadcrumbs_separator = breadcrumbs_separator;
    breadcrumbs_options_local_var->breadcrumbs_font_color = breadcrumbs_font_color;
    breadcrumbs_options_local_var->breadcrumbs_font_color_hover = breadcrumbs_font_color_hover;

    return breadcrumbs_options_local_var;
}


void breadcrumbs_options_free(breadcrumbs_options_t *breadcrumbs_options) {
    if(NULL == breadcrumbs_options){
        return ;
    }
    listEntry_t *listEntry;
    if (breadcrumbs_options->breadcrumbs_prefix) {
        free(breadcrumbs_options->breadcrumbs_prefix);
        breadcrumbs_options->breadcrumbs_prefix = NULL;
    }
    if (breadcrumbs_options->breadcrumbs_font_size) {
        free(breadcrumbs_options->breadcrumbs_font_size);
        breadcrumbs_options->breadcrumbs_font_size = NULL;
    }
    if (breadcrumbs_options->breadcrumbs_separator) {
        free(breadcrumbs_options->breadcrumbs_separator);
        breadcrumbs_options->breadcrumbs_separator = NULL;
    }
    if (breadcrumbs_options->breadcrumbs_font_color) {
        free(breadcrumbs_options->breadcrumbs_font_color);
        breadcrumbs_options->breadcrumbs_font_color = NULL;
    }
    if (breadcrumbs_options->breadcrumbs_font_color_hover) {
        free(breadcrumbs_options->breadcrumbs_font_color_hover);
        breadcrumbs_options->breadcrumbs_font_color_hover = NULL;
    }
    free(breadcrumbs_options);
}

cJSON *breadcrumbs_options_convertToJSON(breadcrumbs_options_t *breadcrumbs_options) {
    cJSON *item = cJSON_CreateObject();

    // breadcrumbs_options->enable_breadcrumbs_on_mobile_devices
    if(breadcrumbs_options->enable_breadcrumbs_on_mobile_devices) {
    if(cJSON_AddBoolToObject(item, "enableBreadcrumbsOnMobileDevices", breadcrumbs_options->enable_breadcrumbs_on_mobile_devices) == NULL) {
    goto fail; //Bool
    }
    }


    // breadcrumbs_options->enable_categories_on_breadcrumbs
    if(breadcrumbs_options->enable_categories_on_breadcrumbs) {
    if(cJSON_AddBoolToObject(item, "enableCategoriesOnBreadcrumbs", breadcrumbs_options->enable_categories_on_breadcrumbs) == NULL) {
    goto fail; //Bool
    }
    }


    // breadcrumbs_options->enable_post_types_on_breadcrumbs
    if(breadcrumbs_options->enable_post_types_on_breadcrumbs) {
    if(cJSON_AddBoolToObject(item, "enablePostTypesOnBreadcrumbs", breadcrumbs_options->enable_post_types_on_breadcrumbs) == NULL) {
    goto fail; //Bool
    }
    }


    // breadcrumbs_options->breadcrumbs_prefix
    if(breadcrumbs_options->breadcrumbs_prefix) {
    if(cJSON_AddStringToObject(item, "breadcrumbsPrefix", breadcrumbs_options->breadcrumbs_prefix) == NULL) {
    goto fail; //String
    }
    }


    // breadcrumbs_options->breadcrumbs_font_size
    if(breadcrumbs_options->breadcrumbs_font_size) {
    if(cJSON_AddStringToObject(item, "breadcrumbsFontSize", breadcrumbs_options->breadcrumbs_font_size) == NULL) {
    goto fail; //String
    }
    }


    // breadcrumbs_options->breadcrumbs_separator
    if(breadcrumbs_options->breadcrumbs_separator) {
    if(cJSON_AddStringToObject(item, "breadcrumbsSeparator", breadcrumbs_options->breadcrumbs_separator) == NULL) {
    goto fail; //String
    }
    }


    // breadcrumbs_options->breadcrumbs_font_color
    if(breadcrumbs_options->breadcrumbs_font_color) {
    if(cJSON_AddStringToObject(item, "breadcrumbsFontColor", breadcrumbs_options->breadcrumbs_font_color) == NULL) {
    goto fail; //String
    }
    }


    // breadcrumbs_options->breadcrumbs_font_color_hover
    if(breadcrumbs_options->breadcrumbs_font_color_hover) {
    if(cJSON_AddStringToObject(item, "breadcrumbsFontColorHover", breadcrumbs_options->breadcrumbs_font_color_hover) == NULL) {
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

breadcrumbs_options_t *breadcrumbs_options_parseFromJSON(cJSON *breadcrumbs_optionsJSON){

    breadcrumbs_options_t *breadcrumbs_options_local_var = NULL;

    // breadcrumbs_options->enable_breadcrumbs_on_mobile_devices
    cJSON *enable_breadcrumbs_on_mobile_devices = cJSON_GetObjectItemCaseSensitive(breadcrumbs_optionsJSON, "enableBreadcrumbsOnMobileDevices");
    if (enable_breadcrumbs_on_mobile_devices) { 
    if(!cJSON_IsBool(enable_breadcrumbs_on_mobile_devices))
    {
    goto end; //Bool
    }
    }

    // breadcrumbs_options->enable_categories_on_breadcrumbs
    cJSON *enable_categories_on_breadcrumbs = cJSON_GetObjectItemCaseSensitive(breadcrumbs_optionsJSON, "enableCategoriesOnBreadcrumbs");
    if (enable_categories_on_breadcrumbs) { 
    if(!cJSON_IsBool(enable_categories_on_breadcrumbs))
    {
    goto end; //Bool
    }
    }

    // breadcrumbs_options->enable_post_types_on_breadcrumbs
    cJSON *enable_post_types_on_breadcrumbs = cJSON_GetObjectItemCaseSensitive(breadcrumbs_optionsJSON, "enablePostTypesOnBreadcrumbs");
    if (enable_post_types_on_breadcrumbs) { 
    if(!cJSON_IsBool(enable_post_types_on_breadcrumbs))
    {
    goto end; //Bool
    }
    }

    // breadcrumbs_options->breadcrumbs_prefix
    cJSON *breadcrumbs_prefix = cJSON_GetObjectItemCaseSensitive(breadcrumbs_optionsJSON, "breadcrumbsPrefix");
    if (breadcrumbs_prefix) { 
    if(!cJSON_IsString(breadcrumbs_prefix) && !cJSON_IsNull(breadcrumbs_prefix))
    {
    goto end; //String
    }
    }

    // breadcrumbs_options->breadcrumbs_font_size
    cJSON *breadcrumbs_font_size = cJSON_GetObjectItemCaseSensitive(breadcrumbs_optionsJSON, "breadcrumbsFontSize");
    if (breadcrumbs_font_size) { 
    if(!cJSON_IsString(breadcrumbs_font_size) && !cJSON_IsNull(breadcrumbs_font_size))
    {
    goto end; //String
    }
    }

    // breadcrumbs_options->breadcrumbs_separator
    cJSON *breadcrumbs_separator = cJSON_GetObjectItemCaseSensitive(breadcrumbs_optionsJSON, "breadcrumbsSeparator");
    if (breadcrumbs_separator) { 
    if(!cJSON_IsString(breadcrumbs_separator) && !cJSON_IsNull(breadcrumbs_separator))
    {
    goto end; //String
    }
    }

    // breadcrumbs_options->breadcrumbs_font_color
    cJSON *breadcrumbs_font_color = cJSON_GetObjectItemCaseSensitive(breadcrumbs_optionsJSON, "breadcrumbsFontColor");
    if (breadcrumbs_font_color) { 
    if(!cJSON_IsString(breadcrumbs_font_color) && !cJSON_IsNull(breadcrumbs_font_color))
    {
    goto end; //String
    }
    }

    // breadcrumbs_options->breadcrumbs_font_color_hover
    cJSON *breadcrumbs_font_color_hover = cJSON_GetObjectItemCaseSensitive(breadcrumbs_optionsJSON, "breadcrumbsFontColorHover");
    if (breadcrumbs_font_color_hover) { 
    if(!cJSON_IsString(breadcrumbs_font_color_hover) && !cJSON_IsNull(breadcrumbs_font_color_hover))
    {
    goto end; //String
    }
    }


    breadcrumbs_options_local_var = breadcrumbs_options_create (
        enable_breadcrumbs_on_mobile_devices ? enable_breadcrumbs_on_mobile_devices->valueint : 0,
        enable_categories_on_breadcrumbs ? enable_categories_on_breadcrumbs->valueint : 0,
        enable_post_types_on_breadcrumbs ? enable_post_types_on_breadcrumbs->valueint : 0,
        breadcrumbs_prefix && !cJSON_IsNull(breadcrumbs_prefix) ? strdup(breadcrumbs_prefix->valuestring) : NULL,
        breadcrumbs_font_size && !cJSON_IsNull(breadcrumbs_font_size) ? strdup(breadcrumbs_font_size->valuestring) : NULL,
        breadcrumbs_separator && !cJSON_IsNull(breadcrumbs_separator) ? strdup(breadcrumbs_separator->valuestring) : NULL,
        breadcrumbs_font_color && !cJSON_IsNull(breadcrumbs_font_color) ? strdup(breadcrumbs_font_color->valuestring) : NULL,
        breadcrumbs_font_color_hover && !cJSON_IsNull(breadcrumbs_font_color_hover) ? strdup(breadcrumbs_font_color_hover->valuestring) : NULL
        );

    return breadcrumbs_options_local_var;
end:
    return NULL;

}
