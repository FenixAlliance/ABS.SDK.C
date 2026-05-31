/*
 * runtime_method_handle.h
 *
 * 
 */

#ifndef _runtime_method_handle_H_
#define _runtime_method_handle_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct runtime_method_handle_t runtime_method_handle_t;

#include "object.h"



typedef struct runtime_method_handle_t {
    object_t *value; //object

} runtime_method_handle_t;

runtime_method_handle_t *runtime_method_handle_create(
    object_t *value
);

void runtime_method_handle_free(runtime_method_handle_t *runtime_method_handle);

runtime_method_handle_t *runtime_method_handle_parseFromJSON(cJSON *runtime_method_handleJSON);

cJSON *runtime_method_handle_convertToJSON(runtime_method_handle_t *runtime_method_handle);

#endif /* _runtime_method_handle_H_ */

