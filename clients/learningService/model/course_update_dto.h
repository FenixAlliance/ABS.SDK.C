/*
 * course_update_dto.h
 *
 * 
 */

#ifndef _course_update_dto_H_
#define _course_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct course_update_dto_t course_update_dto_t;




typedef struct course_update_dto_t {
    char *title; // string

} course_update_dto_t;

course_update_dto_t *course_update_dto_create(
    char *title
);

void course_update_dto_free(course_update_dto_t *course_update_dto);

course_update_dto_t *course_update_dto_parseFromJSON(cJSON *course_update_dtoJSON);

cJSON *course_update_dto_convertToJSON(course_update_dto_t *course_update_dto);

#endif /* _course_update_dto_H_ */

