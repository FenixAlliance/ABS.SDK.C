/*
 * student_profile_dto_i_read_only_list_envelope.h
 *
 * 
 */

#ifndef _student_profile_dto_i_read_only_list_envelope_H_
#define _student_profile_dto_i_read_only_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct student_profile_dto_i_read_only_list_envelope_t student_profile_dto_i_read_only_list_envelope_t;

#include "student_profile_dto.h"



typedef struct student_profile_dto_i_read_only_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    int http_status; //numeric
    char *error_code; // string
    list_t* validation_details; //map
    char *activity_id; // string
    list_t *result; //nonprimitive container

} student_profile_dto_i_read_only_list_envelope_t;

student_profile_dto_i_read_only_list_envelope_t *student_profile_dto_i_read_only_list_envelope_create(
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

void student_profile_dto_i_read_only_list_envelope_free(student_profile_dto_i_read_only_list_envelope_t *student_profile_dto_i_read_only_list_envelope);

student_profile_dto_i_read_only_list_envelope_t *student_profile_dto_i_read_only_list_envelope_parseFromJSON(cJSON *student_profile_dto_i_read_only_list_envelopeJSON);

cJSON *student_profile_dto_i_read_only_list_envelope_convertToJSON(student_profile_dto_i_read_only_list_envelope_t *student_profile_dto_i_read_only_list_envelope);

#endif /* _student_profile_dto_i_read_only_list_envelope_H_ */

