/*
 * unit_dto_envelope.h
 *
 * 
 */

#ifndef _unit_dto_envelope_H_
#define _unit_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct unit_dto_envelope_t unit_dto_envelope_t;

#include "unit_dto.h"



typedef struct unit_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct unit_dto_t *result; //model

} unit_dto_envelope_t;

unit_dto_envelope_t *unit_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    unit_dto_t *result
);

void unit_dto_envelope_free(unit_dto_envelope_t *unit_dto_envelope);

unit_dto_envelope_t *unit_dto_envelope_parseFromJSON(cJSON *unit_dto_envelopeJSON);

cJSON *unit_dto_envelope_convertToJSON(unit_dto_envelope_t *unit_dto_envelope);

#endif /* _unit_dto_envelope_H_ */

