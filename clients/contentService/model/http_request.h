/*
 * http_request.h
 *
 * 
 */

#ifndef _http_request_H_
#define _http_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct http_request_t http_request_t;

#include "any_type.h"
#include "host_string.h"
#include "http_context.h"
#include "path_string.h"
#include "query_string.h"
#include "string_string_key_value_pair.h"
#include "string_string_values_key_value_pair.h"



typedef struct http_request_t {
    struct http_context_t *http_context; //model
    char *method; // string
    char *scheme; // string
    int is_https; //boolean
    struct host_string_t *host; //model
    struct path_string_t *path_base; //model
    struct path_string_t *path; //model
    struct query_string_t *query_string; //model
    list_t *query; //nonprimitive container
    char *protocol; // string
    list_t* headers; //map
    list_t *cookies; //nonprimitive container
    long content_length; //numeric
    char *content_type; // string
    binary_t* body; //binary
    binary_t* body_reader; //binary
    int has_form_content_type; //boolean
    list_t *form; //nonprimitive container
    list_t* route_values; //map

} http_request_t;

http_request_t *http_request_create(
    http_context_t *http_context,
    char *method,
    char *scheme,
    int is_https,
    host_string_t *host,
    path_string_t *path_base,
    path_string_t *path,
    query_string_t *query_string,
    list_t *query,
    char *protocol,
    list_t* headers,
    list_t *cookies,
    long content_length,
    char *content_type,
    binary_t* body,
    binary_t* body_reader,
    int has_form_content_type,
    list_t *form,
    list_t* route_values
);

void http_request_free(http_request_t *http_request);

http_request_t *http_request_parseFromJSON(cJSON *http_requestJSON);

cJSON *http_request_convertToJSON(http_request_t *http_request);

#endif /* _http_request_H_ */

