#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "appraisal_stage_dto.h"



appraisal_stage_dto_t *appraisal_stage_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *tenant_id,
    char *appraisal_workflow_id,
    int stage_order
    ) {
    appraisal_stage_dto_t *appraisal_stage_dto_local_var = malloc(sizeof(appraisal_stage_dto_t));
    if (!appraisal_stage_dto_local_var) {
        return NULL;
    }
    appraisal_stage_dto_local_var->id = id;
    appraisal_stage_dto_local_var->timestamp = timestamp;
    appraisal_stage_dto_local_var->name = name;
    appraisal_stage_dto_local_var->description = description;
    appraisal_stage_dto_local_var->tenant_id = tenant_id;
    appraisal_stage_dto_local_var->appraisal_workflow_id = appraisal_workflow_id;
    appraisal_stage_dto_local_var->stage_order = stage_order;

    return appraisal_stage_dto_local_var;
}


void appraisal_stage_dto_free(appraisal_stage_dto_t *appraisal_stage_dto) {
    if(NULL == appraisal_stage_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (appraisal_stage_dto->id) {
        free(appraisal_stage_dto->id);
        appraisal_stage_dto->id = NULL;
    }
    if (appraisal_stage_dto->timestamp) {
        free(appraisal_stage_dto->timestamp);
        appraisal_stage_dto->timestamp = NULL;
    }
    if (appraisal_stage_dto->name) {
        free(appraisal_stage_dto->name);
        appraisal_stage_dto->name = NULL;
    }
    if (appraisal_stage_dto->description) {
        free(appraisal_stage_dto->description);
        appraisal_stage_dto->description = NULL;
    }
    if (appraisal_stage_dto->tenant_id) {
        free(appraisal_stage_dto->tenant_id);
        appraisal_stage_dto->tenant_id = NULL;
    }
    if (appraisal_stage_dto->appraisal_workflow_id) {
        free(appraisal_stage_dto->appraisal_workflow_id);
        appraisal_stage_dto->appraisal_workflow_id = NULL;
    }
    free(appraisal_stage_dto);
}

cJSON *appraisal_stage_dto_convertToJSON(appraisal_stage_dto_t *appraisal_stage_dto) {
    cJSON *item = cJSON_CreateObject();

    // appraisal_stage_dto->id
    if(appraisal_stage_dto->id) {
    if(cJSON_AddStringToObject(item, "id", appraisal_stage_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // appraisal_stage_dto->timestamp
    if(appraisal_stage_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", appraisal_stage_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // appraisal_stage_dto->name
    if(appraisal_stage_dto->name) {
    if(cJSON_AddStringToObject(item, "name", appraisal_stage_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // appraisal_stage_dto->description
    if(appraisal_stage_dto->description) {
    if(cJSON_AddStringToObject(item, "description", appraisal_stage_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // appraisal_stage_dto->tenant_id
    if(appraisal_stage_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", appraisal_stage_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // appraisal_stage_dto->appraisal_workflow_id
    if(appraisal_stage_dto->appraisal_workflow_id) {
    if(cJSON_AddStringToObject(item, "appraisalWorkflowId", appraisal_stage_dto->appraisal_workflow_id) == NULL) {
    goto fail; //String
    }
    }


    // appraisal_stage_dto->stage_order
    if(appraisal_stage_dto->stage_order) {
    if(cJSON_AddNumberToObject(item, "stageOrder", appraisal_stage_dto->stage_order) == NULL) {
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

appraisal_stage_dto_t *appraisal_stage_dto_parseFromJSON(cJSON *appraisal_stage_dtoJSON){

    appraisal_stage_dto_t *appraisal_stage_dto_local_var = NULL;

    // appraisal_stage_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(appraisal_stage_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // appraisal_stage_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(appraisal_stage_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // appraisal_stage_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(appraisal_stage_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // appraisal_stage_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(appraisal_stage_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // appraisal_stage_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(appraisal_stage_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // appraisal_stage_dto->appraisal_workflow_id
    cJSON *appraisal_workflow_id = cJSON_GetObjectItemCaseSensitive(appraisal_stage_dtoJSON, "appraisalWorkflowId");
    if (appraisal_workflow_id) { 
    if(!cJSON_IsString(appraisal_workflow_id) && !cJSON_IsNull(appraisal_workflow_id))
    {
    goto end; //String
    }
    }

    // appraisal_stage_dto->stage_order
    cJSON *stage_order = cJSON_GetObjectItemCaseSensitive(appraisal_stage_dtoJSON, "stageOrder");
    if (stage_order) { 
    if(!cJSON_IsNumber(stage_order))
    {
    goto end; //Numeric
    }
    }


    appraisal_stage_dto_local_var = appraisal_stage_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        appraisal_workflow_id && !cJSON_IsNull(appraisal_workflow_id) ? strdup(appraisal_workflow_id->valuestring) : NULL,
        stage_order ? stage_order->valuedouble : 0
        );

    return appraisal_stage_dto_local_var;
end:
    return NULL;

}
