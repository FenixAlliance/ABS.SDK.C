#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "project_hours_approval_approver_update_dto.h"



project_hours_approval_approver_update_dto_t *project_hours_approval_approver_update_dto_create(
    char *approver_contact_id
    ) {
    project_hours_approval_approver_update_dto_t *project_hours_approval_approver_update_dto_local_var = malloc(sizeof(project_hours_approval_approver_update_dto_t));
    if (!project_hours_approval_approver_update_dto_local_var) {
        return NULL;
    }
    project_hours_approval_approver_update_dto_local_var->approver_contact_id = approver_contact_id;

    return project_hours_approval_approver_update_dto_local_var;
}


void project_hours_approval_approver_update_dto_free(project_hours_approval_approver_update_dto_t *project_hours_approval_approver_update_dto) {
    if(NULL == project_hours_approval_approver_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (project_hours_approval_approver_update_dto->approver_contact_id) {
        free(project_hours_approval_approver_update_dto->approver_contact_id);
        project_hours_approval_approver_update_dto->approver_contact_id = NULL;
    }
    free(project_hours_approval_approver_update_dto);
}

cJSON *project_hours_approval_approver_update_dto_convertToJSON(project_hours_approval_approver_update_dto_t *project_hours_approval_approver_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // project_hours_approval_approver_update_dto->approver_contact_id
    if(project_hours_approval_approver_update_dto->approver_contact_id) {
    if(cJSON_AddStringToObject(item, "approverContactID", project_hours_approval_approver_update_dto->approver_contact_id) == NULL) {
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

project_hours_approval_approver_update_dto_t *project_hours_approval_approver_update_dto_parseFromJSON(cJSON *project_hours_approval_approver_update_dtoJSON){

    project_hours_approval_approver_update_dto_t *project_hours_approval_approver_update_dto_local_var = NULL;

    // project_hours_approval_approver_update_dto->approver_contact_id
    cJSON *approver_contact_id = cJSON_GetObjectItemCaseSensitive(project_hours_approval_approver_update_dtoJSON, "approverContactID");
    if (approver_contact_id) { 
    if(!cJSON_IsString(approver_contact_id) && !cJSON_IsNull(approver_contact_id))
    {
    goto end; //String
    }
    }


    project_hours_approval_approver_update_dto_local_var = project_hours_approval_approver_update_dto_create (
        approver_contact_id && !cJSON_IsNull(approver_contact_id) ? strdup(approver_contact_id->valuestring) : NULL
        );

    return project_hours_approval_approver_update_dto_local_var;
end:
    return NULL;

}
