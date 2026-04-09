/*
 * course_handout_update_dto.h
 *
 * 
 */

#ifndef _course_handout_update_dto_H_
#define _course_handout_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct course_handout_update_dto_t course_handout_update_dto_t;




typedef struct course_handout_update_dto_t {
    char *name; // string
    char *description; // string
    char *content; // string
    char *url; // string
    char *release_date_time; //date time
    char *course_unit_id; // string

} course_handout_update_dto_t;

course_handout_update_dto_t *course_handout_update_dto_create(
    char *name,
    char *description,
    char *content,
    char *url,
    char *release_date_time,
    char *course_unit_id
);

void course_handout_update_dto_free(course_handout_update_dto_t *course_handout_update_dto);

course_handout_update_dto_t *course_handout_update_dto_parseFromJSON(cJSON *course_handout_update_dtoJSON);

cJSON *course_handout_update_dto_convertToJSON(course_handout_update_dto_t *course_handout_update_dto);

#endif /* _course_handout_update_dto_H_ */

