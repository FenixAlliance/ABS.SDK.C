#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "appraisal_workflow_dto.h"



appraisal_workflow_dto_t *appraisal_workflow_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *tenant_id
    ) {
    appraisal_workflow_dto_t *appraisal_workflow_dto_local_var = malloc(sizeof(appraisal_workflow_dto_t));
    if (!appraisal_workflow_dto_local_var) {
        return NULL;
    }
    appraisal_workflow_dto_local_var->id = id;
    appraisal_workflow_dto_local_var->timestamp = timestamp;
    appraisal_workflow_dto_local_var->name = name;
    appraisal_workflow_dto_local_var->description = description;
    appraisal_workflow_dto_local_var->tenant_id = tenant_id;

    return appraisal_workflow_dto_local_var;
}


void appraisal_workflow_dto_free(appraisal_workflow_dto_t *appraisal_workflow_dto) {
    if(NULL == appraisal_workflow_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (appraisal_workflow_dto->id) {
        free(appraisal_workflow_dto->id);
        appraisal_workflow_dto->id = NULL;
    }
    if (appraisal_workflow_dto->timestamp) {
        free(appraisal_workflow_dto->timestamp);
        appraisal_workflow_dto->timestamp = NULL;
    }
    if (appraisal_workflow_dto->name) {
        free(appraisal_workflow_dto->name);
        appraisal_workflow_dto->name = NULL;
    }
    if (appraisal_workflow_dto->description) {
        free(appraisal_workflow_dto->description);
        appraisal_workflow_dto->description = NULL;
    }
    if (appraisal_workflow_dto->tenant_id) {
        free(appraisal_workflow_dto->tenant_id);
        appraisal_workflow_dto->tenant_id = NULL;
    }
    free(appraisal_workflow_dto);
}

cJSON *appraisal_workflow_dto_convertToJSON(appraisal_workflow_dto_t *appraisal_workflow_dto) {
    cJSON *item = cJSON_CreateObject();

    // appraisal_workflow_dto->id
    if(appraisal_workflow_dto->id) {
    if(cJSON_AddStringToObject(item, "id", appraisal_workflow_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // appraisal_workflow_dto->timestamp
    if(appraisal_workflow_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", appraisal_workflow_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // appraisal_workflow_dto->name
    if(appraisal_workflow_dto->name) {
    if(cJSON_AddStringToObject(item, "name", appraisal_workflow_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // appraisal_workflow_dto->description
    if(appraisal_workflow_dto->description) {
    if(cJSON_AddStringToObject(item, "description", appraisal_workflow_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // appraisal_workflow_dto->tenant_id
    if(appraisal_workflow_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", appraisal_workflow_dto->tenant_id) == NULL) {
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

appraisal_workflow_dto_t *appraisal_workflow_dto_parseFromJSON(cJSON *appraisal_workflow_dtoJSON){

    appraisal_workflow_dto_t *appraisal_workflow_dto_local_var = NULL;

    // appraisal_workflow_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(appraisal_workflow_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // appraisal_workflow_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(appraisal_workflow_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // appraisal_workflow_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(appraisal_workflow_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // appraisal_workflow_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(appraisal_workflow_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // appraisal_workflow_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(appraisal_workflow_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }


    appraisal_workflow_dto_local_var = appraisal_workflow_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL
        );

    return appraisal_workflow_dto_local_var;
end:
    return NULL;

}
