/*
 * layout_options.h
 *
 * 
 */

#ifndef _layout_options_H_
#define _layout_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct layout_options_t layout_options_t;


// Enum LAYOUT for layout_options

typedef enum  { contentservice_layout_options_LAYOUT_NULL = 0, contentservice_layout_options_LAYOUT_Boxed, contentservice_layout_options_LAYOUT_Wide } contentservice_layout_options_LAYOUT_e;

char* layout_options_layout_ToString(contentservice_layout_options_LAYOUT_e layout);

contentservice_layout_options_LAYOUT_e layout_options_layout_FromString(char* layout);



typedef struct layout_options_t {
    char *single_sidebar_width; // string
    char *single_sidebar_gutter; // string
    char *dial_sidebar_width1; // string
    char *dial_sidebar_width2; // string
    char *dial_sidebar_gutter; // string
    char *full_width_content_padding; // string
    char *page_content_padding_bottom; // string
    char *page_content_padding_top; // string
    char *site_width; // string
    contentservice_layout_options_LAYOUT_e layout; //enum

} layout_options_t;

layout_options_t *layout_options_create(
    char *single_sidebar_width,
    char *single_sidebar_gutter,
    char *dial_sidebar_width1,
    char *dial_sidebar_width2,
    char *dial_sidebar_gutter,
    char *full_width_content_padding,
    char *page_content_padding_bottom,
    char *page_content_padding_top,
    char *site_width,
    contentservice_layout_options_LAYOUT_e layout
);

void layout_options_free(layout_options_t *layout_options);

layout_options_t *layout_options_parseFromJSON(cJSON *layout_optionsJSON);

cJSON *layout_options_convertToJSON(layout_options_t *layout_options);

#endif /* _layout_options_H_ */

