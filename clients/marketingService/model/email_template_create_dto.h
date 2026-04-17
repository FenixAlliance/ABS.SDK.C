/*
 * email_template_create_dto.h
 *
 * 
 */

#ifndef _email_template_create_dto_H_
#define _email_template_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct email_template_create_dto_t email_template_create_dto_t;


// Enum CODETYPE for email_template_create_dto

typedef enum  { marketingservice_email_template_create_dto_CODETYPE_NULL = 0, marketingservice_email_template_create_dto_CODETYPE_Razor, marketingservice_email_template_create_dto_CODETYPE_CSharp, marketingservice_email_template_create_dto_CODETYPE_CSHtml, marketingservice_email_template_create_dto_CODETYPE_Liquid, marketingservice_email_template_create_dto_CODETYPE_Html5, marketingservice_email_template_create_dto_CODETYPE_Markdown } marketingservice_email_template_create_dto_CODETYPE_e;

char* email_template_create_dto_code_type_ToString(marketingservice_email_template_create_dto_CODETYPE_e code_type);

marketingservice_email_template_create_dto_CODETYPE_e email_template_create_dto_code_type_FromString(char* code_type);



typedef struct email_template_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *code; // string
    int published; //boolean
    char *description; // string
    char *html_content; // string
    char *featured_image_url; // string
    marketingservice_email_template_create_dto_CODETYPE_e code_type; //enum
    char *marketing_campaign_id; // string

} email_template_create_dto_t;

email_template_create_dto_t *email_template_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *code,
    int published,
    char *description,
    char *html_content,
    char *featured_image_url,
    marketingservice_email_template_create_dto_CODETYPE_e code_type,
    char *marketing_campaign_id
);

void email_template_create_dto_free(email_template_create_dto_t *email_template_create_dto);

email_template_create_dto_t *email_template_create_dto_parseFromJSON(cJSON *email_template_create_dtoJSON);

cJSON *email_template_create_dto_convertToJSON(email_template_create_dto_t *email_template_create_dto);

#endif /* _email_template_create_dto_H_ */

