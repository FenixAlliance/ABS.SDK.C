/*
 * required_skill_record_dto_list_envelope.h
 *
 * 
 */

#ifndef _required_skill_record_dto_list_envelope_H_
#define _required_skill_record_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct required_skill_record_dto_list_envelope_t required_skill_record_dto_list_envelope_t;

#include "required_skill_record_dto.h"



typedef struct required_skill_record_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} required_skill_record_dto_list_envelope_t;

required_skill_record_dto_list_envelope_t *required_skill_record_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void required_skill_record_dto_list_envelope_free(required_skill_record_dto_list_envelope_t *required_skill_record_dto_list_envelope);

required_skill_record_dto_list_envelope_t *required_skill_record_dto_list_envelope_parseFromJSON(cJSON *required_skill_record_dto_list_envelopeJSON);

cJSON *required_skill_record_dto_list_envelope_convertToJSON(required_skill_record_dto_list_envelope_t *required_skill_record_dto_list_envelope);

#endif /* _required_skill_record_dto_list_envelope_H_ */

