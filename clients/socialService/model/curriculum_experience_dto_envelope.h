/*
 * curriculum_experience_dto_envelope.h
 *
 * 
 */

#ifndef _curriculum_experience_dto_envelope_H_
#define _curriculum_experience_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct curriculum_experience_dto_envelope_t curriculum_experience_dto_envelope_t;

#include "curriculum_experience_dto.h"



typedef struct curriculum_experience_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    int http_status; //numeric
    char *error_code; // string
    list_t* validation_details; //map
    char *activity_id; // string
    struct curriculum_experience_dto_t *result; //model

} curriculum_experience_dto_envelope_t;

curriculum_experience_dto_envelope_t *curriculum_experience_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    int http_status,
    char *error_code,
    list_t* validation_details,
    char *activity_id,
    curriculum_experience_dto_t *result
);

void curriculum_experience_dto_envelope_free(curriculum_experience_dto_envelope_t *curriculum_experience_dto_envelope);

curriculum_experience_dto_envelope_t *curriculum_experience_dto_envelope_parseFromJSON(cJSON *curriculum_experience_dto_envelopeJSON);

cJSON *curriculum_experience_dto_envelope_convertToJSON(curriculum_experience_dto_envelope_t *curriculum_experience_dto_envelope);

#endif /* _curriculum_experience_dto_envelope_H_ */

