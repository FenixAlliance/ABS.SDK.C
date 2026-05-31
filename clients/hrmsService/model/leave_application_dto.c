#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "leave_application_dto.h"



leave_application_dto_t *leave_application_dto_create(
    char *id,
    char *timestamp,
    char *justification,
    int approved,
    int on_review,
    char *leave_type_id,
    char *employee_profile_id,
    char *tenant_id,
    char *enrollment_id
    ) {
    leave_application_dto_t *leave_application_dto_local_var = malloc(sizeof(leave_application_dto_t));
    if (!leave_application_dto_local_var) {
        return NULL;
    }
    leave_application_dto_local_var->id = id;
    leave_application_dto_local_var->timestamp = timestamp;
    leave_application_dto_local_var->justification = justification;
    leave_application_dto_local_var->approved = approved;
    leave_application_dto_local_var->on_review = on_review;
    leave_application_dto_local_var->leave_type_id = leave_type_id;
    leave_application_dto_local_var->employee_profile_id = employee_profile_id;
    leave_application_dto_local_var->tenant_id = tenant_id;
    leave_application_dto_local_var->enrollment_id = enrollment_id;

    return leave_application_dto_local_var;
}


void leave_application_dto_free(leave_application_dto_t *leave_application_dto) {
    if(NULL == leave_application_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (leave_application_dto->id) {
        free(leave_application_dto->id);
        leave_application_dto->id = NULL;
    }
    if (leave_application_dto->timestamp) {
        free(leave_application_dto->timestamp);
        leave_application_dto->timestamp = NULL;
    }
    if (leave_application_dto->justification) {
        free(leave_application_dto->justification);
        leave_application_dto->justification = NULL;
    }
    if (leave_application_dto->leave_type_id) {
        free(leave_application_dto->leave_type_id);
        leave_application_dto->leave_type_id = NULL;
    }
    if (leave_application_dto->employee_profile_id) {
        free(leave_application_dto->employee_profile_id);
        leave_application_dto->employee_profile_id = NULL;
    }
    if (leave_application_dto->tenant_id) {
        free(leave_application_dto->tenant_id);
        leave_application_dto->tenant_id = NULL;
    }
    if (leave_application_dto->enrollment_id) {
        free(leave_application_dto->enrollment_id);
        leave_application_dto->enrollment_id = NULL;
    }
    free(leave_application_dto);
}

cJSON *leave_application_dto_convertToJSON(leave_application_dto_t *leave_application_dto) {
    cJSON *item = cJSON_CreateObject();

    // leave_application_dto->id
    if(leave_application_dto->id) {
    if(cJSON_AddStringToObject(item, "id", leave_application_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // leave_application_dto->timestamp
    if(leave_application_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", leave_application_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // leave_application_dto->justification
    if(leave_application_dto->justification) {
    if(cJSON_AddStringToObject(item, "justification", leave_application_dto->justification) == NULL) {
    goto fail; //String
    }
    }


    // leave_application_dto->approved
    if(leave_application_dto->approved) {
    if(cJSON_AddBoolToObject(item, "approved", leave_application_dto->approved) == NULL) {
    goto fail; //Bool
    }
    }


    // leave_application_dto->on_review
    if(leave_application_dto->on_review) {
    if(cJSON_AddBoolToObject(item, "onReview", leave_application_dto->on_review) == NULL) {
    goto fail; //Bool
    }
    }


    // leave_application_dto->leave_type_id
    if(leave_application_dto->leave_type_id) {
    if(cJSON_AddStringToObject(item, "leaveTypeId", leave_application_dto->leave_type_id) == NULL) {
    goto fail; //String
    }
    }


    // leave_application_dto->employee_profile_id
    if(leave_application_dto->employee_profile_id) {
    if(cJSON_AddStringToObject(item, "employeeProfileId", leave_application_dto->employee_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // leave_application_dto->tenant_id
    if(leave_application_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", leave_application_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // leave_application_dto->enrollment_id
    if(leave_application_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", leave_application_dto->enrollment_id) == NULL) {
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

leave_application_dto_t *leave_application_dto_parseFromJSON(cJSON *leave_application_dtoJSON){

    leave_application_dto_t *leave_application_dto_local_var = NULL;

    // leave_application_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(leave_application_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // leave_application_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(leave_application_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // leave_application_dto->justification
    cJSON *justification = cJSON_GetObjectItemCaseSensitive(leave_application_dtoJSON, "justification");
    if (justification) { 
    if(!cJSON_IsString(justification) && !cJSON_IsNull(justification))
    {
    goto end; //String
    }
    }

    // leave_application_dto->approved
    cJSON *approved = cJSON_GetObjectItemCaseSensitive(leave_application_dtoJSON, "approved");
    if (approved) { 
    if(!cJSON_IsBool(approved))
    {
    goto end; //Bool
    }
    }

    // leave_application_dto->on_review
    cJSON *on_review = cJSON_GetObjectItemCaseSensitive(leave_application_dtoJSON, "onReview");
    if (on_review) { 
    if(!cJSON_IsBool(on_review))
    {
    goto end; //Bool
    }
    }

    // leave_application_dto->leave_type_id
    cJSON *leave_type_id = cJSON_GetObjectItemCaseSensitive(leave_application_dtoJSON, "leaveTypeId");
    if (leave_type_id) { 
    if(!cJSON_IsString(leave_type_id) && !cJSON_IsNull(leave_type_id))
    {
    goto end; //String
    }
    }

    // leave_application_dto->employee_profile_id
    cJSON *employee_profile_id = cJSON_GetObjectItemCaseSensitive(leave_application_dtoJSON, "employeeProfileId");
    if (employee_profile_id) { 
    if(!cJSON_IsString(employee_profile_id) && !cJSON_IsNull(employee_profile_id))
    {
    goto end; //String
    }
    }

    // leave_application_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(leave_application_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // leave_application_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(leave_application_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    leave_application_dto_local_var = leave_application_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        justification && !cJSON_IsNull(justification) ? strdup(justification->valuestring) : NULL,
        approved ? approved->valueint : 0,
        on_review ? on_review->valueint : 0,
        leave_type_id && !cJSON_IsNull(leave_type_id) ? strdup(leave_type_id->valuestring) : NULL,
        employee_profile_id && !cJSON_IsNull(employee_profile_id) ? strdup(employee_profile_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return leave_application_dto_local_var;
end:
    return NULL;

}
