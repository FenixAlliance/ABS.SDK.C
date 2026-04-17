#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "course_unit_create_dto.h"



course_unit_create_dto_t *course_unit_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *content,
    char *course_id,
    char *course_section_id,
    char *course_content_group_id,
    char *release_date_time
    ) {
    course_unit_create_dto_t *course_unit_create_dto_local_var = malloc(sizeof(course_unit_create_dto_t));
    if (!course_unit_create_dto_local_var) {
        return NULL;
    }
    course_unit_create_dto_local_var->id = id;
    course_unit_create_dto_local_var->timestamp = timestamp;
    course_unit_create_dto_local_var->title = title;
    course_unit_create_dto_local_var->description = description;
    course_unit_create_dto_local_var->content = content;
    course_unit_create_dto_local_var->course_id = course_id;
    course_unit_create_dto_local_var->course_section_id = course_section_id;
    course_unit_create_dto_local_var->course_content_group_id = course_content_group_id;
    course_unit_create_dto_local_var->release_date_time = release_date_time;

    return course_unit_create_dto_local_var;
}


void course_unit_create_dto_free(course_unit_create_dto_t *course_unit_create_dto) {
    if(NULL == course_unit_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (course_unit_create_dto->id) {
        free(course_unit_create_dto->id);
        course_unit_create_dto->id = NULL;
    }
    if (course_unit_create_dto->timestamp) {
        free(course_unit_create_dto->timestamp);
        course_unit_create_dto->timestamp = NULL;
    }
    if (course_unit_create_dto->title) {
        free(course_unit_create_dto->title);
        course_unit_create_dto->title = NULL;
    }
    if (course_unit_create_dto->description) {
        free(course_unit_create_dto->description);
        course_unit_create_dto->description = NULL;
    }
    if (course_unit_create_dto->content) {
        free(course_unit_create_dto->content);
        course_unit_create_dto->content = NULL;
    }
    if (course_unit_create_dto->course_id) {
        free(course_unit_create_dto->course_id);
        course_unit_create_dto->course_id = NULL;
    }
    if (course_unit_create_dto->course_section_id) {
        free(course_unit_create_dto->course_section_id);
        course_unit_create_dto->course_section_id = NULL;
    }
    if (course_unit_create_dto->course_content_group_id) {
        free(course_unit_create_dto->course_content_group_id);
        course_unit_create_dto->course_content_group_id = NULL;
    }
    if (course_unit_create_dto->release_date_time) {
        free(course_unit_create_dto->release_date_time);
        course_unit_create_dto->release_date_time = NULL;
    }
    free(course_unit_create_dto);
}

cJSON *course_unit_create_dto_convertToJSON(course_unit_create_dto_t *course_unit_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // course_unit_create_dto->id
    if(course_unit_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", course_unit_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // course_unit_create_dto->timestamp
    if(course_unit_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", course_unit_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_unit_create_dto->title
    if (!course_unit_create_dto->title) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "title", course_unit_create_dto->title) == NULL) {
    goto fail; //String
    }


    // course_unit_create_dto->description
    if(course_unit_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", course_unit_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // course_unit_create_dto->content
    if(course_unit_create_dto->content) {
    if(cJSON_AddStringToObject(item, "content", course_unit_create_dto->content) == NULL) {
    goto fail; //String
    }
    }


    // course_unit_create_dto->course_id
    if (!course_unit_create_dto->course_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "courseID", course_unit_create_dto->course_id) == NULL) {
    goto fail; //String
    }


    // course_unit_create_dto->course_section_id
    if (!course_unit_create_dto->course_section_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "courseSectionID", course_unit_create_dto->course_section_id) == NULL) {
    goto fail; //String
    }


    // course_unit_create_dto->course_content_group_id
    if(course_unit_create_dto->course_content_group_id) {
    if(cJSON_AddStringToObject(item, "courseContentGroupID", course_unit_create_dto->course_content_group_id) == NULL) {
    goto fail; //String
    }
    }


    // course_unit_create_dto->release_date_time
    if(course_unit_create_dto->release_date_time) {
    if(cJSON_AddStringToObject(item, "releaseDateTime", course_unit_create_dto->release_date_time) == NULL) {
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

course_unit_create_dto_t *course_unit_create_dto_parseFromJSON(cJSON *course_unit_create_dtoJSON){

    course_unit_create_dto_t *course_unit_create_dto_local_var = NULL;

    // course_unit_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(course_unit_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // course_unit_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(course_unit_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // course_unit_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(course_unit_create_dtoJSON, "title");
    if (!title) {
        goto end;
    }

    
    if(!cJSON_IsString(title))
    {
    goto end; //String
    }

    // course_unit_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(course_unit_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // course_unit_create_dto->content
    cJSON *content = cJSON_GetObjectItemCaseSensitive(course_unit_create_dtoJSON, "content");
    if (content) { 
    if(!cJSON_IsString(content) && !cJSON_IsNull(content))
    {
    goto end; //String
    }
    }

    // course_unit_create_dto->course_id
    cJSON *course_id = cJSON_GetObjectItemCaseSensitive(course_unit_create_dtoJSON, "courseID");
    if (!course_id) {
        goto end;
    }

    
    if(!cJSON_IsString(course_id))
    {
    goto end; //String
    }

    // course_unit_create_dto->course_section_id
    cJSON *course_section_id = cJSON_GetObjectItemCaseSensitive(course_unit_create_dtoJSON, "courseSectionID");
    if (!course_section_id) {
        goto end;
    }

    
    if(!cJSON_IsString(course_section_id))
    {
    goto end; //String
    }

    // course_unit_create_dto->course_content_group_id
    cJSON *course_content_group_id = cJSON_GetObjectItemCaseSensitive(course_unit_create_dtoJSON, "courseContentGroupID");
    if (course_content_group_id) { 
    if(!cJSON_IsString(course_content_group_id) && !cJSON_IsNull(course_content_group_id))
    {
    goto end; //String
    }
    }

    // course_unit_create_dto->release_date_time
    cJSON *release_date_time = cJSON_GetObjectItemCaseSensitive(course_unit_create_dtoJSON, "releaseDateTime");
    if (release_date_time) { 
    if(!cJSON_IsString(release_date_time) && !cJSON_IsNull(release_date_time))
    {
    goto end; //DateTime
    }
    }


    course_unit_create_dto_local_var = course_unit_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(title->valuestring),
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        content && !cJSON_IsNull(content) ? strdup(content->valuestring) : NULL,
        strdup(course_id->valuestring),
        strdup(course_section_id->valuestring),
        course_content_group_id && !cJSON_IsNull(course_content_group_id) ? strdup(course_content_group_id->valuestring) : NULL,
        release_date_time && !cJSON_IsNull(release_date_time) ? strdup(release_date_time->valuestring) : NULL
        );

    return course_unit_create_dto_local_var;
end:
    return NULL;

}
