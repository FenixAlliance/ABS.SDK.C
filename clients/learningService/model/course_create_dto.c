#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "course_create_dto.h"



course_create_dto_t *course_create_dto_create(
    char *id,
    char *timestamp,
    char *title
    ) {
    course_create_dto_t *course_create_dto_local_var = malloc(sizeof(course_create_dto_t));
    if (!course_create_dto_local_var) {
        return NULL;
    }
    course_create_dto_local_var->id = id;
    course_create_dto_local_var->timestamp = timestamp;
    course_create_dto_local_var->title = title;

    return course_create_dto_local_var;
}


void course_create_dto_free(course_create_dto_t *course_create_dto) {
    if(NULL == course_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (course_create_dto->id) {
        free(course_create_dto->id);
        course_create_dto->id = NULL;
    }
    if (course_create_dto->timestamp) {
        free(course_create_dto->timestamp);
        course_create_dto->timestamp = NULL;
    }
    if (course_create_dto->title) {
        free(course_create_dto->title);
        course_create_dto->title = NULL;
    }
    free(course_create_dto);
}

cJSON *course_create_dto_convertToJSON(course_create_dto_t *course_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // course_create_dto->id
    if(course_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", course_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // course_create_dto->timestamp
    if(course_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", course_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_create_dto->title
    if(course_create_dto->title) {
    if(cJSON_AddStringToObject(item, "title", course_create_dto->title) == NULL) {
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

course_create_dto_t *course_create_dto_parseFromJSON(cJSON *course_create_dtoJSON){

    course_create_dto_t *course_create_dto_local_var = NULL;

    // course_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(course_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // course_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(course_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // course_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(course_create_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }


    course_create_dto_local_var = course_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL
        );

    return course_create_dto_local_var;
end:
    return NULL;

}
