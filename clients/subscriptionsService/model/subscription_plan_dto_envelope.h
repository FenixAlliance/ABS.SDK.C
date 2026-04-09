/*
 * subscription_plan_dto_envelope.h
 *
 * 
 */

#ifndef _subscription_plan_dto_envelope_H_
#define _subscription_plan_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct subscription_plan_dto_envelope_t subscription_plan_dto_envelope_t;

#include "subscription_plan_dto.h"



typedef struct subscription_plan_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct subscription_plan_dto_t *result; //model

} subscription_plan_dto_envelope_t;

subscription_plan_dto_envelope_t *subscription_plan_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    subscription_plan_dto_t *result
);

void subscription_plan_dto_envelope_free(subscription_plan_dto_envelope_t *subscription_plan_dto_envelope);

subscription_plan_dto_envelope_t *subscription_plan_dto_envelope_parseFromJSON(cJSON *subscription_plan_dto_envelopeJSON);

cJSON *subscription_plan_dto_envelope_convertToJSON(subscription_plan_dto_envelope_t *subscription_plan_dto_envelope);

#endif /* _subscription_plan_dto_envelope_H_ */

