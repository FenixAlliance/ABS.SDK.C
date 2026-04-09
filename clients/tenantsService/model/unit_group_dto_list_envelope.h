/*
 * unit_group_dto_list_envelope.h
 *
 * 
 */

#ifndef _unit_group_dto_list_envelope_H_
#define _unit_group_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct unit_group_dto_list_envelope_t unit_group_dto_list_envelope_t;

#include "unit_group_dto.h"



typedef struct unit_group_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} unit_group_dto_list_envelope_t;

unit_group_dto_list_envelope_t *unit_group_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void unit_group_dto_list_envelope_free(unit_group_dto_list_envelope_t *unit_group_dto_list_envelope);

unit_group_dto_list_envelope_t *unit_group_dto_list_envelope_parseFromJSON(cJSON *unit_group_dto_list_envelopeJSON);

cJSON *unit_group_dto_list_envelope_convertToJSON(unit_group_dto_list_envelope_t *unit_group_dto_list_envelope);

#endif /* _unit_group_dto_list_envelope_H_ */

