#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "course_page_dto.h"



course_page_dto_t *course_page_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *content,
    char *slug,
    char *course_id,
    char *tenant_id
    ) {
    course_page_dto_t *course_page_dto_local_var = malloc(sizeof(course_page_dto_t));
    if (!course_page_dto_local_var) {
        return NULL;
    }
    course_page_dto_local_var->id = id;
    course_page_dto_local_var->timestamp = timestamp;
    course_page_dto_local_var->title = title;
    course_page_dto_local_var->description = description;
    course_page_dto_local_var->content = content;
    course_page_dto_local_var->slug = slug;
    course_page_dto_local_var->course_id = course_id;
    course_page_dto_local_var->tenant_id = tenant_id;

    return course_page_dto_local_var;
}


void course_page_dto_free(course_page_dto_t *course_page_dto) {
    if(NULL == course_page_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (course_page_dto->id) {
        free(course_page_dto->id);
        course_page_dto->id = NULL;
    }
    if (course_page_dto->timestamp) {
        free(course_page_dto->timestamp);
        course_page_dto->timestamp = NULL;
    }
    if (course_page_dto->title) {
        free(course_page_dto->title);
        course_page_dto->title = NULL;
    }
    if (course_page_dto->description) {
        free(course_page_dto->description);
        course_page_dto->description = NULL;
    }
    if (course_page_dto->content) {
        free(course_page_dto->content);
        course_page_dto->content = NULL;
    }
    if (course_page_dto->slug) {
        free(course_page_dto->slug);
        course_page_dto->slug = NULL;
    }
    if (course_page_dto->course_id) {
        free(course_page_dto->course_id);
        course_page_dto->course_id = NULL;
    }
    if (course_page_dto->tenant_id) {
        free(course_page_dto->tenant_id);
        course_page_dto->tenant_id = NULL;
    }
    free(course_page_dto);
}

cJSON *course_page_dto_convertToJSON(course_page_dto_t *course_page_dto) {
    cJSON *item = cJSON_CreateObject();

    // course_page_dto->id
    if(course_page_dto->id) {
    if(cJSON_AddStringToObject(item, "id", course_page_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // course_page_dto->timestamp
    if(course_page_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", course_page_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_page_dto->title
    if(course_page_dto->title) {
    if(cJSON_AddStringToObject(item, "title", course_page_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // course_page_dto->description
    if(course_page_dto->description) {
    if(cJSON_AddStringToObject(item, "description", course_page_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // course_page_dto->content
    if(course_page_dto->content) {
    if(cJSON_AddStringToObject(item, "content", course_page_dto->content) == NULL) {
    goto fail; //String
    }
    }


    // course_page_dto->slug
    if(course_page_dto->slug) {
    if(cJSON_AddStringToObject(item, "slug", course_page_dto->slug) == NULL) {
    goto fail; //String
    }
    }


    // course_page_dto->course_id
    if(course_page_dto->course_id) {
    if(cJSON_AddStringToObject(item, "courseID", course_page_dto->course_id) == NULL) {
    goto fail; //String
    }
    }


    // course_page_dto->tenant_id
    if(course_page_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", course_page_dto->tenant_id) == NULL) {
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

course_page_dto_t *course_page_dto_parseFromJSON(cJSON *course_page_dtoJSON){

    course_page_dto_t *course_page_dto_local_var = NULL;

    // course_page_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(course_page_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // course_page_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(course_page_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // course_page_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(course_page_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // course_page_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(course_page_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // course_page_dto->content
    cJSON *content = cJSON_GetObjectItemCaseSensitive(course_page_dtoJSON, "content");
    if (content) { 
    if(!cJSON_IsString(content) && !cJSON_IsNull(content))
    {
    goto end; //String
    }
    }

    // course_page_dto->slug
    cJSON *slug = cJSON_GetObjectItemCaseSensitive(course_page_dtoJSON, "slug");
    if (slug) { 
    if(!cJSON_IsString(slug) && !cJSON_IsNull(slug))
    {
    goto end; //String
    }
    }

    // course_page_dto->course_id
    cJSON *course_id = cJSON_GetObjectItemCaseSensitive(course_page_dtoJSON, "courseID");
    if (course_id) { 
    if(!cJSON_IsString(course_id) && !cJSON_IsNull(course_id))
    {
    goto end; //String
    }
    }

    // course_page_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(course_page_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }


    course_page_dto_local_var = course_page_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        content && !cJSON_IsNull(content) ? strdup(content->valuestring) : NULL,
        slug && !cJSON_IsNull(slug) ? strdup(slug->valuestring) : NULL,
        course_id && !cJSON_IsNull(course_id) ? strdup(course_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL
        );

    return course_page_dto_local_var;
end:
    return NULL;

}
