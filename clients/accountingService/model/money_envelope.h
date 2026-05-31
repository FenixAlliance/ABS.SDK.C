/*
 * money_envelope.h
 *
 * 
 */

#ifndef _money_envelope_H_
#define _money_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct money_envelope_t money_envelope_t;

#include "money.h"



typedef struct money_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct money_t *result; //model

} money_envelope_t;

money_envelope_t *money_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    money_t *result
);

void money_envelope_free(money_envelope_t *money_envelope);

money_envelope_t *money_envelope_parseFromJSON(cJSON *money_envelopeJSON);

cJSON *money_envelope_convertToJSON(money_envelope_t *money_envelope);

#endif /* _money_envelope_H_ */

