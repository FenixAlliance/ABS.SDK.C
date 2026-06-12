#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "web_page_create_dto.h"


char* web_page_create_dto_code_type_ToString(contentservice_web_page_create_dto_CODETYPE_e code_type) {
    char* code_typeArray[] =  { "NULL", "Razor", "CSharp", "CSHtml", "Liquid", "Html5", "Markdown", "Markup" };
    return code_typeArray[code_type];
}

contentservice_web_page_create_dto_CODETYPE_e web_page_create_dto_code_type_FromString(char* code_type){
    int stringToReturn = 0;
    char *code_typeArray[] =  { "NULL", "Razor", "CSharp", "CSHtml", "Liquid", "Html5", "Markdown", "Markup" };
    size_t sizeofArray = sizeof(code_typeArray) / sizeof(code_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(code_type, code_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

web_page_create_dto_t *web_page_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    int published,
    char *description,
    char *code,
    char *markup,
    char *featured_image_url,
    contentservice_web_page_create_dto_CODETYPE_e code_type,
    char *slug,
    char *web_template_id,
    char *parent_web_content_id
    ) {
    web_page_create_dto_t *web_page_create_dto_local_var = malloc(sizeof(web_page_create_dto_t));
    if (!web_page_create_dto_local_var) {
        return NULL;
    }
    web_page_create_dto_local_var->id = id;
    web_page_create_dto_local_var->timestamp = timestamp;
    web_page_create_dto_local_var->title = title;
    web_page_create_dto_local_var->published = published;
    web_page_create_dto_local_var->description = description;
    web_page_create_dto_local_var->code = code;
    web_page_create_dto_local_var->markup = markup;
    web_page_create_dto_local_var->featured_image_url = featured_image_url;
    web_page_create_dto_local_var->code_type = code_type;
    web_page_create_dto_local_var->slug = slug;
    web_page_create_dto_local_var->web_template_id = web_template_id;
    web_page_create_dto_local_var->parent_web_content_id = parent_web_content_id;

    return web_page_create_dto_local_var;
}


void web_page_create_dto_free(web_page_create_dto_t *web_page_create_dto) {
    if(NULL == web_page_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (web_page_create_dto->id) {
        free(web_page_create_dto->id);
        web_page_create_dto->id = NULL;
    }
    if (web_page_create_dto->timestamp) {
        free(web_page_create_dto->timestamp);
        web_page_create_dto->timestamp = NULL;
    }
    if (web_page_create_dto->title) {
        free(web_page_create_dto->title);
        web_page_create_dto->title = NULL;
    }
    if (web_page_create_dto->description) {
        free(web_page_create_dto->description);
        web_page_create_dto->description = NULL;
    }
    if (web_page_create_dto->code) {
        free(web_page_create_dto->code);
        web_page_create_dto->code = NULL;
    }
    if (web_page_create_dto->markup) {
        free(web_page_create_dto->markup);
        web_page_create_dto->markup = NULL;
    }
    if (web_page_create_dto->featured_image_url) {
        free(web_page_create_dto->featured_image_url);
        web_page_create_dto->featured_image_url = NULL;
    }
    if (web_page_create_dto->slug) {
        free(web_page_create_dto->slug);
        web_page_create_dto->slug = NULL;
    }
    if (web_page_create_dto->web_template_id) {
        free(web_page_create_dto->web_template_id);
        web_page_create_dto->web_template_id = NULL;
    }
    if (web_page_create_dto->parent_web_content_id) {
        free(web_page_create_dto->parent_web_content_id);
        web_page_create_dto->parent_web_content_id = NULL;
    }
    free(web_page_create_dto);
}

cJSON *web_page_create_dto_convertToJSON(web_page_create_dto_t *web_page_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // web_page_create_dto->id
    if(web_page_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", web_page_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // web_page_create_dto->timestamp
    if(web_page_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", web_page_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // web_page_create_dto->title
    if (!web_page_create_dto->title) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "title", web_page_create_dto->title) == NULL) {
    goto fail; //String
    }


    // web_page_create_dto->published
    if(web_page_create_dto->published) {
    if(cJSON_AddBoolToObject(item, "published", web_page_create_dto->published) == NULL) {
    goto fail; //Bool
    }
    }


    // web_page_create_dto->description
    if(web_page_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", web_page_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // web_page_create_dto->code
    if(web_page_create_dto->code) {
    if(cJSON_AddStringToObject(item, "code", web_page_create_dto->code) == NULL) {
    goto fail; //String
    }
    }


    // web_page_create_dto->markup
    if(web_page_create_dto->markup) {
    if(cJSON_AddStringToObject(item, "markup", web_page_create_dto->markup) == NULL) {
    goto fail; //String
    }
    }


    // web_page_create_dto->featured_image_url
    if(web_page_create_dto->featured_image_url) {
    if(cJSON_AddStringToObject(item, "featuredImageUrl", web_page_create_dto->featured_image_url) == NULL) {
    goto fail; //String
    }
    }


    // web_page_create_dto->code_type
    if(web_page_create_dto->code_type != contentservice_web_page_create_dto_CODETYPE_NULL) {
    if(cJSON_AddStringToObject(item, "codeType", code_typeweb_page_create_dto_ToString(web_page_create_dto->code_type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // web_page_create_dto->slug
    if(web_page_create_dto->slug) {
    if(cJSON_AddStringToObject(item, "slug", web_page_create_dto->slug) == NULL) {
    goto fail; //String
    }
    }


    // web_page_create_dto->web_template_id
    if(web_page_create_dto->web_template_id) {
    if(cJSON_AddStringToObject(item, "webTemplateId", web_page_create_dto->web_template_id) == NULL) {
    goto fail; //String
    }
    }


    // web_page_create_dto->parent_web_content_id
    if(web_page_create_dto->parent_web_content_id) {
    if(cJSON_AddStringToObject(item, "parentWebContentId", web_page_create_dto->parent_web_content_id) == NULL) {
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

web_page_create_dto_t *web_page_create_dto_parseFromJSON(cJSON *web_page_create_dtoJSON){

    web_page_create_dto_t *web_page_create_dto_local_var = NULL;

    // web_page_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(web_page_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // web_page_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(web_page_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // web_page_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(web_page_create_dtoJSON, "title");
    if (!title) {
        goto end;
    }

    
    if(!cJSON_IsString(title))
    {
    goto end; //String
    }

    // web_page_create_dto->published
    cJSON *published = cJSON_GetObjectItemCaseSensitive(web_page_create_dtoJSON, "published");
    if (published) { 
    if(!cJSON_IsBool(published))
    {
    goto end; //Bool
    }
    }

    // web_page_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(web_page_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // web_page_create_dto->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(web_page_create_dtoJSON, "code");
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // web_page_create_dto->markup
    cJSON *markup = cJSON_GetObjectItemCaseSensitive(web_page_create_dtoJSON, "markup");
    if (markup) { 
    if(!cJSON_IsString(markup) && !cJSON_IsNull(markup))
    {
    goto end; //String
    }
    }

    // web_page_create_dto->featured_image_url
    cJSON *featured_image_url = cJSON_GetObjectItemCaseSensitive(web_page_create_dtoJSON, "featuredImageUrl");
    if (featured_image_url) { 
    if(!cJSON_IsString(featured_image_url) && !cJSON_IsNull(featured_image_url))
    {
    goto end; //String
    }
    }

    // web_page_create_dto->code_type
    cJSON *code_type = cJSON_GetObjectItemCaseSensitive(web_page_create_dtoJSON, "codeType");
    contentservice_web_page_create_dto_CODETYPE_e code_typeVariable;
    if (code_type) { 
    if(!cJSON_IsString(code_type))
    {
    goto end; //Enum
    }
    code_typeVariable = web_page_create_dto_code_type_FromString(code_type->valuestring);
    }

    // web_page_create_dto->slug
    cJSON *slug = cJSON_GetObjectItemCaseSensitive(web_page_create_dtoJSON, "slug");
    if (slug) { 
    if(!cJSON_IsString(slug) && !cJSON_IsNull(slug))
    {
    goto end; //String
    }
    }

    // web_page_create_dto->web_template_id
    cJSON *web_template_id = cJSON_GetObjectItemCaseSensitive(web_page_create_dtoJSON, "webTemplateId");
    if (web_template_id) { 
    if(!cJSON_IsString(web_template_id) && !cJSON_IsNull(web_template_id))
    {
    goto end; //String
    }
    }

    // web_page_create_dto->parent_web_content_id
    cJSON *parent_web_content_id = cJSON_GetObjectItemCaseSensitive(web_page_create_dtoJSON, "parentWebContentId");
    if (parent_web_content_id) { 
    if(!cJSON_IsString(parent_web_content_id) && !cJSON_IsNull(parent_web_content_id))
    {
    goto end; //String
    }
    }


    web_page_create_dto_local_var = web_page_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(title->valuestring),
        published ? published->valueint : 0,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        markup && !cJSON_IsNull(markup) ? strdup(markup->valuestring) : NULL,
        featured_image_url && !cJSON_IsNull(featured_image_url) ? strdup(featured_image_url->valuestring) : NULL,
        code_type ? code_typeVariable : contentservice_web_page_create_dto_CODETYPE_NULL,
        slug && !cJSON_IsNull(slug) ? strdup(slug->valuestring) : NULL,
        web_template_id && !cJSON_IsNull(web_template_id) ? strdup(web_template_id->valuestring) : NULL,
        parent_web_content_id && !cJSON_IsNull(parent_web_content_id) ? strdup(parent_web_content_id->valuestring) : NULL
        );

    return web_page_create_dto_local_var;
end:
    return NULL;

}
