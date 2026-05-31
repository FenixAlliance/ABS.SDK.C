/*
 * string_envelope.h
 *
 * 
 */

#ifndef _string_envelope_H_
#define _string_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct string_envelope_t string_envelope_t;




typedef struct string_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    char *result; // string

} string_envelope_t;

string_envelope_t *string_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    char *result
);

void string_envelope_free(string_envelope_t *string_envelope);

string_envelope_t *string_envelope_parseFromJSON(cJSON *string_envelopeJSON);

cJSON *string_envelope_convertToJSON(string_envelope_t *string_envelope);

#endif /* _string_envelope_H_ */

