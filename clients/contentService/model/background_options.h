/*
 * background_options.h
 *
 * 
 */

#ifndef _background_options_H_
#define _background_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct background_options_t background_options_t;




typedef struct background_options_t {
    int background_pattern_id; //numeric
    int enable_background_pattern; //boolean
    char *background_image_for_page; // string
    char *background_color_for_page; // string
    char *main_content_color; // string
    char *main_content_image_url; // string

} background_options_t;

background_options_t *background_options_create(
    int background_pattern_id,
    int enable_background_pattern,
    char *background_image_for_page,
    char *background_color_for_page,
    char *main_content_color,
    char *main_content_image_url
);

void background_options_free(background_options_t *background_options);

background_options_t *background_options_parseFromJSON(cJSON *background_optionsJSON);

cJSON *background_options_convertToJSON(background_options_t *background_options);

#endif /* _background_options_H_ */

