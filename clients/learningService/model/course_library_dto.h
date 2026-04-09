/*
 * course_library_dto.h
 *
 * 
 */

#ifndef _course_library_dto_H_
#define _course_library_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct course_library_dto_t course_library_dto_t;




typedef struct course_library_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *description; // string
    char *course_id; // string
    char *course_unit_id; // string
    char *release_date_time; //date time
    char *tenant_id; // string

} course_library_dto_t;

course_library_dto_t *course_library_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *course_id,
    char *course_unit_id,
    char *release_date_time,
    char *tenant_id
);

void course_library_dto_free(course_library_dto_t *course_library_dto);

course_library_dto_t *course_library_dto_parseFromJSON(cJSON *course_library_dtoJSON);

cJSON *course_library_dto_convertToJSON(course_library_dto_t *course_library_dto);

#endif /* _course_library_dto_H_ */

