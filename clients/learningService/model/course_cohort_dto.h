/*
 * course_cohort_dto.h
 *
 * 
 */

#ifndef _course_cohort_dto_H_
#define _course_cohort_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct course_cohort_dto_t course_cohort_dto_t;




typedef struct course_cohort_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *start_date_time; //date time
    char *end_date_time; //date time
    char *expected_start_date_time; //date time
    char *expected_end_date_time; //date time
    char *course_id; // string
    char *tenant_id; // string

} course_cohort_dto_t;

course_cohort_dto_t *course_cohort_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *start_date_time,
    char *end_date_time,
    char *expected_start_date_time,
    char *expected_end_date_time,
    char *course_id,
    char *tenant_id
);

void course_cohort_dto_free(course_cohort_dto_t *course_cohort_dto);

course_cohort_dto_t *course_cohort_dto_parseFromJSON(cJSON *course_cohort_dtoJSON);

cJSON *course_cohort_dto_convertToJSON(course_cohort_dto_t *course_cohort_dto);

#endif /* _course_cohort_dto_H_ */

