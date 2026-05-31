/*
 * course_content_group_update_dto.h
 *
 * 
 */

#ifndef _course_content_group_update_dto_H_
#define _course_content_group_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct course_content_group_update_dto_t course_content_group_update_dto_t;




typedef struct course_content_group_update_dto_t {
    char *name; // string
    char *course_id; // string

} course_content_group_update_dto_t;

course_content_group_update_dto_t *course_content_group_update_dto_create(
    char *name,
    char *course_id
);

void course_content_group_update_dto_free(course_content_group_update_dto_t *course_content_group_update_dto);

course_content_group_update_dto_t *course_content_group_update_dto_parseFromJSON(cJSON *course_content_group_update_dtoJSON);

cJSON *course_content_group_update_dto_convertToJSON(course_content_group_update_dto_t *course_content_group_update_dto);

#endif /* _course_content_group_update_dto_H_ */

