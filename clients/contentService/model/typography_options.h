/*
 * typography_options.h
 *
 * 
 */

#ifndef _typography_options_H_
#define _typography_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct typography_options_t typography_options_t;

#include "custom_font.h"
#include "typography.h"



typedef struct typography_options_t {
    struct typography_t *body_typography; //model
    struct typography_t *headers_typography; //model
    list_t *custom_fonts; //nonprimitive container

} typography_options_t;

typography_options_t *typography_options_create(
    typography_t *body_typography,
    typography_t *headers_typography,
    list_t *custom_fonts
);

void typography_options_free(typography_options_t *typography_options);

typography_options_t *typography_options_parseFromJSON(cJSON *typography_optionsJSON);

cJSON *typography_options_convertToJSON(typography_options_t *typography_options);

#endif /* _typography_options_H_ */

