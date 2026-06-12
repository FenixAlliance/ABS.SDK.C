/*
 * wait_handle.h
 *
 * 
 */

#ifndef _wait_handle_H_
#define _wait_handle_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct wait_handle_t wait_handle_t;

#include "object.h"
#include "safe_wait_handle.h"



typedef struct wait_handle_t {
    object_t *handle; //object
    struct safe_wait_handle_t *safe_wait_handle; //model

} wait_handle_t;

wait_handle_t *wait_handle_create(
    object_t *handle,
    safe_wait_handle_t *safe_wait_handle
);

void wait_handle_free(wait_handle_t *wait_handle);

wait_handle_t *wait_handle_parseFromJSON(cJSON *wait_handleJSON);

cJSON *wait_handle_convertToJSON(wait_handle_t *wait_handle);

#endif /* _wait_handle_H_ */

