/*
 * web_content_dto.h
 *
 * 
 */

#ifndef _web_content_dto_H_
#define _web_content_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct web_content_dto_t web_content_dto_t;

#include "any_type.h"

// Enum CODETYPE for web_content_dto

typedef enum  { contentservice_web_content_dto_CODETYPE_NULL = 0, contentservice_web_content_dto_CODETYPE_Razor, contentservice_web_content_dto_CODETYPE_CSharp, contentservice_web_content_dto_CODETYPE_CSHtml, contentservice_web_content_dto_CODETYPE_Liquid, contentservice_web_content_dto_CODETYPE_Html5, contentservice_web_content_dto_CODETYPE_Markdown } contentservice_web_content_dto_CODETYPE_e;

char* web_content_dto_code_type_ToString(contentservice_web_content_dto_CODETYPE_e code_type);

contentservice_web_content_dto_CODETYPE_e web_content_dto_code_type_FromString(char* code_type);



typedef struct web_content_dto_t {
    char *id; // string
    char *timestamp; //date time
    contentservice_web_content_dto_CODETYPE_e code_type; //enum
    int order; //numeric
    char *slug; // string
    char *name; // string
    char *title; // string
    char *excerpt; // string
    char *password; // string
    char *description; // string
    char *highlight_image; // string
    char *canonical_url; // string
    any_type_t *emit_result; // custom
    char *seo_title; // string
    char *seo_key_words; // string
    char *seo_key_phrases; // string
    char *meta_description; // string
    char *twitter_image; // string
    char *twitter_title; // string
    char *twitter_description; // string
    char *facebook_image; // string
    char *facebook_title; // string
    char *facebook_description; // string
    char *featured_image_url; // string
    char *content; // string
    char *code; // string
    char *_namespace; // string
    char *type_name; // string
    char *generated_code; // string
    char *compilation_path; // string
    char *html_content; // string
    char *c_sharp_content; // string
    char *razor_content; // string
    char *css_content; // string
    char *js_content; // string
    char *css_files; // string
    char *js_files; // string
    char *razor_generated_code; // string
    char *c_sharp_generated_code; // string
    int _template; //boolean
    int _default; //boolean
    int enable; //boolean
    int enable_comments; //boolean
    int display_social_box; //boolean
    int published; //boolean
    int in_trash_can; //boolean
    int system_locked; //boolean
    int allow_ping_backs; //boolean
    int allow_trackbacks; //boolean
    int cornerstone_content; //boolean
    int is_essential_content; //boolean
    int allow_search_engine_indexing; //boolean
    char *tenant_id; // string
    char *web_portal_id; // string
    char *website_theme_id; // string
    char *enrollment_id; // string
    char *social_profile_id; // string
    char *parent_web_content_id; // string
    char *parent_web_content_version_id; // string

} web_content_dto_t;

web_content_dto_t *web_content_dto_create(
    char *id,
    char *timestamp,
    contentservice_web_content_dto_CODETYPE_e code_type,
    int order,
    char *slug,
    char *name,
    char *title,
    char *excerpt,
    char *password,
    char *description,
    char *highlight_image,
    char *canonical_url,
    any_type_t *emit_result,
    char *seo_title,
    char *seo_key_words,
    char *seo_key_phrases,
    char *meta_description,
    char *twitter_image,
    char *twitter_title,
    char *twitter_description,
    char *facebook_image,
    char *facebook_title,
    char *facebook_description,
    char *featured_image_url,
    char *content,
    char *code,
    char *_namespace,
    char *type_name,
    char *generated_code,
    char *compilation_path,
    char *html_content,
    char *c_sharp_content,
    char *razor_content,
    char *css_content,
    char *js_content,
    char *css_files,
    char *js_files,
    char *razor_generated_code,
    char *c_sharp_generated_code,
    int _template,
    int _default,
    int enable,
    int enable_comments,
    int display_social_box,
    int published,
    int in_trash_can,
    int system_locked,
    int allow_ping_backs,
    int allow_trackbacks,
    int cornerstone_content,
    int is_essential_content,
    int allow_search_engine_indexing,
    char *tenant_id,
    char *web_portal_id,
    char *website_theme_id,
    char *enrollment_id,
    char *social_profile_id,
    char *parent_web_content_id,
    char *parent_web_content_version_id
);

void web_content_dto_free(web_content_dto_t *web_content_dto);

web_content_dto_t *web_content_dto_parseFromJSON(cJSON *web_content_dtoJSON);

cJSON *web_content_dto_convertToJSON(web_content_dto_t *web_content_dto);

#endif /* _web_content_dto_H_ */

