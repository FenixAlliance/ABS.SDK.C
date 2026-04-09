/*
 * dashboard_options.h
 *
 * 
 */

#ifndef _dashboard_options_H_
#define _dashboard_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dashboard_options_t dashboard_options_t;




typedef struct dashboard_options_t {
    char *color; // string
    char *title; // string
    char *icon; // string
    char *icon_color; // string
    char *favicon; // string

} dashboard_options_t;

dashboard_options_t *dashboard_options_create(
    char *color,
    char *title,
    char *icon,
    char *icon_color,
    char *favicon
);

void dashboard_options_free(dashboard_options_t *dashboard_options);

dashboard_options_t *dashboard_options_parseFromJSON(cJSON *dashboard_optionsJSON);

cJSON *dashboard_options_convertToJSON(dashboard_options_t *dashboard_options);

#endif /* _dashboard_options_H_ */

