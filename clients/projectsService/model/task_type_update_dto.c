#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "task_type_update_dto.h"



task_type_update_dto_t *task_type_update_dto_create(
    char *title,
    int display_in_time_tracker,
    int requires_description
    ) {
    task_type_update_dto_t *task_type_update_dto_local_var = malloc(sizeof(task_type_update_dto_t));
    if (!task_type_update_dto_local_var) {
        return NULL;
    }
    task_type_update_dto_local_var->title = title;
    task_type_update_dto_local_var->display_in_time_tracker = display_in_time_tracker;
    task_type_update_dto_local_var->requires_description = requires_description;

    return task_type_update_dto_local_var;
}


void task_type_update_dto_free(task_type_update_dto_t *task_type_update_dto) {
    if(NULL == task_type_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (task_type_update_dto->title) {
        free(task_type_update_dto->title);
        task_type_update_dto->title = NULL;
    }
    free(task_type_update_dto);
}

cJSON *task_type_update_dto_convertToJSON(task_type_update_dto_t *task_type_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // task_type_update_dto->title
    if(task_type_update_dto->title) {
    if(cJSON_AddStringToObject(item, "title", task_type_update_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // task_type_update_dto->display_in_time_tracker
    if(task_type_update_dto->display_in_time_tracker) {
    if(cJSON_AddBoolToObject(item, "displayInTimeTracker", task_type_update_dto->display_in_time_tracker) == NULL) {
    goto fail; //Bool
    }
    }


    // task_type_update_dto->requires_description
    if(task_type_update_dto->requires_description) {
    if(cJSON_AddBoolToObject(item, "requiresDescription", task_type_update_dto->requires_description) == NULL) {
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

task_type_update_dto_t *task_type_update_dto_parseFromJSON(cJSON *task_type_update_dtoJSON){

    task_type_update_dto_t *task_type_update_dto_local_var = NULL;

    // task_type_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(task_type_update_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // task_type_update_dto->display_in_time_tracker
    cJSON *display_in_time_tracker = cJSON_GetObjectItemCaseSensitive(task_type_update_dtoJSON, "displayInTimeTracker");
    if (display_in_time_tracker) { 
    if(!cJSON_IsBool(display_in_time_tracker))
    {
    goto end; //Bool
    }
    }

    // task_type_update_dto->requires_description
    cJSON *requires_description = cJSON_GetObjectItemCaseSensitive(task_type_update_dtoJSON, "requiresDescription");
    if (requires_description) { 
    if(!cJSON_IsBool(requires_description))
    {
    goto end; //Bool
    }
    }


    task_type_update_dto_local_var = task_type_update_dto_create (
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        display_in_time_tracker ? display_in_time_tracker->valueint : 0,
        requires_description ? requires_description->valueint : 0
        );

    return task_type_update_dto_local_var;
end:
    return NULL;

}
