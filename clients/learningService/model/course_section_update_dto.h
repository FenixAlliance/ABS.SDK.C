/*
 * course_section_update_dto.h
 *
 * 
 */

#ifndef _course_section_update_dto_H_
#define _course_section_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct course_section_update_dto_t course_section_update_dto_t;




typedef struct course_section_update_dto_t {
    char *name; // string
    char *icon; // string
    char *description; // string
    char *release_date_time; //date time
    int hide_from_students; //boolean

} course_section_update_dto_t;

course_section_update_dto_t *course_section_update_dto_create(
    char *name,
    char *icon,
    char *description,
    char *release_date_time,
    int hide_from_students
);

void course_section_update_dto_free(course_section_update_dto_t *course_section_update_dto);

course_section_update_dto_t *course_section_update_dto_parseFromJSON(cJSON *course_section_update_dtoJSON);

cJSON *course_section_update_dto_convertToJSON(course_section_update_dto_t *course_section_update_dto);

#endif /* _course_section_update_dto_H_ */

