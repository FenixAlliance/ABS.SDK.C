#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "project_task_dto.h"



project_task_dto_t *project_task_dto_create(
    char *id,
    char *timestamp,
    char *start_date,
    char *due_line,
    char *project_id,
    char *project_task_bucket_id
    ) {
    project_task_dto_t *project_task_dto_local_var = malloc(sizeof(project_task_dto_t));
    if (!project_task_dto_local_var) {
        return NULL;
    }
    project_task_dto_local_var->id = id;
    project_task_dto_local_var->timestamp = timestamp;
    project_task_dto_local_var->start_date = start_date;
    project_task_dto_local_var->due_line = due_line;
    project_task_dto_local_var->project_id = project_id;
    project_task_dto_local_var->project_task_bucket_id = project_task_bucket_id;

    return project_task_dto_local_var;
}


void project_task_dto_free(project_task_dto_t *project_task_dto) {
    if(NULL == project_task_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (project_task_dto->id) {
        free(project_task_dto->id);
        project_task_dto->id = NULL;
    }
    if (project_task_dto->timestamp) {
        free(project_task_dto->timestamp);
        project_task_dto->timestamp = NULL;
    }
    if (project_task_dto->start_date) {
        free(project_task_dto->start_date);
        project_task_dto->start_date = NULL;
    }
    if (project_task_dto->due_line) {
        free(project_task_dto->due_line);
        project_task_dto->due_line = NULL;
    }
    if (project_task_dto->project_id) {
        free(project_task_dto->project_id);
        project_task_dto->project_id = NULL;
    }
    if (project_task_dto->project_task_bucket_id) {
        free(project_task_dto->project_task_bucket_id);
        project_task_dto->project_task_bucket_id = NULL;
    }
    free(project_task_dto);
}

cJSON *project_task_dto_convertToJSON(project_task_dto_t *project_task_dto) {
    cJSON *item = cJSON_CreateObject();

    // project_task_dto->id
    if(project_task_dto->id) {
    if(cJSON_AddStringToObject(item, "id", project_task_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // project_task_dto->timestamp
    if(project_task_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", project_task_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // project_task_dto->start_date
    if(project_task_dto->start_date) {
    if(cJSON_AddStringToObject(item, "startDate", project_task_dto->start_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // project_task_dto->due_line
    if(project_task_dto->due_line) {
    if(cJSON_AddStringToObject(item, "dueLine", project_task_dto->due_line) == NULL) {
    goto fail; //Date-Time
    }
    }


    // project_task_dto->project_id
    if(project_task_dto->project_id) {
    if(cJSON_AddStringToObject(item, "projectID", project_task_dto->project_id) == NULL) {
    goto fail; //String
    }
    }


    // project_task_dto->project_task_bucket_id
    if(project_task_dto->project_task_bucket_id) {
    if(cJSON_AddStringToObject(item, "projectTaskBucketID", project_task_dto->project_task_bucket_id) == NULL) {
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

project_task_dto_t *project_task_dto_parseFromJSON(cJSON *project_task_dtoJSON){

    project_task_dto_t *project_task_dto_local_var = NULL;

    // project_task_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(project_task_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // project_task_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(project_task_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // project_task_dto->start_date
    cJSON *start_date = cJSON_GetObjectItemCaseSensitive(project_task_dtoJSON, "startDate");
    if (start_date) { 
    if(!cJSON_IsString(start_date) && !cJSON_IsNull(start_date))
    {
    goto end; //DateTime
    }
    }

    // project_task_dto->due_line
    cJSON *due_line = cJSON_GetObjectItemCaseSensitive(project_task_dtoJSON, "dueLine");
    if (due_line) { 
    if(!cJSON_IsString(due_line) && !cJSON_IsNull(due_line))
    {
    goto end; //DateTime
    }
    }

    // project_task_dto->project_id
    cJSON *project_id = cJSON_GetObjectItemCaseSensitive(project_task_dtoJSON, "projectID");
    if (project_id) { 
    if(!cJSON_IsString(project_id) && !cJSON_IsNull(project_id))
    {
    goto end; //String
    }
    }

    // project_task_dto->project_task_bucket_id
    cJSON *project_task_bucket_id = cJSON_GetObjectItemCaseSensitive(project_task_dtoJSON, "projectTaskBucketID");
    if (project_task_bucket_id) { 
    if(!cJSON_IsString(project_task_bucket_id) && !cJSON_IsNull(project_task_bucket_id))
    {
    goto end; //String
    }
    }


    project_task_dto_local_var = project_task_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        start_date && !cJSON_IsNull(start_date) ? strdup(start_date->valuestring) : NULL,
        due_line && !cJSON_IsNull(due_line) ? strdup(due_line->valuestring) : NULL,
        project_id && !cJSON_IsNull(project_id) ? strdup(project_id->valuestring) : NULL,
        project_task_bucket_id && !cJSON_IsNull(project_task_bucket_id) ? strdup(project_task_bucket_id->valuestring) : NULL
        );

    return project_task_dto_local_var;
end:
    return NULL;

}
