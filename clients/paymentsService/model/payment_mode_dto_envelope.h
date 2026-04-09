/*
 * payment_mode_dto_envelope.h
 *
 * 
 */

#ifndef _payment_mode_dto_envelope_H_
#define _payment_mode_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct payment_mode_dto_envelope_t payment_mode_dto_envelope_t;

#include "payment_mode_dto.h"



typedef struct payment_mode_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct payment_mode_dto_t *result; //model

} payment_mode_dto_envelope_t;

payment_mode_dto_envelope_t *payment_mode_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    payment_mode_dto_t *result
);

void payment_mode_dto_envelope_free(payment_mode_dto_envelope_t *payment_mode_dto_envelope);

payment_mode_dto_envelope_t *payment_mode_dto_envelope_parseFromJSON(cJSON *payment_mode_dto_envelopeJSON);

cJSON *payment_mode_dto_envelope_convertToJSON(payment_mode_dto_envelope_t *payment_mode_dto_envelope);

#endif /* _payment_mode_dto_envelope_H_ */

