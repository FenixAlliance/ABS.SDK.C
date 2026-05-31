/*
 * license_validation_error.h
 *
 * 
 */

#ifndef _license_validation_error_H_
#define _license_validation_error_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct license_validation_error_t license_validation_error_t;




typedef struct license_validation_error_t {
    char *message; // string
    char *how_to_resolve; // string

} license_validation_error_t;

license_validation_error_t *license_validation_error_create(
    char *message,
    char *how_to_resolve
);

void license_validation_error_free(license_validation_error_t *license_validation_error);

license_validation_error_t *license_validation_error_parseFromJSON(cJSON *license_validation_errorJSON);

cJSON *license_validation_error_convertToJSON(license_validation_error_t *license_validation_error);

#endif /* _license_validation_error_H_ */

