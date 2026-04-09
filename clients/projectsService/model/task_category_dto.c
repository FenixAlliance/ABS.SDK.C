#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "task_category_dto.h"



task_category_dto_t *task_category_dto_create(
    char *id,
    char *timestamp,
    char *title
    ) {
    task_category_dto_t *task_category_dto_local_var = malloc(sizeof(task_category_dto_t));
    if (!task_category_dto_local_var) {
        return NULL;
    }
    task_category_dto_local_var->id = id;
    task_category_dto_local_var->timestamp = timestamp;
    task_category_dto_local_var->title = title;

    return task_category_dto_local_var;
}


void task_category_dto_free(task_category_dto_t *task_category_dto) {
    if(NULL == task_category_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (task_category_dto->id) {
        free(task_category_dto->id);
        task_category_dto->id = NULL;
    }
    if (task_category_dto->timestamp) {
        free(task_category_dto->timestamp);
        task_category_dto->timestamp = NULL;
    }
    if (task_category_dto->title) {
        free(task_category_dto->title);
        task_category_dto->title = NULL;
    }
    free(task_category_dto);
}

cJSON *task_category_dto_convertToJSON(task_category_dto_t *task_category_dto) {
    cJSON *item = cJSON_CreateObject();

    // task_category_dto->id
    if(task_category_dto->id) {
    if(cJSON_AddStringToObject(item, "id", task_category_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // task_category_dto->timestamp
    if(task_category_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", task_category_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // task_category_dto->title
    if(task_category_dto->title) {
    if(cJSON_AddStringToObject(item, "title", task_category_dto->title) == NULL) {
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

task_category_dto_t *task_category_dto_parseFromJSON(cJSON *task_category_dtoJSON){

    task_category_dto_t *task_category_dto_local_var = NULL;

    // task_category_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(task_category_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // task_category_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(task_category_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // task_category_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(task_category_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }


    task_category_dto_local_var = task_category_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL
        );

    return task_category_dto_local_var;
end:
    return NULL;

}
