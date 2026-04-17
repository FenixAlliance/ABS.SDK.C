/*
 * course_cohort_create_dto.h
 *
 * 
 */

#ifndef _course_cohort_create_dto_H_
#define _course_cohort_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct course_cohort_create_dto_t course_cohort_create_dto_t;




typedef struct course_cohort_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *course_id; // string
    char *start_date_time; //date time
    char *end_date_time; //date time
    char *expected_start_date_time; //date time
    char *expected_end_date_time; //date time

} course_cohort_create_dto_t;

course_cohort_create_dto_t *course_cohort_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *course_id,
    char *start_date_time,
    char *end_date_time,
    char *expected_start_date_time,
    char *expected_end_date_time
);

void course_cohort_create_dto_free(course_cohort_create_dto_t *course_cohort_create_dto);

course_cohort_create_dto_t *course_cohort_create_dto_parseFromJSON(cJSON *course_cohort_create_dtoJSON);

cJSON *course_cohort_create_dto_convertToJSON(course_cohort_create_dto_t *course_cohort_create_dto);

#endif /* _course_cohort_create_dto_H_ */

