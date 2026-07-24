/*
 * trial_balance_dto_envelope.h
 *
 * 
 */

#ifndef _trial_balance_dto_envelope_H_
#define _trial_balance_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct trial_balance_dto_envelope_t trial_balance_dto_envelope_t;

#include "trial_balance_dto.h"



typedef struct trial_balance_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct trial_balance_dto_t *result; //model

} trial_balance_dto_envelope_t;

trial_balance_dto_envelope_t *trial_balance_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    trial_balance_dto_t *result
);

void trial_balance_dto_envelope_free(trial_balance_dto_envelope_t *trial_balance_dto_envelope);

trial_balance_dto_envelope_t *trial_balance_dto_envelope_parseFromJSON(cJSON *trial_balance_dto_envelopeJSON);

cJSON *trial_balance_dto_envelope_convertToJSON(trial_balance_dto_envelope_t *trial_balance_dto_envelope);

#endif /* _trial_balance_dto_envelope_H_ */

