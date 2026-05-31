/*
 * runtime_type_handle.h
 *
 * 
 */

#ifndef _runtime_type_handle_H_
#define _runtime_type_handle_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct runtime_type_handle_t runtime_type_handle_t;

#include "object.h"



typedef struct runtime_type_handle_t {
    object_t *value; //object

} runtime_type_handle_t;

runtime_type_handle_t *runtime_type_handle_create(
    object_t *value
);

void runtime_type_handle_free(runtime_type_handle_t *runtime_type_handle);

runtime_type_handle_t *runtime_type_handle_parseFromJSON(cJSON *runtime_type_handleJSON);

cJSON *runtime_type_handle_convertToJSON(runtime_type_handle_t *runtime_type_handle);

#endif /* _runtime_type_handle_H_ */

