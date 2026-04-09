#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "course_update_dto.h"



course_update_dto_t *course_update_dto_create(
    char *title
    ) {
    course_update_dto_t *course_update_dto_local_var = malloc(sizeof(course_update_dto_t));
    if (!course_update_dto_local_var) {
        return NULL;
    }
    course_update_dto_local_var->title = title;

    return course_update_dto_local_var;
}


void course_update_dto_free(course_update_dto_t *course_update_dto) {
    if(NULL == course_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (course_update_dto->title) {
        free(course_update_dto->title);
        course_update_dto->title = NULL;
    }
    free(course_update_dto);
}

cJSON *course_update_dto_convertToJSON(course_update_dto_t *course_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // course_update_dto->title
    if(course_update_dto->title) {
    if(cJSON_AddStringToObject(item, "title", course_update_dto->title) == NULL) {
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

course_update_dto_t *course_update_dto_parseFromJSON(cJSON *course_update_dtoJSON){

    course_update_dto_t *course_update_dto_local_var = NULL;

    // course_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(course_update_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }


    course_update_dto_local_var = course_update_dto_create (
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL
        );

    return course_update_dto_local_var;
end:
    return NULL;

}
