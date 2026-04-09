/*
 * course_file_create_dto.h
 *
 * 
 */

#ifndef _course_file_create_dto_H_
#define _course_file_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct course_file_create_dto_t course_file_create_dto_t;




typedef struct course_file_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *file_name; // string
    char *file_upload_url; // string
    char *content_type; // string
    long file_length; //numeric
    char *course_id; // string
    char *business_id; // string

} course_file_create_dto_t;

course_file_create_dto_t *course_file_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *file_name,
    char *file_upload_url,
    char *content_type,
    long file_length,
    char *course_id,
    char *business_id
);

void course_file_create_dto_free(course_file_create_dto_t *course_file_create_dto);

course_file_create_dto_t *course_file_create_dto_parseFromJSON(cJSON *course_file_create_dtoJSON);

cJSON *course_file_create_dto_convertToJSON(course_file_create_dto_t *course_file_create_dto);

#endif /* _course_file_create_dto_H_ */

