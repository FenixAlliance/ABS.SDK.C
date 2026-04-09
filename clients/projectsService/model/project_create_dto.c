#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "project_create_dto.h"



project_create_dto_t *project_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *project_start_date,
    char *project_end_date
    ) {
    project_create_dto_t *project_create_dto_local_var = malloc(sizeof(project_create_dto_t));
    if (!project_create_dto_local_var) {
        return NULL;
    }
    project_create_dto_local_var->id = id;
    project_create_dto_local_var->timestamp = timestamp;
    project_create_dto_local_var->title = title;
    project_create_dto_local_var->description = description;
    project_create_dto_local_var->project_start_date = project_start_date;
    project_create_dto_local_var->project_end_date = project_end_date;

    return project_create_dto_local_var;
}


void project_create_dto_free(project_create_dto_t *project_create_dto) {
    if(NULL == project_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (project_create_dto->id) {
        free(project_create_dto->id);
        project_create_dto->id = NULL;
    }
    if (project_create_dto->timestamp) {
        free(project_create_dto->timestamp);
        project_create_dto->timestamp = NULL;
    }
    if (project_create_dto->title) {
        free(project_create_dto->title);
        project_create_dto->title = NULL;
    }
    if (project_create_dto->description) {
        free(project_create_dto->description);
        project_create_dto->description = NULL;
    }
    if (project_create_dto->project_start_date) {
        free(project_create_dto->project_start_date);
        project_create_dto->project_start_date = NULL;
    }
    if (project_create_dto->project_end_date) {
        free(project_create_dto->project_end_date);
        project_create_dto->project_end_date = NULL;
    }
    free(project_create_dto);
}

cJSON *project_create_dto_convertToJSON(project_create_dto_t *project_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // project_create_dto->id
    if(project_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", project_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // project_create_dto->timestamp
    if(project_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", project_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // project_create_dto->title
    if(project_create_dto->title) {
    if(cJSON_AddStringToObject(item, "title", project_create_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // project_create_dto->description
    if(project_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", project_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // project_create_dto->project_start_date
    if(project_create_dto->project_start_date) {
    if(cJSON_AddStringToObject(item, "projectStartDate", project_create_dto->project_start_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // project_create_dto->project_end_date
    if(project_create_dto->project_end_date) {
    if(cJSON_AddStringToObject(item, "projectEndDate", project_create_dto->project_end_date) == NULL) {
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

project_create_dto_t *project_create_dto_parseFromJSON(cJSON *project_create_dtoJSON){

    project_create_dto_t *project_create_dto_local_var = NULL;

    // project_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(project_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // project_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(project_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // project_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(project_create_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // project_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(project_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // project_create_dto->project_start_date
    cJSON *project_start_date = cJSON_GetObjectItemCaseSensitive(project_create_dtoJSON, "projectStartDate");
    if (project_start_date) { 
    if(!cJSON_IsString(project_start_date) && !cJSON_IsNull(project_start_date))
    {
    goto end; //DateTime
    }
    }

    // project_create_dto->project_end_date
    cJSON *project_end_date = cJSON_GetObjectItemCaseSensitive(project_create_dtoJSON, "projectEndDate");
    if (project_end_date) { 
    if(!cJSON_IsString(project_end_date) && !cJSON_IsNull(project_end_date))
    {
    goto end; //DateTime
    }
    }


    project_create_dto_local_var = project_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        project_start_date && !cJSON_IsNull(project_start_date) ? strdup(project_start_date->valuestring) : NULL,
        project_end_date && !cJSON_IsNull(project_end_date) ? strdup(project_end_date->valuestring) : NULL
        );

    return project_create_dto_local_var;
end:
    return NULL;

}
