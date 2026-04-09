/*
 * course_assignment_dto.h
 *
 * 
 */

#ifndef _course_assignment_dto_H_
#define _course_assignment_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct course_assignment_dto_t course_assignment_dto_t;




typedef struct course_assignment_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *description; // string
    char *instructions; // string
    double points; //numeric
    char *due_date_time; //date time
    char *course_id; // string
    char *course_unit_id; // string
    char *course_section_id; // string
    char *tenant_id; // string

} course_assignment_dto_t;

course_assignment_dto_t *course_assignment_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *instructions,
    double points,
    char *due_date_time,
    char *course_id,
    char *course_unit_id,
    char *course_section_id,
    char *tenant_id
);

void course_assignment_dto_free(course_assignment_dto_t *course_assignment_dto);

course_assignment_dto_t *course_assignment_dto_parseFromJSON(cJSON *course_assignment_dtoJSON);

cJSON *course_assignment_dto_convertToJSON(course_assignment_dto_t *course_assignment_dto);

#endif /* _course_assignment_dto_H_ */

