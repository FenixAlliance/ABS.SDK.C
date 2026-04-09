/*
 * update_avatar_async_request.h
 *
 * 
 */

#ifndef _update_avatar_async_request_H_
#define _update_avatar_async_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct update_avatar_async_request_t update_avatar_async_request_t;




typedef struct update_avatar_async_request_t {
    binary_t* avatar; //binary

} update_avatar_async_request_t;

update_avatar_async_request_t *update_avatar_async_request_create(
    binary_t* avatar
);

void update_avatar_async_request_free(update_avatar_async_request_t *update_avatar_async_request);

update_avatar_async_request_t *update_avatar_async_request_parseFromJSON(cJSON *update_avatar_async_requestJSON);

cJSON *update_avatar_async_request_convertToJSON(update_avatar_async_request_t *update_avatar_async_request);

#endif /* _update_avatar_async_request_H_ */

