/*
 * http_context.h
 *
 * 
 */

#ifndef _http_context_H_
#define _http_context_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct http_context_t http_context_t;

#include "any_type.h"
#include "cancellation_token.h"
#include "claims_principal.h"
#include "connection_info.h"
#include "http_request.h"
#include "http_response.h"
#include "i_session.h"
#include "object.h"
#include "type_object_key_value_pair.h"
#include "web_socket_manager.h"



typedef struct http_context_t {
    list_t *features; //nonprimitive container
    struct http_request_t *request; //model
    struct http_response_t *response; //model
    struct connection_info_t *connection; //model
    struct web_socket_manager_t *web_sockets; //model
    struct claims_principal_t *user; //model
    list_t* items; //map
    object_t *request_services; //object
    struct cancellation_token_t *request_aborted; //model
    char *trace_identifier; // string
    struct i_session_t *session; //model

} http_context_t;

http_context_t *http_context_create(
    list_t *features,
    http_request_t *request,
    http_response_t *response,
    connection_info_t *connection,
    web_socket_manager_t *web_sockets,
    claims_principal_t *user,
    list_t* items,
    object_t *request_services,
    cancellation_token_t *request_aborted,
    char *trace_identifier,
    i_session_t *session
);

void http_context_free(http_context_t *http_context);

http_context_t *http_context_parseFromJSON(cJSON *http_contextJSON);

cJSON *http_context_convertToJSON(http_context_t *http_context);

#endif /* _http_context_H_ */

