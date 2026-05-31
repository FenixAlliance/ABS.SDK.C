/*
 * safe_wait_handle.h
 *
 * 
 */

#ifndef _safe_wait_handle_H_
#define _safe_wait_handle_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct safe_wait_handle_t safe_wait_handle_t;




typedef struct safe_wait_handle_t {
    int is_closed; //boolean
    int is_invalid; //boolean

} safe_wait_handle_t;

safe_wait_handle_t *safe_wait_handle_create(
    int is_closed,
    int is_invalid
);

void safe_wait_handle_free(safe_wait_handle_t *safe_wait_handle);

safe_wait_handle_t *safe_wait_handle_parseFromJSON(cJSON *safe_wait_handleJSON);

cJSON *safe_wait_handle_convertToJSON(safe_wait_handle_t *safe_wait_handle);

#endif /* _safe_wait_handle_H_ */

