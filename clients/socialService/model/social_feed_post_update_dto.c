#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "social_feed_post_update_dto.h"


char* social_feed_post_update_dto_body_format_ToString(socialservice_social_feed_post_update_dto_BODYFORMAT_e body_format) {
    char* body_formatArray[] =  { "NULL", "PlainText", "Html" };
    return body_formatArray[body_format];
}

socialservice_social_feed_post_update_dto_BODYFORMAT_e social_feed_post_update_dto_body_format_FromString(char* body_format){
    int stringToReturn = 0;
    char *body_formatArray[] =  { "NULL", "PlainText", "Html" };
    size_t sizeofArray = sizeof(body_formatArray) / sizeof(body_formatArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(body_format, body_formatArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

social_feed_post_update_dto_t *social_feed_post_update_dto_create(
    char *title,
    char *message,
    char *body_html,
    socialservice_social_feed_post_update_dto_BODYFORMAT_e body_format,
    char *background_style
    ) {
    social_feed_post_update_dto_t *social_feed_post_update_dto_local_var = malloc(sizeof(social_feed_post_update_dto_t));
    if (!social_feed_post_update_dto_local_var) {
        return NULL;
    }
    social_feed_post_update_dto_local_var->title = title;
    social_feed_post_update_dto_local_var->message = message;
    social_feed_post_update_dto_local_var->body_html = body_html;
    social_feed_post_update_dto_local_var->body_format = body_format;
    social_feed_post_update_dto_local_var->background_style = background_style;

    return social_feed_post_update_dto_local_var;
}


void social_feed_post_update_dto_free(social_feed_post_update_dto_t *social_feed_post_update_dto) {
    if(NULL == social_feed_post_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (social_feed_post_update_dto->title) {
        free(social_feed_post_update_dto->title);
        social_feed_post_update_dto->title = NULL;
    }
    if (social_feed_post_update_dto->message) {
        free(social_feed_post_update_dto->message);
        social_feed_post_update_dto->message = NULL;
    }
    if (social_feed_post_update_dto->body_html) {
        free(social_feed_post_update_dto->body_html);
        social_feed_post_update_dto->body_html = NULL;
    }
    if (social_feed_post_update_dto->background_style) {
        free(social_feed_post_update_dto->background_style);
        social_feed_post_update_dto->background_style = NULL;
    }
    free(social_feed_post_update_dto);
}

cJSON *social_feed_post_update_dto_convertToJSON(social_feed_post_update_dto_t *social_feed_post_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // social_feed_post_update_dto->title
    if(social_feed_post_update_dto->title) {
    if(cJSON_AddStringToObject(item, "title", social_feed_post_update_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // social_feed_post_update_dto->message
    if(social_feed_post_update_dto->message) {
    if(cJSON_AddStringToObject(item, "message", social_feed_post_update_dto->message) == NULL) {
    goto fail; //String
    }
    }


    // social_feed_post_update_dto->body_html
    if(social_feed_post_update_dto->body_html) {
    if(cJSON_AddStringToObject(item, "bodyHtml", social_feed_post_update_dto->body_html) == NULL) {
    goto fail; //String
    }
    }


    // social_feed_post_update_dto->body_format
    if(social_feed_post_update_dto->body_format != socialservice_social_feed_post_update_dto_BODYFORMAT_NULL) {
    if(cJSON_AddStringToObject(item, "bodyFormat", body_formatsocial_feed_post_update_dto_ToString(social_feed_post_update_dto->body_format)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // social_feed_post_update_dto->background_style
    if(social_feed_post_update_dto->background_style) {
    if(cJSON_AddStringToObject(item, "backgroundStyle", social_feed_post_update_dto->background_style) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

social_feed_post_update_dto_t *social_feed_post_update_dto_parseFromJSON(cJSON *social_feed_post_update_dtoJSON){

    social_feed_post_update_dto_t *social_feed_post_update_dto_local_var = NULL;

    // social_feed_post_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(social_feed_post_update_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // social_feed_post_update_dto->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(social_feed_post_update_dtoJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message) && !cJSON_IsNull(message))
    {
    goto end; //String
    }
    }

    // social_feed_post_update_dto->body_html
    cJSON *body_html = cJSON_GetObjectItemCaseSensitive(social_feed_post_update_dtoJSON, "bodyHtml");
    if (body_html) { 
    if(!cJSON_IsString(body_html) && !cJSON_IsNull(body_html))
    {
    goto end; //String
    }
    }

    // social_feed_post_update_dto->body_format
    cJSON *body_format = cJSON_GetObjectItemCaseSensitive(social_feed_post_update_dtoJSON, "bodyFormat");
    socialservice_social_feed_post_update_dto_BODYFORMAT_e body_formatVariable;
    if (body_format) { 
    if(!cJSON_IsString(body_format))
    {
    goto end; //Enum
    }
    body_formatVariable = social_feed_post_update_dto_body_format_FromString(body_format->valuestring);
    }

    // social_feed_post_update_dto->background_style
    cJSON *background_style = cJSON_GetObjectItemCaseSensitive(social_feed_post_update_dtoJSON, "backgroundStyle");
    if (background_style) { 
    if(!cJSON_IsString(background_style) && !cJSON_IsNull(background_style))
    {
    goto end; //String
    }
    }


    social_feed_post_update_dto_local_var = social_feed_post_update_dto_create (
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        message && !cJSON_IsNull(message) ? strdup(message->valuestring) : NULL,
        body_html && !cJSON_IsNull(body_html) ? strdup(body_html->valuestring) : NULL,
        body_format ? body_formatVariable : socialservice_social_feed_post_update_dto_BODYFORMAT_NULL,
        background_style && !cJSON_IsNull(background_style) ? strdup(background_style->valuestring) : NULL
        );

    return social_feed_post_update_dto_local_var;
end:
    return NULL;

}
