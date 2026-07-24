/*
 * import_signing_certificate_async_request.h
 *
 * 
 */

#ifndef _import_signing_certificate_async_request_H_
#define _import_signing_certificate_async_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct import_signing_certificate_async_request_t import_signing_certificate_async_request_t;




typedef struct import_signing_certificate_async_request_t {
    char *id; // string
    binary_t* file; //binary
    char *password; // string
    char *title; // string
    char *contact_id; // string

} import_signing_certificate_async_request_t;

import_signing_certificate_async_request_t *import_signing_certificate_async_request_create(
    char *id,
    binary_t* file,
    char *password,
    char *title,
    char *contact_id
);

void import_signing_certificate_async_request_free(import_signing_certificate_async_request_t *import_signing_certificate_async_request);

import_signing_certificate_async_request_t *import_signing_certificate_async_request_parseFromJSON(cJSON *import_signing_certificate_async_requestJSON);

cJSON *import_signing_certificate_async_request_convertToJSON(import_signing_certificate_async_request_t *import_signing_certificate_async_request);

#endif /* _import_signing_certificate_async_request_H_ */

