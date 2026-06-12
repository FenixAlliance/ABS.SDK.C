/*
 * runtime_field_handle.h
 *
 * 
 */

#ifndef _runtime_field_handle_H_
#define _runtime_field_handle_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct runtime_field_handle_t runtime_field_handle_t;

#include "object.h"



typedef struct runtime_field_handle_t {
    object_t *value; //object

} runtime_field_handle_t;

runtime_field_handle_t *runtime_field_handle_create(
    object_t *value
);

void runtime_field_handle_free(runtime_field_handle_t *runtime_field_handle);

runtime_field_handle_t *runtime_field_handle_parseFromJSON(cJSON *runtime_field_handleJSON);

cJSON *runtime_field_handle_convertToJSON(runtime_field_handle_t *runtime_field_handle);

#endif /* _runtime_field_handle_H_ */

