/*
 * course_unit_dto.h
 *
 * 
 */

#ifndef _course_unit_dto_H_
#define _course_unit_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct course_unit_dto_t course_unit_dto_t;

#include "course_assignment_dto.h"
#include "course_handout_dto.h"
#include "course_unit_component_dto.h"



typedef struct course_unit_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *description; // string
    char *release_date_time; //date time
    char *content; // string
    char *course_id; // string
    char *course_section_id; // string
    char *tenant_id; // string
    list_t *course_handouts; //nonprimitive container
    list_t *course_assignments; //nonprimitive container
    list_t *course_components; //nonprimitive container

} course_unit_dto_t;

course_unit_dto_t *course_unit_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *release_date_time,
    char *content,
    char *course_id,
    char *course_section_id,
    char *tenant_id,
    list_t *course_handouts,
    list_t *course_assignments,
    list_t *course_components
);

void course_unit_dto_free(course_unit_dto_t *course_unit_dto);

course_unit_dto_t *course_unit_dto_parseFromJSON(cJSON *course_unit_dtoJSON);

cJSON *course_unit_dto_convertToJSON(course_unit_dto_t *course_unit_dto);

#endif /* _course_unit_dto_H_ */

