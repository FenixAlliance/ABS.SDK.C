#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "leave_application_create_dto.h"



leave_application_create_dto_t *leave_application_create_dto_create(
    char *id,
    char *timestamp,
    char *justification,
    int approved,
    int on_review,
    char *leave_type_id,
    char *employee_profile_id
    ) {
    leave_application_create_dto_t *leave_application_create_dto_local_var = malloc(sizeof(leave_application_create_dto_t));
    if (!leave_application_create_dto_local_var) {
        return NULL;
    }
    leave_application_create_dto_local_var->id = id;
    leave_application_create_dto_local_var->timestamp = timestamp;
    leave_application_create_dto_local_var->justification = justification;
    leave_application_create_dto_local_var->approved = approved;
    leave_application_create_dto_local_var->on_review = on_review;
    leave_application_create_dto_local_var->leave_type_id = leave_type_id;
    leave_application_create_dto_local_var->employee_profile_id = employee_profile_id;

    return leave_application_create_dto_local_var;
}


void leave_application_create_dto_free(leave_application_create_dto_t *leave_application_create_dto) {
    if(NULL == leave_application_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (leave_application_create_dto->id) {
        free(leave_application_create_dto->id);
        leave_application_create_dto->id = NULL;
    }
    if (leave_application_create_dto->timestamp) {
        free(leave_application_create_dto->timestamp);
        leave_application_create_dto->timestamp = NULL;
    }
    if (leave_application_create_dto->justification) {
        free(leave_application_create_dto->justification);
        leave_application_create_dto->justification = NULL;
    }
    if (leave_application_create_dto->leave_type_id) {
        free(leave_application_create_dto->leave_type_id);
        leave_application_create_dto->leave_type_id = NULL;
    }
    if (leave_application_create_dto->employee_profile_id) {
        free(leave_application_create_dto->employee_profile_id);
        leave_application_create_dto->employee_profile_id = NULL;
    }
    free(leave_application_create_dto);
}

cJSON *leave_application_create_dto_convertToJSON(leave_application_create_dto_t *leave_application_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // leave_application_create_dto->id
    if(leave_application_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", leave_application_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // leave_application_create_dto->timestamp
    if(leave_application_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", leave_application_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // leave_application_create_dto->justification
    if(leave_application_create_dto->justification) {
    if(cJSON_AddStringToObject(item, "justification", leave_application_create_dto->justification) == NULL) {
    goto fail; //String
    }
    }


    // leave_application_create_dto->approved
    if(leave_application_create_dto->approved) {
    if(cJSON_AddBoolToObject(item, "approved", leave_application_create_dto->approved) == NULL) {
    goto fail; //Bool
    }
    }


    // leave_application_create_dto->on_review
    if(leave_application_create_dto->on_review) {
    if(cJSON_AddBoolToObject(item, "onReview", leave_application_create_dto->on_review) == NULL) {
    goto fail; //Bool
    }
    }


    // leave_application_create_dto->leave_type_id
    if (!leave_application_create_dto->leave_type_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "leaveTypeId", leave_application_create_dto->leave_type_id) == NULL) {
    goto fail; //String
    }


    // leave_application_create_dto->employee_profile_id
    if (!leave_application_create_dto->employee_profile_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "employeeProfileId", leave_application_create_dto->employee_profile_id) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

leave_application_create_dto_t *leave_application_create_dto_parseFromJSON(cJSON *leave_application_create_dtoJSON){

    leave_application_create_dto_t *leave_application_create_dto_local_var = NULL;

    // leave_application_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(leave_application_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // leave_application_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(leave_application_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // leave_application_create_dto->justification
    cJSON *justification = cJSON_GetObjectItemCaseSensitive(leave_application_create_dtoJSON, "justification");
    if (justification) { 
    if(!cJSON_IsString(justification) && !cJSON_IsNull(justification))
    {
    goto end; //String
    }
    }

    // leave_application_create_dto->approved
    cJSON *approved = cJSON_GetObjectItemCaseSensitive(leave_application_create_dtoJSON, "approved");
    if (approved) { 
    if(!cJSON_IsBool(approved))
    {
    goto end; //Bool
    }
    }

    // leave_application_create_dto->on_review
    cJSON *on_review = cJSON_GetObjectItemCaseSensitive(leave_application_create_dtoJSON, "onReview");
    if (on_review) { 
    if(!cJSON_IsBool(on_review))
    {
    goto end; //Bool
    }
    }

    // leave_application_create_dto->leave_type_id
    cJSON *leave_type_id = cJSON_GetObjectItemCaseSensitive(leave_application_create_dtoJSON, "leaveTypeId");
    if (!leave_type_id) {
        goto end;
    }

    
    if(!cJSON_IsString(leave_type_id))
    {
    goto end; //String
    }

    // leave_application_create_dto->employee_profile_id
    cJSON *employee_profile_id = cJSON_GetObjectItemCaseSensitive(leave_application_create_dtoJSON, "employeeProfileId");
    if (!employee_profile_id) {
        goto end;
    }

    
    if(!cJSON_IsString(employee_profile_id))
    {
    goto end; //String
    }


    leave_application_create_dto_local_var = leave_application_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        justification && !cJSON_IsNull(justification) ? strdup(justification->valuestring) : NULL,
        approved ? approved->valueint : 0,
        on_review ? on_review->valueint : 0,
        strdup(leave_type_id->valuestring),
        strdup(employee_profile_id->valuestring)
        );

    return leave_application_create_dto_local_var;
end:
    return NULL;

}
