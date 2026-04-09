#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "project_period_update_dto.h"



project_period_update_dto_t *project_period_update_dto_create(
    char *period_start_date,
    char *period_end_date
    ) {
    project_period_update_dto_t *project_period_update_dto_local_var = malloc(sizeof(project_period_update_dto_t));
    if (!project_period_update_dto_local_var) {
        return NULL;
    }
    project_period_update_dto_local_var->period_start_date = period_start_date;
    project_period_update_dto_local_var->period_end_date = period_end_date;

    return project_period_update_dto_local_var;
}


void project_period_update_dto_free(project_period_update_dto_t *project_period_update_dto) {
    if(NULL == project_period_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (project_period_update_dto->period_start_date) {
        free(project_period_update_dto->period_start_date);
        project_period_update_dto->period_start_date = NULL;
    }
    if (project_period_update_dto->period_end_date) {
        free(project_period_update_dto->period_end_date);
        project_period_update_dto->period_end_date = NULL;
    }
    free(project_period_update_dto);
}

cJSON *project_period_update_dto_convertToJSON(project_period_update_dto_t *project_period_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // project_period_update_dto->period_start_date
    if(project_period_update_dto->period_start_date) {
    if(cJSON_AddStringToObject(item, "periodStartDate", project_period_update_dto->period_start_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // project_period_update_dto->period_end_date
    if(project_period_update_dto->period_end_date) {
    if(cJSON_AddStringToObject(item, "periodEndDate", project_period_update_dto->period_end_date) == NULL) {
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

project_period_update_dto_t *project_period_update_dto_parseFromJSON(cJSON *project_period_update_dtoJSON){

    project_period_update_dto_t *project_period_update_dto_local_var = NULL;

    // project_period_update_dto->period_start_date
    cJSON *period_start_date = cJSON_GetObjectItemCaseSensitive(project_period_update_dtoJSON, "periodStartDate");
    if (period_start_date) { 
    if(!cJSON_IsString(period_start_date) && !cJSON_IsNull(period_start_date))
    {
    goto end; //DateTime
    }
    }

    // project_period_update_dto->period_end_date
    cJSON *period_end_date = cJSON_GetObjectItemCaseSensitive(project_period_update_dtoJSON, "periodEndDate");
    if (period_end_date) { 
    if(!cJSON_IsString(period_end_date) && !cJSON_IsNull(period_end_date))
    {
    goto end; //DateTime
    }
    }


    project_period_update_dto_local_var = project_period_update_dto_create (
        period_start_date && !cJSON_IsNull(period_start_date) ? strdup(period_start_date->valuestring) : NULL,
        period_end_date && !cJSON_IsNull(period_end_date) ? strdup(period_end_date->valuestring) : NULL
        );

    return project_period_update_dto_local_var;
end:
    return NULL;

}
