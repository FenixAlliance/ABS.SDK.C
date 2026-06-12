#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "warranty_request_dto.h"



warranty_request_dto_t *warranty_request_dto_create(
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
    char *warranty_policy_id
    ) {
    warranty_request_dto_t *warranty_request_dto_local_var = malloc(sizeof(warranty_request_dto_t));
    if (!warranty_request_dto_local_var) {
        return NULL;
    }
    warranty_request_dto_local_var->id = id;
    warranty_request_dto_local_var->timestamp = timestamp;
    warranty_request_dto_local_var->title = title;
    warranty_request_dto_local_var->description = description;
    warranty_request_dto_local_var->approved = approved;
    warranty_request_dto_local_var->approved_timestamp = approved_timestamp;
    warranty_request_dto_local_var->tenant_id = tenant_id;
    warranty_request_dto_local_var->enrollment_id = enrollment_id;
    warranty_request_dto_local_var->support_entitlement_id = support_entitlement_id;
    warranty_request_dto_local_var->contact_id = contact_id;
    warranty_request_dto_local_var->user_id = user_id;
    warranty_request_dto_local_var->warranty_policy_id = warranty_policy_id;

    return warranty_request_dto_local_var;
}


void warranty_request_dto_free(warranty_request_dto_t *warranty_request_dto) {
    if(NULL == warranty_request_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (warranty_request_dto->id) {
        free(warranty_request_dto->id);
        warranty_request_dto->id = NULL;
    }
    if (warranty_request_dto->timestamp) {
        free(warranty_request_dto->timestamp);
        warranty_request_dto->timestamp = NULL;
    }
    if (warranty_request_dto->title) {
        free(warranty_request_dto->title);
        warranty_request_dto->title = NULL;
    }
    if (warranty_request_dto->description) {
        free(warranty_request_dto->description);
        warranty_request_dto->description = NULL;
    }
    if (warranty_request_dto->approved_timestamp) {
        free(warranty_request_dto->approved_timestamp);
        warranty_request_dto->approved_timestamp = NULL;
    }
    if (warranty_request_dto->tenant_id) {
        free(warranty_request_dto->tenant_id);
        warranty_request_dto->tenant_id = NULL;
    }
    if (warranty_request_dto->enrollment_id) {
        free(warranty_request_dto->enrollment_id);
        warranty_request_dto->enrollment_id = NULL;
    }
    if (warranty_request_dto->support_entitlement_id) {
        free(warranty_request_dto->support_entitlement_id);
        warranty_request_dto->support_entitlement_id = NULL;
    }
    if (warranty_request_dto->contact_id) {
        free(warranty_request_dto->contact_id);
        warranty_request_dto->contact_id = NULL;
    }
    if (warranty_request_dto->user_id) {
        free(warranty_request_dto->user_id);
        warranty_request_dto->user_id = NULL;
    }
    if (warranty_request_dto->warranty_policy_id) {
        free(warranty_request_dto->warranty_policy_id);
        warranty_request_dto->warranty_policy_id = NULL;
    }
    free(warranty_request_dto);
}

cJSON *warranty_request_dto_convertToJSON(warranty_request_dto_t *warranty_request_dto) {
    cJSON *item = cJSON_CreateObject();

    // warranty_request_dto->id
    if(warranty_request_dto->id) {
    if(cJSON_AddStringToObject(item, "id", warranty_request_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // warranty_request_dto->timestamp
    if(warranty_request_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", warranty_request_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // warranty_request_dto->title
    if(warranty_request_dto->title) {
    if(cJSON_AddStringToObject(item, "title", warranty_request_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // warranty_request_dto->description
    if(warranty_request_dto->description) {
    if(cJSON_AddStringToObject(item, "description", warranty_request_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // warranty_request_dto->approved
    if(warranty_request_dto->approved) {
    if(cJSON_AddBoolToObject(item, "approved", warranty_request_dto->approved) == NULL) {
    goto fail; //Bool
    }
    }


    // warranty_request_dto->approved_timestamp
    if(warranty_request_dto->approved_timestamp) {
    if(cJSON_AddStringToObject(item, "approvedTimestamp", warranty_request_dto->approved_timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // warranty_request_dto->tenant_id
    if(warranty_request_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", warranty_request_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // warranty_request_dto->enrollment_id
    if(warranty_request_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", warranty_request_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // warranty_request_dto->support_entitlement_id
    if(warranty_request_dto->support_entitlement_id) {
    if(cJSON_AddStringToObject(item, "supportEntitlementId", warranty_request_dto->support_entitlement_id) == NULL) {
    goto fail; //String
    }
    }


    // warranty_request_dto->contact_id
    if(warranty_request_dto->contact_id) {
    if(cJSON_AddStringToObject(item, "contactId", warranty_request_dto->contact_id) == NULL) {
    goto fail; //String
    }
    }


    // warranty_request_dto->user_id
    if(warranty_request_dto->user_id) {
    if(cJSON_AddStringToObject(item, "userId", warranty_request_dto->user_id) == NULL) {
    goto fail; //String
    }
    }


    // warranty_request_dto->warranty_policy_id
    if(warranty_request_dto->warranty_policy_id) {
    if(cJSON_AddStringToObject(item, "warrantyPolicyId", warranty_request_dto->warranty_policy_id) == NULL) {
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

warranty_request_dto_t *warranty_request_dto_parseFromJSON(cJSON *warranty_request_dtoJSON){

    warranty_request_dto_t *warranty_request_dto_local_var = NULL;

    // warranty_request_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(warranty_request_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // warranty_request_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(warranty_request_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // warranty_request_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(warranty_request_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // warranty_request_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(warranty_request_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // warranty_request_dto->approved
    cJSON *approved = cJSON_GetObjectItemCaseSensitive(warranty_request_dtoJSON, "approved");
    if (approved) { 
    if(!cJSON_IsBool(approved))
    {
    goto end; //Bool
    }
    }

    // warranty_request_dto->approved_timestamp
    cJSON *approved_timestamp = cJSON_GetObjectItemCaseSensitive(warranty_request_dtoJSON, "approvedTimestamp");
    if (approved_timestamp) { 
    if(!cJSON_IsString(approved_timestamp) && !cJSON_IsNull(approved_timestamp))
    {
    goto end; //DateTime
    }
    }

    // warranty_request_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(warranty_request_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // warranty_request_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(warranty_request_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // warranty_request_dto->support_entitlement_id
    cJSON *support_entitlement_id = cJSON_GetObjectItemCaseSensitive(warranty_request_dtoJSON, "supportEntitlementId");
    if (support_entitlement_id) { 
    if(!cJSON_IsString(support_entitlement_id) && !cJSON_IsNull(support_entitlement_id))
    {
    goto end; //String
    }
    }

    // warranty_request_dto->contact_id
    cJSON *contact_id = cJSON_GetObjectItemCaseSensitive(warranty_request_dtoJSON, "contactId");
    if (contact_id) { 
    if(!cJSON_IsString(contact_id) && !cJSON_IsNull(contact_id))
    {
    goto end; //String
    }
    }

    // warranty_request_dto->user_id
    cJSON *user_id = cJSON_GetObjectItemCaseSensitive(warranty_request_dtoJSON, "userId");
    if (user_id) { 
    if(!cJSON_IsString(user_id) && !cJSON_IsNull(user_id))
    {
    goto end; //String
    }
    }

    // warranty_request_dto->warranty_policy_id
    cJSON *warranty_policy_id = cJSON_GetObjectItemCaseSensitive(warranty_request_dtoJSON, "warrantyPolicyId");
    if (warranty_policy_id) { 
    if(!cJSON_IsString(warranty_policy_id) && !cJSON_IsNull(warranty_policy_id))
    {
    goto end; //String
    }
    }


    warranty_request_dto_local_var = warranty_request_dto_create (
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
        warranty_policy_id && !cJSON_IsNull(warranty_policy_id) ? strdup(warranty_policy_id->valuestring) : NULL
        );

    return warranty_request_dto_local_var;
end:
    return NULL;

}
