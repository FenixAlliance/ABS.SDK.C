/*
 * update_contact_avatar_async_request.h
 *
 * 
 */

#ifndef _update_contact_avatar_async_request_H_
#define _update_contact_avatar_async_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct update_contact_avatar_async_request_t update_contact_avatar_async_request_t;




typedef struct update_contact_avatar_async_request_t {
    binary_t* avatar; //binary

} update_contact_avatar_async_request_t;

update_contact_avatar_async_request_t *update_contact_avatar_async_request_create(
    binary_t* avatar
);

void update_contact_avatar_async_request_free(update_contact_avatar_async_request_t *update_contact_avatar_async_request);

update_contact_avatar_async_request_t *update_contact_avatar_async_request_parseFromJSON(cJSON *update_contact_avatar_async_requestJSON);

cJSON *update_contact_avatar_async_request_convertToJSON(update_contact_avatar_async_request_t *update_contact_avatar_async_request);

#endif /* _update_contact_avatar_async_request_H_ */

