/*
 * title_bar_options.h
 *
 * 
 */

#ifndef _title_bar_options_H_
#define _title_bar_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct title_bar_options_t title_bar_options_t;


// Enum PAGETITLEBAR for title_bar_options

typedef enum  { contentservice_title_bar_options_PAGETITLEBAR_NULL = 0, contentservice_title_bar_options_PAGETITLEBAR_ShowBarAndContent, contentservice_title_bar_options_PAGETITLEBAR_ShowContentOnly, contentservice_title_bar_options_PAGETITLEBAR_Hide } contentservice_title_bar_options_PAGETITLEBAR_e;

char* title_bar_options_page_title_bar_ToString(contentservice_title_bar_options_PAGETITLEBAR_e page_title_bar);

contentservice_title_bar_options_PAGETITLEBAR_e title_bar_options_page_title_bar_FromString(char* page_title_bar);

// Enum PAGETITLEBARCONTENT for title_bar_options

typedef enum  { contentservice_title_bar_options_PAGETITLEBARCONTENT_NULL = 0, contentservice_title_bar_options_PAGETITLEBARCONTENT_None, contentservice_title_bar_options_PAGETITLEBARCONTENT_SearchBar, contentservice_title_bar_options_PAGETITLEBARCONTENT_Breadcrumbs } contentservice_title_bar_options_PAGETITLEBARCONTENT_e;

char* title_bar_options_page_title_bar_content_ToString(contentservice_title_bar_options_PAGETITLEBARCONTENT_e page_title_bar_content);

contentservice_title_bar_options_PAGETITLEBARCONTENT_e title_bar_options_page_title_bar_content_FromString(char* page_title_bar_content);

// Enum PAGETITLEBARTEXTALIGNMENT for title_bar_options

typedef enum  { contentservice_title_bar_options_PAGETITLEBARTEXTALIGNMENT_NULL = 0, contentservice_title_bar_options_PAGETITLEBARTEXTALIGNMENT_Center, contentservice_title_bar_options_PAGETITLEBARTEXTALIGNMENT_Right, contentservice_title_bar_options_PAGETITLEBARTEXTALIGNMENT_Left } contentservice_title_bar_options_PAGETITLEBARTEXTALIGNMENT_e;

char* title_bar_options_page_title_bar_text_alignment_ToString(contentservice_title_bar_options_PAGETITLEBARTEXTALIGNMENT_e page_title_bar_text_alignment);

contentservice_title_bar_options_PAGETITLEBARTEXTALIGNMENT_e title_bar_options_page_title_bar_text_alignment_FromString(char* page_title_bar_text_alignment);



typedef struct title_bar_options_t {
    int enable_fading_animations; //boolean
    int enable_page_title_bar_headings; //boolean
    int enable_full_width_page_title_bar; //boolean
    int enable_background_image_parallax; //boolean
    int enable_full_width_background_image; //boolean
    char *background_image_url; // string
    char *retina_background_image_url; // string
    char *background_color; // string
    char *borders_color; // string
    char *heading_font_color; // string
    char *heading_font_size; // string
    char *heading_line_height; // string
    char *subheading_font_color; // string
    char *subheading_font_size; // string
    contentservice_title_bar_options_PAGETITLEBAR_e page_title_bar; //enum
    contentservice_title_bar_options_PAGETITLEBARCONTENT_e page_title_bar_content; //enum
    contentservice_title_bar_options_PAGETITLEBARTEXTALIGNMENT_e page_title_bar_text_alignment; //enum

} title_bar_options_t;

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
);

void title_bar_options_free(title_bar_options_t *title_bar_options);

title_bar_options_t *title_bar_options_parseFromJSON(cJSON *title_bar_optionsJSON);

cJSON *title_bar_options_convertToJSON(title_bar_options_t *title_bar_options);

#endif /* _title_bar_options_H_ */

