/*
 * empty_envelope.h
 *
 * 
 */

#ifndef _empty_envelope_H_
#define _empty_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct empty_envelope_t empty_envelope_t;




typedef struct empty_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string

} empty_envelope_t;

empty_envelope_t *empty_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id
);

void empty_envelope_free(empty_envelope_t *empty_envelope);

empty_envelope_t *empty_envelope_parseFromJSON(cJSON *empty_envelopeJSON);

cJSON *empty_envelope_convertToJSON(empty_envelope_t *empty_envelope);

#endif /* _empty_envelope_H_ */

