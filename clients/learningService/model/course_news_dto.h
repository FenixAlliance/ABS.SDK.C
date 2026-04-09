/*
 * course_news_dto.h
 *
 * 
 */

#ifndef _course_news_dto_H_
#define _course_news_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct course_news_dto_t course_news_dto_t;




typedef struct course_news_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *description; // string
    char *content; // string
    char *course_id; // string
    char *tenant_id; // string

} course_news_dto_t;

course_news_dto_t *course_news_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *content,
    char *course_id,
    char *tenant_id
);

void course_news_dto_free(course_news_dto_t *course_news_dto);

course_news_dto_t *course_news_dto_parseFromJSON(cJSON *course_news_dtoJSON);

cJSON *course_news_dto_convertToJSON(course_news_dto_t *course_news_dto);

#endif /* _course_news_dto_H_ */

