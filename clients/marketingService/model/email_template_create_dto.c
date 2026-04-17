#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "email_template_create_dto.h"


char* email_template_create_dto_code_type_ToString(marketingservice_email_template_create_dto_CODETYPE_e code_type) {
    char* code_typeArray[] =  { "NULL", "Razor", "CSharp", "CSHtml", "Liquid", "Html5", "Markdown" };
    return code_typeArray[code_type];
}

marketingservice_email_template_create_dto_CODETYPE_e email_template_create_dto_code_type_FromString(char* code_type){
    int stringToReturn = 0;
    char *code_typeArray[] =  { "NULL", "Razor", "CSharp", "CSHtml", "Liquid", "Html5", "Markdown" };
    size_t sizeofArray = sizeof(code_typeArray) / sizeof(code_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(code_type, code_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

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
    ) {
    email_template_create_dto_t *email_template_create_dto_local_var = malloc(sizeof(email_template_create_dto_t));
    if (!email_template_create_dto_local_var) {
        return NULL;
    }
    email_template_create_dto_local_var->id = id;
    email_template_create_dto_local_var->timestamp = timestamp;
    email_template_create_dto_local_var->title = title;
    email_template_create_dto_local_var->code = code;
    email_template_create_dto_local_var->published = published;
    email_template_create_dto_local_var->description = description;
    email_template_create_dto_local_var->html_content = html_content;
    email_template_create_dto_local_var->featured_image_url = featured_image_url;
    email_template_create_dto_local_var->code_type = code_type;
    email_template_create_dto_local_var->marketing_campaign_id = marketing_campaign_id;

    return email_template_create_dto_local_var;
}


void email_template_create_dto_free(email_template_create_dto_t *email_template_create_dto) {
    if(NULL == email_template_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (email_template_create_dto->id) {
        free(email_template_create_dto->id);
        email_template_create_dto->id = NULL;
    }
    if (email_template_create_dto->timestamp) {
        free(email_template_create_dto->timestamp);
        email_template_create_dto->timestamp = NULL;
    }
    if (email_template_create_dto->title) {
        free(email_template_create_dto->title);
        email_template_create_dto->title = NULL;
    }
    if (email_template_create_dto->code) {
        free(email_template_create_dto->code);
        email_template_create_dto->code = NULL;
    }
    if (email_template_create_dto->description) {
        free(email_template_create_dto->description);
        email_template_create_dto->description = NULL;
    }
    if (email_template_create_dto->html_content) {
        free(email_template_create_dto->html_content);
        email_template_create_dto->html_content = NULL;
    }
    if (email_template_create_dto->featured_image_url) {
        free(email_template_create_dto->featured_image_url);
        email_template_create_dto->featured_image_url = NULL;
    }
    if (email_template_create_dto->marketing_campaign_id) {
        free(email_template_create_dto->marketing_campaign_id);
        email_template_create_dto->marketing_campaign_id = NULL;
    }
    free(email_template_create_dto);
}

cJSON *email_template_create_dto_convertToJSON(email_template_create_dto_t *email_template_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // email_template_create_dto->id
    if(email_template_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", email_template_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // email_template_create_dto->timestamp
    if(email_template_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", email_template_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // email_template_create_dto->title
    if(email_template_create_dto->title) {
    if(cJSON_AddStringToObject(item, "title", email_template_create_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // email_template_create_dto->code
    if(email_template_create_dto->code) {
    if(cJSON_AddStringToObject(item, "code", email_template_create_dto->code) == NULL) {
    goto fail; //String
    }
    }


    // email_template_create_dto->published
    if(email_template_create_dto->published) {
    if(cJSON_AddBoolToObject(item, "published", email_template_create_dto->published) == NULL) {
    goto fail; //Bool
    }
    }


    // email_template_create_dto->description
    if(email_template_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", email_template_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // email_template_create_dto->html_content
    if(email_template_create_dto->html_content) {
    if(cJSON_AddStringToObject(item, "htmlContent", email_template_create_dto->html_content) == NULL) {
    goto fail; //String
    }
    }


    // email_template_create_dto->featured_image_url
    if(email_template_create_dto->featured_image_url) {
    if(cJSON_AddStringToObject(item, "featuredImageUrl", email_template_create_dto->featured_image_url) == NULL) {
    goto fail; //String
    }
    }


    // email_template_create_dto->code_type
    if(email_template_create_dto->code_type != marketingservice_email_template_create_dto_CODETYPE_NULL) {
    if(cJSON_AddStringToObject(item, "codeType", code_typeemail_template_create_dto_ToString(email_template_create_dto->code_type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // email_template_create_dto->marketing_campaign_id
    if(email_template_create_dto->marketing_campaign_id) {
    if(cJSON_AddStringToObject(item, "marketingCampaignId", email_template_create_dto->marketing_campaign_id) == NULL) {
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

email_template_create_dto_t *email_template_create_dto_parseFromJSON(cJSON *email_template_create_dtoJSON){

    email_template_create_dto_t *email_template_create_dto_local_var = NULL;

    // email_template_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(email_template_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // email_template_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(email_template_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // email_template_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(email_template_create_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // email_template_create_dto->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(email_template_create_dtoJSON, "code");
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // email_template_create_dto->published
    cJSON *published = cJSON_GetObjectItemCaseSensitive(email_template_create_dtoJSON, "published");
    if (published) { 
    if(!cJSON_IsBool(published))
    {
    goto end; //Bool
    }
    }

    // email_template_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(email_template_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // email_template_create_dto->html_content
    cJSON *html_content = cJSON_GetObjectItemCaseSensitive(email_template_create_dtoJSON, "htmlContent");
    if (html_content) { 
    if(!cJSON_IsString(html_content) && !cJSON_IsNull(html_content))
    {
    goto end; //String
    }
    }

    // email_template_create_dto->featured_image_url
    cJSON *featured_image_url = cJSON_GetObjectItemCaseSensitive(email_template_create_dtoJSON, "featuredImageUrl");
    if (featured_image_url) { 
    if(!cJSON_IsString(featured_image_url) && !cJSON_IsNull(featured_image_url))
    {
    goto end; //String
    }
    }

    // email_template_create_dto->code_type
    cJSON *code_type = cJSON_GetObjectItemCaseSensitive(email_template_create_dtoJSON, "codeType");
    marketingservice_email_template_create_dto_CODETYPE_e code_typeVariable;
    if (code_type) { 
    if(!cJSON_IsString(code_type))
    {
    goto end; //Enum
    }
    code_typeVariable = email_template_create_dto_code_type_FromString(code_type->valuestring);
    }

    // email_template_create_dto->marketing_campaign_id
    cJSON *marketing_campaign_id = cJSON_GetObjectItemCaseSensitive(email_template_create_dtoJSON, "marketingCampaignId");
    if (marketing_campaign_id) { 
    if(!cJSON_IsString(marketing_campaign_id) && !cJSON_IsNull(marketing_campaign_id))
    {
    goto end; //String
    }
    }


    email_template_create_dto_local_var = email_template_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        published ? published->valueint : 0,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        html_content && !cJSON_IsNull(html_content) ? strdup(html_content->valuestring) : NULL,
        featured_image_url && !cJSON_IsNull(featured_image_url) ? strdup(featured_image_url->valuestring) : NULL,
        code_type ? code_typeVariable : marketingservice_email_template_create_dto_CODETYPE_NULL,
        marketing_campaign_id && !cJSON_IsNull(marketing_campaign_id) ? strdup(marketing_campaign_id->valuestring) : NULL
        );

    return email_template_create_dto_local_var;
end:
    return NULL;

}
