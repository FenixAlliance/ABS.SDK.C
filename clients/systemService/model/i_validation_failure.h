/*
 * i_validation_failure.h
 *
 * 
 */

#ifndef _i_validation_failure_H_
#define _i_validation_failure_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct i_validation_failure_t i_validation_failure_t;




typedef struct i_validation_failure_t {
    char *message; // string
    char *how_to_resolve; // string

} i_validation_failure_t;

i_validation_failure_t *i_validation_failure_create(
    char *message,
    char *how_to_resolve
);

void i_validation_failure_free(i_validation_failure_t *i_validation_failure);

i_validation_failure_t *i_validation_failure_parseFromJSON(cJSON *i_validation_failureJSON);

cJSON *i_validation_failure_convertToJSON(i_validation_failure_t *i_validation_failure);

#endif /* _i_validation_failure_H_ */

