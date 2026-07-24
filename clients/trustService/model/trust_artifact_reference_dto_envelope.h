/*
 * trust_artifact_reference_dto_envelope.h
 *
 * 
 */

#ifndef _trust_artifact_reference_dto_envelope_H_
#define _trust_artifact_reference_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct trust_artifact_reference_dto_envelope_t trust_artifact_reference_dto_envelope_t;

#include "trust_artifact_reference_dto.h"



typedef struct trust_artifact_reference_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct trust_artifact_reference_dto_t *result; //model

} trust_artifact_reference_dto_envelope_t;

trust_artifact_reference_dto_envelope_t *trust_artifact_reference_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    trust_artifact_reference_dto_t *result
);

void trust_artifact_reference_dto_envelope_free(trust_artifact_reference_dto_envelope_t *trust_artifact_reference_dto_envelope);

trust_artifact_reference_dto_envelope_t *trust_artifact_reference_dto_envelope_parseFromJSON(cJSON *trust_artifact_reference_dto_envelopeJSON);

cJSON *trust_artifact_reference_dto_envelope_convertToJSON(trust_artifact_reference_dto_envelope_t *trust_artifact_reference_dto_envelope);

#endif /* _trust_artifact_reference_dto_envelope_H_ */

