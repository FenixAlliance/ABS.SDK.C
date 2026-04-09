/*
 * course_problem_set_update_dto.h
 *
 * 
 */

#ifndef _course_problem_set_update_dto_H_
#define _course_problem_set_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct course_problem_set_update_dto_t course_problem_set_update_dto_t;




typedef struct course_problem_set_update_dto_t {
    char *title; // string
    char *description; // string
    double overall_score; //numeric
    char *course_unit_id; // string
    char *course_grading_rubric_id; // string
    char *release_date_time; //date time

} course_problem_set_update_dto_t;

course_problem_set_update_dto_t *course_problem_set_update_dto_create(
    char *title,
    char *description,
    double overall_score,
    char *course_unit_id,
    char *course_grading_rubric_id,
    char *release_date_time
);

void course_problem_set_update_dto_free(course_problem_set_update_dto_t *course_problem_set_update_dto);

course_problem_set_update_dto_t *course_problem_set_update_dto_parseFromJSON(cJSON *course_problem_set_update_dtoJSON);

cJSON *course_problem_set_update_dto_convertToJSON(course_problem_set_update_dto_t *course_problem_set_update_dto);

#endif /* _course_problem_set_update_dto_H_ */

