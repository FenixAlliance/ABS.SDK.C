/*
 * course_create_dto.h
 *
 * 
 */

#ifndef _course_create_dto_H_
#define _course_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct course_create_dto_t course_create_dto_t;




typedef struct course_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string

} course_create_dto_t;

course_create_dto_t *course_create_dto_create(
    char *id,
    char *timestamp,
    char *title
);

void course_create_dto_free(course_create_dto_t *course_create_dto);

course_create_dto_t *course_create_dto_parseFromJSON(cJSON *course_create_dtoJSON);

cJSON *course_create_dto_convertToJSON(course_create_dto_t *course_create_dto);

#endif /* _course_create_dto_H_ */

