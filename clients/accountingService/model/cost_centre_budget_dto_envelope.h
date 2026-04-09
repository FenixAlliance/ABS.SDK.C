/*
 * cost_centre_budget_dto_envelope.h
 *
 * 
 */

#ifndef _cost_centre_budget_dto_envelope_H_
#define _cost_centre_budget_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cost_centre_budget_dto_envelope_t cost_centre_budget_dto_envelope_t;

#include "cost_centre_budget_dto.h"



typedef struct cost_centre_budget_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct cost_centre_budget_dto_t *result; //model

} cost_centre_budget_dto_envelope_t;

cost_centre_budget_dto_envelope_t *cost_centre_budget_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    cost_centre_budget_dto_t *result
);

void cost_centre_budget_dto_envelope_free(cost_centre_budget_dto_envelope_t *cost_centre_budget_dto_envelope);

cost_centre_budget_dto_envelope_t *cost_centre_budget_dto_envelope_parseFromJSON(cJSON *cost_centre_budget_dto_envelopeJSON);

cJSON *cost_centre_budget_dto_envelope_convertToJSON(cost_centre_budget_dto_envelope_t *cost_centre_budget_dto_envelope);

#endif /* _cost_centre_budget_dto_envelope_H_ */

