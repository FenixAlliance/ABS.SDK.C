#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "project_update_dto.h"



project_update_dto_t *project_update_dto_create(
    char *title,
    char *description,
    char *project_start_date,
    char *project_end_date
    ) {
    project_update_dto_t *project_update_dto_local_var = malloc(sizeof(project_update_dto_t));
    if (!project_update_dto_local_var) {
        return NULL;
    }
    project_update_dto_local_var->title = title;
    project_update_dto_local_var->description = description;
    project_update_dto_local_var->project_start_date = project_start_date;
    project_update_dto_local_var->project_end_date = project_end_date;

    return project_update_dto_local_var;
}


void project_update_dto_free(project_update_dto_t *project_update_dto) {
    if(NULL == project_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (project_update_dto->title) {
        free(project_update_dto->title);
        project_update_dto->title = NULL;
    }
    if (project_update_dto->description) {
        free(project_update_dto->description);
        project_update_dto->description = NULL;
    }
    if (project_update_dto->project_start_date) {
        free(project_update_dto->project_start_date);
        project_update_dto->project_start_date = NULL;
    }
    if (project_update_dto->project_end_date) {
        free(project_update_dto->project_end_date);
        project_update_dto->project_end_date = NULL;
    }
    free(project_update_dto);
}

cJSON *project_update_dto_convertToJSON(project_update_dto_t *project_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // project_update_dto->title
    if(project_update_dto->title) {
    if(cJSON_AddStringToObject(item, "title", project_update_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // project_update_dto->description
    if(project_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", project_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // project_update_dto->project_start_date
    if(project_update_dto->project_start_date) {
    if(cJSON_AddStringToObject(item, "projectStartDate", project_update_dto->project_start_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // project_update_dto->project_end_date
    if(project_update_dto->project_end_date) {
    if(cJSON_AddStringToObject(item, "projectEndDate", project_update_dto->project_end_date) == NULL) {
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

project_update_dto_t *project_update_dto_parseFromJSON(cJSON *project_update_dtoJSON){

    project_update_dto_t *project_update_dto_local_var = NULL;

    // project_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(project_update_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // project_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(project_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // project_update_dto->project_start_date
    cJSON *project_start_date = cJSON_GetObjectItemCaseSensitive(project_update_dtoJSON, "projectStartDate");
    if (project_start_date) { 
    if(!cJSON_IsString(project_start_date) && !cJSON_IsNull(project_start_date))
    {
    goto end; //DateTime
    }
    }

    // project_update_dto->project_end_date
    cJSON *project_end_date = cJSON_GetObjectItemCaseSensitive(project_update_dtoJSON, "projectEndDate");
    if (project_end_date) { 
    if(!cJSON_IsString(project_end_date) && !cJSON_IsNull(project_end_date))
    {
    goto end; //DateTime
    }
    }


    project_update_dto_local_var = project_update_dto_create (
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        project_start_date && !cJSON_IsNull(project_start_date) ? strdup(project_start_date->valuestring) : NULL,
        project_end_date && !cJSON_IsNull(project_end_date) ? strdup(project_end_date->valuestring) : NULL
        );

    return project_update_dto_local_var;
end:
    return NULL;

}
