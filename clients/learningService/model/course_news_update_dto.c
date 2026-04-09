#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "course_news_update_dto.h"



course_news_update_dto_t *course_news_update_dto_create(
    char *title,
    char *description,
    char *content
    ) {
    course_news_update_dto_t *course_news_update_dto_local_var = malloc(sizeof(course_news_update_dto_t));
    if (!course_news_update_dto_local_var) {
        return NULL;
    }
    course_news_update_dto_local_var->title = title;
    course_news_update_dto_local_var->description = description;
    course_news_update_dto_local_var->content = content;

    return course_news_update_dto_local_var;
}


void course_news_update_dto_free(course_news_update_dto_t *course_news_update_dto) {
    if(NULL == course_news_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (course_news_update_dto->title) {
        free(course_news_update_dto->title);
        course_news_update_dto->title = NULL;
    }
    if (course_news_update_dto->description) {
        free(course_news_update_dto->description);
        course_news_update_dto->description = NULL;
    }
    if (course_news_update_dto->content) {
        free(course_news_update_dto->content);
        course_news_update_dto->content = NULL;
    }
    free(course_news_update_dto);
}

cJSON *course_news_update_dto_convertToJSON(course_news_update_dto_t *course_news_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // course_news_update_dto->title
    if(course_news_update_dto->title) {
    if(cJSON_AddStringToObject(item, "title", course_news_update_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // course_news_update_dto->description
    if(course_news_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", course_news_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // course_news_update_dto->content
    if(course_news_update_dto->content) {
    if(cJSON_AddStringToObject(item, "content", course_news_update_dto->content) == NULL) {
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

course_news_update_dto_t *course_news_update_dto_parseFromJSON(cJSON *course_news_update_dtoJSON){

    course_news_update_dto_t *course_news_update_dto_local_var = NULL;

    // course_news_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(course_news_update_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // course_news_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(course_news_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // course_news_update_dto->content
    cJSON *content = cJSON_GetObjectItemCaseSensitive(course_news_update_dtoJSON, "content");
    if (content) { 
    if(!cJSON_IsString(content) && !cJSON_IsNull(content))
    {
    goto end; //String
    }
    }


    course_news_update_dto_local_var = course_news_update_dto_create (
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        content && !cJSON_IsNull(content) ? strdup(content->valuestring) : NULL
        );

    return course_news_update_dto_local_var;
end:
    return NULL;

}
