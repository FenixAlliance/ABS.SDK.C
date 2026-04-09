#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "course_article_create_dto.h"



course_article_create_dto_t *course_article_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *content,
    char *course_id,
    char *course_wiki_id,
    char *business_id
    ) {
    course_article_create_dto_t *course_article_create_dto_local_var = malloc(sizeof(course_article_create_dto_t));
    if (!course_article_create_dto_local_var) {
        return NULL;
    }
    course_article_create_dto_local_var->id = id;
    course_article_create_dto_local_var->timestamp = timestamp;
    course_article_create_dto_local_var->title = title;
    course_article_create_dto_local_var->description = description;
    course_article_create_dto_local_var->content = content;
    course_article_create_dto_local_var->course_id = course_id;
    course_article_create_dto_local_var->course_wiki_id = course_wiki_id;
    course_article_create_dto_local_var->business_id = business_id;

    return course_article_create_dto_local_var;
}


void course_article_create_dto_free(course_article_create_dto_t *course_article_create_dto) {
    if(NULL == course_article_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (course_article_create_dto->id) {
        free(course_article_create_dto->id);
        course_article_create_dto->id = NULL;
    }
    if (course_article_create_dto->timestamp) {
        free(course_article_create_dto->timestamp);
        course_article_create_dto->timestamp = NULL;
    }
    if (course_article_create_dto->title) {
        free(course_article_create_dto->title);
        course_article_create_dto->title = NULL;
    }
    if (course_article_create_dto->description) {
        free(course_article_create_dto->description);
        course_article_create_dto->description = NULL;
    }
    if (course_article_create_dto->content) {
        free(course_article_create_dto->content);
        course_article_create_dto->content = NULL;
    }
    if (course_article_create_dto->course_id) {
        free(course_article_create_dto->course_id);
        course_article_create_dto->course_id = NULL;
    }
    if (course_article_create_dto->course_wiki_id) {
        free(course_article_create_dto->course_wiki_id);
        course_article_create_dto->course_wiki_id = NULL;
    }
    if (course_article_create_dto->business_id) {
        free(course_article_create_dto->business_id);
        course_article_create_dto->business_id = NULL;
    }
    free(course_article_create_dto);
}

cJSON *course_article_create_dto_convertToJSON(course_article_create_dto_t *course_article_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // course_article_create_dto->id
    if(course_article_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", course_article_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // course_article_create_dto->timestamp
    if(course_article_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", course_article_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_article_create_dto->title
    if (!course_article_create_dto->title) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "title", course_article_create_dto->title) == NULL) {
    goto fail; //String
    }


    // course_article_create_dto->description
    if(course_article_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", course_article_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // course_article_create_dto->content
    if(course_article_create_dto->content) {
    if(cJSON_AddStringToObject(item, "content", course_article_create_dto->content) == NULL) {
    goto fail; //String
    }
    }


    // course_article_create_dto->course_id
    if (!course_article_create_dto->course_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "courseID", course_article_create_dto->course_id) == NULL) {
    goto fail; //String
    }


    // course_article_create_dto->course_wiki_id
    if (!course_article_create_dto->course_wiki_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "courseWikiID", course_article_create_dto->course_wiki_id) == NULL) {
    goto fail; //String
    }


    // course_article_create_dto->business_id
    if (!course_article_create_dto->business_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "businessID", course_article_create_dto->business_id) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

course_article_create_dto_t *course_article_create_dto_parseFromJSON(cJSON *course_article_create_dtoJSON){

    course_article_create_dto_t *course_article_create_dto_local_var = NULL;

    // course_article_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(course_article_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // course_article_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(course_article_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // course_article_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(course_article_create_dtoJSON, "title");
    if (!title) {
        goto end;
    }

    
    if(!cJSON_IsString(title))
    {
    goto end; //String
    }

    // course_article_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(course_article_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // course_article_create_dto->content
    cJSON *content = cJSON_GetObjectItemCaseSensitive(course_article_create_dtoJSON, "content");
    if (content) { 
    if(!cJSON_IsString(content) && !cJSON_IsNull(content))
    {
    goto end; //String
    }
    }

    // course_article_create_dto->course_id
    cJSON *course_id = cJSON_GetObjectItemCaseSensitive(course_article_create_dtoJSON, "courseID");
    if (!course_id) {
        goto end;
    }

    
    if(!cJSON_IsString(course_id))
    {
    goto end; //String
    }

    // course_article_create_dto->course_wiki_id
    cJSON *course_wiki_id = cJSON_GetObjectItemCaseSensitive(course_article_create_dtoJSON, "courseWikiID");
    if (!course_wiki_id) {
        goto end;
    }

    
    if(!cJSON_IsString(course_wiki_id))
    {
    goto end; //String
    }

    // course_article_create_dto->business_id
    cJSON *business_id = cJSON_GetObjectItemCaseSensitive(course_article_create_dtoJSON, "businessID");
    if (!business_id) {
        goto end;
    }

    
    if(!cJSON_IsString(business_id))
    {
    goto end; //String
    }


    course_article_create_dto_local_var = course_article_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(title->valuestring),
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        content && !cJSON_IsNull(content) ? strdup(content->valuestring) : NULL,
        strdup(course_id->valuestring),
        strdup(course_wiki_id->valuestring),
        strdup(business_id->valuestring)
        );

    return course_article_create_dto_local_var;
end:
    return NULL;

}
