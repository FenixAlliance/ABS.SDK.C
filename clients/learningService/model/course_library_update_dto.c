#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "course_library_update_dto.h"



course_library_update_dto_t *course_library_update_dto_create(
    char *title,
    char *description,
    char *course_unit_id,
    char *release_date_time
    ) {
    course_library_update_dto_t *course_library_update_dto_local_var = malloc(sizeof(course_library_update_dto_t));
    if (!course_library_update_dto_local_var) {
        return NULL;
    }
    course_library_update_dto_local_var->title = title;
    course_library_update_dto_local_var->description = description;
    course_library_update_dto_local_var->course_unit_id = course_unit_id;
    course_library_update_dto_local_var->release_date_time = release_date_time;

    return course_library_update_dto_local_var;
}


void course_library_update_dto_free(course_library_update_dto_t *course_library_update_dto) {
    if(NULL == course_library_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (course_library_update_dto->title) {
        free(course_library_update_dto->title);
        course_library_update_dto->title = NULL;
    }
    if (course_library_update_dto->description) {
        free(course_library_update_dto->description);
        course_library_update_dto->description = NULL;
    }
    if (course_library_update_dto->course_unit_id) {
        free(course_library_update_dto->course_unit_id);
        course_library_update_dto->course_unit_id = NULL;
    }
    if (course_library_update_dto->release_date_time) {
        free(course_library_update_dto->release_date_time);
        course_library_update_dto->release_date_time = NULL;
    }
    free(course_library_update_dto);
}

cJSON *course_library_update_dto_convertToJSON(course_library_update_dto_t *course_library_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // course_library_update_dto->title
    if(course_library_update_dto->title) {
    if(cJSON_AddStringToObject(item, "title", course_library_update_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // course_library_update_dto->description
    if(course_library_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", course_library_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // course_library_update_dto->course_unit_id
    if(course_library_update_dto->course_unit_id) {
    if(cJSON_AddStringToObject(item, "courseUnitID", course_library_update_dto->course_unit_id) == NULL) {
    goto fail; //String
    }
    }


    // course_library_update_dto->release_date_time
    if(course_library_update_dto->release_date_time) {
    if(cJSON_AddStringToObject(item, "releaseDateTime", course_library_update_dto->release_date_time) == NULL) {
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

course_library_update_dto_t *course_library_update_dto_parseFromJSON(cJSON *course_library_update_dtoJSON){

    course_library_update_dto_t *course_library_update_dto_local_var = NULL;

    // course_library_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(course_library_update_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // course_library_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(course_library_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // course_library_update_dto->course_unit_id
    cJSON *course_unit_id = cJSON_GetObjectItemCaseSensitive(course_library_update_dtoJSON, "courseUnitID");
    if (course_unit_id) { 
    if(!cJSON_IsString(course_unit_id) && !cJSON_IsNull(course_unit_id))
    {
    goto end; //String
    }
    }

    // course_library_update_dto->release_date_time
    cJSON *release_date_time = cJSON_GetObjectItemCaseSensitive(course_library_update_dtoJSON, "releaseDateTime");
    if (release_date_time) { 
    if(!cJSON_IsString(release_date_time) && !cJSON_IsNull(release_date_time))
    {
    goto end; //DateTime
    }
    }


    course_library_update_dto_local_var = course_library_update_dto_create (
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        course_unit_id && !cJSON_IsNull(course_unit_id) ? strdup(course_unit_id->valuestring) : NULL,
        release_date_time && !cJSON_IsNull(release_date_time) ? strdup(release_date_time->valuestring) : NULL
        );

    return course_library_update_dto_local_var;
end:
    return NULL;

}
