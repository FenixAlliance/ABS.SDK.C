/*
 * decimal_envelope.h
 *
 * 
 */

#ifndef _decimal_envelope_H_
#define _decimal_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct decimal_envelope_t decimal_envelope_t;




typedef struct decimal_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    double result; //numeric

} decimal_envelope_t;

decimal_envelope_t *decimal_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    double result
);

void decimal_envelope_free(decimal_envelope_t *decimal_envelope);

decimal_envelope_t *decimal_envelope_parseFromJSON(cJSON *decimal_envelopeJSON);

cJSON *decimal_envelope_convertToJSON(decimal_envelope_t *decimal_envelope);

#endif /* _decimal_envelope_H_ */

