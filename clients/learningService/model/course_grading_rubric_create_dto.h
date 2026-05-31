/*
 * course_grading_rubric_create_dto.h
 *
 * 
 */

#ifndef _course_grading_rubric_create_dto_H_
#define _course_grading_rubric_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct course_grading_rubric_create_dto_t course_grading_rubric_create_dto_t;




typedef struct course_grading_rubric_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *description; // string
    int enable_points; //boolean
    char *course_id; // string

} course_grading_rubric_create_dto_t;

course_grading_rubric_create_dto_t *course_grading_rubric_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    int enable_points,
    char *course_id
);

void course_grading_rubric_create_dto_free(course_grading_rubric_create_dto_t *course_grading_rubric_create_dto);

course_grading_rubric_create_dto_t *course_grading_rubric_create_dto_parseFromJSON(cJSON *course_grading_rubric_create_dtoJSON);

cJSON *course_grading_rubric_create_dto_convertToJSON(course_grading_rubric_create_dto_t *course_grading_rubric_create_dto);

#endif /* _course_grading_rubric_create_dto_H_ */

