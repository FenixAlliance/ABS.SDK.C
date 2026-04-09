/*
 * cost_centre_dto_list_envelope.h
 *
 * 
 */

#ifndef _cost_centre_dto_list_envelope_H_
#define _cost_centre_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cost_centre_dto_list_envelope_t cost_centre_dto_list_envelope_t;

#include "cost_centre_dto.h"



typedef struct cost_centre_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} cost_centre_dto_list_envelope_t;

cost_centre_dto_list_envelope_t *cost_centre_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void cost_centre_dto_list_envelope_free(cost_centre_dto_list_envelope_t *cost_centre_dto_list_envelope);

cost_centre_dto_list_envelope_t *cost_centre_dto_list_envelope_parseFromJSON(cJSON *cost_centre_dto_list_envelopeJSON);

cJSON *cost_centre_dto_list_envelope_convertToJSON(cost_centre_dto_list_envelope_t *cost_centre_dto_list_envelope);

#endif /* _cost_centre_dto_list_envelope_H_ */

