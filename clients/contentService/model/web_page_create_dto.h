/*
 * web_page_create_dto.h
 *
 * 
 */

#ifndef _web_page_create_dto_H_
#define _web_page_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct web_page_create_dto_t web_page_create_dto_t;


// Enum CODETYPE for web_page_create_dto

typedef enum  { contentservice_web_page_create_dto_CODETYPE_NULL = 0, contentservice_web_page_create_dto_CODETYPE_Razor, contentservice_web_page_create_dto_CODETYPE_CSharp, contentservice_web_page_create_dto_CODETYPE_CSHtml, contentservice_web_page_create_dto_CODETYPE_Liquid, contentservice_web_page_create_dto_CODETYPE_Html5, contentservice_web_page_create_dto_CODETYPE_Markdown } contentservice_web_page_create_dto_CODETYPE_e;

char* web_page_create_dto_code_type_ToString(contentservice_web_page_create_dto_CODETYPE_e code_type);

contentservice_web_page_create_dto_CODETYPE_e web_page_create_dto_code_type_FromString(char* code_type);



typedef struct web_page_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *tenant_id; // string
    char *enrollment_id; // string
    char *title; // string
    char *code; // string
    int published; //boolean
    char *description; // string
    char *html_content; // string
    char *featured_image_url; // string
    contentservice_web_page_create_dto_CODETYPE_e code_type; //enum
    char *web_template_id; // string

} web_page_create_dto_t;

web_page_create_dto_t *web_page_create_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *enrollment_id,
    char *title,
    char *code,
    int published,
    char *description,
    char *html_content,
    char *featured_image_url,
    contentservice_web_page_create_dto_CODETYPE_e code_type,
    char *web_template_id
);

void web_page_create_dto_free(web_page_create_dto_t *web_page_create_dto);

web_page_create_dto_t *web_page_create_dto_parseFromJSON(cJSON *web_page_create_dtoJSON);

cJSON *web_page_create_dto_convertToJSON(web_page_create_dto_t *web_page_create_dto);

#endif /* _web_page_create_dto_H_ */

