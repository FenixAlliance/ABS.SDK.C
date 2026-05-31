#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "course_content_group_update_dto.h"



course_content_group_update_dto_t *course_content_group_update_dto_create(
    char *name,
    char *course_id
    ) {
    course_content_group_update_dto_t *course_content_group_update_dto_local_var = malloc(sizeof(course_content_group_update_dto_t));
    if (!course_content_group_update_dto_local_var) {
        return NULL;
    }
    course_content_group_update_dto_local_var->name = name;
    course_content_group_update_dto_local_var->course_id = course_id;

    return course_content_group_update_dto_local_var;
}


void course_content_group_update_dto_free(course_content_group_update_dto_t *course_content_group_update_dto) {
    if(NULL == course_content_group_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (course_content_group_update_dto->name) {
        free(course_content_group_update_dto->name);
        course_content_group_update_dto->name = NULL;
    }
    if (course_content_group_update_dto->course_id) {
        free(course_content_group_update_dto->course_id);
        course_content_group_update_dto->course_id = NULL;
    }
    free(course_content_group_update_dto);
}

cJSON *course_content_group_update_dto_convertToJSON(course_content_group_update_dto_t *course_content_group_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // course_content_group_update_dto->name
    if(course_content_group_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", course_content_group_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // course_content_group_update_dto->course_id
    if(course_content_group_update_dto->course_id) {
    if(cJSON_AddStringToObject(item, "courseID", course_content_group_update_dto->course_id) == NULL) {
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

course_content_group_update_dto_t *course_content_group_update_dto_parseFromJSON(cJSON *course_content_group_update_dtoJSON){

    course_content_group_update_dto_t *course_content_group_update_dto_local_var = NULL;

    // course_content_group_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(course_content_group_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // course_content_group_update_dto->course_id
    cJSON *course_id = cJSON_GetObjectItemCaseSensitive(course_content_group_update_dtoJSON, "courseID");
    if (course_id) { 
    if(!cJSON_IsString(course_id) && !cJSON_IsNull(course_id))
    {
    goto end; //String
    }
    }


    course_content_group_update_dto_local_var = course_content_group_update_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        course_id && !cJSON_IsNull(course_id) ? strdup(course_id->valuestring) : NULL
        );

    return course_content_group_update_dto_local_var;
end:
    return NULL;

}
