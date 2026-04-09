/*
 * course_file_update_dto.h
 *
 * 
 */

#ifndef _course_file_update_dto_H_
#define _course_file_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct course_file_update_dto_t course_file_update_dto_t;




typedef struct course_file_update_dto_t {
    char *title; // string
    char *file_name; // string
    char *file_upload_url; // string
    char *content_type; // string
    long file_length; //numeric

} course_file_update_dto_t;

course_file_update_dto_t *course_file_update_dto_create(
    char *title,
    char *file_name,
    char *file_upload_url,
    char *content_type,
    long file_length
);

void course_file_update_dto_free(course_file_update_dto_t *course_file_update_dto);

course_file_update_dto_t *course_file_update_dto_parseFromJSON(cJSON *course_file_update_dtoJSON);

cJSON *course_file_update_dto_convertToJSON(course_file_update_dto_t *course_file_update_dto);

#endif /* _course_file_update_dto_H_ */

