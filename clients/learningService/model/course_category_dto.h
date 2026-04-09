/*
 * course_category_dto.h
 *
 * 
 */

#ifndef _course_category_dto_H_
#define _course_category_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct course_category_dto_t course_category_dto_t;




typedef struct course_category_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *description; // string
    char *image_url; // string
    int is_featured; //boolean
    char *tenant_id; // string

} course_category_dto_t;

course_category_dto_t *course_category_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *image_url,
    int is_featured,
    char *tenant_id
);

void course_category_dto_free(course_category_dto_t *course_category_dto);

course_category_dto_t *course_category_dto_parseFromJSON(cJSON *course_category_dtoJSON);

cJSON *course_category_dto_convertToJSON(course_category_dto_t *course_category_dto);

#endif /* _course_category_dto_H_ */

