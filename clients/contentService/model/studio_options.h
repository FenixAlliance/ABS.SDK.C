/*
 * studio_options.h
 *
 * 
 */

#ifndef _studio_options_H_
#define _studio_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct studio_options_t studio_options_t;




typedef struct studio_options_t {
    char *logo; // string
    char *logo_dark; // string
    char *icon; // string
    char *icon_dark; // string
    char *favicon; // string
    char *logo_mobile; // string
    char *logo_mobile_dark; // string

} studio_options_t;

studio_options_t *studio_options_create(
    char *logo,
    char *logo_dark,
    char *icon,
    char *icon_dark,
    char *favicon,
    char *logo_mobile,
    char *logo_mobile_dark
);

void studio_options_free(studio_options_t *studio_options);

studio_options_t *studio_options_parseFromJSON(cJSON *studio_optionsJSON);

cJSON *studio_options_convertToJSON(studio_options_t *studio_options);

#endif /* _studio_options_H_ */

