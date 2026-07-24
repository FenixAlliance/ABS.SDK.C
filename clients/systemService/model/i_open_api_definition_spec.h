/*
 * i_open_api_definition_spec.h
 *
 * 
 */

#ifndef _i_open_api_definition_spec_H_
#define _i_open_api_definition_spec_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct i_open_api_definition_spec_t i_open_api_definition_spec_t;

#include "i_open_api_contact.h"
#include "i_open_api_endpoint.h"
#include "i_open_api_license.h"



typedef struct i_open_api_definition_spec_t {
    int enable; //boolean
    char *name; // string
    char *title; // string
    char *version; // string
    char *description; // string
    char *terms_of_service; // string
    struct i_open_api_endpoint_t *open_api_endpoint; //model
    struct i_open_api_contact_t *open_api_contact; //model
    struct i_open_api_license_t *license; //model

} i_open_api_definition_spec_t;

i_open_api_definition_spec_t *i_open_api_definition_spec_create(
    int enable,
    char *name,
    char *title,
    char *version,
    char *description,
    char *terms_of_service,
    i_open_api_endpoint_t *open_api_endpoint,
    i_open_api_contact_t *open_api_contact,
    i_open_api_license_t *license
);

void i_open_api_definition_spec_free(i_open_api_definition_spec_t *i_open_api_definition_spec);

i_open_api_definition_spec_t *i_open_api_definition_spec_parseFromJSON(cJSON *i_open_api_definition_specJSON);

cJSON *i_open_api_definition_spec_convertToJSON(i_open_api_definition_spec_t *i_open_api_definition_spec);

#endif /* _i_open_api_definition_spec_H_ */

