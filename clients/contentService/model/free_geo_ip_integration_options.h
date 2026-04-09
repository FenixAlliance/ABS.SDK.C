/*
 * free_geo_ip_integration_options.h
 *
 * 
 */

#ifndef _free_geo_ip_integration_options_H_
#define _free_geo_ip_integration_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct free_geo_ip_integration_options_t free_geo_ip_integration_options_t;




typedef struct free_geo_ip_integration_options_t {
    int enable; //boolean
    char *api_key; // string

} free_geo_ip_integration_options_t;

free_geo_ip_integration_options_t *free_geo_ip_integration_options_create(
    int enable,
    char *api_key
);

void free_geo_ip_integration_options_free(free_geo_ip_integration_options_t *free_geo_ip_integration_options);

free_geo_ip_integration_options_t *free_geo_ip_integration_options_parseFromJSON(cJSON *free_geo_ip_integration_optionsJSON);

cJSON *free_geo_ip_integration_options_convertToJSON(free_geo_ip_integration_options_t *free_geo_ip_integration_options);

#endif /* _free_geo_ip_integration_options_H_ */

