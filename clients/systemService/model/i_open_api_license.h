/*
 * i_open_api_license.h
 *
 * 
 */

#ifndef _i_open_api_license_H_
#define _i_open_api_license_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct i_open_api_license_t i_open_api_license_t;




typedef struct i_open_api_license_t {
    char *name; // string
    char *url; // string

} i_open_api_license_t;

i_open_api_license_t *i_open_api_license_create(
    char *name,
    char *url
);

void i_open_api_license_free(i_open_api_license_t *i_open_api_license);

i_open_api_license_t *i_open_api_license_parseFromJSON(cJSON *i_open_api_licenseJSON);

cJSON *i_open_api_license_convertToJSON(i_open_api_license_t *i_open_api_license);

#endif /* _i_open_api_license_H_ */

