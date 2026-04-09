/*
 * billing_profile_dto_envelope.h
 *
 * 
 */

#ifndef _billing_profile_dto_envelope_H_
#define _billing_profile_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct billing_profile_dto_envelope_t billing_profile_dto_envelope_t;

#include "billing_profile_dto.h"



typedef struct billing_profile_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct billing_profile_dto_t *result; //model

} billing_profile_dto_envelope_t;

billing_profile_dto_envelope_t *billing_profile_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    billing_profile_dto_t *result
);

void billing_profile_dto_envelope_free(billing_profile_dto_envelope_t *billing_profile_dto_envelope);

billing_profile_dto_envelope_t *billing_profile_dto_envelope_parseFromJSON(cJSON *billing_profile_dto_envelopeJSON);

cJSON *billing_profile_dto_envelope_convertToJSON(billing_profile_dto_envelope_t *billing_profile_dto_envelope);

#endif /* _billing_profile_dto_envelope_H_ */

