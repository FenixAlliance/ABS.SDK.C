#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "employee_appraisal_session_update_dto.h"



employee_appraisal_session_update_dto_t *employee_appraisal_session_update_dto_create(
    char *employee_profile_id,
    char *appraisal_workflow_id,
    char *appraisal_stage_id
    ) {
    employee_appraisal_session_update_dto_t *employee_appraisal_session_update_dto_local_var = malloc(sizeof(employee_appraisal_session_update_dto_t));
    if (!employee_appraisal_session_update_dto_local_var) {
        return NULL;
    }
    employee_appraisal_session_update_dto_local_var->employee_profile_id = employee_profile_id;
    employee_appraisal_session_update_dto_local_var->appraisal_workflow_id = appraisal_workflow_id;
    employee_appraisal_session_update_dto_local_var->appraisal_stage_id = appraisal_stage_id;

    return employee_appraisal_session_update_dto_local_var;
}


void employee_appraisal_session_update_dto_free(employee_appraisal_session_update_dto_t *employee_appraisal_session_update_dto) {
    if(NULL == employee_appraisal_session_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (employee_appraisal_session_update_dto->employee_profile_id) {
        free(employee_appraisal_session_update_dto->employee_profile_id);
        employee_appraisal_session_update_dto->employee_profile_id = NULL;
    }
    if (employee_appraisal_session_update_dto->appraisal_workflow_id) {
        free(employee_appraisal_session_update_dto->appraisal_workflow_id);
        employee_appraisal_session_update_dto->appraisal_workflow_id = NULL;
    }
    if (employee_appraisal_session_update_dto->appraisal_stage_id) {
        free(employee_appraisal_session_update_dto->appraisal_stage_id);
        employee_appraisal_session_update_dto->appraisal_stage_id = NULL;
    }
    free(employee_appraisal_session_update_dto);
}

cJSON *employee_appraisal_session_update_dto_convertToJSON(employee_appraisal_session_update_dto_t *employee_appraisal_session_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // employee_appraisal_session_update_dto->employee_profile_id
    if(employee_appraisal_session_update_dto->employee_profile_id) {
    if(cJSON_AddStringToObject(item, "employeeProfileId", employee_appraisal_session_update_dto->employee_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // employee_appraisal_session_update_dto->appraisal_workflow_id
    if(employee_appraisal_session_update_dto->appraisal_workflow_id) {
    if(cJSON_AddStringToObject(item, "appraisalWorkflowId", employee_appraisal_session_update_dto->appraisal_workflow_id) == NULL) {
    goto fail; //String
    }
    }


    // employee_appraisal_session_update_dto->appraisal_stage_id
    if(employee_appraisal_session_update_dto->appraisal_stage_id) {
    if(cJSON_AddStringToObject(item, "appraisalStageId", employee_appraisal_session_update_dto->appraisal_stage_id) == NULL) {
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

employee_appraisal_session_update_dto_t *employee_appraisal_session_update_dto_parseFromJSON(cJSON *employee_appraisal_session_update_dtoJSON){

    employee_appraisal_session_update_dto_t *employee_appraisal_session_update_dto_local_var = NULL;

    // employee_appraisal_session_update_dto->employee_profile_id
    cJSON *employee_profile_id = cJSON_GetObjectItemCaseSensitive(employee_appraisal_session_update_dtoJSON, "employeeProfileId");
    if (employee_profile_id) { 
    if(!cJSON_IsString(employee_profile_id) && !cJSON_IsNull(employee_profile_id))
    {
    goto end; //String
    }
    }

    // employee_appraisal_session_update_dto->appraisal_workflow_id
    cJSON *appraisal_workflow_id = cJSON_GetObjectItemCaseSensitive(employee_appraisal_session_update_dtoJSON, "appraisalWorkflowId");
    if (appraisal_workflow_id) { 
    if(!cJSON_IsString(appraisal_workflow_id) && !cJSON_IsNull(appraisal_workflow_id))
    {
    goto end; //String
    }
    }

    // employee_appraisal_session_update_dto->appraisal_stage_id
    cJSON *appraisal_stage_id = cJSON_GetObjectItemCaseSensitive(employee_appraisal_session_update_dtoJSON, "appraisalStageId");
    if (appraisal_stage_id) { 
    if(!cJSON_IsString(appraisal_stage_id) && !cJSON_IsNull(appraisal_stage_id))
    {
    goto end; //String
    }
    }


    employee_appraisal_session_update_dto_local_var = employee_appraisal_session_update_dto_create (
        employee_profile_id && !cJSON_IsNull(employee_profile_id) ? strdup(employee_profile_id->valuestring) : NULL,
        appraisal_workflow_id && !cJSON_IsNull(appraisal_workflow_id) ? strdup(appraisal_workflow_id->valuestring) : NULL,
        appraisal_stage_id && !cJSON_IsNull(appraisal_stage_id) ? strdup(appraisal_stage_id->valuestring) : NULL
        );

    return employee_appraisal_session_update_dto_local_var;
end:
    return NULL;

}
