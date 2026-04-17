/*
 * course_enrollment_create_dto.h
 *
 * 
 */

#ifndef _course_enrollment_create_dto_H_
#define _course_enrollment_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct course_enrollment_create_dto_t course_enrollment_create_dto_t;




typedef struct course_enrollment_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *course_id; // string
    char *course_cohort_id; // string
    char *student_profile_id; // string
    char *course_completion_certificate_id; // string

} course_enrollment_create_dto_t;

course_enrollment_create_dto_t *course_enrollment_create_dto_create(
    char *id,
    char *timestamp,
    char *course_id,
    char *course_cohort_id,
    char *student_profile_id,
    char *course_completion_certificate_id
);

void course_enrollment_create_dto_free(course_enrollment_create_dto_t *course_enrollment_create_dto);

course_enrollment_create_dto_t *course_enrollment_create_dto_parseFromJSON(cJSON *course_enrollment_create_dtoJSON);

cJSON *course_enrollment_create_dto_convertToJSON(course_enrollment_create_dto_t *course_enrollment_create_dto);

#endif /* _course_enrollment_create_dto_H_ */

