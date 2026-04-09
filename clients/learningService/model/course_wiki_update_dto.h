/*
 * course_wiki_update_dto.h
 *
 * 
 */

#ifndef _course_wiki_update_dto_H_
#define _course_wiki_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct course_wiki_update_dto_t course_wiki_update_dto_t;




typedef struct course_wiki_update_dto_t {
    char *title; // string
    char *description; // string
    char *course_unit_id; // string
    char *release_date_time; //date time

} course_wiki_update_dto_t;

course_wiki_update_dto_t *course_wiki_update_dto_create(
    char *title,
    char *description,
    char *course_unit_id,
    char *release_date_time
);

void course_wiki_update_dto_free(course_wiki_update_dto_t *course_wiki_update_dto);

course_wiki_update_dto_t *course_wiki_update_dto_parseFromJSON(cJSON *course_wiki_update_dtoJSON);

cJSON *course_wiki_update_dto_convertToJSON(course_wiki_update_dto_t *course_wiki_update_dto);

#endif /* _course_wiki_update_dto_H_ */

