/*
 * typography.h
 *
 * 
 */

#ifndef _typography_H_
#define _typography_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct typography_t typography_t;




typedef struct typography_t {
    char *font_size; // string
    char *link_color; // string
    char *font_color; // string
    char *font_family; // string
    char *letter_spacing; // string
    char *link_color_hover; // string
    char *backup_font_family; // string
    char *font_weight_and_style; // string

} typography_t;

typography_t *typography_create(
    char *font_size,
    char *link_color,
    char *font_color,
    char *font_family,
    char *letter_spacing,
    char *link_color_hover,
    char *backup_font_family,
    char *font_weight_and_style
);

void typography_free(typography_t *typography);

typography_t *typography_parseFromJSON(cJSON *typographyJSON);

cJSON *typography_convertToJSON(typography_t *typography);

#endif /* _typography_H_ */

