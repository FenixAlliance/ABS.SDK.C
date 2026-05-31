#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "course_grading_rubric_create_dto.h"



course_grading_rubric_create_dto_t *course_grading_rubric_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    int enable_points,
    char *course_id
    ) {
    course_grading_rubric_create_dto_t *course_grading_rubric_create_dto_local_var = malloc(sizeof(course_grading_rubric_create_dto_t));
    if (!course_grading_rubric_create_dto_local_var) {
        return NULL;
    }
    course_grading_rubric_create_dto_local_var->id = id;
    course_grading_rubric_create_dto_local_var->timestamp = timestamp;
    course_grading_rubric_create_dto_local_var->title = title;
    course_grading_rubric_create_dto_local_var->description = description;
    course_grading_rubric_create_dto_local_var->enable_points = enable_points;
    course_grading_rubric_create_dto_local_var->course_id = course_id;

    return course_grading_rubric_create_dto_local_var;
}


void course_grading_rubric_create_dto_free(course_grading_rubric_create_dto_t *course_grading_rubric_create_dto) {
    if(NULL == course_grading_rubric_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (course_grading_rubric_create_dto->id) {
        free(course_grading_rubric_create_dto->id);
        course_grading_rubric_create_dto->id = NULL;
    }
    if (course_grading_rubric_create_dto->timestamp) {
        free(course_grading_rubric_create_dto->timestamp);
        course_grading_rubric_create_dto->timestamp = NULL;
    }
    if (course_grading_rubric_create_dto->title) {
        free(course_grading_rubric_create_dto->title);
        course_grading_rubric_create_dto->title = NULL;
    }
    if (course_grading_rubric_create_dto->description) {
        free(course_grading_rubric_create_dto->description);
        course_grading_rubric_create_dto->description = NULL;
    }
    if (course_grading_rubric_create_dto->course_id) {
        free(course_grading_rubric_create_dto->course_id);
        course_grading_rubric_create_dto->course_id = NULL;
    }
    free(course_grading_rubric_create_dto);
}

cJSON *course_grading_rubric_create_dto_convertToJSON(course_grading_rubric_create_dto_t *course_grading_rubric_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // course_grading_rubric_create_dto->id
    if(course_grading_rubric_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", course_grading_rubric_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // course_grading_rubric_create_dto->timestamp
    if(course_grading_rubric_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", course_grading_rubric_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_grading_rubric_create_dto->title
    if (!course_grading_rubric_create_dto->title) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "title", course_grading_rubric_create_dto->title) == NULL) {
    goto fail; //String
    }


    // course_grading_rubric_create_dto->description
    if(course_grading_rubric_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", course_grading_rubric_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // course_grading_rubric_create_dto->enable_points
    if(course_grading_rubric_create_dto->enable_points) {
    if(cJSON_AddBoolToObject(item, "enablePoints", course_grading_rubric_create_dto->enable_points) == NULL) {
    goto fail; //Bool
    }
    }


    // course_grading_rubric_create_dto->course_id
    if (!course_grading_rubric_create_dto->course_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "courseID", course_grading_rubric_create_dto->course_id) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

course_grading_rubric_create_dto_t *course_grading_rubric_create_dto_parseFromJSON(cJSON *course_grading_rubric_create_dtoJSON){

    course_grading_rubric_create_dto_t *course_grading_rubric_create_dto_local_var = NULL;

    // course_grading_rubric_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(course_grading_rubric_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // course_grading_rubric_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(course_grading_rubric_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // course_grading_rubric_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(course_grading_rubric_create_dtoJSON, "title");
    if (!title) {
        goto end;
    }

    
    if(!cJSON_IsString(title))
    {
    goto end; //String
    }

    // course_grading_rubric_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(course_grading_rubric_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // course_grading_rubric_create_dto->enable_points
    cJSON *enable_points = cJSON_GetObjectItemCaseSensitive(course_grading_rubric_create_dtoJSON, "enablePoints");
    if (enable_points) { 
    if(!cJSON_IsBool(enable_points))
    {
    goto end; //Bool
    }
    }

    // course_grading_rubric_create_dto->course_id
    cJSON *course_id = cJSON_GetObjectItemCaseSensitive(course_grading_rubric_create_dtoJSON, "courseID");
    if (!course_id) {
        goto end;
    }

    
    if(!cJSON_IsString(course_id))
    {
    goto end; //String
    }


    course_grading_rubric_create_dto_local_var = course_grading_rubric_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(title->valuestring),
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        enable_points ? enable_points->valueint : 0,
        strdup(course_id->valuestring)
        );

    return course_grading_rubric_create_dto_local_var;
end:
    return NULL;

}
