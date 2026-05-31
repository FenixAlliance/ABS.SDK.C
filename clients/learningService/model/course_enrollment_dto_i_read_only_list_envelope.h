/*
 * course_enrollment_dto_i_read_only_list_envelope.h
 *
 * 
 */

#ifndef _course_enrollment_dto_i_read_only_list_envelope_H_
#define _course_enrollment_dto_i_read_only_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct course_enrollment_dto_i_read_only_list_envelope_t course_enrollment_dto_i_read_only_list_envelope_t;

#include "course_enrollment_dto.h"



typedef struct course_enrollment_dto_i_read_only_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} course_enrollment_dto_i_read_only_list_envelope_t;

course_enrollment_dto_i_read_only_list_envelope_t *course_enrollment_dto_i_read_only_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void course_enrollment_dto_i_read_only_list_envelope_free(course_enrollment_dto_i_read_only_list_envelope_t *course_enrollment_dto_i_read_only_list_envelope);

course_enrollment_dto_i_read_only_list_envelope_t *course_enrollment_dto_i_read_only_list_envelope_parseFromJSON(cJSON *course_enrollment_dto_i_read_only_list_envelopeJSON);

cJSON *course_enrollment_dto_i_read_only_list_envelope_convertToJSON(course_enrollment_dto_i_read_only_list_envelope_t *course_enrollment_dto_i_read_only_list_envelope);

#endif /* _course_enrollment_dto_i_read_only_list_envelope_H_ */

