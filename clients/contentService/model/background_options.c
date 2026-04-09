#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "background_options.h"



background_options_t *background_options_create(
    int background_pattern_id,
    int enable_background_pattern,
    char *background_image_for_page,
    char *background_color_for_page,
    char *main_content_color,
    char *main_content_image_url
    ) {
    background_options_t *background_options_local_var = malloc(sizeof(background_options_t));
    if (!background_options_local_var) {
        return NULL;
    }
    background_options_local_var->background_pattern_id = background_pattern_id;
    background_options_local_var->enable_background_pattern = enable_background_pattern;
    background_options_local_var->background_image_for_page = background_image_for_page;
    background_options_local_var->background_color_for_page = background_color_for_page;
    background_options_local_var->main_content_color = main_content_color;
    background_options_local_var->main_content_image_url = main_content_image_url;

    return background_options_local_var;
}


void background_options_free(background_options_t *background_options) {
    if(NULL == background_options){
        return ;
    }
    listEntry_t *listEntry;
    if (background_options->background_image_for_page) {
        free(background_options->background_image_for_page);
        background_options->background_image_for_page = NULL;
    }
    if (background_options->background_color_for_page) {
        free(background_options->background_color_for_page);
        background_options->background_color_for_page = NULL;
    }
    if (background_options->main_content_color) {
        free(background_options->main_content_color);
        background_options->main_content_color = NULL;
    }
    if (background_options->main_content_image_url) {
        free(background_options->main_content_image_url);
        background_options->main_content_image_url = NULL;
    }
    free(background_options);
}

cJSON *background_options_convertToJSON(background_options_t *background_options) {
    cJSON *item = cJSON_CreateObject();

    // background_options->background_pattern_id
    if(background_options->background_pattern_id) {
    if(cJSON_AddNumberToObject(item, "backgroundPatternID", background_options->background_pattern_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // background_options->enable_background_pattern
    if(background_options->enable_background_pattern) {
    if(cJSON_AddBoolToObject(item, "enableBackgroundPattern", background_options->enable_background_pattern) == NULL) {
    goto fail; //Bool
    }
    }


    // background_options->background_image_for_page
    if(background_options->background_image_for_page) {
    if(cJSON_AddStringToObject(item, "backgroundImageForPage", background_options->background_image_for_page) == NULL) {
    goto fail; //String
    }
    }


    // background_options->background_color_for_page
    if(background_options->background_color_for_page) {
    if(cJSON_AddStringToObject(item, "backgroundColorForPage", background_options->background_color_for_page) == NULL) {
    goto fail; //String
    }
    }


    // background_options->main_content_color
    if(background_options->main_content_color) {
    if(cJSON_AddStringToObject(item, "mainContentColor", background_options->main_content_color) == NULL) {
    goto fail; //String
    }
    }


    // background_options->main_content_image_url
    if(background_options->main_content_image_url) {
    if(cJSON_AddStringToObject(item, "mainContentImageURL", background_options->main_content_image_url) == NULL) {
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

background_options_t *background_options_parseFromJSON(cJSON *background_optionsJSON){

    background_options_t *background_options_local_var = NULL;

    // background_options->background_pattern_id
    cJSON *background_pattern_id = cJSON_GetObjectItemCaseSensitive(background_optionsJSON, "backgroundPatternID");
    if (background_pattern_id) { 
    if(!cJSON_IsNumber(background_pattern_id))
    {
    goto end; //Numeric
    }
    }

    // background_options->enable_background_pattern
    cJSON *enable_background_pattern = cJSON_GetObjectItemCaseSensitive(background_optionsJSON, "enableBackgroundPattern");
    if (enable_background_pattern) { 
    if(!cJSON_IsBool(enable_background_pattern))
    {
    goto end; //Bool
    }
    }

    // background_options->background_image_for_page
    cJSON *background_image_for_page = cJSON_GetObjectItemCaseSensitive(background_optionsJSON, "backgroundImageForPage");
    if (background_image_for_page) { 
    if(!cJSON_IsString(background_image_for_page) && !cJSON_IsNull(background_image_for_page))
    {
    goto end; //String
    }
    }

    // background_options->background_color_for_page
    cJSON *background_color_for_page = cJSON_GetObjectItemCaseSensitive(background_optionsJSON, "backgroundColorForPage");
    if (background_color_for_page) { 
    if(!cJSON_IsString(background_color_for_page) && !cJSON_IsNull(background_color_for_page))
    {
    goto end; //String
    }
    }

    // background_options->main_content_color
    cJSON *main_content_color = cJSON_GetObjectItemCaseSensitive(background_optionsJSON, "mainContentColor");
    if (main_content_color) { 
    if(!cJSON_IsString(main_content_color) && !cJSON_IsNull(main_content_color))
    {
    goto end; //String
    }
    }

    // background_options->main_content_image_url
    cJSON *main_content_image_url = cJSON_GetObjectItemCaseSensitive(background_optionsJSON, "mainContentImageURL");
    if (main_content_image_url) { 
    if(!cJSON_IsString(main_content_image_url) && !cJSON_IsNull(main_content_image_url))
    {
    goto end; //String
    }
    }


    background_options_local_var = background_options_create (
        background_pattern_id ? background_pattern_id->valuedouble : 0,
        enable_background_pattern ? enable_background_pattern->valueint : 0,
        background_image_for_page && !cJSON_IsNull(background_image_for_page) ? strdup(background_image_for_page->valuestring) : NULL,
        background_color_for_page && !cJSON_IsNull(background_color_for_page) ? strdup(background_color_for_page->valuestring) : NULL,
        main_content_color && !cJSON_IsNull(main_content_color) ? strdup(main_content_color->valuestring) : NULL,
        main_content_image_url && !cJSON_IsNull(main_content_image_url) ? strdup(main_content_image_url->valuestring) : NULL
        );

    return background_options_local_var;
end:
    return NULL;

}
