/*
 * web_page_tag_create_dto.h
 *
 * 
 */

#ifndef _web_page_tag_create_dto_H_
#define _web_page_tag_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct web_page_tag_create_dto_t web_page_tag_create_dto_t;




typedef struct web_page_tag_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *slug; // string
    char *title; // string
    char *description; // string
    char *seo_title; // string
    char *meta_description; // string
    int cornerstone_content; //boolean
    int allow_serach_engines; //boolean
    char *seo_key_phrases; // string
    char *canonical_url; // string
    char *image_url; // string
    char *image; // string
    char *web_portal_id; // string
    char *business_profile_record_id; // string

} web_page_tag_create_dto_t;

web_page_tag_create_dto_t *web_page_tag_create_dto_create(
    char *id,
    char *timestamp,
    char *slug,
    char *title,
    char *description,
    char *seo_title,
    char *meta_description,
    int cornerstone_content,
    int allow_serach_engines,
    char *seo_key_phrases,
    char *canonical_url,
    char *image_url,
    char *image,
    char *web_portal_id,
    char *business_profile_record_id
);

void web_page_tag_create_dto_free(web_page_tag_create_dto_t *web_page_tag_create_dto);

web_page_tag_create_dto_t *web_page_tag_create_dto_parseFromJSON(cJSON *web_page_tag_create_dtoJSON);

cJSON *web_page_tag_create_dto_convertToJSON(web_page_tag_create_dto_t *web_page_tag_create_dto);

#endif /* _web_page_tag_create_dto_H_ */

