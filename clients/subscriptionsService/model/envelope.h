/*
 * envelope.h
 *
 * 
 */

#ifndef _envelope_H_
#define _envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct envelope_t envelope_t;




typedef struct envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    char *result; // string

} envelope_t;

envelope_t *envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    char *result
);

void envelope_free(envelope_t *envelope);

envelope_t *envelope_parseFromJSON(cJSON *envelopeJSON);

cJSON *envelope_convertToJSON(envelope_t *envelope);

#endif /* _envelope_H_ */

