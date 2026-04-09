/*
 * color_options.h
 *
 * 
 */

#ifndef _color_options_H_
#define _color_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct color_options_t color_options_t;

#include "color_scheme.h"

// Enum PRIMARYSKIN for color_options

typedef enum  { contentservice_color_options_PRIMARYSKIN_NULL = 0, contentservice_color_options_PRIMARYSKIN_Dark, contentservice_color_options_PRIMARYSKIN_Light } contentservice_color_options_PRIMARYSKIN_e;

char* color_options_primary_skin_ToString(contentservice_color_options_PRIMARYSKIN_e primary_skin);

contentservice_color_options_PRIMARYSKIN_e color_options_primary_skin_FromString(char* primary_skin);



typedef struct color_options_t {
    contentservice_color_options_PRIMARYSKIN_e primary_skin; //enum
    char *primary_color; // string
    char *secondary_color; // string
    struct color_scheme_t *color_scheme; //model

} color_options_t;

color_options_t *color_options_create(
    contentservice_color_options_PRIMARYSKIN_e primary_skin,
    char *primary_color,
    char *secondary_color,
    color_scheme_t *color_scheme
);

void color_options_free(color_options_t *color_options);

color_options_t *color_options_parseFromJSON(cJSON *color_optionsJSON);

cJSON *color_options_convertToJSON(color_options_t *color_options);

#endif /* _color_options_H_ */

