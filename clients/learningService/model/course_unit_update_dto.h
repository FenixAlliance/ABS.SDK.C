/*
 * course_unit_update_dto.h
 *
 * 
 */

#ifndef _course_unit_update_dto_H_
#define _course_unit_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct course_unit_update_dto_t course_unit_update_dto_t;




typedef struct course_unit_update_dto_t {
    char *title; // string
    char *description; // string
    char *content; // string
    char *course_content_group_id; // string
    char *release_date_time; //date time

} course_unit_update_dto_t;

course_unit_update_dto_t *course_unit_update_dto_create(
    char *title,
    char *description,
    char *content,
    char *course_content_group_id,
    char *release_date_time
);

void course_unit_update_dto_free(course_unit_update_dto_t *course_unit_update_dto);

course_unit_update_dto_t *course_unit_update_dto_parseFromJSON(cJSON *course_unit_update_dtoJSON);

cJSON *course_unit_update_dto_convertToJSON(course_unit_update_dto_t *course_unit_update_dto);

#endif /* _course_unit_update_dto_H_ */

