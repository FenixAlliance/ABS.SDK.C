/*
 * course_update_dto.h
 *
 * 
 */

#ifndef _course_update_dto_H_
#define _course_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct course_update_dto_t course_update_dto_t;




typedef struct course_update_dto_t {
    char *title; // string
    char *description; // string
    char *sku; // string
    char *summary; // string
    char *code; // string
    char *version; // string
    char *course_category_id; // string
    char *instructor_profile_id; // string
    char *currency_id; // string
    double regular_price; //numeric
    int max_course_enrollments; //numeric
    int total_effort_in_weeks; //numeric
    int total_hours_per_week; //numeric
    int total_effort_in_hours; //numeric
    char *start_date_time; //date time
    char *end_date_time; //date time
    char *inscriptions_start_date_time; //date time
    char *inscriptions_end_date_time; //date time
    int published; //boolean

} course_update_dto_t;

course_update_dto_t *course_update_dto_create(
    char *title,
    char *description,
    char *sku,
    char *summary,
    char *code,
    char *version,
    char *course_category_id,
    char *instructor_profile_id,
    char *currency_id,
    double regular_price,
    int max_course_enrollments,
    int total_effort_in_weeks,
    int total_hours_per_week,
    int total_effort_in_hours,
    char *start_date_time,
    char *end_date_time,
    char *inscriptions_start_date_time,
    char *inscriptions_end_date_time,
    int published
);

void course_update_dto_free(course_update_dto_t *course_update_dto);

course_update_dto_t *course_update_dto_parseFromJSON(cJSON *course_update_dtoJSON);

cJSON *course_update_dto_convertToJSON(course_update_dto_t *course_update_dto);

#endif /* _course_update_dto_H_ */

