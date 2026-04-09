/*
 * course_forum_update_dto.h
 *
 * 
 */

#ifndef _course_forum_update_dto_H_
#define _course_forum_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct course_forum_update_dto_t course_forum_update_dto_t;




typedef struct course_forum_update_dto_t {
    char *title; // string
    char *description; // string

} course_forum_update_dto_t;

course_forum_update_dto_t *course_forum_update_dto_create(
    char *title,
    char *description
);

void course_forum_update_dto_free(course_forum_update_dto_t *course_forum_update_dto);

course_forum_update_dto_t *course_forum_update_dto_parseFromJSON(cJSON *course_forum_update_dtoJSON);

cJSON *course_forum_update_dto_convertToJSON(course_forum_update_dto_t *course_forum_update_dto);

#endif /* _course_forum_update_dto_H_ */

