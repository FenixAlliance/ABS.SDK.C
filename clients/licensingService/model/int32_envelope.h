/*
 * int32_envelope.h
 *
 * 
 */

#ifndef _int32_envelope_H_
#define _int32_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct int32_envelope_t int32_envelope_t;




typedef struct int32_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    int result; //numeric

} int32_envelope_t;

int32_envelope_t *int32_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    int result
);

void int32_envelope_free(int32_envelope_t *int32_envelope);

int32_envelope_t *int32_envelope_parseFromJSON(cJSON *int32_envelopeJSON);

cJSON *int32_envelope_convertToJSON(int32_envelope_t *int32_envelope);

#endif /* _int32_envelope_H_ */

