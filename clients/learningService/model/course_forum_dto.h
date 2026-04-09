/*
 * course_forum_dto.h
 *
 * 
 */

#ifndef _course_forum_dto_H_
#define _course_forum_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct course_forum_dto_t course_forum_dto_t;




typedef struct course_forum_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *description; // string
    char *course_id; // string
    char *tenant_id; // string

} course_forum_dto_t;

course_forum_dto_t *course_forum_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *course_id,
    char *tenant_id
);

void course_forum_dto_free(course_forum_dto_t *course_forum_dto);

course_forum_dto_t *course_forum_dto_parseFromJSON(cJSON *course_forum_dtoJSON);

cJSON *course_forum_dto_convertToJSON(course_forum_dto_t *course_forum_dto);

#endif /* _course_forum_dto_H_ */

