/*
 * authorization_result_envelope.h
 *
 * 
 */

#ifndef _authorization_result_envelope_H_
#define _authorization_result_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct authorization_result_envelope_t authorization_result_envelope_t;

#include "authorization_result.h"



typedef struct authorization_result_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct authorization_result_t *result; //model

} authorization_result_envelope_t;

authorization_result_envelope_t *authorization_result_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    authorization_result_t *result
);

void authorization_result_envelope_free(authorization_result_envelope_t *authorization_result_envelope);

authorization_result_envelope_t *authorization_result_envelope_parseFromJSON(cJSON *authorization_result_envelopeJSON);

cJSON *authorization_result_envelope_convertToJSON(authorization_result_envelope_t *authorization_result_envelope);

#endif /* _authorization_result_envelope_H_ */

