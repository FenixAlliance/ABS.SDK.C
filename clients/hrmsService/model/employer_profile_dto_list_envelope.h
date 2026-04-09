/*
 * employer_profile_dto_list_envelope.h
 *
 * 
 */

#ifndef _employer_profile_dto_list_envelope_H_
#define _employer_profile_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct employer_profile_dto_list_envelope_t employer_profile_dto_list_envelope_t;

#include "employer_profile_dto.h"



typedef struct employer_profile_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} employer_profile_dto_list_envelope_t;

employer_profile_dto_list_envelope_t *employer_profile_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void employer_profile_dto_list_envelope_free(employer_profile_dto_list_envelope_t *employer_profile_dto_list_envelope);

employer_profile_dto_list_envelope_t *employer_profile_dto_list_envelope_parseFromJSON(cJSON *employer_profile_dto_list_envelopeJSON);

cJSON *employer_profile_dto_list_envelope_convertToJSON(employer_profile_dto_list_envelope_t *employer_profile_dto_list_envelope);

#endif /* _employer_profile_dto_list_envelope_H_ */

