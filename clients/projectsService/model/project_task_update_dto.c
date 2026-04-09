#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "project_task_update_dto.h"



project_task_update_dto_t *project_task_update_dto_create(
    char *start_date,
    char *due_line
    ) {
    project_task_update_dto_t *project_task_update_dto_local_var = malloc(sizeof(project_task_update_dto_t));
    if (!project_task_update_dto_local_var) {
        return NULL;
    }
    project_task_update_dto_local_var->start_date = start_date;
    project_task_update_dto_local_var->due_line = due_line;

    return project_task_update_dto_local_var;
}


void project_task_update_dto_free(project_task_update_dto_t *project_task_update_dto) {
    if(NULL == project_task_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (project_task_update_dto->start_date) {
        free(project_task_update_dto->start_date);
        project_task_update_dto->start_date = NULL;
    }
    if (project_task_update_dto->due_line) {
        free(project_task_update_dto->due_line);
        project_task_update_dto->due_line = NULL;
    }
    free(project_task_update_dto);
}

cJSON *project_task_update_dto_convertToJSON(project_task_update_dto_t *project_task_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // project_task_update_dto->start_date
    if(project_task_update_dto->start_date) {
    if(cJSON_AddStringToObject(item, "startDate", project_task_update_dto->start_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // project_task_update_dto->due_line
    if(project_task_update_dto->due_line) {
    if(cJSON_AddStringToObject(item, "dueLine", project_task_update_dto->due_line) == NULL) {
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

project_task_update_dto_t *project_task_update_dto_parseFromJSON(cJSON *project_task_update_dtoJSON){

    project_task_update_dto_t *project_task_update_dto_local_var = NULL;

    // project_task_update_dto->start_date
    cJSON *start_date = cJSON_GetObjectItemCaseSensitive(project_task_update_dtoJSON, "startDate");
    if (start_date) { 
    if(!cJSON_IsString(start_date) && !cJSON_IsNull(start_date))
    {
    goto end; //DateTime
    }
    }

    // project_task_update_dto->due_line
    cJSON *due_line = cJSON_GetObjectItemCaseSensitive(project_task_update_dtoJSON, "dueLine");
    if (due_line) { 
    if(!cJSON_IsString(due_line) && !cJSON_IsNull(due_line))
    {
    goto end; //DateTime
    }
    }


    project_task_update_dto_local_var = project_task_update_dto_create (
        start_date && !cJSON_IsNull(start_date) ? strdup(start_date->valuestring) : NULL,
        due_line && !cJSON_IsNull(due_line) ? strdup(due_line->valuestring) : NULL
        );

    return project_task_update_dto_local_var;
end:
    return NULL;

}
