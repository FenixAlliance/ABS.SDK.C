/*
 * execution_context_envelope.h
 *
 * 
 */

#ifndef _execution_context_envelope_H_
#define _execution_context_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct execution_context_envelope_t execution_context_envelope_t;

#include "execution_context.h"



typedef struct execution_context_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    int http_status; //numeric
    char *error_code; // string
    list_t* validation_details; //map
    char *activity_id; // string
    struct execution_context_t *result; //model

} execution_context_envelope_t;

execution_context_envelope_t *execution_context_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    int http_status,
    char *error_code,
    list_t* validation_details,
    char *activity_id,
    execution_context_t *result
);

void execution_context_envelope_free(execution_context_envelope_t *execution_context_envelope);

execution_context_envelope_t *execution_context_envelope_parseFromJSON(cJSON *execution_context_envelopeJSON);

cJSON *execution_context_envelope_convertToJSON(execution_context_envelope_t *execution_context_envelope);

#endif /* _execution_context_envelope_H_ */

