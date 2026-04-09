#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "project_period_dto.h"



project_period_dto_t *project_period_dto_create(
    char *id,
    char *timestamp,
    char *period_start_date,
    char *period_end_date,
    char *project_id
    ) {
    project_period_dto_t *project_period_dto_local_var = malloc(sizeof(project_period_dto_t));
    if (!project_period_dto_local_var) {
        return NULL;
    }
    project_period_dto_local_var->id = id;
    project_period_dto_local_var->timestamp = timestamp;
    project_period_dto_local_var->period_start_date = period_start_date;
    project_period_dto_local_var->period_end_date = period_end_date;
    project_period_dto_local_var->project_id = project_id;

    return project_period_dto_local_var;
}


void project_period_dto_free(project_period_dto_t *project_period_dto) {
    if(NULL == project_period_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (project_period_dto->id) {
        free(project_period_dto->id);
        project_period_dto->id = NULL;
    }
    if (project_period_dto->timestamp) {
        free(project_period_dto->timestamp);
        project_period_dto->timestamp = NULL;
    }
    if (project_period_dto->period_start_date) {
        free(project_period_dto->period_start_date);
        project_period_dto->period_start_date = NULL;
    }
    if (project_period_dto->period_end_date) {
        free(project_period_dto->period_end_date);
        project_period_dto->period_end_date = NULL;
    }
    if (project_period_dto->project_id) {
        free(project_period_dto->project_id);
        project_period_dto->project_id = NULL;
    }
    free(project_period_dto);
}

cJSON *project_period_dto_convertToJSON(project_period_dto_t *project_period_dto) {
    cJSON *item = cJSON_CreateObject();

    // project_period_dto->id
    if(project_period_dto->id) {
    if(cJSON_AddStringToObject(item, "id", project_period_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // project_period_dto->timestamp
    if(project_period_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", project_period_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // project_period_dto->period_start_date
    if(project_period_dto->period_start_date) {
    if(cJSON_AddStringToObject(item, "periodStartDate", project_period_dto->period_start_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // project_period_dto->period_end_date
    if(project_period_dto->period_end_date) {
    if(cJSON_AddStringToObject(item, "periodEndDate", project_period_dto->period_end_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // project_period_dto->project_id
    if(project_period_dto->project_id) {
    if(cJSON_AddStringToObject(item, "projectID", project_period_dto->project_id) == NULL) {
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

project_period_dto_t *project_period_dto_parseFromJSON(cJSON *project_period_dtoJSON){

    project_period_dto_t *project_period_dto_local_var = NULL;

    // project_period_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(project_period_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // project_period_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(project_period_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // project_period_dto->period_start_date
    cJSON *period_start_date = cJSON_GetObjectItemCaseSensitive(project_period_dtoJSON, "periodStartDate");
    if (period_start_date) { 
    if(!cJSON_IsString(period_start_date) && !cJSON_IsNull(period_start_date))
    {
    goto end; //DateTime
    }
    }

    // project_period_dto->period_end_date
    cJSON *period_end_date = cJSON_GetObjectItemCaseSensitive(project_period_dtoJSON, "periodEndDate");
    if (period_end_date) { 
    if(!cJSON_IsString(period_end_date) && !cJSON_IsNull(period_end_date))
    {
    goto end; //DateTime
    }
    }

    // project_period_dto->project_id
    cJSON *project_id = cJSON_GetObjectItemCaseSensitive(project_period_dtoJSON, "projectID");
    if (project_id) { 
    if(!cJSON_IsString(project_id) && !cJSON_IsNull(project_id))
    {
    goto end; //String
    }
    }


    project_period_dto_local_var = project_period_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        period_start_date && !cJSON_IsNull(period_start_date) ? strdup(period_start_date->valuestring) : NULL,
        period_end_date && !cJSON_IsNull(period_end_date) ? strdup(period_end_date->valuestring) : NULL,
        project_id && !cJSON_IsNull(project_id) ? strdup(project_id->valuestring) : NULL
        );

    return project_period_dto_local_var;
end:
    return NULL;

}
