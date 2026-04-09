/*
 * course_wiki_create_dto.h
 *
 * 
 */

#ifndef _course_wiki_create_dto_H_
#define _course_wiki_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct course_wiki_create_dto_t course_wiki_create_dto_t;




typedef struct course_wiki_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *description; // string
    char *course_id; // string
    char *business_id; // string
    char *course_unit_id; // string
    char *release_date_time; //date time

} course_wiki_create_dto_t;

course_wiki_create_dto_t *course_wiki_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *course_id,
    char *business_id,
    char *course_unit_id,
    char *release_date_time
);

void course_wiki_create_dto_free(course_wiki_create_dto_t *course_wiki_create_dto);

course_wiki_create_dto_t *course_wiki_create_dto_parseFromJSON(cJSON *course_wiki_create_dtoJSON);

cJSON *course_wiki_create_dto_convertToJSON(course_wiki_create_dto_t *course_wiki_create_dto);

#endif /* _course_wiki_create_dto_H_ */

