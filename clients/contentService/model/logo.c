#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "logo.h"


char* logo_alignment_ToString(contentservice_logo_ALIGNMENT_e alignment) {
    char* alignmentArray[] =  { "NULL", "Center", "Right", "Left" };
    return alignmentArray[alignment];
}

contentservice_logo_ALIGNMENT_e logo_alignment_FromString(char* alignment){
    int stringToReturn = 0;
    char *alignmentArray[] =  { "NULL", "Center", "Right", "Left" };
    size_t sizeofArray = sizeof(alignmentArray) / sizeof(alignmentArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(alignment, alignmentArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

logo_t *logo_create(
    margin_t *margin,
    contentservice_logo_ALIGNMENT_e alignment,
    int width,
    int height,
    int max_width,
    int max_height,
    char *custom_link_url,
    char *background_color,
    char *defalt_logo_url,
    char *defalt_retina_logo_url,
    char *defalt_sticky_logo_url,
    char *defalt_sticky_retina_logo_url,
    char *defalt_mobile_logo_url,
    char *defalt_mobile_retina_logo_url,
    char *footer,
    char *header
    ) {
    logo_t *logo_local_var = malloc(sizeof(logo_t));
    if (!logo_local_var) {
        return NULL;
    }
    logo_local_var->margin = margin;
    logo_local_var->alignment = alignment;
    logo_local_var->width = width;
    logo_local_var->height = height;
    logo_local_var->max_width = max_width;
    logo_local_var->max_height = max_height;
    logo_local_var->custom_link_url = custom_link_url;
    logo_local_var->background_color = background_color;
    logo_local_var->defalt_logo_url = defalt_logo_url;
    logo_local_var->defalt_retina_logo_url = defalt_retina_logo_url;
    logo_local_var->defalt_sticky_logo_url = defalt_sticky_logo_url;
    logo_local_var->defalt_sticky_retina_logo_url = defalt_sticky_retina_logo_url;
    logo_local_var->defalt_mobile_logo_url = defalt_mobile_logo_url;
    logo_local_var->defalt_mobile_retina_logo_url = defalt_mobile_retina_logo_url;
    logo_local_var->footer = footer;
    logo_local_var->header = header;

    return logo_local_var;
}


void logo_free(logo_t *logo) {
    if(NULL == logo){
        return ;
    }
    listEntry_t *listEntry;
    if (logo->margin) {
        margin_free(logo->margin);
        logo->margin = NULL;
    }
    if (logo->custom_link_url) {
        free(logo->custom_link_url);
        logo->custom_link_url = NULL;
    }
    if (logo->background_color) {
        free(logo->background_color);
        logo->background_color = NULL;
    }
    if (logo->defalt_logo_url) {
        free(logo->defalt_logo_url);
        logo->defalt_logo_url = NULL;
    }
    if (logo->defalt_retina_logo_url) {
        free(logo->defalt_retina_logo_url);
        logo->defalt_retina_logo_url = NULL;
    }
    if (logo->defalt_sticky_logo_url) {
        free(logo->defalt_sticky_logo_url);
        logo->defalt_sticky_logo_url = NULL;
    }
    if (logo->defalt_sticky_retina_logo_url) {
        free(logo->defalt_sticky_retina_logo_url);
        logo->defalt_sticky_retina_logo_url = NULL;
    }
    if (logo->defalt_mobile_logo_url) {
        free(logo->defalt_mobile_logo_url);
        logo->defalt_mobile_logo_url = NULL;
    }
    if (logo->defalt_mobile_retina_logo_url) {
        free(logo->defalt_mobile_retina_logo_url);
        logo->defalt_mobile_retina_logo_url = NULL;
    }
    if (logo->footer) {
        free(logo->footer);
        logo->footer = NULL;
    }
    if (logo->header) {
        free(logo->header);
        logo->header = NULL;
    }
    free(logo);
}

cJSON *logo_convertToJSON(logo_t *logo) {
    cJSON *item = cJSON_CreateObject();

    // logo->margin
    if(logo->margin) {
    cJSON *margin_local_JSON = margin_convertToJSON(logo->margin);
    if(margin_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "margin", margin_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // logo->alignment
    if(logo->alignment != contentservice_logo_ALIGNMENT_NULL) {
    if(cJSON_AddStringToObject(item, "alignment", alignmentlogo_ToString(logo->alignment)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // logo->width
    if(logo->width) {
    if(cJSON_AddNumberToObject(item, "width", logo->width) == NULL) {
    goto fail; //Numeric
    }
    }


    // logo->height
    if(logo->height) {
    if(cJSON_AddNumberToObject(item, "height", logo->height) == NULL) {
    goto fail; //Numeric
    }
    }


    // logo->max_width
    if(logo->max_width) {
    if(cJSON_AddNumberToObject(item, "maxWidth", logo->max_width) == NULL) {
    goto fail; //Numeric
    }
    }


    // logo->max_height
    if(logo->max_height) {
    if(cJSON_AddNumberToObject(item, "maxHeight", logo->max_height) == NULL) {
    goto fail; //Numeric
    }
    }


    // logo->custom_link_url
    if(logo->custom_link_url) {
    if(cJSON_AddStringToObject(item, "customLinkURL", logo->custom_link_url) == NULL) {
    goto fail; //String
    }
    }


    // logo->background_color
    if(logo->background_color) {
    if(cJSON_AddStringToObject(item, "backgroundColor", logo->background_color) == NULL) {
    goto fail; //String
    }
    }


    // logo->defalt_logo_url
    if(logo->defalt_logo_url) {
    if(cJSON_AddStringToObject(item, "defaltLogoURL", logo->defalt_logo_url) == NULL) {
    goto fail; //String
    }
    }


    // logo->defalt_retina_logo_url
    if(logo->defalt_retina_logo_url) {
    if(cJSON_AddStringToObject(item, "defaltRetinaLogoURL", logo->defalt_retina_logo_url) == NULL) {
    goto fail; //String
    }
    }


    // logo->defalt_sticky_logo_url
    if(logo->defalt_sticky_logo_url) {
    if(cJSON_AddStringToObject(item, "defaltStickyLogoURL", logo->defalt_sticky_logo_url) == NULL) {
    goto fail; //String
    }
    }


    // logo->defalt_sticky_retina_logo_url
    if(logo->defalt_sticky_retina_logo_url) {
    if(cJSON_AddStringToObject(item, "defaltStickyRetinaLogoURL", logo->defalt_sticky_retina_logo_url) == NULL) {
    goto fail; //String
    }
    }


    // logo->defalt_mobile_logo_url
    if(logo->defalt_mobile_logo_url) {
    if(cJSON_AddStringToObject(item, "defaltMobileLogoURL", logo->defalt_mobile_logo_url) == NULL) {
    goto fail; //String
    }
    }


    // logo->defalt_mobile_retina_logo_url
    if(logo->defalt_mobile_retina_logo_url) {
    if(cJSON_AddStringToObject(item, "defaltMobileRetinaLogoURL", logo->defalt_mobile_retina_logo_url) == NULL) {
    goto fail; //String
    }
    }


    // logo->footer
    if(logo->footer) {
    if(cJSON_AddStringToObject(item, "footer", logo->footer) == NULL) {
    goto fail; //String
    }
    }


    // logo->header
    if(logo->header) {
    if(cJSON_AddStringToObject(item, "header", logo->header) == NULL) {
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

logo_t *logo_parseFromJSON(cJSON *logoJSON){

    logo_t *logo_local_var = NULL;

    // define the local variable for logo->margin
    margin_t *margin_local_nonprim = NULL;

    // logo->margin
    cJSON *margin = cJSON_GetObjectItemCaseSensitive(logoJSON, "margin");
    if (margin) { 
    margin_local_nonprim = margin_parseFromJSON(margin); //nonprimitive
    }

    // logo->alignment
    cJSON *alignment = cJSON_GetObjectItemCaseSensitive(logoJSON, "alignment");
    contentservice_logo_ALIGNMENT_e alignmentVariable;
    if (alignment) { 
    if(!cJSON_IsString(alignment))
    {
    goto end; //Enum
    }
    alignmentVariable = logo_alignment_FromString(alignment->valuestring);
    }

    // logo->width
    cJSON *width = cJSON_GetObjectItemCaseSensitive(logoJSON, "width");
    if (width) { 
    if(!cJSON_IsNumber(width))
    {
    goto end; //Numeric
    }
    }

    // logo->height
    cJSON *height = cJSON_GetObjectItemCaseSensitive(logoJSON, "height");
    if (height) { 
    if(!cJSON_IsNumber(height))
    {
    goto end; //Numeric
    }
    }

    // logo->max_width
    cJSON *max_width = cJSON_GetObjectItemCaseSensitive(logoJSON, "maxWidth");
    if (max_width) { 
    if(!cJSON_IsNumber(max_width))
    {
    goto end; //Numeric
    }
    }

    // logo->max_height
    cJSON *max_height = cJSON_GetObjectItemCaseSensitive(logoJSON, "maxHeight");
    if (max_height) { 
    if(!cJSON_IsNumber(max_height))
    {
    goto end; //Numeric
    }
    }

    // logo->custom_link_url
    cJSON *custom_link_url = cJSON_GetObjectItemCaseSensitive(logoJSON, "customLinkURL");
    if (custom_link_url) { 
    if(!cJSON_IsString(custom_link_url) && !cJSON_IsNull(custom_link_url))
    {
    goto end; //String
    }
    }

    // logo->background_color
    cJSON *background_color = cJSON_GetObjectItemCaseSensitive(logoJSON, "backgroundColor");
    if (background_color) { 
    if(!cJSON_IsString(background_color) && !cJSON_IsNull(background_color))
    {
    goto end; //String
    }
    }

    // logo->defalt_logo_url
    cJSON *defalt_logo_url = cJSON_GetObjectItemCaseSensitive(logoJSON, "defaltLogoURL");
    if (defalt_logo_url) { 
    if(!cJSON_IsString(defalt_logo_url) && !cJSON_IsNull(defalt_logo_url))
    {
    goto end; //String
    }
    }

    // logo->defalt_retina_logo_url
    cJSON *defalt_retina_logo_url = cJSON_GetObjectItemCaseSensitive(logoJSON, "defaltRetinaLogoURL");
    if (defalt_retina_logo_url) { 
    if(!cJSON_IsString(defalt_retina_logo_url) && !cJSON_IsNull(defalt_retina_logo_url))
    {
    goto end; //String
    }
    }

    // logo->defalt_sticky_logo_url
    cJSON *defalt_sticky_logo_url = cJSON_GetObjectItemCaseSensitive(logoJSON, "defaltStickyLogoURL");
    if (defalt_sticky_logo_url) { 
    if(!cJSON_IsString(defalt_sticky_logo_url) && !cJSON_IsNull(defalt_sticky_logo_url))
    {
    goto end; //String
    }
    }

    // logo->defalt_sticky_retina_logo_url
    cJSON *defalt_sticky_retina_logo_url = cJSON_GetObjectItemCaseSensitive(logoJSON, "defaltStickyRetinaLogoURL");
    if (defalt_sticky_retina_logo_url) { 
    if(!cJSON_IsString(defalt_sticky_retina_logo_url) && !cJSON_IsNull(defalt_sticky_retina_logo_url))
    {
    goto end; //String
    }
    }

    // logo->defalt_mobile_logo_url
    cJSON *defalt_mobile_logo_url = cJSON_GetObjectItemCaseSensitive(logoJSON, "defaltMobileLogoURL");
    if (defalt_mobile_logo_url) { 
    if(!cJSON_IsString(defalt_mobile_logo_url) && !cJSON_IsNull(defalt_mobile_logo_url))
    {
    goto end; //String
    }
    }

    // logo->defalt_mobile_retina_logo_url
    cJSON *defalt_mobile_retina_logo_url = cJSON_GetObjectItemCaseSensitive(logoJSON, "defaltMobileRetinaLogoURL");
    if (defalt_mobile_retina_logo_url) { 
    if(!cJSON_IsString(defalt_mobile_retina_logo_url) && !cJSON_IsNull(defalt_mobile_retina_logo_url))
    {
    goto end; //String
    }
    }

    // logo->footer
    cJSON *footer = cJSON_GetObjectItemCaseSensitive(logoJSON, "footer");
    if (footer) { 
    if(!cJSON_IsString(footer) && !cJSON_IsNull(footer))
    {
    goto end; //String
    }
    }

    // logo->header
    cJSON *header = cJSON_GetObjectItemCaseSensitive(logoJSON, "header");
    if (header) { 
    if(!cJSON_IsString(header) && !cJSON_IsNull(header))
    {
    goto end; //String
    }
    }


    logo_local_var = logo_create (
        margin ? margin_local_nonprim : NULL,
        alignment ? alignmentVariable : contentservice_logo_ALIGNMENT_NULL,
        width ? width->valuedouble : 0,
        height ? height->valuedouble : 0,
        max_width ? max_width->valuedouble : 0,
        max_height ? max_height->valuedouble : 0,
        custom_link_url && !cJSON_IsNull(custom_link_url) ? strdup(custom_link_url->valuestring) : NULL,
        background_color && !cJSON_IsNull(background_color) ? strdup(background_color->valuestring) : NULL,
        defalt_logo_url && !cJSON_IsNull(defalt_logo_url) ? strdup(defalt_logo_url->valuestring) : NULL,
        defalt_retina_logo_url && !cJSON_IsNull(defalt_retina_logo_url) ? strdup(defalt_retina_logo_url->valuestring) : NULL,
        defalt_sticky_logo_url && !cJSON_IsNull(defalt_sticky_logo_url) ? strdup(defalt_sticky_logo_url->valuestring) : NULL,
        defalt_sticky_retina_logo_url && !cJSON_IsNull(defalt_sticky_retina_logo_url) ? strdup(defalt_sticky_retina_logo_url->valuestring) : NULL,
        defalt_mobile_logo_url && !cJSON_IsNull(defalt_mobile_logo_url) ? strdup(defalt_mobile_logo_url->valuestring) : NULL,
        defalt_mobile_retina_logo_url && !cJSON_IsNull(defalt_mobile_retina_logo_url) ? strdup(defalt_mobile_retina_logo_url->valuestring) : NULL,
        footer && !cJSON_IsNull(footer) ? strdup(footer->valuestring) : NULL,
        header && !cJSON_IsNull(header) ? strdup(header->valuestring) : NULL
        );

    return logo_local_var;
end:
    if (margin_local_nonprim) {
        margin_free(margin_local_nonprim);
        margin_local_nonprim = NULL;
    }
    return NULL;

}
