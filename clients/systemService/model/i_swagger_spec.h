/*
 * i_swagger_spec.h
 *
 * 
 */

#ifndef _i_swagger_spec_H_
#define _i_swagger_spec_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct i_swagger_spec_t i_swagger_spec_t;

#include "i_swagger_contact.h"
#include "i_swagger_endpoint.h"
#include "i_swagger_license.h"



typedef struct i_swagger_spec_t {
    int enable; //boolean
    char *name; // string
    char *title; // string
    char *version; // string
    char *description; // string
    char *terms_of_service; // string
    struct i_swagger_endpoint_t *swagger_endpoint; //model
    struct i_swagger_contact_t *open_api_contact; //model
    struct i_swagger_license_t *license; //model

} i_swagger_spec_t;

i_swagger_spec_t *i_swagger_spec_create(
    int enable,
    char *name,
    char *title,
    char *version,
    char *description,
    char *terms_of_service,
    i_swagger_endpoint_t *swagger_endpoint,
    i_swagger_contact_t *open_api_contact,
    i_swagger_license_t *license
);

void i_swagger_spec_free(i_swagger_spec_t *i_swagger_spec);

i_swagger_spec_t *i_swagger_spec_parseFromJSON(cJSON *i_swagger_specJSON);

cJSON *i_swagger_spec_convertToJSON(i_swagger_spec_t *i_swagger_spec);

#endif /* _i_swagger_spec_H_ */

