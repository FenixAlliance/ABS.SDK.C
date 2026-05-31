/*
 * course_grading_rubric_dto.h
 *
 * 
 */

#ifndef _course_grading_rubric_dto_H_
#define _course_grading_rubric_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct course_grading_rubric_dto_t course_grading_rubric_dto_t;




typedef struct course_grading_rubric_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *description; // string
    int enable_points; //boolean
    char *course_id; // string
    char *tenant_id; // string

} course_grading_rubric_dto_t;

course_grading_rubric_dto_t *course_grading_rubric_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    int enable_points,
    char *course_id,
    char *tenant_id
);

void course_grading_rubric_dto_free(course_grading_rubric_dto_t *course_grading_rubric_dto);

course_grading_rubric_dto_t *course_grading_rubric_dto_parseFromJSON(cJSON *course_grading_rubric_dtoJSON);

cJSON *course_grading_rubric_dto_convertToJSON(course_grading_rubric_dto_t *course_grading_rubric_dto);

#endif /* _course_grading_rubric_dto_H_ */

