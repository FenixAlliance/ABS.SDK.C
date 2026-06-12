/*
 * course_content_group_dto.h
 *
 * 
 */

#ifndef _course_content_group_dto_H_
#define _course_content_group_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct course_content_group_dto_t course_content_group_dto_t;




typedef struct course_content_group_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *course_id; // string
    char *tenant_id; // string
    char *enrollment_id; // string

} course_content_group_dto_t;

course_content_group_dto_t *course_content_group_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *course_id,
    char *tenant_id,
    char *enrollment_id
);

void course_content_group_dto_free(course_content_group_dto_t *course_content_group_dto);

course_content_group_dto_t *course_content_group_dto_parseFromJSON(cJSON *course_content_group_dtoJSON);

cJSON *course_content_group_dto_convertToJSON(course_content_group_dto_t *course_content_group_dto);

#endif /* _course_content_group_dto_H_ */

