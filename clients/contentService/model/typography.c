#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "typography.h"



typography_t *typography_create(
    char *font_size,
    char *link_color,
    char *font_color,
    char *font_family,
    char *letter_spacing,
    char *link_color_hover,
    char *backup_font_family,
    char *font_weight_and_style
    ) {
    typography_t *typography_local_var = malloc(sizeof(typography_t));
    if (!typography_local_var) {
        return NULL;
    }
    typography_local_var->font_size = font_size;
    typography_local_var->link_color = link_color;
    typography_local_var->font_color = font_color;
    typography_local_var->font_family = font_family;
    typography_local_var->letter_spacing = letter_spacing;
    typography_local_var->link_color_hover = link_color_hover;
    typography_local_var->backup_font_family = backup_font_family;
    typography_local_var->font_weight_and_style = font_weight_and_style;

    return typography_local_var;
}


void typography_free(typography_t *typography) {
    if(NULL == typography){
        return ;
    }
    listEntry_t *listEntry;
    if (typography->font_size) {
        free(typography->font_size);
        typography->font_size = NULL;
    }
    if (typography->link_color) {
        free(typography->link_color);
        typography->link_color = NULL;
    }
    if (typography->font_color) {
        free(typography->font_color);
        typography->font_color = NULL;
    }
    if (typography->font_family) {
        free(typography->font_family);
        typography->font_family = NULL;
    }
    if (typography->letter_spacing) {
        free(typography->letter_spacing);
        typography->letter_spacing = NULL;
    }
    if (typography->link_color_hover) {
        free(typography->link_color_hover);
        typography->link_color_hover = NULL;
    }
    if (typography->backup_font_family) {
        free(typography->backup_font_family);
        typography->backup_font_family = NULL;
    }
    if (typography->font_weight_and_style) {
        free(typography->font_weight_and_style);
        typography->font_weight_and_style = NULL;
    }
    free(typography);
}

cJSON *typography_convertToJSON(typography_t *typography) {
    cJSON *item = cJSON_CreateObject();

    // typography->font_size
    if(typography->font_size) {
    if(cJSON_AddStringToObject(item, "fontSize", typography->font_size) == NULL) {
    goto fail; //String
    }
    }


    // typography->link_color
    if(typography->link_color) {
    if(cJSON_AddStringToObject(item, "linkColor", typography->link_color) == NULL) {
    goto fail; //String
    }
    }


    // typography->font_color
    if(typography->font_color) {
    if(cJSON_AddStringToObject(item, "fontColor", typography->font_color) == NULL) {
    goto fail; //String
    }
    }


    // typography->font_family
    if(typography->font_family) {
    if(cJSON_AddStringToObject(item, "fontFamily", typography->font_family) == NULL) {
    goto fail; //String
    }
    }


    // typography->letter_spacing
    if(typography->letter_spacing) {
    if(cJSON_AddStringToObject(item, "letterSpacing", typography->letter_spacing) == NULL) {
    goto fail; //String
    }
    }


    // typography->link_color_hover
    if(typography->link_color_hover) {
    if(cJSON_AddStringToObject(item, "linkColorHover", typography->link_color_hover) == NULL) {
    goto fail; //String
    }
    }


    // typography->backup_font_family
    if(typography->backup_font_family) {
    if(cJSON_AddStringToObject(item, "backupFontFamily", typography->backup_font_family) == NULL) {
    goto fail; //String
    }
    }


    // typography->font_weight_and_style
    if(typography->font_weight_and_style) {
    if(cJSON_AddStringToObject(item, "fontWeightAndStyle", typography->font_weight_and_style) == NULL) {
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

typography_t *typography_parseFromJSON(cJSON *typographyJSON){

    typography_t *typography_local_var = NULL;

    // typography->font_size
    cJSON *font_size = cJSON_GetObjectItemCaseSensitive(typographyJSON, "fontSize");
    if (font_size) { 
    if(!cJSON_IsString(font_size) && !cJSON_IsNull(font_size))
    {
    goto end; //String
    }
    }

    // typography->link_color
    cJSON *link_color = cJSON_GetObjectItemCaseSensitive(typographyJSON, "linkColor");
    if (link_color) { 
    if(!cJSON_IsString(link_color) && !cJSON_IsNull(link_color))
    {
    goto end; //String
    }
    }

    // typography->font_color
    cJSON *font_color = cJSON_GetObjectItemCaseSensitive(typographyJSON, "fontColor");
    if (font_color) { 
    if(!cJSON_IsString(font_color) && !cJSON_IsNull(font_color))
    {
    goto end; //String
    }
    }

    // typography->font_family
    cJSON *font_family = cJSON_GetObjectItemCaseSensitive(typographyJSON, "fontFamily");
    if (font_family) { 
    if(!cJSON_IsString(font_family) && !cJSON_IsNull(font_family))
    {
    goto end; //String
    }
    }

    // typography->letter_spacing
    cJSON *letter_spacing = cJSON_GetObjectItemCaseSensitive(typographyJSON, "letterSpacing");
    if (letter_spacing) { 
    if(!cJSON_IsString(letter_spacing) && !cJSON_IsNull(letter_spacing))
    {
    goto end; //String
    }
    }

    // typography->link_color_hover
    cJSON *link_color_hover = cJSON_GetObjectItemCaseSensitive(typographyJSON, "linkColorHover");
    if (link_color_hover) { 
    if(!cJSON_IsString(link_color_hover) && !cJSON_IsNull(link_color_hover))
    {
    goto end; //String
    }
    }

    // typography->backup_font_family
    cJSON *backup_font_family = cJSON_GetObjectItemCaseSensitive(typographyJSON, "backupFontFamily");
    if (backup_font_family) { 
    if(!cJSON_IsString(backup_font_family) && !cJSON_IsNull(backup_font_family))
    {
    goto end; //String
    }
    }

    // typography->font_weight_and_style
    cJSON *font_weight_and_style = cJSON_GetObjectItemCaseSensitive(typographyJSON, "fontWeightAndStyle");
    if (font_weight_and_style) { 
    if(!cJSON_IsString(font_weight_and_style) && !cJSON_IsNull(font_weight_and_style))
    {
    goto end; //String
    }
    }


    typography_local_var = typography_create (
        font_size && !cJSON_IsNull(font_size) ? strdup(font_size->valuestring) : NULL,
        link_color && !cJSON_IsNull(link_color) ? strdup(link_color->valuestring) : NULL,
        font_color && !cJSON_IsNull(font_color) ? strdup(font_color->valuestring) : NULL,
        font_family && !cJSON_IsNull(font_family) ? strdup(font_family->valuestring) : NULL,
        letter_spacing && !cJSON_IsNull(letter_spacing) ? strdup(letter_spacing->valuestring) : NULL,
        link_color_hover && !cJSON_IsNull(link_color_hover) ? strdup(link_color_hover->valuestring) : NULL,
        backup_font_family && !cJSON_IsNull(backup_font_family) ? strdup(backup_font_family->valuestring) : NULL,
        font_weight_and_style && !cJSON_IsNull(font_weight_and_style) ? strdup(font_weight_and_style->valuestring) : NULL
        );

    return typography_local_var;
end:
    return NULL;

}
