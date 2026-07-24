/*
 * prepare_and_quick_sign_async_request.h
 *
 * 
 */

#ifndef _prepare_and_quick_sign_async_request_H_
#define _prepare_and_quick_sign_async_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct prepare_and_quick_sign_async_request_t prepare_and_quick_sign_async_request_t;




typedef struct prepare_and_quick_sign_async_request_t {
    char *id; // string
    binary_t* file; //binary
    char *title; // string
    char *contact_id; // string
    char *signing_certificate_id; // string
    char *signing_profile_id; // string
    char *provider_name; // string

} prepare_and_quick_sign_async_request_t;

prepare_and_quick_sign_async_request_t *prepare_and_quick_sign_async_request_create(
    char *id,
    binary_t* file,
    char *title,
    char *contact_id,
    char *signing_certificate_id,
    char *signing_profile_id,
    char *provider_name
);

void prepare_and_quick_sign_async_request_free(prepare_and_quick_sign_async_request_t *prepare_and_quick_sign_async_request);

prepare_and_quick_sign_async_request_t *prepare_and_quick_sign_async_request_parseFromJSON(cJSON *prepare_and_quick_sign_async_requestJSON);

cJSON *prepare_and_quick_sign_async_request_convertToJSON(prepare_and_quick_sign_async_request_t *prepare_and_quick_sign_async_request);

#endif /* _prepare_and_quick_sign_async_request_H_ */

