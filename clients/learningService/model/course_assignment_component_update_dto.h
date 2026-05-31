/*
 * course_assignment_component_update_dto.h
 *
 * 
 */

#ifndef _course_assignment_component_update_dto_H_
#define _course_assignment_component_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct course_assignment_component_update_dto_t course_assignment_component_update_dto_t;




typedef struct course_assignment_component_update_dto_t {
    char *title; // string
    char *description; // string
    char *content; // string
    int order; //numeric
    char *course_assignment_id; // string

} course_assignment_component_update_dto_t;

course_assignment_component_update_dto_t *course_assignment_component_update_dto_create(
    char *title,
    char *description,
    char *content,
    int order,
    char *course_assignment_id
);

void course_assignment_component_update_dto_free(course_assignment_component_update_dto_t *course_assignment_component_update_dto);

course_assignment_component_update_dto_t *course_assignment_component_update_dto_parseFromJSON(cJSON *course_assignment_component_update_dtoJSON);

cJSON *course_assignment_component_update_dto_convertToJSON(course_assignment_component_update_dto_t *course_assignment_component_update_dto);

#endif /* _course_assignment_component_update_dto_H_ */

