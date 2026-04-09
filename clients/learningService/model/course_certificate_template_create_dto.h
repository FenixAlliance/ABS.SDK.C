/*
 * course_certificate_template_create_dto.h
 *
 * 
 */

#ifndef _course_certificate_template_create_dto_H_
#define _course_certificate_template_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct course_certificate_template_create_dto_t course_certificate_template_create_dto_t;




typedef struct course_certificate_template_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *course_id; // string
    char *business_id; // string
    char *web_portal_id; // string
    char *website_theme_id; // string
    char *business_profile_record_id; // string
    char *social_profile_id; // string
    char *parent_web_content_id; // string
    char *parent_web_content_version_id; // string

} course_certificate_template_create_dto_t;

course_certificate_template_create_dto_t *course_certificate_template_create_dto_create(
    char *id,
    char *timestamp,
    char *course_id,
    char *business_id,
    char *web_portal_id,
    char *website_theme_id,
    char *business_profile_record_id,
    char *social_profile_id,
    char *parent_web_content_id,
    char *parent_web_content_version_id
);

void course_certificate_template_create_dto_free(course_certificate_template_create_dto_t *course_certificate_template_create_dto);

course_certificate_template_create_dto_t *course_certificate_template_create_dto_parseFromJSON(cJSON *course_certificate_template_create_dtoJSON);

cJSON *course_certificate_template_create_dto_convertToJSON(course_certificate_template_create_dto_t *course_certificate_template_create_dto);

#endif /* _course_certificate_template_create_dto_H_ */

