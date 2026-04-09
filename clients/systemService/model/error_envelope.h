/*
 * error_envelope.h
 *
 * 
 */

#ifndef _error_envelope_H_
#define _error_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct error_envelope_t error_envelope_t;




typedef struct error_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string

} error_envelope_t;

error_envelope_t *error_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id
);

void error_envelope_free(error_envelope_t *error_envelope);

error_envelope_t *error_envelope_parseFromJSON(cJSON *error_envelopeJSON);

cJSON *error_envelope_convertToJSON(error_envelope_t *error_envelope);

#endif /* _error_envelope_H_ */

