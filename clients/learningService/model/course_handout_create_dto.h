/*
 * course_handout_create_dto.h
 *
 * 
 */

#ifndef _course_handout_create_dto_H_
#define _course_handout_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct course_handout_create_dto_t course_handout_create_dto_t;




typedef struct course_handout_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *description; // string
    char *content; // string
    char *url; // string
    char *release_date_time; //date time
    char *course_id; // string
    char *course_unit_id; // string
    char *business_id; // string

} course_handout_create_dto_t;

course_handout_create_dto_t *course_handout_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *content,
    char *url,
    char *release_date_time,
    char *course_id,
    char *course_unit_id,
    char *business_id
);

void course_handout_create_dto_free(course_handout_create_dto_t *course_handout_create_dto);

course_handout_create_dto_t *course_handout_create_dto_parseFromJSON(cJSON *course_handout_create_dtoJSON);

cJSON *course_handout_create_dto_convertToJSON(course_handout_create_dto_t *course_handout_create_dto);

#endif /* _course_handout_create_dto_H_ */

