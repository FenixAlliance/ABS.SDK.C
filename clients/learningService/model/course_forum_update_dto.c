#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "course_forum_update_dto.h"



course_forum_update_dto_t *course_forum_update_dto_create(
    char *title,
    char *description
    ) {
    course_forum_update_dto_t *course_forum_update_dto_local_var = malloc(sizeof(course_forum_update_dto_t));
    if (!course_forum_update_dto_local_var) {
        return NULL;
    }
    course_forum_update_dto_local_var->title = title;
    course_forum_update_dto_local_var->description = description;

    return course_forum_update_dto_local_var;
}


void course_forum_update_dto_free(course_forum_update_dto_t *course_forum_update_dto) {
    if(NULL == course_forum_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (course_forum_update_dto->title) {
        free(course_forum_update_dto->title);
        course_forum_update_dto->title = NULL;
    }
    if (course_forum_update_dto->description) {
        free(course_forum_update_dto->description);
        course_forum_update_dto->description = NULL;
    }
    free(course_forum_update_dto);
}

cJSON *course_forum_update_dto_convertToJSON(course_forum_update_dto_t *course_forum_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // course_forum_update_dto->title
    if(course_forum_update_dto->title) {
    if(cJSON_AddStringToObject(item, "title", course_forum_update_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // course_forum_update_dto->description
    if(course_forum_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", course_forum_update_dto->description) == NULL) {
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

course_forum_update_dto_t *course_forum_update_dto_parseFromJSON(cJSON *course_forum_update_dtoJSON){

    course_forum_update_dto_t *course_forum_update_dto_local_var = NULL;

    // course_forum_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(course_forum_update_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // course_forum_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(course_forum_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    course_forum_update_dto_local_var = course_forum_update_dto_create (
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return course_forum_update_dto_local_var;
end:
    return NULL;

}
