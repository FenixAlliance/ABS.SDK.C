/*
 * course_certificate_template_update_dto.h
 *
 * 
 */

#ifndef _course_certificate_template_update_dto_H_
#define _course_certificate_template_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct course_certificate_template_update_dto_t course_certificate_template_update_dto_t;




typedef struct course_certificate_template_update_dto_t {
    char *web_portal_id; // string
    char *website_theme_id; // string
    char *social_profile_id; // string
    char *parent_web_content_id; // string
    char *parent_web_content_version_id; // string

} course_certificate_template_update_dto_t;

course_certificate_template_update_dto_t *course_certificate_template_update_dto_create(
    char *web_portal_id,
    char *website_theme_id,
    char *social_profile_id,
    char *parent_web_content_id,
    char *parent_web_content_version_id
);

void course_certificate_template_update_dto_free(course_certificate_template_update_dto_t *course_certificate_template_update_dto);

course_certificate_template_update_dto_t *course_certificate_template_update_dto_parseFromJSON(cJSON *course_certificate_template_update_dtoJSON);

cJSON *course_certificate_template_update_dto_convertToJSON(course_certificate_template_update_dto_t *course_certificate_template_update_dto);

#endif /* _course_certificate_template_update_dto_H_ */

