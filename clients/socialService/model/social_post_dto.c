#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "social_post_dto.h"


char* social_post_dto_social_profile_type_ToString(socialservice_social_post_dto_SOCIALPROFILETYPE_e social_profile_type) {
    char* social_profile_typeArray[] =  { "NULL", "User", "Tenant", "Contact" };
    return social_profile_typeArray[social_profile_type];
}

socialservice_social_post_dto_SOCIALPROFILETYPE_e social_post_dto_social_profile_type_FromString(char* social_profile_type){
    int stringToReturn = 0;
    char *social_profile_typeArray[] =  { "NULL", "User", "Tenant", "Contact" };
    size_t sizeofArray = sizeof(social_profile_typeArray) / sizeof(social_profile_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(social_profile_type, social_profile_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* social_post_dto_body_format_ToString(socialservice_social_post_dto_BODYFORMAT_e body_format) {
    char* body_formatArray[] =  { "NULL", "PlainText", "Html" };
    return body_formatArray[body_format];
}

socialservice_social_post_dto_BODYFORMAT_e social_post_dto_body_format_FromString(char* body_format){
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

social_post_dto_t *social_post_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *message,
    char *social_profile_id,
    char *social_profile_name,
    char *social_profile_avatar_url,
    int comments_count,
    int reactions_count,
    socialservice_social_post_dto_SOCIALPROFILETYPE_e social_profile_type,
    char *body_html,
    socialservice_social_post_dto_BODYFORMAT_e body_format,
    char *background_style
    ) {
    social_post_dto_t *social_post_dto_local_var = malloc(sizeof(social_post_dto_t));
    if (!social_post_dto_local_var) {
        return NULL;
    }
    social_post_dto_local_var->id = id;
    social_post_dto_local_var->timestamp = timestamp;
    social_post_dto_local_var->title = title;
    social_post_dto_local_var->message = message;
    social_post_dto_local_var->social_profile_id = social_profile_id;
    social_post_dto_local_var->social_profile_name = social_profile_name;
    social_post_dto_local_var->social_profile_avatar_url = social_profile_avatar_url;
    social_post_dto_local_var->comments_count = comments_count;
    social_post_dto_local_var->reactions_count = reactions_count;
    social_post_dto_local_var->social_profile_type = social_profile_type;
    social_post_dto_local_var->body_html = body_html;
    social_post_dto_local_var->body_format = body_format;
    social_post_dto_local_var->background_style = background_style;

    return social_post_dto_local_var;
}


void social_post_dto_free(social_post_dto_t *social_post_dto) {
    if(NULL == social_post_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (social_post_dto->id) {
        free(social_post_dto->id);
        social_post_dto->id = NULL;
    }
    if (social_post_dto->timestamp) {
        free(social_post_dto->timestamp);
        social_post_dto->timestamp = NULL;
    }
    if (social_post_dto->title) {
        free(social_post_dto->title);
        social_post_dto->title = NULL;
    }
    if (social_post_dto->message) {
        free(social_post_dto->message);
        social_post_dto->message = NULL;
    }
    if (social_post_dto->social_profile_id) {
        free(social_post_dto->social_profile_id);
        social_post_dto->social_profile_id = NULL;
    }
    if (social_post_dto->social_profile_name) {
        free(social_post_dto->social_profile_name);
        social_post_dto->social_profile_name = NULL;
    }
    if (social_post_dto->social_profile_avatar_url) {
        free(social_post_dto->social_profile_avatar_url);
        social_post_dto->social_profile_avatar_url = NULL;
    }
    if (social_post_dto->body_html) {
        free(social_post_dto->body_html);
        social_post_dto->body_html = NULL;
    }
    if (social_post_dto->background_style) {
        free(social_post_dto->background_style);
        social_post_dto->background_style = NULL;
    }
    free(social_post_dto);
}

cJSON *social_post_dto_convertToJSON(social_post_dto_t *social_post_dto) {
    cJSON *item = cJSON_CreateObject();

    // social_post_dto->id
    if(social_post_dto->id) {
    if(cJSON_AddStringToObject(item, "id", social_post_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // social_post_dto->timestamp
    if(social_post_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", social_post_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // social_post_dto->title
    if(social_post_dto->title) {
    if(cJSON_AddStringToObject(item, "title", social_post_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // social_post_dto->message
    if(social_post_dto->message) {
    if(cJSON_AddStringToObject(item, "message", social_post_dto->message) == NULL) {
    goto fail; //String
    }
    }


    // social_post_dto->social_profile_id
    if(social_post_dto->social_profile_id) {
    if(cJSON_AddStringToObject(item, "socialProfileId", social_post_dto->social_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // social_post_dto->social_profile_name
    if(social_post_dto->social_profile_name) {
    if(cJSON_AddStringToObject(item, "socialProfileName", social_post_dto->social_profile_name) == NULL) {
    goto fail; //String
    }
    }


    // social_post_dto->social_profile_avatar_url
    if(social_post_dto->social_profile_avatar_url) {
    if(cJSON_AddStringToObject(item, "socialProfileAvatarUrl", social_post_dto->social_profile_avatar_url) == NULL) {
    goto fail; //String
    }
    }


    // social_post_dto->comments_count
    if(social_post_dto->comments_count) {
    if(cJSON_AddNumberToObject(item, "commentsCount", social_post_dto->comments_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // social_post_dto->reactions_count
    if(social_post_dto->reactions_count) {
    if(cJSON_AddNumberToObject(item, "reactionsCount", social_post_dto->reactions_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // social_post_dto->social_profile_type
    if(social_post_dto->social_profile_type != socialservice_social_post_dto_SOCIALPROFILETYPE_NULL) {
    if(cJSON_AddStringToObject(item, "socialProfileType", social_profile_typesocial_post_dto_ToString(social_post_dto->social_profile_type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // social_post_dto->body_html
    if(social_post_dto->body_html) {
    if(cJSON_AddStringToObject(item, "bodyHtml", social_post_dto->body_html) == NULL) {
    goto fail; //String
    }
    }


    // social_post_dto->body_format
    if(social_post_dto->body_format != socialservice_social_post_dto_BODYFORMAT_NULL) {
    if(cJSON_AddStringToObject(item, "bodyFormat", body_formatsocial_post_dto_ToString(social_post_dto->body_format)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // social_post_dto->background_style
    if(social_post_dto->background_style) {
    if(cJSON_AddStringToObject(item, "backgroundStyle", social_post_dto->background_style) == NULL) {
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

social_post_dto_t *social_post_dto_parseFromJSON(cJSON *social_post_dtoJSON){

    social_post_dto_t *social_post_dto_local_var = NULL;

    // social_post_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(social_post_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // social_post_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(social_post_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // social_post_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(social_post_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // social_post_dto->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(social_post_dtoJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message) && !cJSON_IsNull(message))
    {
    goto end; //String
    }
    }

    // social_post_dto->social_profile_id
    cJSON *social_profile_id = cJSON_GetObjectItemCaseSensitive(social_post_dtoJSON, "socialProfileId");
    if (social_profile_id) { 
    if(!cJSON_IsString(social_profile_id) && !cJSON_IsNull(social_profile_id))
    {
    goto end; //String
    }
    }

    // social_post_dto->social_profile_name
    cJSON *social_profile_name = cJSON_GetObjectItemCaseSensitive(social_post_dtoJSON, "socialProfileName");
    if (social_profile_name) { 
    if(!cJSON_IsString(social_profile_name) && !cJSON_IsNull(social_profile_name))
    {
    goto end; //String
    }
    }

    // social_post_dto->social_profile_avatar_url
    cJSON *social_profile_avatar_url = cJSON_GetObjectItemCaseSensitive(social_post_dtoJSON, "socialProfileAvatarUrl");
    if (social_profile_avatar_url) { 
    if(!cJSON_IsString(social_profile_avatar_url) && !cJSON_IsNull(social_profile_avatar_url))
    {
    goto end; //String
    }
    }

    // social_post_dto->comments_count
    cJSON *comments_count = cJSON_GetObjectItemCaseSensitive(social_post_dtoJSON, "commentsCount");
    if (comments_count) { 
    if(!cJSON_IsNumber(comments_count))
    {
    goto end; //Numeric
    }
    }

    // social_post_dto->reactions_count
    cJSON *reactions_count = cJSON_GetObjectItemCaseSensitive(social_post_dtoJSON, "reactionsCount");
    if (reactions_count) { 
    if(!cJSON_IsNumber(reactions_count))
    {
    goto end; //Numeric
    }
    }

    // social_post_dto->social_profile_type
    cJSON *social_profile_type = cJSON_GetObjectItemCaseSensitive(social_post_dtoJSON, "socialProfileType");
    socialservice_social_post_dto_SOCIALPROFILETYPE_e social_profile_typeVariable;
    if (social_profile_type) { 
    if(!cJSON_IsString(social_profile_type))
    {
    goto end; //Enum
    }
    social_profile_typeVariable = social_post_dto_social_profile_type_FromString(social_profile_type->valuestring);
    }

    // social_post_dto->body_html
    cJSON *body_html = cJSON_GetObjectItemCaseSensitive(social_post_dtoJSON, "bodyHtml");
    if (body_html) { 
    if(!cJSON_IsString(body_html) && !cJSON_IsNull(body_html))
    {
    goto end; //String
    }
    }

    // social_post_dto->body_format
    cJSON *body_format = cJSON_GetObjectItemCaseSensitive(social_post_dtoJSON, "bodyFormat");
    socialservice_social_post_dto_BODYFORMAT_e body_formatVariable;
    if (body_format) { 
    if(!cJSON_IsString(body_format))
    {
    goto end; //Enum
    }
    body_formatVariable = social_post_dto_body_format_FromString(body_format->valuestring);
    }

    // social_post_dto->background_style
    cJSON *background_style = cJSON_GetObjectItemCaseSensitive(social_post_dtoJSON, "backgroundStyle");
    if (background_style) { 
    if(!cJSON_IsString(background_style) && !cJSON_IsNull(background_style))
    {
    goto end; //String
    }
    }


    social_post_dto_local_var = social_post_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        message && !cJSON_IsNull(message) ? strdup(message->valuestring) : NULL,
        social_profile_id && !cJSON_IsNull(social_profile_id) ? strdup(social_profile_id->valuestring) : NULL,
        social_profile_name && !cJSON_IsNull(social_profile_name) ? strdup(social_profile_name->valuestring) : NULL,
        social_profile_avatar_url && !cJSON_IsNull(social_profile_avatar_url) ? strdup(social_profile_avatar_url->valuestring) : NULL,
        comments_count ? comments_count->valuedouble : 0,
        reactions_count ? reactions_count->valuedouble : 0,
        social_profile_type ? social_profile_typeVariable : socialservice_social_post_dto_SOCIALPROFILETYPE_NULL,
        body_html && !cJSON_IsNull(body_html) ? strdup(body_html->valuestring) : NULL,
        body_format ? body_formatVariable : socialservice_social_post_dto_BODYFORMAT_NULL,
        background_style && !cJSON_IsNull(background_style) ? strdup(background_style->valuestring) : NULL
        );

    return social_post_dto_local_var;
end:
    return NULL;

}
