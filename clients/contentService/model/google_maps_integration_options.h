/*
 * google_maps_integration_options.h
 *
 * 
 */

#ifndef _google_maps_integration_options_H_
#define _google_maps_integration_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct google_maps_integration_options_t google_maps_integration_options_t;




typedef struct google_maps_integration_options_t {
    int enable; //boolean
    char *api_key; // string

} google_maps_integration_options_t;

google_maps_integration_options_t *google_maps_integration_options_create(
    int enable,
    char *api_key
);

void google_maps_integration_options_free(google_maps_integration_options_t *google_maps_integration_options);

google_maps_integration_options_t *google_maps_integration_options_parseFromJSON(cJSON *google_maps_integration_optionsJSON);

cJSON *google_maps_integration_options_convertToJSON(google_maps_integration_options_t *google_maps_integration_options);

#endif /* _google_maps_integration_options_H_ */

