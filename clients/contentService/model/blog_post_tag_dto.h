/*
 * blog_post_tag_dto.h
 *
 * 
 */

#ifndef _blog_post_tag_dto_H_
#define _blog_post_tag_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct blog_post_tag_dto_t blog_post_tag_dto_t;




typedef struct blog_post_tag_dto_t {
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
    char *business_id; // string
    char *business_profile_record_id; // string

} blog_post_tag_dto_t;

blog_post_tag_dto_t *blog_post_tag_dto_create(
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
    char *business_id,
    char *business_profile_record_id
);

void blog_post_tag_dto_free(blog_post_tag_dto_t *blog_post_tag_dto);

blog_post_tag_dto_t *blog_post_tag_dto_parseFromJSON(cJSON *blog_post_tag_dtoJSON);

cJSON *blog_post_tag_dto_convertToJSON(blog_post_tag_dto_t *blog_post_tag_dto);

#endif /* _blog_post_tag_dto_H_ */

