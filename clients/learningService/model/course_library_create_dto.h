/*
 * course_library_create_dto.h
 *
 * 
 */

#ifndef _course_library_create_dto_H_
#define _course_library_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct course_library_create_dto_t course_library_create_dto_t;




typedef struct course_library_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *description; // string
    char *course_id; // string
    char *course_unit_id; // string
    char *business_id; // string
    char *release_date_time; //date time

} course_library_create_dto_t;

course_library_create_dto_t *course_library_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *course_id,
    char *course_unit_id,
    char *business_id,
    char *release_date_time
);

void course_library_create_dto_free(course_library_create_dto_t *course_library_create_dto);

course_library_create_dto_t *course_library_create_dto_parseFromJSON(cJSON *course_library_create_dtoJSON);

cJSON *course_library_create_dto_convertToJSON(course_library_create_dto_t *course_library_create_dto);

#endif /* _course_library_create_dto_H_ */

