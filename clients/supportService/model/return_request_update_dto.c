#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "return_request_update_dto.h"



return_request_update_dto_t *return_request_update_dto_create(
    char *title,
    char *description,
    int approved,
    char *approved_timestamp,
    char *support_entitlement_id,
    char *return_policy_id
    ) {
    return_request_update_dto_t *return_request_update_dto_local_var = malloc(sizeof(return_request_update_dto_t));
    if (!return_request_update_dto_local_var) {
        return NULL;
    }
    return_request_update_dto_local_var->title = title;
    return_request_update_dto_local_var->description = description;
    return_request_update_dto_local_var->approved = approved;
    return_request_update_dto_local_var->approved_timestamp = approved_timestamp;
    return_request_update_dto_local_var->support_entitlement_id = support_entitlement_id;
    return_request_update_dto_local_var->return_policy_id = return_policy_id;

    return return_request_update_dto_local_var;
}


void return_request_update_dto_free(return_request_update_dto_t *return_request_update_dto) {
    if(NULL == return_request_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (return_request_update_dto->title) {
        free(return_request_update_dto->title);
        return_request_update_dto->title = NULL;
    }
    if (return_request_update_dto->description) {
        free(return_request_update_dto->description);
        return_request_update_dto->description = NULL;
    }
    if (return_request_update_dto->approved_timestamp) {
        free(return_request_update_dto->approved_timestamp);
        return_request_update_dto->approved_timestamp = NULL;
    }
    if (return_request_update_dto->support_entitlement_id) {
        free(return_request_update_dto->support_entitlement_id);
        return_request_update_dto->support_entitlement_id = NULL;
    }
    if (return_request_update_dto->return_policy_id) {
        free(return_request_update_dto->return_policy_id);
        return_request_update_dto->return_policy_id = NULL;
    }
    free(return_request_update_dto);
}

cJSON *return_request_update_dto_convertToJSON(return_request_update_dto_t *return_request_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // return_request_update_dto->title
    if(return_request_update_dto->title) {
    if(cJSON_AddStringToObject(item, "title", return_request_update_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // return_request_update_dto->description
    if(return_request_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", return_request_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // return_request_update_dto->approved
    if(return_request_update_dto->approved) {
    if(cJSON_AddBoolToObject(item, "approved", return_request_update_dto->approved) == NULL) {
    goto fail; //Bool
    }
    }


    // return_request_update_dto->approved_timestamp
    if(return_request_update_dto->approved_timestamp) {
    if(cJSON_AddStringToObject(item, "approvedTimestamp", return_request_update_dto->approved_timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // return_request_update_dto->support_entitlement_id
    if(return_request_update_dto->support_entitlement_id) {
    if(cJSON_AddStringToObject(item, "supportEntitlementId", return_request_update_dto->support_entitlement_id) == NULL) {
    goto fail; //String
    }
    }


    // return_request_update_dto->return_policy_id
    if(return_request_update_dto->return_policy_id) {
    if(cJSON_AddStringToObject(item, "returnPolicyId", return_request_update_dto->return_policy_id) == NULL) {
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

return_request_update_dto_t *return_request_update_dto_parseFromJSON(cJSON *return_request_update_dtoJSON){

    return_request_update_dto_t *return_request_update_dto_local_var = NULL;

    // return_request_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(return_request_update_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // return_request_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(return_request_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // return_request_update_dto->approved
    cJSON *approved = cJSON_GetObjectItemCaseSensitive(return_request_update_dtoJSON, "approved");
    if (approved) { 
    if(!cJSON_IsBool(approved))
    {
    goto end; //Bool
    }
    }

    // return_request_update_dto->approved_timestamp
    cJSON *approved_timestamp = cJSON_GetObjectItemCaseSensitive(return_request_update_dtoJSON, "approvedTimestamp");
    if (approved_timestamp) { 
    if(!cJSON_IsString(approved_timestamp) && !cJSON_IsNull(approved_timestamp))
    {
    goto end; //DateTime
    }
    }

    // return_request_update_dto->support_entitlement_id
    cJSON *support_entitlement_id = cJSON_GetObjectItemCaseSensitive(return_request_update_dtoJSON, "supportEntitlementId");
    if (support_entitlement_id) { 
    if(!cJSON_IsString(support_entitlement_id) && !cJSON_IsNull(support_entitlement_id))
    {
    goto end; //String
    }
    }

    // return_request_update_dto->return_policy_id
    cJSON *return_policy_id = cJSON_GetObjectItemCaseSensitive(return_request_update_dtoJSON, "returnPolicyId");
    if (return_policy_id) { 
    if(!cJSON_IsString(return_policy_id) && !cJSON_IsNull(return_policy_id))
    {
    goto end; //String
    }
    }


    return_request_update_dto_local_var = return_request_update_dto_create (
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        approved ? approved->valueint : 0,
        approved_timestamp && !cJSON_IsNull(approved_timestamp) ? strdup(approved_timestamp->valuestring) : NULL,
        support_entitlement_id && !cJSON_IsNull(support_entitlement_id) ? strdup(support_entitlement_id->valuestring) : NULL,
        return_policy_id && !cJSON_IsNull(return_policy_id) ? strdup(return_policy_id->valuestring) : NULL
        );

    return return_request_update_dto_local_var;
end:
    return NULL;

}
