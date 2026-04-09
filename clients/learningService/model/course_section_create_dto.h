/*
 * course_section_create_dto.h
 *
 * 
 */

#ifndef _course_section_create_dto_H_
#define _course_section_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct course_section_create_dto_t course_section_create_dto_t;




typedef struct course_section_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *icon; // string
    char *description; // string
    char *course_id; // string
    char *business_id; // string
    char *release_date_time; //date time
    int hide_from_students; //boolean

} course_section_create_dto_t;

course_section_create_dto_t *course_section_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *icon,
    char *description,
    char *course_id,
    char *business_id,
    char *release_date_time,
    int hide_from_students
);

void course_section_create_dto_free(course_section_create_dto_t *course_section_create_dto);

course_section_create_dto_t *course_section_create_dto_parseFromJSON(cJSON *course_section_create_dtoJSON);

cJSON *course_section_create_dto_convertToJSON(course_section_create_dto_t *course_section_create_dto);

#endif /* _course_section_create_dto_H_ */

