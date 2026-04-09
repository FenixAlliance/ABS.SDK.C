#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "task_category_update_dto.h"



task_category_update_dto_t *task_category_update_dto_create(
    char *title
    ) {
    task_category_update_dto_t *task_category_update_dto_local_var = malloc(sizeof(task_category_update_dto_t));
    if (!task_category_update_dto_local_var) {
        return NULL;
    }
    task_category_update_dto_local_var->title = title;

    return task_category_update_dto_local_var;
}


void task_category_update_dto_free(task_category_update_dto_t *task_category_update_dto) {
    if(NULL == task_category_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (task_category_update_dto->title) {
        free(task_category_update_dto->title);
        task_category_update_dto->title = NULL;
    }
    free(task_category_update_dto);
}

cJSON *task_category_update_dto_convertToJSON(task_category_update_dto_t *task_category_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // task_category_update_dto->title
    if(task_category_update_dto->title) {
    if(cJSON_AddStringToObject(item, "title", task_category_update_dto->title) == NULL) {
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

task_category_update_dto_t *task_category_update_dto_parseFromJSON(cJSON *task_category_update_dtoJSON){

    task_category_update_dto_t *task_category_update_dto_local_var = NULL;

    // task_category_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(task_category_update_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }


    task_category_update_dto_local_var = task_category_update_dto_create (
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL
        );

    return task_category_update_dto_local_var;
end:
    return NULL;

}
