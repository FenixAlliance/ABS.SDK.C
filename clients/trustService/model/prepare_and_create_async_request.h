/*
 * prepare_and_create_async_request.h
 *
 * 
 */

#ifndef _prepare_and_create_async_request_H_
#define _prepare_and_create_async_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct prepare_and_create_async_request_t prepare_and_create_async_request_t;


// Enum ROUTINGMODE for prepare_and_create_async_request

typedef enum  { trustservice_prepare_and_create_async_request_ROUTINGMODE_NULL = 0, trustservice_prepare_and_create_async_request_ROUTINGMODE_Parallel, trustservice_prepare_and_create_async_request_ROUTINGMODE_Sequential } trustservice_prepare_and_create_async_request_ROUTINGMODE_e;

char* prepare_and_create_async_request_routing_mode_ToString(trustservice_prepare_and_create_async_request_ROUTINGMODE_e routing_mode);

trustservice_prepare_and_create_async_request_ROUTINGMODE_e prepare_and_create_async_request_routing_mode_FromString(char* routing_mode);



typedef struct prepare_and_create_async_request_t {
    binary_t* file; //binary
    char *title; // string
    char *contact_id; // string
    trustservice_prepare_and_create_async_request_ROUTINGMODE_e routing_mode; //enum
    char *expires_at_utc; //date time
    char *message; // string
    char *correlation_id; // string
    char *external_reference; // string
    char *signers; // string

} prepare_and_create_async_request_t;

prepare_and_create_async_request_t *prepare_and_create_async_request_create(
    binary_t* file,
    char *title,
    char *contact_id,
    trustservice_prepare_and_create_async_request_ROUTINGMODE_e routing_mode,
    char *expires_at_utc,
    char *message,
    char *correlation_id,
    char *external_reference,
    char *signers
);

void prepare_and_create_async_request_free(prepare_and_create_async_request_t *prepare_and_create_async_request);

prepare_and_create_async_request_t *prepare_and_create_async_request_parseFromJSON(cJSON *prepare_and_create_async_requestJSON);

cJSON *prepare_and_create_async_request_convertToJSON(prepare_and_create_async_request_t *prepare_and_create_async_request);

#endif /* _prepare_and_create_async_request_H_ */

