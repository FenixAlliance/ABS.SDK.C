#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "email_signature_create_dto.h"


char* email_signature_create_dto_code_type_ToString(marketingservice_email_signature_create_dto_CODETYPE_e code_type) {
    char* code_typeArray[] =  { "NULL", "Razor", "CSharp", "CSHtml", "Liquid", "Html5", "Markdown" };
    return code_typeArray[code_type];
}

marketingservice_email_signature_create_dto_CODETYPE_e email_signature_create_dto_code_type_FromString(char* code_type){
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

email_signature_create_dto_t *email_signature_create_dto_create(
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
    marketingservice_email_signature_create_dto_CODETYPE_e code_type
    ) {
    email_signature_create_dto_t *email_signature_create_dto_local_var = malloc(sizeof(email_signature_create_dto_t));
    if (!email_signature_create_dto_local_var) {
        return NULL;
    }
    email_signature_create_dto_local_var->id = id;
    email_signature_create_dto_local_var->timestamp = timestamp;
    email_signature_create_dto_local_var->tenant_id = tenant_id;
    email_signature_create_dto_local_var->enrollment_id = enrollment_id;
    email_signature_create_dto_local_var->title = title;
    email_signature_create_dto_local_var->code = code;
    email_signature_create_dto_local_var->published = published;
    email_signature_create_dto_local_var->description = description;
    email_signature_create_dto_local_var->html_content = html_content;
    email_signature_create_dto_local_var->featured_image_url = featured_image_url;
    email_signature_create_dto_local_var->code_type = code_type;

    return email_signature_create_dto_local_var;
}


void email_signature_create_dto_free(email_signature_create_dto_t *email_signature_create_dto) {
    if(NULL == email_signature_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (email_signature_create_dto->id) {
        free(email_signature_create_dto->id);
        email_signature_create_dto->id = NULL;
    }
    if (email_signature_create_dto->timestamp) {
        free(email_signature_create_dto->timestamp);
        email_signature_create_dto->timestamp = NULL;
    }
    if (email_signature_create_dto->tenant_id) {
        free(email_signature_create_dto->tenant_id);
        email_signature_create_dto->tenant_id = NULL;
    }
    if (email_signature_create_dto->enrollment_id) {
        free(email_signature_create_dto->enrollment_id);
        email_signature_create_dto->enrollment_id = NULL;
    }
    if (email_signature_create_dto->title) {
        free(email_signature_create_dto->title);
        email_signature_create_dto->title = NULL;
    }
    if (email_signature_create_dto->code) {
        free(email_signature_create_dto->code);
        email_signature_create_dto->code = NULL;
    }
    if (email_signature_create_dto->description) {
        free(email_signature_create_dto->description);
        email_signature_create_dto->description = NULL;
    }
    if (email_signature_create_dto->html_content) {
        free(email_signature_create_dto->html_content);
        email_signature_create_dto->html_content = NULL;
    }
    if (email_signature_create_dto->featured_image_url) {
        free(email_signature_create_dto->featured_image_url);
        email_signature_create_dto->featured_image_url = NULL;
    }
    free(email_signature_create_dto);
}

cJSON *email_signature_create_dto_convertToJSON(email_signature_create_dto_t *email_signature_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // email_signature_create_dto->id
    if(email_signature_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", email_signature_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_create_dto->timestamp
    if(email_signature_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", email_signature_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // email_signature_create_dto->tenant_id
    if(email_signature_create_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", email_signature_create_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_create_dto->enrollment_id
    if(email_signature_create_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", email_signature_create_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_create_dto->title
    if(email_signature_create_dto->title) {
    if(cJSON_AddStringToObject(item, "title", email_signature_create_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_create_dto->code
    if(email_signature_create_dto->code) {
    if(cJSON_AddStringToObject(item, "code", email_signature_create_dto->code) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_create_dto->published
    if(email_signature_create_dto->published) {
    if(cJSON_AddBoolToObject(item, "published", email_signature_create_dto->published) == NULL) {
    goto fail; //Bool
    }
    }


    // email_signature_create_dto->description
    if(email_signature_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", email_signature_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_create_dto->html_content
    if(email_signature_create_dto->html_content) {
    if(cJSON_AddStringToObject(item, "htmlContent", email_signature_create_dto->html_content) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_create_dto->featured_image_url
    if(email_signature_create_dto->featured_image_url) {
    if(cJSON_AddStringToObject(item, "featuredImageUrl", email_signature_create_dto->featured_image_url) == NULL) {
    goto fail; //String
    }
    }


    // email_signature_create_dto->code_type
    if(email_signature_create_dto->code_type != marketingservice_email_signature_create_dto_CODETYPE_NULL) {
    if(cJSON_AddStringToObject(item, "codeType", code_typeemail_signature_create_dto_ToString(email_signature_create_dto->code_type)) == NULL)
    {
    goto fail; //Enum
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

email_signature_create_dto_t *email_signature_create_dto_parseFromJSON(cJSON *email_signature_create_dtoJSON){

    email_signature_create_dto_t *email_signature_create_dto_local_var = NULL;

    // email_signature_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(email_signature_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // email_signature_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(email_signature_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // email_signature_create_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(email_signature_create_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // email_signature_create_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(email_signature_create_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // email_signature_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(email_signature_create_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // email_signature_create_dto->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(email_signature_create_dtoJSON, "code");
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // email_signature_create_dto->published
    cJSON *published = cJSON_GetObjectItemCaseSensitive(email_signature_create_dtoJSON, "published");
    if (published) { 
    if(!cJSON_IsBool(published))
    {
    goto end; //Bool
    }
    }

    // email_signature_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(email_signature_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // email_signature_create_dto->html_content
    cJSON *html_content = cJSON_GetObjectItemCaseSensitive(email_signature_create_dtoJSON, "htmlContent");
    if (html_content) { 
    if(!cJSON_IsString(html_content) && !cJSON_IsNull(html_content))
    {
    goto end; //String
    }
    }

    // email_signature_create_dto->featured_image_url
    cJSON *featured_image_url = cJSON_GetObjectItemCaseSensitive(email_signature_create_dtoJSON, "featuredImageUrl");
    if (featured_image_url) { 
    if(!cJSON_IsString(featured_image_url) && !cJSON_IsNull(featured_image_url))
    {
    goto end; //String
    }
    }

    // email_signature_create_dto->code_type
    cJSON *code_type = cJSON_GetObjectItemCaseSensitive(email_signature_create_dtoJSON, "codeType");
    marketingservice_email_signature_create_dto_CODETYPE_e code_typeVariable;
    if (code_type) { 
    if(!cJSON_IsString(code_type))
    {
    goto end; //Enum
    }
    code_typeVariable = email_signature_create_dto_code_type_FromString(code_type->valuestring);
    }


    email_signature_create_dto_local_var = email_signature_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        published ? published->valueint : 0,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        html_content && !cJSON_IsNull(html_content) ? strdup(html_content->valuestring) : NULL,
        featured_image_url && !cJSON_IsNull(featured_image_url) ? strdup(featured_image_url->valuestring) : NULL,
        code_type ? code_typeVariable : marketingservice_email_signature_create_dto_CODETYPE_NULL
        );

    return email_signature_create_dto_local_var;
end:
    return NULL;

}
