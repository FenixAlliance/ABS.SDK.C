#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "course_unit_update_dto.h"



course_unit_update_dto_t *course_unit_update_dto_create(
    char *title,
    char *description,
    char *content,
    char *course_content_group_id,
    char *release_date_time
    ) {
    course_unit_update_dto_t *course_unit_update_dto_local_var = malloc(sizeof(course_unit_update_dto_t));
    if (!course_unit_update_dto_local_var) {
        return NULL;
    }
    course_unit_update_dto_local_var->title = title;
    course_unit_update_dto_local_var->description = description;
    course_unit_update_dto_local_var->content = content;
    course_unit_update_dto_local_var->course_content_group_id = course_content_group_id;
    course_unit_update_dto_local_var->release_date_time = release_date_time;

    return course_unit_update_dto_local_var;
}


void course_unit_update_dto_free(course_unit_update_dto_t *course_unit_update_dto) {
    if(NULL == course_unit_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (course_unit_update_dto->title) {
        free(course_unit_update_dto->title);
        course_unit_update_dto->title = NULL;
    }
    if (course_unit_update_dto->description) {
        free(course_unit_update_dto->description);
        course_unit_update_dto->description = NULL;
    }
    if (course_unit_update_dto->content) {
        free(course_unit_update_dto->content);
        course_unit_update_dto->content = NULL;
    }
    if (course_unit_update_dto->course_content_group_id) {
        free(course_unit_update_dto->course_content_group_id);
        course_unit_update_dto->course_content_group_id = NULL;
    }
    if (course_unit_update_dto->release_date_time) {
        free(course_unit_update_dto->release_date_time);
        course_unit_update_dto->release_date_time = NULL;
    }
    free(course_unit_update_dto);
}

cJSON *course_unit_update_dto_convertToJSON(course_unit_update_dto_t *course_unit_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // course_unit_update_dto->title
    if(course_unit_update_dto->title) {
    if(cJSON_AddStringToObject(item, "title", course_unit_update_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // course_unit_update_dto->description
    if(course_unit_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", course_unit_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // course_unit_update_dto->content
    if(course_unit_update_dto->content) {
    if(cJSON_AddStringToObject(item, "content", course_unit_update_dto->content) == NULL) {
    goto fail; //String
    }
    }


    // course_unit_update_dto->course_content_group_id
    if(course_unit_update_dto->course_content_group_id) {
    if(cJSON_AddStringToObject(item, "courseContentGroupID", course_unit_update_dto->course_content_group_id) == NULL) {
    goto fail; //String
    }
    }


    // course_unit_update_dto->release_date_time
    if(course_unit_update_dto->release_date_time) {
    if(cJSON_AddStringToObject(item, "releaseDateTime", course_unit_update_dto->release_date_time) == NULL) {
    goto fail; //Date-Time
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

course_unit_update_dto_t *course_unit_update_dto_parseFromJSON(cJSON *course_unit_update_dtoJSON){

    course_unit_update_dto_t *course_unit_update_dto_local_var = NULL;

    // course_unit_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(course_unit_update_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // course_unit_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(course_unit_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // course_unit_update_dto->content
    cJSON *content = cJSON_GetObjectItemCaseSensitive(course_unit_update_dtoJSON, "content");
    if (content) { 
    if(!cJSON_IsString(content) && !cJSON_IsNull(content))
    {
    goto end; //String
    }
    }

    // course_unit_update_dto->course_content_group_id
    cJSON *course_content_group_id = cJSON_GetObjectItemCaseSensitive(course_unit_update_dtoJSON, "courseContentGroupID");
    if (course_content_group_id) { 
    if(!cJSON_IsString(course_content_group_id) && !cJSON_IsNull(course_content_group_id))
    {
    goto end; //String
    }
    }

    // course_unit_update_dto->release_date_time
    cJSON *release_date_time = cJSON_GetObjectItemCaseSensitive(course_unit_update_dtoJSON, "releaseDateTime");
    if (release_date_time) { 
    if(!cJSON_IsString(release_date_time) && !cJSON_IsNull(release_date_time))
    {
    goto end; //DateTime
    }
    }


    course_unit_update_dto_local_var = course_unit_update_dto_create (
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        content && !cJSON_IsNull(content) ? strdup(content->valuestring) : NULL,
        course_content_group_id && !cJSON_IsNull(course_content_group_id) ? strdup(course_content_group_id->valuestring) : NULL,
        release_date_time && !cJSON_IsNull(release_date_time) ? strdup(release_date_time->valuestring) : NULL
        );

    return course_unit_update_dto_local_var;
end:
    return NULL;

}
