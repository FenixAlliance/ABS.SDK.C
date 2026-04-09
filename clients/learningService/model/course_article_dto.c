#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "course_article_dto.h"



course_article_dto_t *course_article_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *content,
    char *course_wiki_id,
    char *course_id,
    char *tenant_id
    ) {
    course_article_dto_t *course_article_dto_local_var = malloc(sizeof(course_article_dto_t));
    if (!course_article_dto_local_var) {
        return NULL;
    }
    course_article_dto_local_var->id = id;
    course_article_dto_local_var->timestamp = timestamp;
    course_article_dto_local_var->title = title;
    course_article_dto_local_var->description = description;
    course_article_dto_local_var->content = content;
    course_article_dto_local_var->course_wiki_id = course_wiki_id;
    course_article_dto_local_var->course_id = course_id;
    course_article_dto_local_var->tenant_id = tenant_id;

    return course_article_dto_local_var;
}


void course_article_dto_free(course_article_dto_t *course_article_dto) {
    if(NULL == course_article_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (course_article_dto->id) {
        free(course_article_dto->id);
        course_article_dto->id = NULL;
    }
    if (course_article_dto->timestamp) {
        free(course_article_dto->timestamp);
        course_article_dto->timestamp = NULL;
    }
    if (course_article_dto->title) {
        free(course_article_dto->title);
        course_article_dto->title = NULL;
    }
    if (course_article_dto->description) {
        free(course_article_dto->description);
        course_article_dto->description = NULL;
    }
    if (course_article_dto->content) {
        free(course_article_dto->content);
        course_article_dto->content = NULL;
    }
    if (course_article_dto->course_wiki_id) {
        free(course_article_dto->course_wiki_id);
        course_article_dto->course_wiki_id = NULL;
    }
    if (course_article_dto->course_id) {
        free(course_article_dto->course_id);
        course_article_dto->course_id = NULL;
    }
    if (course_article_dto->tenant_id) {
        free(course_article_dto->tenant_id);
        course_article_dto->tenant_id = NULL;
    }
    free(course_article_dto);
}

cJSON *course_article_dto_convertToJSON(course_article_dto_t *course_article_dto) {
    cJSON *item = cJSON_CreateObject();

    // course_article_dto->id
    if(course_article_dto->id) {
    if(cJSON_AddStringToObject(item, "id", course_article_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // course_article_dto->timestamp
    if(course_article_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", course_article_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_article_dto->title
    if(course_article_dto->title) {
    if(cJSON_AddStringToObject(item, "title", course_article_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // course_article_dto->description
    if(course_article_dto->description) {
    if(cJSON_AddStringToObject(item, "description", course_article_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // course_article_dto->content
    if(course_article_dto->content) {
    if(cJSON_AddStringToObject(item, "content", course_article_dto->content) == NULL) {
    goto fail; //String
    }
    }


    // course_article_dto->course_wiki_id
    if(course_article_dto->course_wiki_id) {
    if(cJSON_AddStringToObject(item, "courseWikiID", course_article_dto->course_wiki_id) == NULL) {
    goto fail; //String
    }
    }


    // course_article_dto->course_id
    if(course_article_dto->course_id) {
    if(cJSON_AddStringToObject(item, "courseID", course_article_dto->course_id) == NULL) {
    goto fail; //String
    }
    }


    // course_article_dto->tenant_id
    if(course_article_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", course_article_dto->tenant_id) == NULL) {
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

course_article_dto_t *course_article_dto_parseFromJSON(cJSON *course_article_dtoJSON){

    course_article_dto_t *course_article_dto_local_var = NULL;

    // course_article_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(course_article_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // course_article_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(course_article_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // course_article_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(course_article_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // course_article_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(course_article_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // course_article_dto->content
    cJSON *content = cJSON_GetObjectItemCaseSensitive(course_article_dtoJSON, "content");
    if (content) { 
    if(!cJSON_IsString(content) && !cJSON_IsNull(content))
    {
    goto end; //String
    }
    }

    // course_article_dto->course_wiki_id
    cJSON *course_wiki_id = cJSON_GetObjectItemCaseSensitive(course_article_dtoJSON, "courseWikiID");
    if (course_wiki_id) { 
    if(!cJSON_IsString(course_wiki_id) && !cJSON_IsNull(course_wiki_id))
    {
    goto end; //String
    }
    }

    // course_article_dto->course_id
    cJSON *course_id = cJSON_GetObjectItemCaseSensitive(course_article_dtoJSON, "courseID");
    if (course_id) { 
    if(!cJSON_IsString(course_id) && !cJSON_IsNull(course_id))
    {
    goto end; //String
    }
    }

    // course_article_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(course_article_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }


    course_article_dto_local_var = course_article_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        content && !cJSON_IsNull(content) ? strdup(content->valuestring) : NULL,
        course_wiki_id && !cJSON_IsNull(course_wiki_id) ? strdup(course_wiki_id->valuestring) : NULL,
        course_id && !cJSON_IsNull(course_id) ? strdup(course_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL
        );

    return course_article_dto_local_var;
end:
    return NULL;

}
