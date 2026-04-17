/*
 * blog_post_create_dto.h
 *
 * 
 */

#ifndef _blog_post_create_dto_H_
#define _blog_post_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct blog_post_create_dto_t blog_post_create_dto_t;


// Enum CODETYPE for blog_post_create_dto

typedef enum  { contentservice_blog_post_create_dto_CODETYPE_NULL = 0, contentservice_blog_post_create_dto_CODETYPE_Razor, contentservice_blog_post_create_dto_CODETYPE_CSharp, contentservice_blog_post_create_dto_CODETYPE_CSHtml, contentservice_blog_post_create_dto_CODETYPE_Liquid, contentservice_blog_post_create_dto_CODETYPE_Html5, contentservice_blog_post_create_dto_CODETYPE_Markdown } contentservice_blog_post_create_dto_CODETYPE_e;

char* blog_post_create_dto_code_type_ToString(contentservice_blog_post_create_dto_CODETYPE_e code_type);

contentservice_blog_post_create_dto_CODETYPE_e blog_post_create_dto_code_type_FromString(char* code_type);



typedef struct blog_post_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *code; // string
    int published; //boolean
    char *description; // string
    char *html_content; // string
    char *featured_image_url; // string
    contentservice_blog_post_create_dto_CODETYPE_e code_type; //enum
    char *blog_post_category_id; // string
    char *web_template_id; // string

} blog_post_create_dto_t;

blog_post_create_dto_t *blog_post_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *code,
    int published,
    char *description,
    char *html_content,
    char *featured_image_url,
    contentservice_blog_post_create_dto_CODETYPE_e code_type,
    char *blog_post_category_id,
    char *web_template_id
);

void blog_post_create_dto_free(blog_post_create_dto_t *blog_post_create_dto);

blog_post_create_dto_t *blog_post_create_dto_parseFromJSON(cJSON *blog_post_create_dtoJSON);

cJSON *blog_post_create_dto_convertToJSON(blog_post_create_dto_t *blog_post_create_dto);

#endif /* _blog_post_create_dto_H_ */

