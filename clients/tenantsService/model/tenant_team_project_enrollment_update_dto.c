#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tenant_team_project_enrollment_update_dto.h"



tenant_team_project_enrollment_update_dto_t *tenant_team_project_enrollment_update_dto_create(
    char *business_id,
    char *business_profile_record_id,
    char *business_team_id,
    char *project_id
    ) {
    tenant_team_project_enrollment_update_dto_t *tenant_team_project_enrollment_update_dto_local_var = malloc(sizeof(tenant_team_project_enrollment_update_dto_t));
    if (!tenant_team_project_enrollment_update_dto_local_var) {
        return NULL;
    }
    tenant_team_project_enrollment_update_dto_local_var->business_id = business_id;
    tenant_team_project_enrollment_update_dto_local_var->business_profile_record_id = business_profile_record_id;
    tenant_team_project_enrollment_update_dto_local_var->business_team_id = business_team_id;
    tenant_team_project_enrollment_update_dto_local_var->project_id = project_id;

    return tenant_team_project_enrollment_update_dto_local_var;
}


void tenant_team_project_enrollment_update_dto_free(tenant_team_project_enrollment_update_dto_t *tenant_team_project_enrollment_update_dto) {
    if(NULL == tenant_team_project_enrollment_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (tenant_team_project_enrollment_update_dto->business_id) {
        free(tenant_team_project_enrollment_update_dto->business_id);
        tenant_team_project_enrollment_update_dto->business_id = NULL;
    }
    if (tenant_team_project_enrollment_update_dto->business_profile_record_id) {
        free(tenant_team_project_enrollment_update_dto->business_profile_record_id);
        tenant_team_project_enrollment_update_dto->business_profile_record_id = NULL;
    }
    if (tenant_team_project_enrollment_update_dto->business_team_id) {
        free(tenant_team_project_enrollment_update_dto->business_team_id);
        tenant_team_project_enrollment_update_dto->business_team_id = NULL;
    }
    if (tenant_team_project_enrollment_update_dto->project_id) {
        free(tenant_team_project_enrollment_update_dto->project_id);
        tenant_team_project_enrollment_update_dto->project_id = NULL;
    }
    free(tenant_team_project_enrollment_update_dto);
}

cJSON *tenant_team_project_enrollment_update_dto_convertToJSON(tenant_team_project_enrollment_update_dto_t *tenant_team_project_enrollment_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // tenant_team_project_enrollment_update_dto->business_id
    if(tenant_team_project_enrollment_update_dto->business_id) {
    if(cJSON_AddStringToObject(item, "businessID", tenant_team_project_enrollment_update_dto->business_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_team_project_enrollment_update_dto->business_profile_record_id
    if(tenant_team_project_enrollment_update_dto->business_profile_record_id) {
    if(cJSON_AddStringToObject(item, "businessProfileRecordID", tenant_team_project_enrollment_update_dto->business_profile_record_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_team_project_enrollment_update_dto->business_team_id
    if(tenant_team_project_enrollment_update_dto->business_team_id) {
    if(cJSON_AddStringToObject(item, "businessTeamID", tenant_team_project_enrollment_update_dto->business_team_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_team_project_enrollment_update_dto->project_id
    if(tenant_team_project_enrollment_update_dto->project_id) {
    if(cJSON_AddStringToObject(item, "projectID", tenant_team_project_enrollment_update_dto->project_id) == NULL) {
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

tenant_team_project_enrollment_update_dto_t *tenant_team_project_enrollment_update_dto_parseFromJSON(cJSON *tenant_team_project_enrollment_update_dtoJSON){

    tenant_team_project_enrollment_update_dto_t *tenant_team_project_enrollment_update_dto_local_var = NULL;

    // tenant_team_project_enrollment_update_dto->business_id
    cJSON *business_id = cJSON_GetObjectItemCaseSensitive(tenant_team_project_enrollment_update_dtoJSON, "businessID");
    if (business_id) { 
    if(!cJSON_IsString(business_id) && !cJSON_IsNull(business_id))
    {
    goto end; //String
    }
    }

    // tenant_team_project_enrollment_update_dto->business_profile_record_id
    cJSON *business_profile_record_id = cJSON_GetObjectItemCaseSensitive(tenant_team_project_enrollment_update_dtoJSON, "businessProfileRecordID");
    if (business_profile_record_id) { 
    if(!cJSON_IsString(business_profile_record_id) && !cJSON_IsNull(business_profile_record_id))
    {
    goto end; //String
    }
    }

    // tenant_team_project_enrollment_update_dto->business_team_id
    cJSON *business_team_id = cJSON_GetObjectItemCaseSensitive(tenant_team_project_enrollment_update_dtoJSON, "businessTeamID");
    if (business_team_id) { 
    if(!cJSON_IsString(business_team_id) && !cJSON_IsNull(business_team_id))
    {
    goto end; //String
    }
    }

    // tenant_team_project_enrollment_update_dto->project_id
    cJSON *project_id = cJSON_GetObjectItemCaseSensitive(tenant_team_project_enrollment_update_dtoJSON, "projectID");
    if (project_id) { 
    if(!cJSON_IsString(project_id) && !cJSON_IsNull(project_id))
    {
    goto end; //String
    }
    }


    tenant_team_project_enrollment_update_dto_local_var = tenant_team_project_enrollment_update_dto_create (
        business_id && !cJSON_IsNull(business_id) ? strdup(business_id->valuestring) : NULL,
        business_profile_record_id && !cJSON_IsNull(business_profile_record_id) ? strdup(business_profile_record_id->valuestring) : NULL,
        business_team_id && !cJSON_IsNull(business_team_id) ? strdup(business_team_id->valuestring) : NULL,
        project_id && !cJSON_IsNull(project_id) ? strdup(project_id->valuestring) : NULL
        );

    return tenant_team_project_enrollment_update_dto_local_var;
end:
    return NULL;

}
