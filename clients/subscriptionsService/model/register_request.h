/*
 * register_request.h
 *
 * 
 */

#ifndef _register_request_H_
#define _register_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct register_request_t register_request_t;




typedef struct register_request_t {
    char *email; // string
    char *password; // string

} register_request_t;

register_request_t *register_request_create(
    char *email,
    char *password
);

void register_request_free(register_request_t *register_request);

register_request_t *register_request_parseFromJSON(cJSON *register_requestJSON);

cJSON *register_request_convertToJSON(register_request_t *register_request);

#endif /* _register_request_H_ */

