/*
 * web_template_create_dto.h
 *
 * 
 */

#ifndef _web_template_create_dto_H_
#define _web_template_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct web_template_create_dto_t web_template_create_dto_t;




typedef struct web_template_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *slug; // string
    char *name; // string
    char *title; // string
    char *description; // string
    char *content; // string
    char *html_content; // string
    char *css_content; // string
    char *js_content; // string
    char *razor_content; // string
    char *highlight_image; // string
    int order; //numeric

} web_template_create_dto_t;

web_template_create_dto_t *web_template_create_dto_create(
    char *id,
    char *timestamp,
    char *slug,
    char *name,
    char *title,
    char *description,
    char *content,
    char *html_content,
    char *css_content,
    char *js_content,
    char *razor_content,
    char *highlight_image,
    int order
);

void web_template_create_dto_free(web_template_create_dto_t *web_template_create_dto);

web_template_create_dto_t *web_template_create_dto_parseFromJSON(cJSON *web_template_create_dtoJSON);

cJSON *web_template_create_dto_convertToJSON(web_template_create_dto_t *web_template_create_dto);

#endif /* _web_template_create_dto_H_ */

