/*
 * license_validation_request.h
 *
 * 
 */

#ifndef _license_validation_request_H_
#define _license_validation_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct license_validation_request_t license_validation_request_t;




typedef struct license_validation_request_t {
    char *license_key; // string

} license_validation_request_t;

license_validation_request_t *license_validation_request_create(
    char *license_key
);

void license_validation_request_free(license_validation_request_t *license_validation_request);

license_validation_request_t *license_validation_request_parseFromJSON(cJSON *license_validation_requestJSON);

cJSON *license_validation_request_convertToJSON(license_validation_request_t *license_validation_request);

#endif /* _license_validation_request_H_ */

