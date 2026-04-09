#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "blog_post_create_dto.h"


char* blog_post_create_dto_code_type_ToString(contentservice_blog_post_create_dto_CODETYPE_e code_type) {
    char* code_typeArray[] =  { "NULL", "Razor", "CSharp", "CSHtml", "Liquid", "Html5", "Markdown" };
    return code_typeArray[code_type];
}

contentservice_blog_post_create_dto_CODETYPE_e blog_post_create_dto_code_type_FromString(char* code_type){
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

blog_post_create_dto_t *blog_post_create_dto_create(
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
    contentservice_blog_post_create_dto_CODETYPE_e code_type,
    char *blog_post_category_id,
    char *web_template_id
    ) {
    blog_post_create_dto_t *blog_post_create_dto_local_var = malloc(sizeof(blog_post_create_dto_t));
    if (!blog_post_create_dto_local_var) {
        return NULL;
    }
    blog_post_create_dto_local_var->id = id;
    blog_post_create_dto_local_var->timestamp = timestamp;
    blog_post_create_dto_local_var->tenant_id = tenant_id;
    blog_post_create_dto_local_var->enrollment_id = enrollment_id;
    blog_post_create_dto_local_var->title = title;
    blog_post_create_dto_local_var->code = code;
    blog_post_create_dto_local_var->published = published;
    blog_post_create_dto_local_var->description = description;
    blog_post_create_dto_local_var->html_content = html_content;
    blog_post_create_dto_local_var->featured_image_url = featured_image_url;
    blog_post_create_dto_local_var->code_type = code_type;
    blog_post_create_dto_local_var->blog_post_category_id = blog_post_category_id;
    blog_post_create_dto_local_var->web_template_id = web_template_id;

    return blog_post_create_dto_local_var;
}


void blog_post_create_dto_free(blog_post_create_dto_t *blog_post_create_dto) {
    if(NULL == blog_post_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (blog_post_create_dto->id) {
        free(blog_post_create_dto->id);
        blog_post_create_dto->id = NULL;
    }
    if (blog_post_create_dto->timestamp) {
        free(blog_post_create_dto->timestamp);
        blog_post_create_dto->timestamp = NULL;
    }
    if (blog_post_create_dto->tenant_id) {
        free(blog_post_create_dto->tenant_id);
        blog_post_create_dto->tenant_id = NULL;
    }
    if (blog_post_create_dto->enrollment_id) {
        free(blog_post_create_dto->enrollment_id);
        blog_post_create_dto->enrollment_id = NULL;
    }
    if (blog_post_create_dto->title) {
        free(blog_post_create_dto->title);
        blog_post_create_dto->title = NULL;
    }
    if (blog_post_create_dto->code) {
        free(blog_post_create_dto->code);
        blog_post_create_dto->code = NULL;
    }
    if (blog_post_create_dto->description) {
        free(blog_post_create_dto->description);
        blog_post_create_dto->description = NULL;
    }
    if (blog_post_create_dto->html_content) {
        free(blog_post_create_dto->html_content);
        blog_post_create_dto->html_content = NULL;
    }
    if (blog_post_create_dto->featured_image_url) {
        free(blog_post_create_dto->featured_image_url);
        blog_post_create_dto->featured_image_url = NULL;
    }
    if (blog_post_create_dto->blog_post_category_id) {
        free(blog_post_create_dto->blog_post_category_id);
        blog_post_create_dto->blog_post_category_id = NULL;
    }
    if (blog_post_create_dto->web_template_id) {
        free(blog_post_create_dto->web_template_id);
        blog_post_create_dto->web_template_id = NULL;
    }
    free(blog_post_create_dto);
}

cJSON *blog_post_create_dto_convertToJSON(blog_post_create_dto_t *blog_post_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // blog_post_create_dto->id
    if(blog_post_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", blog_post_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_create_dto->timestamp
    if(blog_post_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", blog_post_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // blog_post_create_dto->tenant_id
    if(blog_post_create_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", blog_post_create_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_create_dto->enrollment_id
    if(blog_post_create_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", blog_post_create_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_create_dto->title
    if(blog_post_create_dto->title) {
    if(cJSON_AddStringToObject(item, "title", blog_post_create_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_create_dto->code
    if(blog_post_create_dto->code) {
    if(cJSON_AddStringToObject(item, "code", blog_post_create_dto->code) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_create_dto->published
    if(blog_post_create_dto->published) {
    if(cJSON_AddBoolToObject(item, "published", blog_post_create_dto->published) == NULL) {
    goto fail; //Bool
    }
    }


    // blog_post_create_dto->description
    if(blog_post_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", blog_post_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_create_dto->html_content
    if(blog_post_create_dto->html_content) {
    if(cJSON_AddStringToObject(item, "htmlContent", blog_post_create_dto->html_content) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_create_dto->featured_image_url
    if(blog_post_create_dto->featured_image_url) {
    if(cJSON_AddStringToObject(item, "featuredImageUrl", blog_post_create_dto->featured_image_url) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_create_dto->code_type
    if(blog_post_create_dto->code_type != contentservice_blog_post_create_dto_CODETYPE_NULL) {
    if(cJSON_AddStringToObject(item, "codeType", code_typeblog_post_create_dto_ToString(blog_post_create_dto->code_type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // blog_post_create_dto->blog_post_category_id
    if(blog_post_create_dto->blog_post_category_id) {
    if(cJSON_AddStringToObject(item, "blogPostCategoryID", blog_post_create_dto->blog_post_category_id) == NULL) {
    goto fail; //String
    }
    }


    // blog_post_create_dto->web_template_id
    if(blog_post_create_dto->web_template_id) {
    if(cJSON_AddStringToObject(item, "webTemplateID", blog_post_create_dto->web_template_id) == NULL) {
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

blog_post_create_dto_t *blog_post_create_dto_parseFromJSON(cJSON *blog_post_create_dtoJSON){

    blog_post_create_dto_t *blog_post_create_dto_local_var = NULL;

    // blog_post_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(blog_post_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // blog_post_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(blog_post_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // blog_post_create_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(blog_post_create_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // blog_post_create_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(blog_post_create_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // blog_post_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(blog_post_create_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // blog_post_create_dto->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(blog_post_create_dtoJSON, "code");
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // blog_post_create_dto->published
    cJSON *published = cJSON_GetObjectItemCaseSensitive(blog_post_create_dtoJSON, "published");
    if (published) { 
    if(!cJSON_IsBool(published))
    {
    goto end; //Bool
    }
    }

    // blog_post_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(blog_post_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // blog_post_create_dto->html_content
    cJSON *html_content = cJSON_GetObjectItemCaseSensitive(blog_post_create_dtoJSON, "htmlContent");
    if (html_content) { 
    if(!cJSON_IsString(html_content) && !cJSON_IsNull(html_content))
    {
    goto end; //String
    }
    }

    // blog_post_create_dto->featured_image_url
    cJSON *featured_image_url = cJSON_GetObjectItemCaseSensitive(blog_post_create_dtoJSON, "featuredImageUrl");
    if (featured_image_url) { 
    if(!cJSON_IsString(featured_image_url) && !cJSON_IsNull(featured_image_url))
    {
    goto end; //String
    }
    }

    // blog_post_create_dto->code_type
    cJSON *code_type = cJSON_GetObjectItemCaseSensitive(blog_post_create_dtoJSON, "codeType");
    contentservice_blog_post_create_dto_CODETYPE_e code_typeVariable;
    if (code_type) { 
    if(!cJSON_IsString(code_type))
    {
    goto end; //Enum
    }
    code_typeVariable = blog_post_create_dto_code_type_FromString(code_type->valuestring);
    }

    // blog_post_create_dto->blog_post_category_id
    cJSON *blog_post_category_id = cJSON_GetObjectItemCaseSensitive(blog_post_create_dtoJSON, "blogPostCategoryID");
    if (blog_post_category_id) { 
    if(!cJSON_IsString(blog_post_category_id) && !cJSON_IsNull(blog_post_category_id))
    {
    goto end; //String
    }
    }

    // blog_post_create_dto->web_template_id
    cJSON *web_template_id = cJSON_GetObjectItemCaseSensitive(blog_post_create_dtoJSON, "webTemplateID");
    if (web_template_id) { 
    if(!cJSON_IsString(web_template_id) && !cJSON_IsNull(web_template_id))
    {
    goto end; //String
    }
    }


    blog_post_create_dto_local_var = blog_post_create_dto_create (
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
        code_type ? code_typeVariable : contentservice_blog_post_create_dto_CODETYPE_NULL,
        blog_post_category_id && !cJSON_IsNull(blog_post_category_id) ? strdup(blog_post_category_id->valuestring) : NULL,
        web_template_id && !cJSON_IsNull(web_template_id) ? strdup(web_template_id->valuestring) : NULL
        );

    return blog_post_create_dto_local_var;
end:
    return NULL;

}
