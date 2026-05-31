/*
 * proof_of_delivery_dto_envelope.h
 *
 * 
 */

#ifndef _proof_of_delivery_dto_envelope_H_
#define _proof_of_delivery_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct proof_of_delivery_dto_envelope_t proof_of_delivery_dto_envelope_t;

#include "proof_of_delivery_dto.h"



typedef struct proof_of_delivery_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct proof_of_delivery_dto_t *result; //model

} proof_of_delivery_dto_envelope_t;

proof_of_delivery_dto_envelope_t *proof_of_delivery_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    proof_of_delivery_dto_t *result
);

void proof_of_delivery_dto_envelope_free(proof_of_delivery_dto_envelope_t *proof_of_delivery_dto_envelope);

proof_of_delivery_dto_envelope_t *proof_of_delivery_dto_envelope_parseFromJSON(cJSON *proof_of_delivery_dto_envelopeJSON);

cJSON *proof_of_delivery_dto_envelope_convertToJSON(proof_of_delivery_dto_envelope_t *proof_of_delivery_dto_envelope);

#endif /* _proof_of_delivery_dto_envelope_H_ */

