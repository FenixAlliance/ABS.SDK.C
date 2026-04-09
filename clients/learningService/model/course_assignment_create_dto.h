/*
 * course_assignment_create_dto.h
 *
 * 
 */

#ifndef _course_assignment_create_dto_H_
#define _course_assignment_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct course_assignment_create_dto_t course_assignment_create_dto_t;




typedef struct course_assignment_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *description; // string
    char *instructions; // string
    double points; //numeric
    char *course_id; // string
    char *business_id; // string
    char *course_unit_id; // string
    char *course_cohort_id; // string
    char *course_assignment_type_id; // string
    char *due_date_time; //date time
    int asign_to_all_cohorts; //boolean
    char *resources; // string

} course_assignment_create_dto_t;

course_assignment_create_dto_t *course_assignment_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *instructions,
    double points,
    char *course_id,
    char *business_id,
    char *course_unit_id,
    char *course_cohort_id,
    char *course_assignment_type_id,
    char *due_date_time,
    int asign_to_all_cohorts,
    char *resources
);

void course_assignment_create_dto_free(course_assignment_create_dto_t *course_assignment_create_dto);

course_assignment_create_dto_t *course_assignment_create_dto_parseFromJSON(cJSON *course_assignment_create_dtoJSON);

cJSON *course_assignment_create_dto_convertToJSON(course_assignment_create_dto_t *course_assignment_create_dto);

#endif /* _course_assignment_create_dto_H_ */

