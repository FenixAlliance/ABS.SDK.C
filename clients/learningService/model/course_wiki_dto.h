/*
 * course_wiki_dto.h
 *
 * 
 */

#ifndef _course_wiki_dto_H_
#define _course_wiki_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct course_wiki_dto_t course_wiki_dto_t;




typedef struct course_wiki_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *description; // string
    char *release_date_time; //date time
    char *tenant_id; // string
    char *course_id; // string
    char *course_unit_id; // string

} course_wiki_dto_t;

course_wiki_dto_t *course_wiki_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *release_date_time,
    char *tenant_id,
    char *course_id,
    char *course_unit_id
);

void course_wiki_dto_free(course_wiki_dto_t *course_wiki_dto);

course_wiki_dto_t *course_wiki_dto_parseFromJSON(cJSON *course_wiki_dtoJSON);

cJSON *course_wiki_dto_convertToJSON(course_wiki_dto_t *course_wiki_dto);

#endif /* _course_wiki_dto_H_ */

