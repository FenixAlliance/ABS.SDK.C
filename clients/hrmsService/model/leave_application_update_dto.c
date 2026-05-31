#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "leave_application_update_dto.h"



leave_application_update_dto_t *leave_application_update_dto_create(
    char *justification,
    int approved,
    int on_review,
    char *leave_type_id,
    char *employee_profile_id
    ) {
    leave_application_update_dto_t *leave_application_update_dto_local_var = malloc(sizeof(leave_application_update_dto_t));
    if (!leave_application_update_dto_local_var) {
        return NULL;
    }
    leave_application_update_dto_local_var->justification = justification;
    leave_application_update_dto_local_var->approved = approved;
    leave_application_update_dto_local_var->on_review = on_review;
    leave_application_update_dto_local_var->leave_type_id = leave_type_id;
    leave_application_update_dto_local_var->employee_profile_id = employee_profile_id;

    return leave_application_update_dto_local_var;
}


void leave_application_update_dto_free(leave_application_update_dto_t *leave_application_update_dto) {
    if(NULL == leave_application_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (leave_application_update_dto->justification) {
        free(leave_application_update_dto->justification);
        leave_application_update_dto->justification = NULL;
    }
    if (leave_application_update_dto->leave_type_id) {
        free(leave_application_update_dto->leave_type_id);
        leave_application_update_dto->leave_type_id = NULL;
    }
    if (leave_application_update_dto->employee_profile_id) {
        free(leave_application_update_dto->employee_profile_id);
        leave_application_update_dto->employee_profile_id = NULL;
    }
    free(leave_application_update_dto);
}

cJSON *leave_application_update_dto_convertToJSON(leave_application_update_dto_t *leave_application_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // leave_application_update_dto->justification
    if(leave_application_update_dto->justification) {
    if(cJSON_AddStringToObject(item, "justification", leave_application_update_dto->justification) == NULL) {
    goto fail; //String
    }
    }


    // leave_application_update_dto->approved
    if(leave_application_update_dto->approved) {
    if(cJSON_AddBoolToObject(item, "approved", leave_application_update_dto->approved) == NULL) {
    goto fail; //Bool
    }
    }


    // leave_application_update_dto->on_review
    if(leave_application_update_dto->on_review) {
    if(cJSON_AddBoolToObject(item, "onReview", leave_application_update_dto->on_review) == NULL) {
    goto fail; //Bool
    }
    }


    // leave_application_update_dto->leave_type_id
    if(leave_application_update_dto->leave_type_id) {
    if(cJSON_AddStringToObject(item, "leaveTypeId", leave_application_update_dto->leave_type_id) == NULL) {
    goto fail; //String
    }
    }


    // leave_application_update_dto->employee_profile_id
    if(leave_application_update_dto->employee_profile_id) {
    if(cJSON_AddStringToObject(item, "employeeProfileId", leave_application_update_dto->employee_profile_id) == NULL) {
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

leave_application_update_dto_t *leave_application_update_dto_parseFromJSON(cJSON *leave_application_update_dtoJSON){

    leave_application_update_dto_t *leave_application_update_dto_local_var = NULL;

    // leave_application_update_dto->justification
    cJSON *justification = cJSON_GetObjectItemCaseSensitive(leave_application_update_dtoJSON, "justification");
    if (justification) { 
    if(!cJSON_IsString(justification) && !cJSON_IsNull(justification))
    {
    goto end; //String
    }
    }

    // leave_application_update_dto->approved
    cJSON *approved = cJSON_GetObjectItemCaseSensitive(leave_application_update_dtoJSON, "approved");
    if (approved) { 
    if(!cJSON_IsBool(approved))
    {
    goto end; //Bool
    }
    }

    // leave_application_update_dto->on_review
    cJSON *on_review = cJSON_GetObjectItemCaseSensitive(leave_application_update_dtoJSON, "onReview");
    if (on_review) { 
    if(!cJSON_IsBool(on_review))
    {
    goto end; //Bool
    }
    }

    // leave_application_update_dto->leave_type_id
    cJSON *leave_type_id = cJSON_GetObjectItemCaseSensitive(leave_application_update_dtoJSON, "leaveTypeId");
    if (leave_type_id) { 
    if(!cJSON_IsString(leave_type_id) && !cJSON_IsNull(leave_type_id))
    {
    goto end; //String
    }
    }

    // leave_application_update_dto->employee_profile_id
    cJSON *employee_profile_id = cJSON_GetObjectItemCaseSensitive(leave_application_update_dtoJSON, "employeeProfileId");
    if (employee_profile_id) { 
    if(!cJSON_IsString(employee_profile_id) && !cJSON_IsNull(employee_profile_id))
    {
    goto end; //String
    }
    }


    leave_application_update_dto_local_var = leave_application_update_dto_create (
        justification && !cJSON_IsNull(justification) ? strdup(justification->valuestring) : NULL,
        approved ? approved->valueint : 0,
        on_review ? on_review->valueint : 0,
        leave_type_id && !cJSON_IsNull(leave_type_id) ? strdup(leave_type_id->valuestring) : NULL,
        employee_profile_id && !cJSON_IsNull(employee_profile_id) ? strdup(employee_profile_id->valuestring) : NULL
        );

    return leave_application_update_dto_local_var;
end:
    return NULL;

}
