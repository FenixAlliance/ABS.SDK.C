/*
 * web_component_update_dto.h
 *
 * 
 */

#ifndef _web_component_update_dto_H_
#define _web_component_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct web_component_update_dto_t web_component_update_dto_t;


// Enum CODETYPE for web_component_update_dto

typedef enum  { contentservice_web_component_update_dto_CODETYPE_NULL = 0, contentservice_web_component_update_dto_CODETYPE_Razor, contentservice_web_component_update_dto_CODETYPE_CSharp, contentservice_web_component_update_dto_CODETYPE_CSHtml, contentservice_web_component_update_dto_CODETYPE_Liquid, contentservice_web_component_update_dto_CODETYPE_Html5, contentservice_web_component_update_dto_CODETYPE_Markdown, contentservice_web_component_update_dto_CODETYPE_Markup } contentservice_web_component_update_dto_CODETYPE_e;

char* web_component_update_dto_code_type_ToString(contentservice_web_component_update_dto_CODETYPE_e code_type);

contentservice_web_component_update_dto_CODETYPE_e web_component_update_dto_code_type_FromString(char* code_type);



typedef struct web_component_update_dto_t {
    char *name; // string
    char *title; // string
    char *description; // string
    char *code; // string
    char *html_content; // string
    char *css_content; // string
    char *js_content; // string
    contentservice_web_component_update_dto_CODETYPE_e code_type; //enum
    int published; //boolean
    int enable; //boolean
    char *featured_image_url; // string

} web_component_update_dto_t;

web_component_update_dto_t *web_component_update_dto_create(
    char *name,
    char *title,
    char *description,
    char *code,
    char *html_content,
    char *css_content,
    char *js_content,
    contentservice_web_component_update_dto_CODETYPE_e code_type,
    int published,
    int enable,
    char *featured_image_url
);

void web_component_update_dto_free(web_component_update_dto_t *web_component_update_dto);

web_component_update_dto_t *web_component_update_dto_parseFromJSON(cJSON *web_component_update_dtoJSON);

cJSON *web_component_update_dto_convertToJSON(web_component_update_dto_t *web_component_update_dto);

#endif /* _web_component_update_dto_H_ */

