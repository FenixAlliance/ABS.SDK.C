/*
 * o_auth_token_request.h
 *
 * 
 */

#ifndef _o_auth_token_request_H_
#define _o_auth_token_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct o_auth_token_request_t o_auth_token_request_t;




typedef struct o_auth_token_request_t {
    char *client_id; // string
    char *client_secret; // string
    char *grant_type; // string
    char *requested_scopes; // string
    char *requested_enrollment; // string

} o_auth_token_request_t;

o_auth_token_request_t *o_auth_token_request_create(
    char *client_id,
    char *client_secret,
    char *grant_type,
    char *requested_scopes,
    char *requested_enrollment
);

void o_auth_token_request_free(o_auth_token_request_t *o_auth_token_request);

o_auth_token_request_t *o_auth_token_request_parseFromJSON(cJSON *o_auth_token_requestJSON);

cJSON *o_auth_token_request_convertToJSON(o_auth_token_request_t *o_auth_token_request);

#endif /* _o_auth_token_request_H_ */

