/*
 * unit_group_dto_envelope.h
 *
 * 
 */

#ifndef _unit_group_dto_envelope_H_
#define _unit_group_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct unit_group_dto_envelope_t unit_group_dto_envelope_t;

#include "unit_group_dto.h"



typedef struct unit_group_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct unit_group_dto_t *result; //model

} unit_group_dto_envelope_t;

unit_group_dto_envelope_t *unit_group_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    unit_group_dto_t *result
);

void unit_group_dto_envelope_free(unit_group_dto_envelope_t *unit_group_dto_envelope);

unit_group_dto_envelope_t *unit_group_dto_envelope_parseFromJSON(cJSON *unit_group_dto_envelopeJSON);

cJSON *unit_group_dto_envelope_convertToJSON(unit_group_dto_envelope_t *unit_group_dto_envelope);

#endif /* _unit_group_dto_envelope_H_ */

