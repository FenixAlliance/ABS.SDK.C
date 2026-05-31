#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "refund_request_dto.h"



refund_request_dto_t *refund_request_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    int approved,
    char *approved_timestamp,
    char *tenant_id,
    char *business_profile_record_id,
    char *support_entitlement_id,
    char *contact_id,
    char *account_holder_id,
    char *refund_policy_id,
    char *payment_id
    ) {
    refund_request_dto_t *refund_request_dto_local_var = malloc(sizeof(refund_request_dto_t));
    if (!refund_request_dto_local_var) {
        return NULL;
    }
    refund_request_dto_local_var->id = id;
    refund_request_dto_local_var->timestamp = timestamp;
    refund_request_dto_local_var->title = title;
    refund_request_dto_local_var->description = description;
    refund_request_dto_local_var->approved = approved;
    refund_request_dto_local_var->approved_timestamp = approved_timestamp;
    refund_request_dto_local_var->tenant_id = tenant_id;
    refund_request_dto_local_var->business_profile_record_id = business_profile_record_id;
    refund_request_dto_local_var->support_entitlement_id = support_entitlement_id;
    refund_request_dto_local_var->contact_id = contact_id;
    refund_request_dto_local_var->account_holder_id = account_holder_id;
    refund_request_dto_local_var->refund_policy_id = refund_policy_id;
    refund_request_dto_local_var->payment_id = payment_id;

    return refund_request_dto_local_var;
}


void refund_request_dto_free(refund_request_dto_t *refund_request_dto) {
    if(NULL == refund_request_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (refund_request_dto->id) {
        free(refund_request_dto->id);
        refund_request_dto->id = NULL;
    }
    if (refund_request_dto->timestamp) {
        free(refund_request_dto->timestamp);
        refund_request_dto->timestamp = NULL;
    }
    if (refund_request_dto->title) {
        free(refund_request_dto->title);
        refund_request_dto->title = NULL;
    }
    if (refund_request_dto->description) {
        free(refund_request_dto->description);
        refund_request_dto->description = NULL;
    }
    if (refund_request_dto->approved_timestamp) {
        free(refund_request_dto->approved_timestamp);
        refund_request_dto->approved_timestamp = NULL;
    }
    if (refund_request_dto->tenant_id) {
        free(refund_request_dto->tenant_id);
        refund_request_dto->tenant_id = NULL;
    }
    if (refund_request_dto->business_profile_record_id) {
        free(refund_request_dto->business_profile_record_id);
        refund_request_dto->business_profile_record_id = NULL;
    }
    if (refund_request_dto->support_entitlement_id) {
        free(refund_request_dto->support_entitlement_id);
        refund_request_dto->support_entitlement_id = NULL;
    }
    if (refund_request_dto->contact_id) {
        free(refund_request_dto->contact_id);
        refund_request_dto->contact_id = NULL;
    }
    if (refund_request_dto->account_holder_id) {
        free(refund_request_dto->account_holder_id);
        refund_request_dto->account_holder_id = NULL;
    }
    if (refund_request_dto->refund_policy_id) {
        free(refund_request_dto->refund_policy_id);
        refund_request_dto->refund_policy_id = NULL;
    }
    if (refund_request_dto->payment_id) {
        free(refund_request_dto->payment_id);
        refund_request_dto->payment_id = NULL;
    }
    free(refund_request_dto);
}

cJSON *refund_request_dto_convertToJSON(refund_request_dto_t *refund_request_dto) {
    cJSON *item = cJSON_CreateObject();

    // refund_request_dto->id
    if(refund_request_dto->id) {
    if(cJSON_AddStringToObject(item, "id", refund_request_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // refund_request_dto->timestamp
    if(refund_request_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", refund_request_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // refund_request_dto->title
    if(refund_request_dto->title) {
    if(cJSON_AddStringToObject(item, "title", refund_request_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // refund_request_dto->description
    if(refund_request_dto->description) {
    if(cJSON_AddStringToObject(item, "description", refund_request_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // refund_request_dto->approved
    if(refund_request_dto->approved) {
    if(cJSON_AddBoolToObject(item, "approved", refund_request_dto->approved) == NULL) {
    goto fail; //Bool
    }
    }


    // refund_request_dto->approved_timestamp
    if(refund_request_dto->approved_timestamp) {
    if(cJSON_AddStringToObject(item, "approvedTimestamp", refund_request_dto->approved_timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // refund_request_dto->tenant_id
    if(refund_request_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", refund_request_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // refund_request_dto->business_profile_record_id
    if(refund_request_dto->business_profile_record_id) {
    if(cJSON_AddStringToObject(item, "businessProfileRecordId", refund_request_dto->business_profile_record_id) == NULL) {
    goto fail; //String
    }
    }


    // refund_request_dto->support_entitlement_id
    if(refund_request_dto->support_entitlement_id) {
    if(cJSON_AddStringToObject(item, "supportEntitlementId", refund_request_dto->support_entitlement_id) == NULL) {
    goto fail; //String
    }
    }


    // refund_request_dto->contact_id
    if(refund_request_dto->contact_id) {
    if(cJSON_AddStringToObject(item, "contactId", refund_request_dto->contact_id) == NULL) {
    goto fail; //String
    }
    }


    // refund_request_dto->account_holder_id
    if(refund_request_dto->account_holder_id) {
    if(cJSON_AddStringToObject(item, "accountHolderId", refund_request_dto->account_holder_id) == NULL) {
    goto fail; //String
    }
    }


    // refund_request_dto->refund_policy_id
    if(refund_request_dto->refund_policy_id) {
    if(cJSON_AddStringToObject(item, "refundPolicyId", refund_request_dto->refund_policy_id) == NULL) {
    goto fail; //String
    }
    }


    // refund_request_dto->payment_id
    if(refund_request_dto->payment_id) {
    if(cJSON_AddStringToObject(item, "paymentId", refund_request_dto->payment_id) == NULL) {
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

refund_request_dto_t *refund_request_dto_parseFromJSON(cJSON *refund_request_dtoJSON){

    refund_request_dto_t *refund_request_dto_local_var = NULL;

    // refund_request_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(refund_request_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // refund_request_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(refund_request_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // refund_request_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(refund_request_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // refund_request_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(refund_request_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // refund_request_dto->approved
    cJSON *approved = cJSON_GetObjectItemCaseSensitive(refund_request_dtoJSON, "approved");
    if (approved) { 
    if(!cJSON_IsBool(approved))
    {
    goto end; //Bool
    }
    }

    // refund_request_dto->approved_timestamp
    cJSON *approved_timestamp = cJSON_GetObjectItemCaseSensitive(refund_request_dtoJSON, "approvedTimestamp");
    if (approved_timestamp) { 
    if(!cJSON_IsString(approved_timestamp) && !cJSON_IsNull(approved_timestamp))
    {
    goto end; //DateTime
    }
    }

    // refund_request_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(refund_request_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // refund_request_dto->business_profile_record_id
    cJSON *business_profile_record_id = cJSON_GetObjectItemCaseSensitive(refund_request_dtoJSON, "businessProfileRecordId");
    if (business_profile_record_id) { 
    if(!cJSON_IsString(business_profile_record_id) && !cJSON_IsNull(business_profile_record_id))
    {
    goto end; //String
    }
    }

    // refund_request_dto->support_entitlement_id
    cJSON *support_entitlement_id = cJSON_GetObjectItemCaseSensitive(refund_request_dtoJSON, "supportEntitlementId");
    if (support_entitlement_id) { 
    if(!cJSON_IsString(support_entitlement_id) && !cJSON_IsNull(support_entitlement_id))
    {
    goto end; //String
    }
    }

    // refund_request_dto->contact_id
    cJSON *contact_id = cJSON_GetObjectItemCaseSensitive(refund_request_dtoJSON, "contactId");
    if (contact_id) { 
    if(!cJSON_IsString(contact_id) && !cJSON_IsNull(contact_id))
    {
    goto end; //String
    }
    }

    // refund_request_dto->account_holder_id
    cJSON *account_holder_id = cJSON_GetObjectItemCaseSensitive(refund_request_dtoJSON, "accountHolderId");
    if (account_holder_id) { 
    if(!cJSON_IsString(account_holder_id) && !cJSON_IsNull(account_holder_id))
    {
    goto end; //String
    }
    }

    // refund_request_dto->refund_policy_id
    cJSON *refund_policy_id = cJSON_GetObjectItemCaseSensitive(refund_request_dtoJSON, "refundPolicyId");
    if (refund_policy_id) { 
    if(!cJSON_IsString(refund_policy_id) && !cJSON_IsNull(refund_policy_id))
    {
    goto end; //String
    }
    }

    // refund_request_dto->payment_id
    cJSON *payment_id = cJSON_GetObjectItemCaseSensitive(refund_request_dtoJSON, "paymentId");
    if (payment_id) { 
    if(!cJSON_IsString(payment_id) && !cJSON_IsNull(payment_id))
    {
    goto end; //String
    }
    }


    refund_request_dto_local_var = refund_request_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        approved ? approved->valueint : 0,
        approved_timestamp && !cJSON_IsNull(approved_timestamp) ? strdup(approved_timestamp->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        business_profile_record_id && !cJSON_IsNull(business_profile_record_id) ? strdup(business_profile_record_id->valuestring) : NULL,
        support_entitlement_id && !cJSON_IsNull(support_entitlement_id) ? strdup(support_entitlement_id->valuestring) : NULL,
        contact_id && !cJSON_IsNull(contact_id) ? strdup(contact_id->valuestring) : NULL,
        account_holder_id && !cJSON_IsNull(account_holder_id) ? strdup(account_holder_id->valuestring) : NULL,
        refund_policy_id && !cJSON_IsNull(refund_policy_id) ? strdup(refund_policy_id->valuestring) : NULL,
        payment_id && !cJSON_IsNull(payment_id) ? strdup(payment_id->valuestring) : NULL
        );

    return refund_request_dto_local_var;
end:
    return NULL;

}
