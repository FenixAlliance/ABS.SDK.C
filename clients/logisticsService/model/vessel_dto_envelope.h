/*
 * vessel_dto_envelope.h
 *
 * 
 */

#ifndef _vessel_dto_envelope_H_
#define _vessel_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct vessel_dto_envelope_t vessel_dto_envelope_t;

#include "vessel_dto.h"



typedef struct vessel_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct vessel_dto_t *result; //model

} vessel_dto_envelope_t;

vessel_dto_envelope_t *vessel_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    vessel_dto_t *result
);

void vessel_dto_envelope_free(vessel_dto_envelope_t *vessel_dto_envelope);

vessel_dto_envelope_t *vessel_dto_envelope_parseFromJSON(cJSON *vessel_dto_envelopeJSON);

cJSON *vessel_dto_envelope_convertToJSON(vessel_dto_envelope_t *vessel_dto_envelope);

#endif /* _vessel_dto_envelope_H_ */

