/*
 * web_portal_create_dto.h
 *
 * 
 */

#ifndef _web_portal_create_dto_H_
#define _web_portal_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct web_portal_create_dto_t web_portal_create_dto_t;




typedef struct web_portal_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    int root; //boolean
    char *title; // string
    char *domain; // string
    int disabled; //boolean
    char *business_id; // string
    char *description; // string
    char *website_theme_id; // string
    char *business_domain_id; // string
    char *business_profile_record_id; // string
    char *business_portal_application_id; // string

} web_portal_create_dto_t;

web_portal_create_dto_t *web_portal_create_dto_create(
    char *id,
    char *timestamp,
    int root,
    char *title,
    char *domain,
    int disabled,
    char *business_id,
    char *description,
    char *website_theme_id,
    char *business_domain_id,
    char *business_profile_record_id,
    char *business_portal_application_id
);

void web_portal_create_dto_free(web_portal_create_dto_t *web_portal_create_dto);

web_portal_create_dto_t *web_portal_create_dto_parseFromJSON(cJSON *web_portal_create_dtoJSON);

cJSON *web_portal_create_dto_convertToJSON(web_portal_create_dto_t *web_portal_create_dto);

#endif /* _web_portal_create_dto_H_ */

