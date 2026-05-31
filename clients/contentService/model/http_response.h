/*
 * http_response.h
 *
 * 
 */

#ifndef _http_response_H_
#define _http_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct http_response_t http_response_t;

#include "http_context.h"
#include "object.h"
#include "pipe_writer.h"



typedef struct http_response_t {
    struct http_context_t *http_context; //model
    int status_code; //numeric
    list_t* headers; //map
    binary_t* body; //binary
    struct pipe_writer_t *body_writer; //model
    long content_length; //numeric
    char *content_type; // string
    object_t *cookies; //object
    int has_started; //boolean

} http_response_t;

http_response_t *http_response_create(
    http_context_t *http_context,
    int status_code,
    list_t* headers,
    binary_t* body,
    pipe_writer_t *body_writer,
    long content_length,
    char *content_type,
    object_t *cookies,
    int has_started
);

void http_response_free(http_response_t *http_response);

http_response_t *http_response_parseFromJSON(cJSON *http_responseJSON);

cJSON *http_response_convertToJSON(http_response_t *http_response);

#endif /* _http_response_H_ */

