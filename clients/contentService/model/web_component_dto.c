#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "web_component_dto.h"


char* web_component_dto_code_type_ToString(contentservice_web_component_dto_CODETYPE_e code_type) {
    char* code_typeArray[] =  { "NULL", "Razor", "CSharp", "CSHtml", "Liquid", "Html5", "Markdown", "Markup" };
    return code_typeArray[code_type];
}

contentservice_web_component_dto_CODETYPE_e web_component_dto_code_type_FromString(char* code_type){
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

web_component_dto_t *web_component_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *title,
    char *description,
    char *code,
    char *html_content,
    char *css_content,
    char *js_content,
    contentservice_web_component_dto_CODETYPE_e code_type,
    int published,
    int enable,
    char *featured_image_url,
    char *tenant_id,
    char *web_portal_id
    ) {
    web_component_dto_t *web_component_dto_local_var = malloc(sizeof(web_component_dto_t));
    if (!web_component_dto_local_var) {
        return NULL;
    }
    web_component_dto_local_var->id = id;
    web_component_dto_local_var->timestamp = timestamp;
    web_component_dto_local_var->name = name;
    web_component_dto_local_var->title = title;
    web_component_dto_local_var->description = description;
    web_component_dto_local_var->code = code;
    web_component_dto_local_var->html_content = html_content;
    web_component_dto_local_var->css_content = css_content;
    web_component_dto_local_var->js_content = js_content;
    web_component_dto_local_var->code_type = code_type;
    web_component_dto_local_var->published = published;
    web_component_dto_local_var->enable = enable;
    web_component_dto_local_var->featured_image_url = featured_image_url;
    web_component_dto_local_var->tenant_id = tenant_id;
    web_component_dto_local_var->web_portal_id = web_portal_id;

    return web_component_dto_local_var;
}


void web_component_dto_free(web_component_dto_t *web_component_dto) {
    if(NULL == web_component_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (web_component_dto->id) {
        free(web_component_dto->id);
        web_component_dto->id = NULL;
    }
    if (web_component_dto->timestamp) {
        free(web_component_dto->timestamp);
        web_component_dto->timestamp = NULL;
    }
    if (web_component_dto->name) {
        free(web_component_dto->name);
        web_component_dto->name = NULL;
    }
    if (web_component_dto->title) {
        free(web_component_dto->title);
        web_component_dto->title = NULL;
    }
    if (web_component_dto->description) {
        free(web_component_dto->description);
        web_component_dto->description = NULL;
    }
    if (web_component_dto->code) {
        free(web_component_dto->code);
        web_component_dto->code = NULL;
    }
    if (web_component_dto->html_content) {
        free(web_component_dto->html_content);
        web_component_dto->html_content = NULL;
    }
    if (web_component_dto->css_content) {
        free(web_component_dto->css_content);
        web_component_dto->css_content = NULL;
    }
    if (web_component_dto->js_content) {
        free(web_component_dto->js_content);
        web_component_dto->js_content = NULL;
    }
    if (web_component_dto->featured_image_url) {
        free(web_component_dto->featured_image_url);
        web_component_dto->featured_image_url = NULL;
    }
    if (web_component_dto->tenant_id) {
        free(web_component_dto->tenant_id);
        web_component_dto->tenant_id = NULL;
    }
    if (web_component_dto->web_portal_id) {
        free(web_component_dto->web_portal_id);
        web_component_dto->web_portal_id = NULL;
    }
    free(web_component_dto);
}

cJSON *web_component_dto_convertToJSON(web_component_dto_t *web_component_dto) {
    cJSON *item = cJSON_CreateObject();

    // web_component_dto->id
    if(web_component_dto->id) {
    if(cJSON_AddStringToObject(item, "id", web_component_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // web_component_dto->timestamp
    if(web_component_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", web_component_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // web_component_dto->name
    if(web_component_dto->name) {
    if(cJSON_AddStringToObject(item, "name", web_component_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // web_component_dto->title
    if(web_component_dto->title) {
    if(cJSON_AddStringToObject(item, "title", web_component_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // web_component_dto->description
    if(web_component_dto->description) {
    if(cJSON_AddStringToObject(item, "description", web_component_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // web_component_dto->code
    if(web_component_dto->code) {
    if(cJSON_AddStringToObject(item, "code", web_component_dto->code) == NULL) {
    goto fail; //String
    }
    }


    // web_component_dto->html_content
    if(web_component_dto->html_content) {
    if(cJSON_AddStringToObject(item, "htmlContent", web_component_dto->html_content) == NULL) {
    goto fail; //String
    }
    }


    // web_component_dto->css_content
    if(web_component_dto->css_content) {
    if(cJSON_AddStringToObject(item, "cssContent", web_component_dto->css_content) == NULL) {
    goto fail; //String
    }
    }


    // web_component_dto->js_content
    if(web_component_dto->js_content) {
    if(cJSON_AddStringToObject(item, "jsContent", web_component_dto->js_content) == NULL) {
    goto fail; //String
    }
    }


    // web_component_dto->code_type
    if(web_component_dto->code_type != contentservice_web_component_dto_CODETYPE_NULL) {
    if(cJSON_AddStringToObject(item, "codeType", code_typeweb_component_dto_ToString(web_component_dto->code_type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // web_component_dto->published
    if(web_component_dto->published) {
    if(cJSON_AddBoolToObject(item, "published", web_component_dto->published) == NULL) {
    goto fail; //Bool
    }
    }


    // web_component_dto->enable
    if(web_component_dto->enable) {
    if(cJSON_AddBoolToObject(item, "enable", web_component_dto->enable) == NULL) {
    goto fail; //Bool
    }
    }


    // web_component_dto->featured_image_url
    if(web_component_dto->featured_image_url) {
    if(cJSON_AddStringToObject(item, "featuredImageUrl", web_component_dto->featured_image_url) == NULL) {
    goto fail; //String
    }
    }


    // web_component_dto->tenant_id
    if(web_component_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", web_component_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // web_component_dto->web_portal_id
    if(web_component_dto->web_portal_id) {
    if(cJSON_AddStringToObject(item, "webPortalId", web_component_dto->web_portal_id) == NULL) {
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

web_component_dto_t *web_component_dto_parseFromJSON(cJSON *web_component_dtoJSON){

    web_component_dto_t *web_component_dto_local_var = NULL;

    // web_component_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(web_component_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // web_component_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(web_component_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // web_component_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(web_component_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // web_component_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(web_component_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // web_component_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(web_component_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // web_component_dto->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(web_component_dtoJSON, "code");
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // web_component_dto->html_content
    cJSON *html_content = cJSON_GetObjectItemCaseSensitive(web_component_dtoJSON, "htmlContent");
    if (html_content) { 
    if(!cJSON_IsString(html_content) && !cJSON_IsNull(html_content))
    {
    goto end; //String
    }
    }

    // web_component_dto->css_content
    cJSON *css_content = cJSON_GetObjectItemCaseSensitive(web_component_dtoJSON, "cssContent");
    if (css_content) { 
    if(!cJSON_IsString(css_content) && !cJSON_IsNull(css_content))
    {
    goto end; //String
    }
    }

    // web_component_dto->js_content
    cJSON *js_content = cJSON_GetObjectItemCaseSensitive(web_component_dtoJSON, "jsContent");
    if (js_content) { 
    if(!cJSON_IsString(js_content) && !cJSON_IsNull(js_content))
    {
    goto end; //String
    }
    }

    // web_component_dto->code_type
    cJSON *code_type = cJSON_GetObjectItemCaseSensitive(web_component_dtoJSON, "codeType");
    contentservice_web_component_dto_CODETYPE_e code_typeVariable;
    if (code_type) { 
    if(!cJSON_IsString(code_type))
    {
    goto end; //Enum
    }
    code_typeVariable = web_component_dto_code_type_FromString(code_type->valuestring);
    }

    // web_component_dto->published
    cJSON *published = cJSON_GetObjectItemCaseSensitive(web_component_dtoJSON, "published");
    if (published) { 
    if(!cJSON_IsBool(published))
    {
    goto end; //Bool
    }
    }

    // web_component_dto->enable
    cJSON *enable = cJSON_GetObjectItemCaseSensitive(web_component_dtoJSON, "enable");
    if (enable) { 
    if(!cJSON_IsBool(enable))
    {
    goto end; //Bool
    }
    }

    // web_component_dto->featured_image_url
    cJSON *featured_image_url = cJSON_GetObjectItemCaseSensitive(web_component_dtoJSON, "featuredImageUrl");
    if (featured_image_url) { 
    if(!cJSON_IsString(featured_image_url) && !cJSON_IsNull(featured_image_url))
    {
    goto end; //String
    }
    }

    // web_component_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(web_component_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // web_component_dto->web_portal_id
    cJSON *web_portal_id = cJSON_GetObjectItemCaseSensitive(web_component_dtoJSON, "webPortalId");
    if (web_portal_id) { 
    if(!cJSON_IsString(web_portal_id) && !cJSON_IsNull(web_portal_id))
    {
    goto end; //String
    }
    }


    web_component_dto_local_var = web_component_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        html_content && !cJSON_IsNull(html_content) ? strdup(html_content->valuestring) : NULL,
        css_content && !cJSON_IsNull(css_content) ? strdup(css_content->valuestring) : NULL,
        js_content && !cJSON_IsNull(js_content) ? strdup(js_content->valuestring) : NULL,
        code_type ? code_typeVariable : contentservice_web_component_dto_CODETYPE_NULL,
        published ? published->valueint : 0,
        enable ? enable->valueint : 0,
        featured_image_url && !cJSON_IsNull(featured_image_url) ? strdup(featured_image_url->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        web_portal_id && !cJSON_IsNull(web_portal_id) ? strdup(web_portal_id->valuestring) : NULL
        );

    return web_component_dto_local_var;
end:
    return NULL;

}
