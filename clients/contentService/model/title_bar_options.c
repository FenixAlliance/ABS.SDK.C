#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "title_bar_options.h"


char* title_bar_options_page_title_bar_ToString(contentservice_title_bar_options_PAGETITLEBAR_e page_title_bar) {
    char* page_title_barArray[] =  { "NULL", "ShowBarAndContent", "ShowContentOnly", "Hide" };
    return page_title_barArray[page_title_bar];
}

contentservice_title_bar_options_PAGETITLEBAR_e title_bar_options_page_title_bar_FromString(char* page_title_bar){
    int stringToReturn = 0;
    char *page_title_barArray[] =  { "NULL", "ShowBarAndContent", "ShowContentOnly", "Hide" };
    size_t sizeofArray = sizeof(page_title_barArray) / sizeof(page_title_barArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(page_title_bar, page_title_barArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* title_bar_options_page_title_bar_content_ToString(contentservice_title_bar_options_PAGETITLEBARCONTENT_e page_title_bar_content) {
    char* page_title_bar_contentArray[] =  { "NULL", "None", "SearchBar", "Breadcrumbs" };
    return page_title_bar_contentArray[page_title_bar_content];
}

contentservice_title_bar_options_PAGETITLEBARCONTENT_e title_bar_options_page_title_bar_content_FromString(char* page_title_bar_content){
    int stringToReturn = 0;
    char *page_title_bar_contentArray[] =  { "NULL", "None", "SearchBar", "Breadcrumbs" };
    size_t sizeofArray = sizeof(page_title_bar_contentArray) / sizeof(page_title_bar_contentArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(page_title_bar_content, page_title_bar_contentArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* title_bar_options_page_title_bar_text_alignment_ToString(contentservice_title_bar_options_PAGETITLEBARTEXTALIGNMENT_e page_title_bar_text_alignment) {
    char* page_title_bar_text_alignmentArray[] =  { "NULL", "Center", "Right", "Left" };
    return page_title_bar_text_alignmentArray[page_title_bar_text_alignment];
}

contentservice_title_bar_options_PAGETITLEBARTEXTALIGNMENT_e title_bar_options_page_title_bar_text_alignment_FromString(char* page_title_bar_text_alignment){
    int stringToReturn = 0;
    char *page_title_bar_text_alignmentArray[] =  { "NULL", "Center", "Right", "Left" };
    size_t sizeofArray = sizeof(page_title_bar_text_alignmentArray) / sizeof(page_title_bar_text_alignmentArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(page_title_bar_text_alignment, page_title_bar_text_alignmentArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

title_bar_options_t *title_bar_options_create(
    int enable_fading_animations,
    int enable_page_title_bar_headings,
    int enable_full_width_page_title_bar,
    int enable_background_image_parallax,
    int enable_full_width_background_image,
    char *background_image_url,
    char *retina_background_image_url,
    char *background_color,
    char *borders_color,
    char *heading_font_color,
    char *heading_font_size,
    char *heading_line_height,
    char *subheading_font_color,
    char *subheading_font_size,
    contentservice_title_bar_options_PAGETITLEBAR_e page_title_bar,
    contentservice_title_bar_options_PAGETITLEBARCONTENT_e page_title_bar_content,
    contentservice_title_bar_options_PAGETITLEBARTEXTALIGNMENT_e page_title_bar_text_alignment
    ) {
    title_bar_options_t *title_bar_options_local_var = malloc(sizeof(title_bar_options_t));
    if (!title_bar_options_local_var) {
        return NULL;
    }
    title_bar_options_local_var->enable_fading_animations = enable_fading_animations;
    title_bar_options_local_var->enable_page_title_bar_headings = enable_page_title_bar_headings;
    title_bar_options_local_var->enable_full_width_page_title_bar = enable_full_width_page_title_bar;
    title_bar_options_local_var->enable_background_image_parallax = enable_background_image_parallax;
    title_bar_options_local_var->enable_full_width_background_image = enable_full_width_background_image;
    title_bar_options_local_var->background_image_url = background_image_url;
    title_bar_options_local_var->retina_background_image_url = retina_background_image_url;
    title_bar_options_local_var->background_color = background_color;
    title_bar_options_local_var->borders_color = borders_color;
    title_bar_options_local_var->heading_font_color = heading_font_color;
    title_bar_options_local_var->heading_font_size = heading_font_size;
    title_bar_options_local_var->heading_line_height = heading_line_height;
    title_bar_options_local_var->subheading_font_color = subheading_font_color;
    title_bar_options_local_var->subheading_font_size = subheading_font_size;
    title_bar_options_local_var->page_title_bar = page_title_bar;
    title_bar_options_local_var->page_title_bar_content = page_title_bar_content;
    title_bar_options_local_var->page_title_bar_text_alignment = page_title_bar_text_alignment;

    return title_bar_options_local_var;
}


void title_bar_options_free(title_bar_options_t *title_bar_options) {
    if(NULL == title_bar_options){
        return ;
    }
    listEntry_t *listEntry;
    if (title_bar_options->background_image_url) {
        free(title_bar_options->background_image_url);
        title_bar_options->background_image_url = NULL;
    }
    if (title_bar_options->retina_background_image_url) {
        free(title_bar_options->retina_background_image_url);
        title_bar_options->retina_background_image_url = NULL;
    }
    if (title_bar_options->background_color) {
        free(title_bar_options->background_color);
        title_bar_options->background_color = NULL;
    }
    if (title_bar_options->borders_color) {
        free(title_bar_options->borders_color);
        title_bar_options->borders_color = NULL;
    }
    if (title_bar_options->heading_font_color) {
        free(title_bar_options->heading_font_color);
        title_bar_options->heading_font_color = NULL;
    }
    if (title_bar_options->heading_font_size) {
        free(title_bar_options->heading_font_size);
        title_bar_options->heading_font_size = NULL;
    }
    if (title_bar_options->heading_line_height) {
        free(title_bar_options->heading_line_height);
        title_bar_options->heading_line_height = NULL;
    }
    if (title_bar_options->subheading_font_color) {
        free(title_bar_options->subheading_font_color);
        title_bar_options->subheading_font_color = NULL;
    }
    if (title_bar_options->subheading_font_size) {
        free(title_bar_options->subheading_font_size);
        title_bar_options->subheading_font_size = NULL;
    }
    free(title_bar_options);
}

cJSON *title_bar_options_convertToJSON(title_bar_options_t *title_bar_options) {
    cJSON *item = cJSON_CreateObject();

    // title_bar_options->enable_fading_animations
    if(title_bar_options->enable_fading_animations) {
    if(cJSON_AddBoolToObject(item, "enableFadingAnimations", title_bar_options->enable_fading_animations) == NULL) {
    goto fail; //Bool
    }
    }


    // title_bar_options->enable_page_title_bar_headings
    if(title_bar_options->enable_page_title_bar_headings) {
    if(cJSON_AddBoolToObject(item, "enablePageTitleBarHeadings", title_bar_options->enable_page_title_bar_headings) == NULL) {
    goto fail; //Bool
    }
    }


    // title_bar_options->enable_full_width_page_title_bar
    if(title_bar_options->enable_full_width_page_title_bar) {
    if(cJSON_AddBoolToObject(item, "enableFullWidthPageTitleBar", title_bar_options->enable_full_width_page_title_bar) == NULL) {
    goto fail; //Bool
    }
    }


    // title_bar_options->enable_background_image_parallax
    if(title_bar_options->enable_background_image_parallax) {
    if(cJSON_AddBoolToObject(item, "enableBackgroundImageParallax", title_bar_options->enable_background_image_parallax) == NULL) {
    goto fail; //Bool
    }
    }


    // title_bar_options->enable_full_width_background_image
    if(title_bar_options->enable_full_width_background_image) {
    if(cJSON_AddBoolToObject(item, "enableFullWidthBackgroundImage", title_bar_options->enable_full_width_background_image) == NULL) {
    goto fail; //Bool
    }
    }


    // title_bar_options->background_image_url
    if(title_bar_options->background_image_url) {
    if(cJSON_AddStringToObject(item, "backgroundImageURL", title_bar_options->background_image_url) == NULL) {
    goto fail; //String
    }
    }


    // title_bar_options->retina_background_image_url
    if(title_bar_options->retina_background_image_url) {
    if(cJSON_AddStringToObject(item, "retinaBackgroundImageURL", title_bar_options->retina_background_image_url) == NULL) {
    goto fail; //String
    }
    }


    // title_bar_options->background_color
    if(title_bar_options->background_color) {
    if(cJSON_AddStringToObject(item, "backgroundColor", title_bar_options->background_color) == NULL) {
    goto fail; //String
    }
    }


    // title_bar_options->borders_color
    if(title_bar_options->borders_color) {
    if(cJSON_AddStringToObject(item, "bordersColor", title_bar_options->borders_color) == NULL) {
    goto fail; //String
    }
    }


    // title_bar_options->heading_font_color
    if(title_bar_options->heading_font_color) {
    if(cJSON_AddStringToObject(item, "headingFontColor", title_bar_options->heading_font_color) == NULL) {
    goto fail; //String
    }
    }


    // title_bar_options->heading_font_size
    if(title_bar_options->heading_font_size) {
    if(cJSON_AddStringToObject(item, "headingFontSize", title_bar_options->heading_font_size) == NULL) {
    goto fail; //String
    }
    }


    // title_bar_options->heading_line_height
    if(title_bar_options->heading_line_height) {
    if(cJSON_AddStringToObject(item, "headingLineHeight", title_bar_options->heading_line_height) == NULL) {
    goto fail; //String
    }
    }


    // title_bar_options->subheading_font_color
    if(title_bar_options->subheading_font_color) {
    if(cJSON_AddStringToObject(item, "subheadingFontColor", title_bar_options->subheading_font_color) == NULL) {
    goto fail; //String
    }
    }


    // title_bar_options->subheading_font_size
    if(title_bar_options->subheading_font_size) {
    if(cJSON_AddStringToObject(item, "subheadingFontSize", title_bar_options->subheading_font_size) == NULL) {
    goto fail; //String
    }
    }


    // title_bar_options->page_title_bar
    if(title_bar_options->page_title_bar != contentservice_title_bar_options_PAGETITLEBAR_NULL) {
    if(cJSON_AddStringToObject(item, "pageTitleBar", page_title_bartitle_bar_options_ToString(title_bar_options->page_title_bar)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // title_bar_options->page_title_bar_content
    if(title_bar_options->page_title_bar_content != contentservice_title_bar_options_PAGETITLEBARCONTENT_NULL) {
    if(cJSON_AddStringToObject(item, "pageTitleBarContent", page_title_bar_contenttitle_bar_options_ToString(title_bar_options->page_title_bar_content)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // title_bar_options->page_title_bar_text_alignment
    if(title_bar_options->page_title_bar_text_alignment != contentservice_title_bar_options_PAGETITLEBARTEXTALIGNMENT_NULL) {
    if(cJSON_AddStringToObject(item, "pageTitleBarTextAlignment", page_title_bar_text_alignmenttitle_bar_options_ToString(title_bar_options->page_title_bar_text_alignment)) == NULL)
    {
    goto fail; //Enum
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

title_bar_options_t *title_bar_options_parseFromJSON(cJSON *title_bar_optionsJSON){

    title_bar_options_t *title_bar_options_local_var = NULL;

    // title_bar_options->enable_fading_animations
    cJSON *enable_fading_animations = cJSON_GetObjectItemCaseSensitive(title_bar_optionsJSON, "enableFadingAnimations");
    if (enable_fading_animations) { 
    if(!cJSON_IsBool(enable_fading_animations))
    {
    goto end; //Bool
    }
    }

    // title_bar_options->enable_page_title_bar_headings
    cJSON *enable_page_title_bar_headings = cJSON_GetObjectItemCaseSensitive(title_bar_optionsJSON, "enablePageTitleBarHeadings");
    if (enable_page_title_bar_headings) { 
    if(!cJSON_IsBool(enable_page_title_bar_headings))
    {
    goto end; //Bool
    }
    }

    // title_bar_options->enable_full_width_page_title_bar
    cJSON *enable_full_width_page_title_bar = cJSON_GetObjectItemCaseSensitive(title_bar_optionsJSON, "enableFullWidthPageTitleBar");
    if (enable_full_width_page_title_bar) { 
    if(!cJSON_IsBool(enable_full_width_page_title_bar))
    {
    goto end; //Bool
    }
    }

    // title_bar_options->enable_background_image_parallax
    cJSON *enable_background_image_parallax = cJSON_GetObjectItemCaseSensitive(title_bar_optionsJSON, "enableBackgroundImageParallax");
    if (enable_background_image_parallax) { 
    if(!cJSON_IsBool(enable_background_image_parallax))
    {
    goto end; //Bool
    }
    }

    // title_bar_options->enable_full_width_background_image
    cJSON *enable_full_width_background_image = cJSON_GetObjectItemCaseSensitive(title_bar_optionsJSON, "enableFullWidthBackgroundImage");
    if (enable_full_width_background_image) { 
    if(!cJSON_IsBool(enable_full_width_background_image))
    {
    goto end; //Bool
    }
    }

    // title_bar_options->background_image_url
    cJSON *background_image_url = cJSON_GetObjectItemCaseSensitive(title_bar_optionsJSON, "backgroundImageURL");
    if (background_image_url) { 
    if(!cJSON_IsString(background_image_url) && !cJSON_IsNull(background_image_url))
    {
    goto end; //String
    }
    }

    // title_bar_options->retina_background_image_url
    cJSON *retina_background_image_url = cJSON_GetObjectItemCaseSensitive(title_bar_optionsJSON, "retinaBackgroundImageURL");
    if (retina_background_image_url) { 
    if(!cJSON_IsString(retina_background_image_url) && !cJSON_IsNull(retina_background_image_url))
    {
    goto end; //String
    }
    }

    // title_bar_options->background_color
    cJSON *background_color = cJSON_GetObjectItemCaseSensitive(title_bar_optionsJSON, "backgroundColor");
    if (background_color) { 
    if(!cJSON_IsString(background_color) && !cJSON_IsNull(background_color))
    {
    goto end; //String
    }
    }

    // title_bar_options->borders_color
    cJSON *borders_color = cJSON_GetObjectItemCaseSensitive(title_bar_optionsJSON, "bordersColor");
    if (borders_color) { 
    if(!cJSON_IsString(borders_color) && !cJSON_IsNull(borders_color))
    {
    goto end; //String
    }
    }

    // title_bar_options->heading_font_color
    cJSON *heading_font_color = cJSON_GetObjectItemCaseSensitive(title_bar_optionsJSON, "headingFontColor");
    if (heading_font_color) { 
    if(!cJSON_IsString(heading_font_color) && !cJSON_IsNull(heading_font_color))
    {
    goto end; //String
    }
    }

    // title_bar_options->heading_font_size
    cJSON *heading_font_size = cJSON_GetObjectItemCaseSensitive(title_bar_optionsJSON, "headingFontSize");
    if (heading_font_size) { 
    if(!cJSON_IsString(heading_font_size) && !cJSON_IsNull(heading_font_size))
    {
    goto end; //String
    }
    }

    // title_bar_options->heading_line_height
    cJSON *heading_line_height = cJSON_GetObjectItemCaseSensitive(title_bar_optionsJSON, "headingLineHeight");
    if (heading_line_height) { 
    if(!cJSON_IsString(heading_line_height) && !cJSON_IsNull(heading_line_height))
    {
    goto end; //String
    }
    }

    // title_bar_options->subheading_font_color
    cJSON *subheading_font_color = cJSON_GetObjectItemCaseSensitive(title_bar_optionsJSON, "subheadingFontColor");
    if (subheading_font_color) { 
    if(!cJSON_IsString(subheading_font_color) && !cJSON_IsNull(subheading_font_color))
    {
    goto end; //String
    }
    }

    // title_bar_options->subheading_font_size
    cJSON *subheading_font_size = cJSON_GetObjectItemCaseSensitive(title_bar_optionsJSON, "subheadingFontSize");
    if (subheading_font_size) { 
    if(!cJSON_IsString(subheading_font_size) && !cJSON_IsNull(subheading_font_size))
    {
    goto end; //String
    }
    }

    // title_bar_options->page_title_bar
    cJSON *page_title_bar = cJSON_GetObjectItemCaseSensitive(title_bar_optionsJSON, "pageTitleBar");
    contentservice_title_bar_options_PAGETITLEBAR_e page_title_barVariable;
    if (page_title_bar) { 
    if(!cJSON_IsString(page_title_bar))
    {
    goto end; //Enum
    }
    page_title_barVariable = title_bar_options_page_title_bar_FromString(page_title_bar->valuestring);
    }

    // title_bar_options->page_title_bar_content
    cJSON *page_title_bar_content = cJSON_GetObjectItemCaseSensitive(title_bar_optionsJSON, "pageTitleBarContent");
    contentservice_title_bar_options_PAGETITLEBARCONTENT_e page_title_bar_contentVariable;
    if (page_title_bar_content) { 
    if(!cJSON_IsString(page_title_bar_content))
    {
    goto end; //Enum
    }
    page_title_bar_contentVariable = title_bar_options_page_title_bar_content_FromString(page_title_bar_content->valuestring);
    }

    // title_bar_options->page_title_bar_text_alignment
    cJSON *page_title_bar_text_alignment = cJSON_GetObjectItemCaseSensitive(title_bar_optionsJSON, "pageTitleBarTextAlignment");
    contentservice_title_bar_options_PAGETITLEBARTEXTALIGNMENT_e page_title_bar_text_alignmentVariable;
    if (page_title_bar_text_alignment) { 
    if(!cJSON_IsString(page_title_bar_text_alignment))
    {
    goto end; //Enum
    }
    page_title_bar_text_alignmentVariable = title_bar_options_page_title_bar_text_alignment_FromString(page_title_bar_text_alignment->valuestring);
    }


    title_bar_options_local_var = title_bar_options_create (
        enable_fading_animations ? enable_fading_animations->valueint : 0,
        enable_page_title_bar_headings ? enable_page_title_bar_headings->valueint : 0,
        enable_full_width_page_title_bar ? enable_full_width_page_title_bar->valueint : 0,
        enable_background_image_parallax ? enable_background_image_parallax->valueint : 0,
        enable_full_width_background_image ? enable_full_width_background_image->valueint : 0,
        background_image_url && !cJSON_IsNull(background_image_url) ? strdup(background_image_url->valuestring) : NULL,
        retina_background_image_url && !cJSON_IsNull(retina_background_image_url) ? strdup(retina_background_image_url->valuestring) : NULL,
        background_color && !cJSON_IsNull(background_color) ? strdup(background_color->valuestring) : NULL,
        borders_color && !cJSON_IsNull(borders_color) ? strdup(borders_color->valuestring) : NULL,
        heading_font_color && !cJSON_IsNull(heading_font_color) ? strdup(heading_font_color->valuestring) : NULL,
        heading_font_size && !cJSON_IsNull(heading_font_size) ? strdup(heading_font_size->valuestring) : NULL,
        heading_line_height && !cJSON_IsNull(heading_line_height) ? strdup(heading_line_height->valuestring) : NULL,
        subheading_font_color && !cJSON_IsNull(subheading_font_color) ? strdup(subheading_font_color->valuestring) : NULL,
        subheading_font_size && !cJSON_IsNull(subheading_font_size) ? strdup(subheading_font_size->valuestring) : NULL,
        page_title_bar ? page_title_barVariable : contentservice_title_bar_options_PAGETITLEBAR_NULL,
        page_title_bar_content ? page_title_bar_contentVariable : contentservice_title_bar_options_PAGETITLEBARCONTENT_NULL,
        page_title_bar_text_alignment ? page_title_bar_text_alignmentVariable : contentservice_title_bar_options_PAGETITLEBARTEXTALIGNMENT_NULL
        );

    return title_bar_options_local_var;
end:
    return NULL;

}
