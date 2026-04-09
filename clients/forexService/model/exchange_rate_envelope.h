/*
 * exchange_rate_envelope.h
 *
 * 
 */

#ifndef _exchange_rate_envelope_H_
#define _exchange_rate_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct exchange_rate_envelope_t exchange_rate_envelope_t;

#include "exchange_rate.h"



typedef struct exchange_rate_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct exchange_rate_t *result; //model

} exchange_rate_envelope_t;

exchange_rate_envelope_t *exchange_rate_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    exchange_rate_t *result
);

void exchange_rate_envelope_free(exchange_rate_envelope_t *exchange_rate_envelope);

exchange_rate_envelope_t *exchange_rate_envelope_parseFromJSON(cJSON *exchange_rate_envelopeJSON);

cJSON *exchange_rate_envelope_convertToJSON(exchange_rate_envelope_t *exchange_rate_envelope);

#endif /* _exchange_rate_envelope_H_ */

