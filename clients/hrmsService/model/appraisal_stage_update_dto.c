#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "appraisal_stage_update_dto.h"



appraisal_stage_update_dto_t *appraisal_stage_update_dto_create(
    char *name,
    char *description,
    char *appraisal_workflow_id,
    int stage_order
    ) {
    appraisal_stage_update_dto_t *appraisal_stage_update_dto_local_var = malloc(sizeof(appraisal_stage_update_dto_t));
    if (!appraisal_stage_update_dto_local_var) {
        return NULL;
    }
    appraisal_stage_update_dto_local_var->name = name;
    appraisal_stage_update_dto_local_var->description = description;
    appraisal_stage_update_dto_local_var->appraisal_workflow_id = appraisal_workflow_id;
    appraisal_stage_update_dto_local_var->stage_order = stage_order;

    return appraisal_stage_update_dto_local_var;
}


void appraisal_stage_update_dto_free(appraisal_stage_update_dto_t *appraisal_stage_update_dto) {
    if(NULL == appraisal_stage_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (appraisal_stage_update_dto->name) {
        free(appraisal_stage_update_dto->name);
        appraisal_stage_update_dto->name = NULL;
    }
    if (appraisal_stage_update_dto->description) {
        free(appraisal_stage_update_dto->description);
        appraisal_stage_update_dto->description = NULL;
    }
    if (appraisal_stage_update_dto->appraisal_workflow_id) {
        free(appraisal_stage_update_dto->appraisal_workflow_id);
        appraisal_stage_update_dto->appraisal_workflow_id = NULL;
    }
    free(appraisal_stage_update_dto);
}

cJSON *appraisal_stage_update_dto_convertToJSON(appraisal_stage_update_dto_t *appraisal_stage_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // appraisal_stage_update_dto->name
    if(appraisal_stage_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", appraisal_stage_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // appraisal_stage_update_dto->description
    if(appraisal_stage_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", appraisal_stage_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // appraisal_stage_update_dto->appraisal_workflow_id
    if(appraisal_stage_update_dto->appraisal_workflow_id) {
    if(cJSON_AddStringToObject(item, "appraisalWorkflowId", appraisal_stage_update_dto->appraisal_workflow_id) == NULL) {
    goto fail; //String
    }
    }


    // appraisal_stage_update_dto->stage_order
    if(appraisal_stage_update_dto->stage_order) {
    if(cJSON_AddNumberToObject(item, "stageOrder", appraisal_stage_update_dto->stage_order) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

appraisal_stage_update_dto_t *appraisal_stage_update_dto_parseFromJSON(cJSON *appraisal_stage_update_dtoJSON){

    appraisal_stage_update_dto_t *appraisal_stage_update_dto_local_var = NULL;

    // appraisal_stage_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(appraisal_stage_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // appraisal_stage_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(appraisal_stage_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // appraisal_stage_update_dto->appraisal_workflow_id
    cJSON *appraisal_workflow_id = cJSON_GetObjectItemCaseSensitive(appraisal_stage_update_dtoJSON, "appraisalWorkflowId");
    if (appraisal_workflow_id) { 
    if(!cJSON_IsString(appraisal_workflow_id) && !cJSON_IsNull(appraisal_workflow_id))
    {
    goto end; //String
    }
    }

    // appraisal_stage_update_dto->stage_order
    cJSON *stage_order = cJSON_GetObjectItemCaseSensitive(appraisal_stage_update_dtoJSON, "stageOrder");
    if (stage_order) { 
    if(!cJSON_IsNumber(stage_order))
    {
    goto end; //Numeric
    }
    }


    appraisal_stage_update_dto_local_var = appraisal_stage_update_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        appraisal_workflow_id && !cJSON_IsNull(appraisal_workflow_id) ? strdup(appraisal_workflow_id->valuestring) : NULL,
        stage_order ? stage_order->valuedouble : 0
        );

    return appraisal_stage_update_dto_local_var;
end:
    return NULL;

}
