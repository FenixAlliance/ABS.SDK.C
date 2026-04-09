/*
 * theming_options.h
 *
 * 
 */

#ifndef _theming_options_H_
#define _theming_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct theming_options_t theming_options_t;




typedef struct theming_options_t {
    int dark_styling; //boolean
    char *theme_name; // string
    char *default_layout; // string
    char *theme_assembly; // string

} theming_options_t;

theming_options_t *theming_options_create(
    int dark_styling,
    char *theme_name,
    char *default_layout,
    char *theme_assembly
);

void theming_options_free(theming_options_t *theming_options);

theming_options_t *theming_options_parseFromJSON(cJSON *theming_optionsJSON);

cJSON *theming_options_convertToJSON(theming_options_t *theming_options);

#endif /* _theming_options_H_ */

