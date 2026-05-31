/*
 * seaway_bill_dto_envelope.h
 *
 * 
 */

#ifndef _seaway_bill_dto_envelope_H_
#define _seaway_bill_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct seaway_bill_dto_envelope_t seaway_bill_dto_envelope_t;

#include "seaway_bill_dto.h"



typedef struct seaway_bill_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct seaway_bill_dto_t *result; //model

} seaway_bill_dto_envelope_t;

seaway_bill_dto_envelope_t *seaway_bill_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    seaway_bill_dto_t *result
);

void seaway_bill_dto_envelope_free(seaway_bill_dto_envelope_t *seaway_bill_dto_envelope);

seaway_bill_dto_envelope_t *seaway_bill_dto_envelope_parseFromJSON(cJSON *seaway_bill_dto_envelopeJSON);

cJSON *seaway_bill_dto_envelope_convertToJSON(seaway_bill_dto_envelope_t *seaway_bill_dto_envelope);

#endif /* _seaway_bill_dto_envelope_H_ */

