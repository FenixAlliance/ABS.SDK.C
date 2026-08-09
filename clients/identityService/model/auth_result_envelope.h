/*
 * auth_result_envelope.h
 *
 * 
 */

#ifndef _auth_result_envelope_H_
#define _auth_result_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct auth_result_envelope_t auth_result_envelope_t;

#include "auth_result.h"



typedef struct auth_result_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    int http_status; //numeric
    char *error_code; // string
    list_t* validation_details; //map
    char *activity_id; // string
    struct auth_result_t *result; //model

} auth_result_envelope_t;

auth_result_envelope_t *auth_result_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    int http_status,
    char *error_code,
    list_t* validation_details,
    char *activity_id,
    auth_result_t *result
);

void auth_result_envelope_free(auth_result_envelope_t *auth_result_envelope);

auth_result_envelope_t *auth_result_envelope_parseFromJSON(cJSON *auth_result_envelopeJSON);

cJSON *auth_result_envelope_convertToJSON(auth_result_envelope_t *auth_result_envelope);

#endif /* _auth_result_envelope_H_ */

