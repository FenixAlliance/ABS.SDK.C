/*
 * course_completion_certificate_create_dto.h
 *
 * 
 */

#ifndef _course_completion_certificate_create_dto_H_
#define _course_completion_certificate_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct course_completion_certificate_create_dto_t course_completion_certificate_create_dto_t;




typedef struct course_completion_certificate_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *student_profile_id; // string
    char *course_enrollment_id; // string
    char *business_id; // string
    char *business_profile_record_id; // string
    char *course_completion_certificate_template_id; // string
    char *course_id; // string

} course_completion_certificate_create_dto_t;

course_completion_certificate_create_dto_t *course_completion_certificate_create_dto_create(
    char *id,
    char *timestamp,
    char *student_profile_id,
    char *course_enrollment_id,
    char *business_id,
    char *business_profile_record_id,
    char *course_completion_certificate_template_id,
    char *course_id
);

void course_completion_certificate_create_dto_free(course_completion_certificate_create_dto_t *course_completion_certificate_create_dto);

course_completion_certificate_create_dto_t *course_completion_certificate_create_dto_parseFromJSON(cJSON *course_completion_certificate_create_dtoJSON);

cJSON *course_completion_certificate_create_dto_convertToJSON(course_completion_certificate_create_dto_t *course_completion_certificate_create_dto);

#endif /* _course_completion_certificate_create_dto_H_ */

