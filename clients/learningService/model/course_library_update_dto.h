/*
 * course_library_update_dto.h
 *
 * 
 */

#ifndef _course_library_update_dto_H_
#define _course_library_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct course_library_update_dto_t course_library_update_dto_t;




typedef struct course_library_update_dto_t {
    char *title; // string
    char *description; // string
    char *course_unit_id; // string
    char *release_date_time; //date time

} course_library_update_dto_t;

course_library_update_dto_t *course_library_update_dto_create(
    char *title,
    char *description,
    char *course_unit_id,
    char *release_date_time
);

void course_library_update_dto_free(course_library_update_dto_t *course_library_update_dto);

course_library_update_dto_t *course_library_update_dto_parseFromJSON(cJSON *course_library_update_dtoJSON);

cJSON *course_library_update_dto_convertToJSON(course_library_update_dto_t *course_library_update_dto);

#endif /* _course_library_update_dto_H_ */

