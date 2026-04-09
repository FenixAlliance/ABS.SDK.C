/*
 * budget_dto_envelope.h
 *
 * 
 */

#ifndef _budget_dto_envelope_H_
#define _budget_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct budget_dto_envelope_t budget_dto_envelope_t;

#include "budget_dto.h"



typedef struct budget_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct budget_dto_t *result; //model

} budget_dto_envelope_t;

budget_dto_envelope_t *budget_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    budget_dto_t *result
);

void budget_dto_envelope_free(budget_dto_envelope_t *budget_dto_envelope);

budget_dto_envelope_t *budget_dto_envelope_parseFromJSON(cJSON *budget_dto_envelopeJSON);

cJSON *budget_dto_envelope_convertToJSON(budget_dto_envelope_t *budget_dto_envelope);

#endif /* _budget_dto_envelope_H_ */

