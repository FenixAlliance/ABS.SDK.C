/*
 * i_swagger_license.h
 *
 * 
 */

#ifndef _i_swagger_license_H_
#define _i_swagger_license_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct i_swagger_license_t i_swagger_license_t;




typedef struct i_swagger_license_t {
    char *name; // string
    char *url; // string

} i_swagger_license_t;

i_swagger_license_t *i_swagger_license_create(
    char *name,
    char *url
);

void i_swagger_license_free(i_swagger_license_t *i_swagger_license);

i_swagger_license_t *i_swagger_license_parseFromJSON(cJSON *i_swagger_licenseJSON);

cJSON *i_swagger_license_convertToJSON(i_swagger_license_t *i_swagger_license);

#endif /* _i_swagger_license_H_ */

