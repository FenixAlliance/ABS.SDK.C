/*
 * required_skill_record_dto_envelope.h
 *
 * 
 */

#ifndef _required_skill_record_dto_envelope_H_
#define _required_skill_record_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct required_skill_record_dto_envelope_t required_skill_record_dto_envelope_t;

#include "required_skill_record_dto.h"



typedef struct required_skill_record_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct required_skill_record_dto_t *result; //model

} required_skill_record_dto_envelope_t;

required_skill_record_dto_envelope_t *required_skill_record_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    required_skill_record_dto_t *result
);

void required_skill_record_dto_envelope_free(required_skill_record_dto_envelope_t *required_skill_record_dto_envelope);

required_skill_record_dto_envelope_t *required_skill_record_dto_envelope_parseFromJSON(cJSON *required_skill_record_dto_envelopeJSON);

cJSON *required_skill_record_dto_envelope_convertToJSON(required_skill_record_dto_envelope_t *required_skill_record_dto_envelope);

#endif /* _required_skill_record_dto_envelope_H_ */

