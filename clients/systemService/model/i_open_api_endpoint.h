/*
 * i_open_api_endpoint.h
 *
 * 
 */

#ifndef _i_open_api_endpoint_H_
#define _i_open_api_endpoint_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct i_open_api_endpoint_t i_open_api_endpoint_t;




typedef struct i_open_api_endpoint_t {
    int enable; //boolean
    char *name; // string
    char *url; // string

} i_open_api_endpoint_t;

i_open_api_endpoint_t *i_open_api_endpoint_create(
    int enable,
    char *name,
    char *url
);

void i_open_api_endpoint_free(i_open_api_endpoint_t *i_open_api_endpoint);

i_open_api_endpoint_t *i_open_api_endpoint_parseFromJSON(cJSON *i_open_api_endpointJSON);

cJSON *i_open_api_endpoint_convertToJSON(i_open_api_endpoint_t *i_open_api_endpoint);

#endif /* _i_open_api_endpoint_H_ */

