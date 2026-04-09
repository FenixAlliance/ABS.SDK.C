/*
 * breadcrumbs_options.h
 *
 * 
 */

#ifndef _breadcrumbs_options_H_
#define _breadcrumbs_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct breadcrumbs_options_t breadcrumbs_options_t;




typedef struct breadcrumbs_options_t {
    int enable_breadcrumbs_on_mobile_devices; //boolean
    int enable_categories_on_breadcrumbs; //boolean
    int enable_post_types_on_breadcrumbs; //boolean
    char *breadcrumbs_prefix; // string
    char *breadcrumbs_font_size; // string
    char *breadcrumbs_separator; // string
    char *breadcrumbs_font_color; // string
    char *breadcrumbs_font_color_hover; // string

} breadcrumbs_options_t;

breadcrumbs_options_t *breadcrumbs_options_create(
    int enable_breadcrumbs_on_mobile_devices,
    int enable_categories_on_breadcrumbs,
    int enable_post_types_on_breadcrumbs,
    char *breadcrumbs_prefix,
    char *breadcrumbs_font_size,
    char *breadcrumbs_separator,
    char *breadcrumbs_font_color,
    char *breadcrumbs_font_color_hover
);

void breadcrumbs_options_free(breadcrumbs_options_t *breadcrumbs_options);

breadcrumbs_options_t *breadcrumbs_options_parseFromJSON(cJSON *breadcrumbs_optionsJSON);

cJSON *breadcrumbs_options_convertToJSON(breadcrumbs_options_t *breadcrumbs_options);

#endif /* _breadcrumbs_options_H_ */

