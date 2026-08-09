/*
 * rounding_policy_dto_list_envelope.h
 *
 * 
 */

#ifndef _rounding_policy_dto_list_envelope_H_
#define _rounding_policy_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct rounding_policy_dto_list_envelope_t rounding_policy_dto_list_envelope_t;

#include "rounding_policy_dto.h"



typedef struct rounding_policy_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    int http_status; //numeric
    char *error_code; // string
    list_t* validation_details; //map
    char *activity_id; // string
    list_t *result; //nonprimitive container

} rounding_policy_dto_list_envelope_t;

rounding_policy_dto_list_envelope_t *rounding_policy_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    int http_status,
    char *error_code,
    list_t* validation_details,
    char *activity_id,
    list_t *result
);

void rounding_policy_dto_list_envelope_free(rounding_policy_dto_list_envelope_t *rounding_policy_dto_list_envelope);

rounding_policy_dto_list_envelope_t *rounding_policy_dto_list_envelope_parseFromJSON(cJSON *rounding_policy_dto_list_envelopeJSON);

cJSON *rounding_policy_dto_list_envelope_convertToJSON(rounding_policy_dto_list_envelope_t *rounding_policy_dto_list_envelope);

#endif /* _rounding_policy_dto_list_envelope_H_ */

