/*
 * course_section_dto.h
 *
 * 
 */

#ifndef _course_section_dto_H_
#define _course_section_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct course_section_dto_t course_section_dto_t;




typedef struct course_section_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *icon; // string
    char *name; // string
    char *description; // string
    char *course_id; // string
    char *release_date_time; //date time
    int hide_from_students; //boolean
    char *tenant_id; // string

} course_section_dto_t;

course_section_dto_t *course_section_dto_create(
    char *id,
    char *timestamp,
    char *icon,
    char *name,
    char *description,
    char *course_id,
    char *release_date_time,
    int hide_from_students,
    char *tenant_id
);

void course_section_dto_free(course_section_dto_t *course_section_dto);

course_section_dto_t *course_section_dto_parseFromJSON(cJSON *course_section_dtoJSON);

cJSON *course_section_dto_convertToJSON(course_section_dto_t *course_section_dto);

#endif /* _course_section_dto_H_ */

