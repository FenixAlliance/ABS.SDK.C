#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "task_type_create_dto.h"



task_type_create_dto_t *task_type_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *task_category_id,
    int display_in_time_tracker,
    int requires_description
    ) {
    task_type_create_dto_t *task_type_create_dto_local_var = malloc(sizeof(task_type_create_dto_t));
    if (!task_type_create_dto_local_var) {
        return NULL;
    }
    task_type_create_dto_local_var->id = id;
    task_type_create_dto_local_var->timestamp = timestamp;
    task_type_create_dto_local_var->title = title;
    task_type_create_dto_local_var->task_category_id = task_category_id;
    task_type_create_dto_local_var->display_in_time_tracker = display_in_time_tracker;
    task_type_create_dto_local_var->requires_description = requires_description;

    return task_type_create_dto_local_var;
}


void task_type_create_dto_free(task_type_create_dto_t *task_type_create_dto) {
    if(NULL == task_type_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (task_type_create_dto->id) {
        free(task_type_create_dto->id);
        task_type_create_dto->id = NULL;
    }
    if (task_type_create_dto->timestamp) {
        free(task_type_create_dto->timestamp);
        task_type_create_dto->timestamp = NULL;
    }
    if (task_type_create_dto->title) {
        free(task_type_create_dto->title);
        task_type_create_dto->title = NULL;
    }
    if (task_type_create_dto->task_category_id) {
        free(task_type_create_dto->task_category_id);
        task_type_create_dto->task_category_id = NULL;
    }
    free(task_type_create_dto);
}

cJSON *task_type_create_dto_convertToJSON(task_type_create_dto_t *task_type_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // task_type_create_dto->id
    if(task_type_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", task_type_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // task_type_create_dto->timestamp
    if(task_type_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", task_type_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // task_type_create_dto->title
    if(task_type_create_dto->title) {
    if(cJSON_AddStringToObject(item, "title", task_type_create_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // task_type_create_dto->task_category_id
    if(task_type_create_dto->task_category_id) {
    if(cJSON_AddStringToObject(item, "taskCategoryID", task_type_create_dto->task_category_id) == NULL) {
    goto fail; //String
    }
    }


    // task_type_create_dto->display_in_time_tracker
    if(task_type_create_dto->display_in_time_tracker) {
    if(cJSON_AddBoolToObject(item, "displayInTimeTracker", task_type_create_dto->display_in_time_tracker) == NULL) {
    goto fail; //Bool
    }
    }


    // task_type_create_dto->requires_description
    if(task_type_create_dto->requires_description) {
    if(cJSON_AddBoolToObject(item, "requiresDescription", task_type_create_dto->requires_description) == NULL) {
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

task_type_create_dto_t *task_type_create_dto_parseFromJSON(cJSON *task_type_create_dtoJSON){

    task_type_create_dto_t *task_type_create_dto_local_var = NULL;

    // task_type_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(task_type_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // task_type_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(task_type_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // task_type_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(task_type_create_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // task_type_create_dto->task_category_id
    cJSON *task_category_id = cJSON_GetObjectItemCaseSensitive(task_type_create_dtoJSON, "taskCategoryID");
    if (task_category_id) { 
    if(!cJSON_IsString(task_category_id) && !cJSON_IsNull(task_category_id))
    {
    goto end; //String
    }
    }

    // task_type_create_dto->display_in_time_tracker
    cJSON *display_in_time_tracker = cJSON_GetObjectItemCaseSensitive(task_type_create_dtoJSON, "displayInTimeTracker");
    if (display_in_time_tracker) { 
    if(!cJSON_IsBool(display_in_time_tracker))
    {
    goto end; //Bool
    }
    }

    // task_type_create_dto->requires_description
    cJSON *requires_description = cJSON_GetObjectItemCaseSensitive(task_type_create_dtoJSON, "requiresDescription");
    if (requires_description) { 
    if(!cJSON_IsBool(requires_description))
    {
    goto end; //Bool
    }
    }


    task_type_create_dto_local_var = task_type_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        task_category_id && !cJSON_IsNull(task_category_id) ? strdup(task_category_id->valuestring) : NULL,
        display_in_time_tracker ? display_in_time_tracker->valueint : 0,
        requires_description ? requires_description->valueint : 0
        );

    return task_type_create_dto_local_var;
end:
    return NULL;

}
