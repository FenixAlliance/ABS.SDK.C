/*
 * course_grading_rubric_update_dto.h
 *
 * 
 */

#ifndef _course_grading_rubric_update_dto_H_
#define _course_grading_rubric_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct course_grading_rubric_update_dto_t course_grading_rubric_update_dto_t;




typedef struct course_grading_rubric_update_dto_t {
    char *title; // string
    char *description; // string
    int enable_points; //boolean

} course_grading_rubric_update_dto_t;

course_grading_rubric_update_dto_t *course_grading_rubric_update_dto_create(
    char *title,
    char *description,
    int enable_points
);

void course_grading_rubric_update_dto_free(course_grading_rubric_update_dto_t *course_grading_rubric_update_dto);

course_grading_rubric_update_dto_t *course_grading_rubric_update_dto_parseFromJSON(cJSON *course_grading_rubric_update_dtoJSON);

cJSON *course_grading_rubric_update_dto_convertToJSON(course_grading_rubric_update_dto_t *course_grading_rubric_update_dto);

#endif /* _course_grading_rubric_update_dto_H_ */

