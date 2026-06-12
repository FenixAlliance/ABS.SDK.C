#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "return_request_dto.h"



return_request_dto_t *return_request_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    int approved,
    char *approved_timestamp,
    char *tenant_id,
    char *enrollment_id,
    char *support_entitlement_id,
    char *contact_id,
    char *user_id,
    char *return_policy_id
    ) {
    return_request_dto_t *return_request_dto_local_var = malloc(sizeof(return_request_dto_t));
    if (!return_request_dto_local_var) {
        return NULL;
    }
    return_request_dto_local_var->id = id;
    return_request_dto_local_var->timestamp = timestamp;
    return_request_dto_local_var->title = title;
    return_request_dto_local_var->description = description;
    return_request_dto_local_var->approved = approved;
    return_request_dto_local_var->approved_timestamp = approved_timestamp;
    return_request_dto_local_var->tenant_id = tenant_id;
    return_request_dto_local_var->enrollment_id = enrollment_id;
    return_request_dto_local_var->support_entitlement_id = support_entitlement_id;
    return_request_dto_local_var->contact_id = contact_id;
    return_request_dto_local_var->user_id = user_id;
    return_request_dto_local_var->return_policy_id = return_policy_id;

    return return_request_dto_local_var;
}


void return_request_dto_free(return_request_dto_t *return_request_dto) {
    if(NULL == return_request_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (return_request_dto->id) {
        free(return_request_dto->id);
        return_request_dto->id = NULL;
    }
    if (return_request_dto->timestamp) {
        free(return_request_dto->timestamp);
        return_request_dto->timestamp = NULL;
    }
    if (return_request_dto->title) {
        free(return_request_dto->title);
        return_request_dto->title = NULL;
    }
    if (return_request_dto->description) {
        free(return_request_dto->description);
        return_request_dto->description = NULL;
    }
    if (return_request_dto->approved_timestamp) {
        free(return_request_dto->approved_timestamp);
        return_request_dto->approved_timestamp = NULL;
    }
    if (return_request_dto->tenant_id) {
        free(return_request_dto->tenant_id);
        return_request_dto->tenant_id = NULL;
    }
    if (return_request_dto->enrollment_id) {
        free(return_request_dto->enrollment_id);
        return_request_dto->enrollment_id = NULL;
    }
    if (return_request_dto->support_entitlement_id) {
        free(return_request_dto->support_entitlement_id);
        return_request_dto->support_entitlement_id = NULL;
    }
    if (return_request_dto->contact_id) {
        free(return_request_dto->contact_id);
        return_request_dto->contact_id = NULL;
    }
    if (return_request_dto->user_id) {
        free(return_request_dto->user_id);
        return_request_dto->user_id = NULL;
    }
    if (return_request_dto->return_policy_id) {
        free(return_request_dto->return_policy_id);
        return_request_dto->return_policy_id = NULL;
    }
    free(return_request_dto);
}

cJSON *return_request_dto_convertToJSON(return_request_dto_t *return_request_dto) {
    cJSON *item = cJSON_CreateObject();

    // return_request_dto->id
    if(return_request_dto->id) {
    if(cJSON_AddStringToObject(item, "id", return_request_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // return_request_dto->timestamp
    if(return_request_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", return_request_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // return_request_dto->title
    if(return_request_dto->title) {
    if(cJSON_AddStringToObject(item, "title", return_request_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // return_request_dto->description
    if(return_request_dto->description) {
    if(cJSON_AddStringToObject(item, "description", return_request_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // return_request_dto->approved
    if(return_request_dto->approved) {
    if(cJSON_AddBoolToObject(item, "approved", return_request_dto->approved) == NULL) {
    goto fail; //Bool
    }
    }


    // return_request_dto->approved_timestamp
    if(return_request_dto->approved_timestamp) {
    if(cJSON_AddStringToObject(item, "approvedTimestamp", return_request_dto->approved_timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // return_request_dto->tenant_id
    if(return_request_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", return_request_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // return_request_dto->enrollment_id
    if(return_request_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", return_request_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // return_request_dto->support_entitlement_id
    if(return_request_dto->support_entitlement_id) {
    if(cJSON_AddStringToObject(item, "supportEntitlementId", return_request_dto->support_entitlement_id) == NULL) {
    goto fail; //String
    }
    }


    // return_request_dto->contact_id
    if(return_request_dto->contact_id) {
    if(cJSON_AddStringToObject(item, "contactId", return_request_dto->contact_id) == NULL) {
    goto fail; //String
    }
    }


    // return_request_dto->user_id
    if(return_request_dto->user_id) {
    if(cJSON_AddStringToObject(item, "userId", return_request_dto->user_id) == NULL) {
    goto fail; //String
    }
    }


    // return_request_dto->return_policy_id
    if(return_request_dto->return_policy_id) {
    if(cJSON_AddStringToObject(item, "returnPolicyId", return_request_dto->return_policy_id) == NULL) {
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

return_request_dto_t *return_request_dto_parseFromJSON(cJSON *return_request_dtoJSON){

    return_request_dto_t *return_request_dto_local_var = NULL;

    // return_request_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(return_request_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // return_request_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(return_request_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // return_request_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(return_request_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // return_request_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(return_request_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // return_request_dto->approved
    cJSON *approved = cJSON_GetObjectItemCaseSensitive(return_request_dtoJSON, "approved");
    if (approved) { 
    if(!cJSON_IsBool(approved))
    {
    goto end; //Bool
    }
    }

    // return_request_dto->approved_timestamp
    cJSON *approved_timestamp = cJSON_GetObjectItemCaseSensitive(return_request_dtoJSON, "approvedTimestamp");
    if (approved_timestamp) { 
    if(!cJSON_IsString(approved_timestamp) && !cJSON_IsNull(approved_timestamp))
    {
    goto end; //DateTime
    }
    }

    // return_request_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(return_request_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // return_request_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(return_request_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // return_request_dto->support_entitlement_id
    cJSON *support_entitlement_id = cJSON_GetObjectItemCaseSensitive(return_request_dtoJSON, "supportEntitlementId");
    if (support_entitlement_id) { 
    if(!cJSON_IsString(support_entitlement_id) && !cJSON_IsNull(support_entitlement_id))
    {
    goto end; //String
    }
    }

    // return_request_dto->contact_id
    cJSON *contact_id = cJSON_GetObjectItemCaseSensitive(return_request_dtoJSON, "contactId");
    if (contact_id) { 
    if(!cJSON_IsString(contact_id) && !cJSON_IsNull(contact_id))
    {
    goto end; //String
    }
    }

    // return_request_dto->user_id
    cJSON *user_id = cJSON_GetObjectItemCaseSensitive(return_request_dtoJSON, "userId");
    if (user_id) { 
    if(!cJSON_IsString(user_id) && !cJSON_IsNull(user_id))
    {
    goto end; //String
    }
    }

    // return_request_dto->return_policy_id
    cJSON *return_policy_id = cJSON_GetObjectItemCaseSensitive(return_request_dtoJSON, "returnPolicyId");
    if (return_policy_id) { 
    if(!cJSON_IsString(return_policy_id) && !cJSON_IsNull(return_policy_id))
    {
    goto end; //String
    }
    }


    return_request_dto_local_var = return_request_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        approved ? approved->valueint : 0,
        approved_timestamp && !cJSON_IsNull(approved_timestamp) ? strdup(approved_timestamp->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        support_entitlement_id && !cJSON_IsNull(support_entitlement_id) ? strdup(support_entitlement_id->valuestring) : NULL,
        contact_id && !cJSON_IsNull(contact_id) ? strdup(contact_id->valuestring) : NULL,
        user_id && !cJSON_IsNull(user_id) ? strdup(user_id->valuestring) : NULL,
        return_policy_id && !cJSON_IsNull(return_policy_id) ? strdup(return_policy_id->valuestring) : NULL
        );

    return return_request_dto_local_var;
end:
    return NULL;

}
