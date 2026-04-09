/*
 * header_options.h
 *
 * 
 */

#ifndef _header_options_H_
#define _header_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct header_options_t header_options_t;

#include "padding.h"

// Enum HEADERLAYOUT for header_options

typedef enum  { contentservice_header_options_HEADERLAYOUT_NULL = 0, contentservice_header_options_HEADERLAYOUT__01, contentservice_header_options_HEADERLAYOUT__02, contentservice_header_options_HEADERLAYOUT__03, contentservice_header_options_HEADERLAYOUT__04, contentservice_header_options_HEADERLAYOUT__05, contentservice_header_options_HEADERLAYOUT__06 } contentservice_header_options_HEADERLAYOUT_e;

char* header_options_header_layout_ToString(contentservice_header_options_HEADERLAYOUT_e header_layout);

contentservice_header_options_HEADERLAYOUT_e header_options_header_layout_FromString(char* header_layout);

// Enum HEADERPOSITION for header_options

typedef enum  { contentservice_header_options_HEADERPOSITION_NULL = 0, contentservice_header_options_HEADERPOSITION_Top, contentservice_header_options_HEADERPOSITION_Right, contentservice_header_options_HEADERPOSITION_Center } contentservice_header_options_HEADERPOSITION_e;

char* header_options_header_position_ToString(contentservice_header_options_HEADERPOSITION_e header_position);

contentservice_header_options_HEADERPOSITION_e header_options_header_position_FromString(char* header_position);

// Enum TOPHEADERCONTENTTYPE2 for header_options

typedef enum  { contentservice_header_options_TOPHEADERCONTENTTYPE2_NULL = 0, contentservice_header_options_TOPHEADERCONTENTTYPE2_NavigationMenu, contentservice_header_options_TOPHEADERCONTENTTYPE2_AccountMenu, contentservice_header_options_TOPHEADERCONTENTTYPE2_ContactInfo, contentservice_header_options_TOPHEADERCONTENTTYPE2_SocialLinks, contentservice_header_options_TOPHEADERCONTENTTYPE2_LeaveEmpty } contentservice_header_options_TOPHEADERCONTENTTYPE2_e;

char* header_options_top_header_content_type2_ToString(contentservice_header_options_TOPHEADERCONTENTTYPE2_e top_header_content_type2);

contentservice_header_options_TOPHEADERCONTENTTYPE2_e header_options_top_header_content_type2_FromString(char* top_header_content_type2);

// Enum TOPHEADERCONTENTTYPE1 for header_options

typedef enum  { contentservice_header_options_TOPHEADERCONTENTTYPE1_NULL = 0, contentservice_header_options_TOPHEADERCONTENTTYPE1_NavigationMenu, contentservice_header_options_TOPHEADERCONTENTTYPE1_AccountMenu, contentservice_header_options_TOPHEADERCONTENTTYPE1_ContactInfo, contentservice_header_options_TOPHEADERCONTENTTYPE1_SocialLinks, contentservice_header_options_TOPHEADERCONTENTTYPE1_LeaveEmpty } contentservice_header_options_TOPHEADERCONTENTTYPE1_e;

char* header_options_top_header_content_type1_ToString(contentservice_header_options_TOPHEADERCONTENTTYPE1_e top_header_content_type1);

contentservice_header_options_TOPHEADERCONTENTTYPE1_e header_options_top_header_content_type1_FromString(char* top_header_content_type1);



typedef struct header_options_t {
    struct padding_t *header_padding; //model
    char *header_background_image_url; // string
    char *header_background_color; // string
    char *header_border_color; // string
    int enable_sticky_header; //boolean
    int enable_header_shadow; //boolean
    int enable_full_width_header; //boolean
    contentservice_header_options_HEADERLAYOUT_e header_layout; //enum
    contentservice_header_options_HEADERPOSITION_e header_position; //enum
    contentservice_header_options_TOPHEADERCONTENTTYPE2_e top_header_content_type2; //enum
    contentservice_header_options_TOPHEADERCONTENTTYPE1_e top_header_content_type1; //enum
    char *top_header_background_color; // string
    char *top_header_content1; // string
    char *top_header_content2; // string

} header_options_t;

header_options_t *header_options_create(
    padding_t *header_padding,
    char *header_background_image_url,
    char *header_background_color,
    char *header_border_color,
    int enable_sticky_header,
    int enable_header_shadow,
    int enable_full_width_header,
    contentservice_header_options_HEADERLAYOUT_e header_layout,
    contentservice_header_options_HEADERPOSITION_e header_position,
    contentservice_header_options_TOPHEADERCONTENTTYPE2_e top_header_content_type2,
    contentservice_header_options_TOPHEADERCONTENTTYPE1_e top_header_content_type1,
    char *top_header_background_color,
    char *top_header_content1,
    char *top_header_content2
);

void header_options_free(header_options_t *header_options);

header_options_t *header_options_parseFromJSON(cJSON *header_optionsJSON);

cJSON *header_options_convertToJSON(header_options_t *header_options);

#endif /* _header_options_H_ */

