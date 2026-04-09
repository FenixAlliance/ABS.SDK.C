/*
 * refresh_request.h
 *
 * 
 */

#ifndef _refresh_request_H_
#define _refresh_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct refresh_request_t refresh_request_t;




typedef struct refresh_request_t {
    char *refresh_token; // string

} refresh_request_t;

refresh_request_t *refresh_request_create(
    char *refresh_token
);

void refresh_request_free(refresh_request_t *refresh_request);

refresh_request_t *refresh_request_parseFromJSON(cJSON *refresh_requestJSON);

cJSON *refresh_request_convertToJSON(refresh_request_t *refresh_request);

#endif /* _refresh_request_H_ */

