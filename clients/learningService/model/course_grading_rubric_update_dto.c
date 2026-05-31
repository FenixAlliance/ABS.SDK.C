#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "course_grading_rubric_update_dto.h"



course_grading_rubric_update_dto_t *course_grading_rubric_update_dto_create(
    char *title,
    char *description,
    int enable_points
    ) {
    course_grading_rubric_update_dto_t *course_grading_rubric_update_dto_local_var = malloc(sizeof(course_grading_rubric_update_dto_t));
    if (!course_grading_rubric_update_dto_local_var) {
        return NULL;
    }
    course_grading_rubric_update_dto_local_var->title = title;
    course_grading_rubric_update_dto_local_var->description = description;
    course_grading_rubric_update_dto_local_var->enable_points = enable_points;

    return course_grading_rubric_update_dto_local_var;
}


void course_grading_rubric_update_dto_free(course_grading_rubric_update_dto_t *course_grading_rubric_update_dto) {
    if(NULL == course_grading_rubric_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (course_grading_rubric_update_dto->title) {
        free(course_grading_rubric_update_dto->title);
        course_grading_rubric_update_dto->title = NULL;
    }
    if (course_grading_rubric_update_dto->description) {
        free(course_grading_rubric_update_dto->description);
        course_grading_rubric_update_dto->description = NULL;
    }
    free(course_grading_rubric_update_dto);
}

cJSON *course_grading_rubric_update_dto_convertToJSON(course_grading_rubric_update_dto_t *course_grading_rubric_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // course_grading_rubric_update_dto->title
    if(course_grading_rubric_update_dto->title) {
    if(cJSON_AddStringToObject(item, "title", course_grading_rubric_update_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // course_grading_rubric_update_dto->description
    if(course_grading_rubric_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", course_grading_rubric_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // course_grading_rubric_update_dto->enable_points
    if(course_grading_rubric_update_dto->enable_points) {
    if(cJSON_AddBoolToObject(item, "enablePoints", course_grading_rubric_update_dto->enable_points) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

course_grading_rubric_update_dto_t *course_grading_rubric_update_dto_parseFromJSON(cJSON *course_grading_rubric_update_dtoJSON){

    course_grading_rubric_update_dto_t *course_grading_rubric_update_dto_local_var = NULL;

    // course_grading_rubric_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(course_grading_rubric_update_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // course_grading_rubric_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(course_grading_rubric_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // course_grading_rubric_update_dto->enable_points
    cJSON *enable_points = cJSON_GetObjectItemCaseSensitive(course_grading_rubric_update_dtoJSON, "enablePoints");
    if (enable_points) { 
    if(!cJSON_IsBool(enable_points))
    {
    goto end; //Bool
    }
    }


    course_grading_rubric_update_dto_local_var = course_grading_rubric_update_dto_create (
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        enable_points ? enable_points->valueint : 0
        );

    return course_grading_rubric_update_dto_local_var;
end:
    return NULL;

}
