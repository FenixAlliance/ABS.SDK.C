/*
 * course_page_create_dto.h
 *
 * 
 */

#ifndef _course_page_create_dto_H_
#define _course_page_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct course_page_create_dto_t course_page_create_dto_t;




typedef struct course_page_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *description; // string
    char *content; // string
    char *slug; // string
    char *course_id; // string

} course_page_create_dto_t;

course_page_create_dto_t *course_page_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *content,
    char *slug,
    char *course_id
);

void course_page_create_dto_free(course_page_create_dto_t *course_page_create_dto);

course_page_create_dto_t *course_page_create_dto_parseFromJSON(cJSON *course_page_create_dtoJSON);

cJSON *course_page_create_dto_convertToJSON(course_page_create_dto_t *course_page_create_dto);

#endif /* _course_page_create_dto_H_ */

