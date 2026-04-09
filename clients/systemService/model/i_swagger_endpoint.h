/*
 * i_swagger_endpoint.h
 *
 * 
 */

#ifndef _i_swagger_endpoint_H_
#define _i_swagger_endpoint_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct i_swagger_endpoint_t i_swagger_endpoint_t;




typedef struct i_swagger_endpoint_t {
    int enable; //boolean
    char *name; // string
    char *url; // string

} i_swagger_endpoint_t;

i_swagger_endpoint_t *i_swagger_endpoint_create(
    int enable,
    char *name,
    char *url
);

void i_swagger_endpoint_free(i_swagger_endpoint_t *i_swagger_endpoint);

i_swagger_endpoint_t *i_swagger_endpoint_parseFromJSON(cJSON *i_swagger_endpointJSON);

cJSON *i_swagger_endpoint_convertToJSON(i_swagger_endpoint_t *i_swagger_endpoint);

#endif /* _i_swagger_endpoint_H_ */

