#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "employee_appraisal_session_dto.h"



employee_appraisal_session_dto_t *employee_appraisal_session_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *enrollment_id,
    char *employee_profile_id,
    char *appraisal_workflow_id,
    char *appraisal_stage_id
    ) {
    employee_appraisal_session_dto_t *employee_appraisal_session_dto_local_var = malloc(sizeof(employee_appraisal_session_dto_t));
    if (!employee_appraisal_session_dto_local_var) {
        return NULL;
    }
    employee_appraisal_session_dto_local_var->id = id;
    employee_appraisal_session_dto_local_var->timestamp = timestamp;
    employee_appraisal_session_dto_local_var->tenant_id = tenant_id;
    employee_appraisal_session_dto_local_var->enrollment_id = enrollment_id;
    employee_appraisal_session_dto_local_var->employee_profile_id = employee_profile_id;
    employee_appraisal_session_dto_local_var->appraisal_workflow_id = appraisal_workflow_id;
    employee_appraisal_session_dto_local_var->appraisal_stage_id = appraisal_stage_id;

    return employee_appraisal_session_dto_local_var;
}


void employee_appraisal_session_dto_free(employee_appraisal_session_dto_t *employee_appraisal_session_dto) {
    if(NULL == employee_appraisal_session_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (employee_appraisal_session_dto->id) {
        free(employee_appraisal_session_dto->id);
        employee_appraisal_session_dto->id = NULL;
    }
    if (employee_appraisal_session_dto->timestamp) {
        free(employee_appraisal_session_dto->timestamp);
        employee_appraisal_session_dto->timestamp = NULL;
    }
    if (employee_appraisal_session_dto->tenant_id) {
        free(employee_appraisal_session_dto->tenant_id);
        employee_appraisal_session_dto->tenant_id = NULL;
    }
    if (employee_appraisal_session_dto->enrollment_id) {
        free(employee_appraisal_session_dto->enrollment_id);
        employee_appraisal_session_dto->enrollment_id = NULL;
    }
    if (employee_appraisal_session_dto->employee_profile_id) {
        free(employee_appraisal_session_dto->employee_profile_id);
        employee_appraisal_session_dto->employee_profile_id = NULL;
    }
    if (employee_appraisal_session_dto->appraisal_workflow_id) {
        free(employee_appraisal_session_dto->appraisal_workflow_id);
        employee_appraisal_session_dto->appraisal_workflow_id = NULL;
    }
    if (employee_appraisal_session_dto->appraisal_stage_id) {
        free(employee_appraisal_session_dto->appraisal_stage_id);
        employee_appraisal_session_dto->appraisal_stage_id = NULL;
    }
    free(employee_appraisal_session_dto);
}

cJSON *employee_appraisal_session_dto_convertToJSON(employee_appraisal_session_dto_t *employee_appraisal_session_dto) {
    cJSON *item = cJSON_CreateObject();

    // employee_appraisal_session_dto->id
    if(employee_appraisal_session_dto->id) {
    if(cJSON_AddStringToObject(item, "id", employee_appraisal_session_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // employee_appraisal_session_dto->timestamp
    if(employee_appraisal_session_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", employee_appraisal_session_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // employee_appraisal_session_dto->tenant_id
    if(employee_appraisal_session_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", employee_appraisal_session_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // employee_appraisal_session_dto->enrollment_id
    if(employee_appraisal_session_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", employee_appraisal_session_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // employee_appraisal_session_dto->employee_profile_id
    if(employee_appraisal_session_dto->employee_profile_id) {
    if(cJSON_AddStringToObject(item, "employeeProfileId", employee_appraisal_session_dto->employee_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // employee_appraisal_session_dto->appraisal_workflow_id
    if(employee_appraisal_session_dto->appraisal_workflow_id) {
    if(cJSON_AddStringToObject(item, "appraisalWorkflowId", employee_appraisal_session_dto->appraisal_workflow_id) == NULL) {
    goto fail; //String
    }
    }


    // employee_appraisal_session_dto->appraisal_stage_id
    if(employee_appraisal_session_dto->appraisal_stage_id) {
    if(cJSON_AddStringToObject(item, "appraisalStageId", employee_appraisal_session_dto->appraisal_stage_id) == NULL) {
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

employee_appraisal_session_dto_t *employee_appraisal_session_dto_parseFromJSON(cJSON *employee_appraisal_session_dtoJSON){

    employee_appraisal_session_dto_t *employee_appraisal_session_dto_local_var = NULL;

    // employee_appraisal_session_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(employee_appraisal_session_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // employee_appraisal_session_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(employee_appraisal_session_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // employee_appraisal_session_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(employee_appraisal_session_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // employee_appraisal_session_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(employee_appraisal_session_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // employee_appraisal_session_dto->employee_profile_id
    cJSON *employee_profile_id = cJSON_GetObjectItemCaseSensitive(employee_appraisal_session_dtoJSON, "employeeProfileId");
    if (employee_profile_id) { 
    if(!cJSON_IsString(employee_profile_id) && !cJSON_IsNull(employee_profile_id))
    {
    goto end; //String
    }
    }

    // employee_appraisal_session_dto->appraisal_workflow_id
    cJSON *appraisal_workflow_id = cJSON_GetObjectItemCaseSensitive(employee_appraisal_session_dtoJSON, "appraisalWorkflowId");
    if (appraisal_workflow_id) { 
    if(!cJSON_IsString(appraisal_workflow_id) && !cJSON_IsNull(appraisal_workflow_id))
    {
    goto end; //String
    }
    }

    // employee_appraisal_session_dto->appraisal_stage_id
    cJSON *appraisal_stage_id = cJSON_GetObjectItemCaseSensitive(employee_appraisal_session_dtoJSON, "appraisalStageId");
    if (appraisal_stage_id) { 
    if(!cJSON_IsString(appraisal_stage_id) && !cJSON_IsNull(appraisal_stage_id))
    {
    goto end; //String
    }
    }


    employee_appraisal_session_dto_local_var = employee_appraisal_session_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        employee_profile_id && !cJSON_IsNull(employee_profile_id) ? strdup(employee_profile_id->valuestring) : NULL,
        appraisal_workflow_id && !cJSON_IsNull(appraisal_workflow_id) ? strdup(appraisal_workflow_id->valuestring) : NULL,
        appraisal_stage_id && !cJSON_IsNull(appraisal_stage_id) ? strdup(appraisal_stage_id->valuestring) : NULL
        );

    return employee_appraisal_session_dto_local_var;
end:
    return NULL;

}
