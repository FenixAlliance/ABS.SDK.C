/*
 * color_scheme.h
 *
 * 
 */

#ifndef _color_scheme_H_
#define _color_scheme_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct color_scheme_t color_scheme_t;




typedef struct color_scheme_t {
    char *color0; // string
    char *color1; // string
    char *color2; // string
    char *color3; // string
    char *color4; // string
    char *color5; // string
    char *color6; // string
    char *color7; // string
    char *color8; // string
    char *color9; // string

} color_scheme_t;

color_scheme_t *color_scheme_create(
    char *color0,
    char *color1,
    char *color2,
    char *color3,
    char *color4,
    char *color5,
    char *color6,
    char *color7,
    char *color8,
    char *color9
);

void color_scheme_free(color_scheme_t *color_scheme);

color_scheme_t *color_scheme_parseFromJSON(cJSON *color_schemeJSON);

cJSON *color_scheme_convertToJSON(color_scheme_t *color_scheme);

#endif /* _color_scheme_H_ */

