/*
 * course_cohort_update_dto.h
 *
 * 
 */

#ifndef _course_cohort_update_dto_H_
#define _course_cohort_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct course_cohort_update_dto_t course_cohort_update_dto_t;




typedef struct course_cohort_update_dto_t {
    char *name; // string
    char *start_date_time; //date time
    char *end_date_time; //date time
    char *expected_start_date_time; //date time
    char *expected_end_date_time; //date time

} course_cohort_update_dto_t;

course_cohort_update_dto_t *course_cohort_update_dto_create(
    char *name,
    char *start_date_time,
    char *end_date_time,
    char *expected_start_date_time,
    char *expected_end_date_time
);

void course_cohort_update_dto_free(course_cohort_update_dto_t *course_cohort_update_dto);

course_cohort_update_dto_t *course_cohort_update_dto_parseFromJSON(cJSON *course_cohort_update_dtoJSON);

cJSON *course_cohort_update_dto_convertToJSON(course_cohort_update_dto_t *course_cohort_update_dto);

#endif /* _course_cohort_update_dto_H_ */

