/*
 * employer_profile_dto_envelope.h
 *
 * 
 */

#ifndef _employer_profile_dto_envelope_H_
#define _employer_profile_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct employer_profile_dto_envelope_t employer_profile_dto_envelope_t;

#include "employer_profile_dto.h"



typedef struct employer_profile_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct employer_profile_dto_t *result; //model

} employer_profile_dto_envelope_t;

employer_profile_dto_envelope_t *employer_profile_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    employer_profile_dto_t *result
);

void employer_profile_dto_envelope_free(employer_profile_dto_envelope_t *employer_profile_dto_envelope);

employer_profile_dto_envelope_t *employer_profile_dto_envelope_parseFromJSON(cJSON *employer_profile_dto_envelopeJSON);

cJSON *employer_profile_dto_envelope_convertToJSON(employer_profile_dto_envelope_t *employer_profile_dto_envelope);

#endif /* _employer_profile_dto_envelope_H_ */

