/*
 * course_page_update_dto.h
 *
 * 
 */

#ifndef _course_page_update_dto_H_
#define _course_page_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct course_page_update_dto_t course_page_update_dto_t;




typedef struct course_page_update_dto_t {
    char *title; // string
    char *description; // string
    char *content; // string
    char *slug; // string

} course_page_update_dto_t;

course_page_update_dto_t *course_page_update_dto_create(
    char *title,
    char *description,
    char *content,
    char *slug
);

void course_page_update_dto_free(course_page_update_dto_t *course_page_update_dto);

course_page_update_dto_t *course_page_update_dto_parseFromJSON(cJSON *course_page_update_dtoJSON);

cJSON *course_page_update_dto_convertToJSON(course_page_update_dto_t *course_page_update_dto);

#endif /* _course_page_update_dto_H_ */

