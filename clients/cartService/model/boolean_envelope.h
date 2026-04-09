/*
 * boolean_envelope.h
 *
 * 
 */

#ifndef _boolean_envelope_H_
#define _boolean_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct boolean_envelope_t boolean_envelope_t;




typedef struct boolean_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    int result; //boolean

} boolean_envelope_t;

boolean_envelope_t *boolean_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    int result
);

void boolean_envelope_free(boolean_envelope_t *boolean_envelope);

boolean_envelope_t *boolean_envelope_parseFromJSON(cJSON *boolean_envelopeJSON);

cJSON *boolean_envelope_convertToJSON(boolean_envelope_t *boolean_envelope);

#endif /* _boolean_envelope_H_ */

