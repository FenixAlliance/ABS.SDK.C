#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "signing_participant_dto.h"


char* signing_participant_dto_role_ToString(trustservice_signing_participant_dto_ROLE_e role) {
    char* roleArray[] =  { "NULL", "Signer", "Approver", "Viewer", "Witness", "CarbonCopy", "System" };
    return roleArray[role];
}

trustservice_signing_participant_dto_ROLE_e signing_participant_dto_role_FromString(char* role){
    int stringToReturn = 0;
    char *roleArray[] =  { "NULL", "Signer", "Approver", "Viewer", "Witness", "CarbonCopy", "System" };
    size_t sizeofArray = sizeof(roleArray) / sizeof(roleArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(role, roleArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* signing_participant_dto_status_ToString(trustservice_signing_participant_dto_STATUS_e status) {
    char* statusArray[] =  { "NULL", "Pending", "Sent", "Viewed", "Signed", "Approved", "Declined", "Skipped", "Expired", "Failed" };
    return statusArray[status];
}

trustservice_signing_participant_dto_STATUS_e signing_participant_dto_status_FromString(char* status){
    int stringToReturn = 0;
    char *statusArray[] =  { "NULL", "Pending", "Sent", "Viewed", "Signed", "Approved", "Declined", "Skipped", "Expired", "Failed" };
    size_t sizeofArray = sizeof(statusArray) / sizeof(statusArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(status, statusArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

signing_participant_dto_t *signing_participant_dto_create(
    char *id,
    char *tenant_id,
    char *signing_request_id,
    char *contact_id,
    char *contact_name,
    trustservice_signing_participant_dto_ROLE_e role,
    trustservice_signing_participant_dto_STATUS_e status,
    int routing_order,
    char *sent_at_utc,
    char *viewed_at_utc,
    char *signed_at_utc,
    char *approved_at_utc,
    char *declined_at_utc,
    char *decline_reason,
    char *signature_id,
    char *access_token_expires_at_utc,
    char *correlation_id,
    char *external_reference
    ) {
    signing_participant_dto_t *signing_participant_dto_local_var = malloc(sizeof(signing_participant_dto_t));
    if (!signing_participant_dto_local_var) {
        return NULL;
    }
    signing_participant_dto_local_var->id = id;
    signing_participant_dto_local_var->tenant_id = tenant_id;
    signing_participant_dto_local_var->signing_request_id = signing_request_id;
    signing_participant_dto_local_var->contact_id = contact_id;
    signing_participant_dto_local_var->contact_name = contact_name;
    signing_participant_dto_local_var->role = role;
    signing_participant_dto_local_var->status = status;
    signing_participant_dto_local_var->routing_order = routing_order;
    signing_participant_dto_local_var->sent_at_utc = sent_at_utc;
    signing_participant_dto_local_var->viewed_at_utc = viewed_at_utc;
    signing_participant_dto_local_var->signed_at_utc = signed_at_utc;
    signing_participant_dto_local_var->approved_at_utc = approved_at_utc;
    signing_participant_dto_local_var->declined_at_utc = declined_at_utc;
    signing_participant_dto_local_var->decline_reason = decline_reason;
    signing_participant_dto_local_var->signature_id = signature_id;
    signing_participant_dto_local_var->access_token_expires_at_utc = access_token_expires_at_utc;
    signing_participant_dto_local_var->correlation_id = correlation_id;
    signing_participant_dto_local_var->external_reference = external_reference;

    return signing_participant_dto_local_var;
}


void signing_participant_dto_free(signing_participant_dto_t *signing_participant_dto) {
    if(NULL == signing_participant_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (signing_participant_dto->id) {
        free(signing_participant_dto->id);
        signing_participant_dto->id = NULL;
    }
    if (signing_participant_dto->tenant_id) {
        free(signing_participant_dto->tenant_id);
        signing_participant_dto->tenant_id = NULL;
    }
    if (signing_participant_dto->signing_request_id) {
        free(signing_participant_dto->signing_request_id);
        signing_participant_dto->signing_request_id = NULL;
    }
    if (signing_participant_dto->contact_id) {
        free(signing_participant_dto->contact_id);
        signing_participant_dto->contact_id = NULL;
    }
    if (signing_participant_dto->contact_name) {
        free(signing_participant_dto->contact_name);
        signing_participant_dto->contact_name = NULL;
    }
    if (signing_participant_dto->sent_at_utc) {
        free(signing_participant_dto->sent_at_utc);
        signing_participant_dto->sent_at_utc = NULL;
    }
    if (signing_participant_dto->viewed_at_utc) {
        free(signing_participant_dto->viewed_at_utc);
        signing_participant_dto->viewed_at_utc = NULL;
    }
    if (signing_participant_dto->signed_at_utc) {
        free(signing_participant_dto->signed_at_utc);
        signing_participant_dto->signed_at_utc = NULL;
    }
    if (signing_participant_dto->approved_at_utc) {
        free(signing_participant_dto->approved_at_utc);
        signing_participant_dto->approved_at_utc = NULL;
    }
    if (signing_participant_dto->declined_at_utc) {
        free(signing_participant_dto->declined_at_utc);
        signing_participant_dto->declined_at_utc = NULL;
    }
    if (signing_participant_dto->decline_reason) {
        free(signing_participant_dto->decline_reason);
        signing_participant_dto->decline_reason = NULL;
    }
    if (signing_participant_dto->signature_id) {
        free(signing_participant_dto->signature_id);
        signing_participant_dto->signature_id = NULL;
    }
    if (signing_participant_dto->access_token_expires_at_utc) {
        free(signing_participant_dto->access_token_expires_at_utc);
        signing_participant_dto->access_token_expires_at_utc = NULL;
    }
    if (signing_participant_dto->correlation_id) {
        free(signing_participant_dto->correlation_id);
        signing_participant_dto->correlation_id = NULL;
    }
    if (signing_participant_dto->external_reference) {
        free(signing_participant_dto->external_reference);
        signing_participant_dto->external_reference = NULL;
    }
    free(signing_participant_dto);
}

cJSON *signing_participant_dto_convertToJSON(signing_participant_dto_t *signing_participant_dto) {
    cJSON *item = cJSON_CreateObject();

    // signing_participant_dto->id
    if(signing_participant_dto->id) {
    if(cJSON_AddStringToObject(item, "id", signing_participant_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // signing_participant_dto->tenant_id
    if(signing_participant_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", signing_participant_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // signing_participant_dto->signing_request_id
    if(signing_participant_dto->signing_request_id) {
    if(cJSON_AddStringToObject(item, "signingRequestId", signing_participant_dto->signing_request_id) == NULL) {
    goto fail; //String
    }
    }


    // signing_participant_dto->contact_id
    if(signing_participant_dto->contact_id) {
    if(cJSON_AddStringToObject(item, "contactId", signing_participant_dto->contact_id) == NULL) {
    goto fail; //String
    }
    }


    // signing_participant_dto->contact_name
    if(signing_participant_dto->contact_name) {
    if(cJSON_AddStringToObject(item, "contactName", signing_participant_dto->contact_name) == NULL) {
    goto fail; //String
    }
    }


    // signing_participant_dto->role
    if(signing_participant_dto->role != trustservice_signing_participant_dto_ROLE_NULL) {
    if(cJSON_AddStringToObject(item, "role", rolesigning_participant_dto_ToString(signing_participant_dto->role)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // signing_participant_dto->status
    if(signing_participant_dto->status != trustservice_signing_participant_dto_STATUS_NULL) {
    if(cJSON_AddStringToObject(item, "status", statussigning_participant_dto_ToString(signing_participant_dto->status)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // signing_participant_dto->routing_order
    if(signing_participant_dto->routing_order) {
    if(cJSON_AddNumberToObject(item, "routingOrder", signing_participant_dto->routing_order) == NULL) {
    goto fail; //Numeric
    }
    }


    // signing_participant_dto->sent_at_utc
    if(signing_participant_dto->sent_at_utc) {
    if(cJSON_AddStringToObject(item, "sentAtUtc", signing_participant_dto->sent_at_utc) == NULL) {
    goto fail; //Date-Time
    }
    }


    // signing_participant_dto->viewed_at_utc
    if(signing_participant_dto->viewed_at_utc) {
    if(cJSON_AddStringToObject(item, "viewedAtUtc", signing_participant_dto->viewed_at_utc) == NULL) {
    goto fail; //Date-Time
    }
    }


    // signing_participant_dto->signed_at_utc
    if(signing_participant_dto->signed_at_utc) {
    if(cJSON_AddStringToObject(item, "signedAtUtc", signing_participant_dto->signed_at_utc) == NULL) {
    goto fail; //Date-Time
    }
    }


    // signing_participant_dto->approved_at_utc
    if(signing_participant_dto->approved_at_utc) {
    if(cJSON_AddStringToObject(item, "approvedAtUtc", signing_participant_dto->approved_at_utc) == NULL) {
    goto fail; //Date-Time
    }
    }


    // signing_participant_dto->declined_at_utc
    if(signing_participant_dto->declined_at_utc) {
    if(cJSON_AddStringToObject(item, "declinedAtUtc", signing_participant_dto->declined_at_utc) == NULL) {
    goto fail; //Date-Time
    }
    }


    // signing_participant_dto->decline_reason
    if(signing_participant_dto->decline_reason) {
    if(cJSON_AddStringToObject(item, "declineReason", signing_participant_dto->decline_reason) == NULL) {
    goto fail; //String
    }
    }


    // signing_participant_dto->signature_id
    if(signing_participant_dto->signature_id) {
    if(cJSON_AddStringToObject(item, "signatureId", signing_participant_dto->signature_id) == NULL) {
    goto fail; //String
    }
    }


    // signing_participant_dto->access_token_expires_at_utc
    if(signing_participant_dto->access_token_expires_at_utc) {
    if(cJSON_AddStringToObject(item, "accessTokenExpiresAtUtc", signing_participant_dto->access_token_expires_at_utc) == NULL) {
    goto fail; //Date-Time
    }
    }


    // signing_participant_dto->correlation_id
    if(signing_participant_dto->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", signing_participant_dto->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // signing_participant_dto->external_reference
    if(signing_participant_dto->external_reference) {
    if(cJSON_AddStringToObject(item, "externalReference", signing_participant_dto->external_reference) == NULL) {
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

signing_participant_dto_t *signing_participant_dto_parseFromJSON(cJSON *signing_participant_dtoJSON){

    signing_participant_dto_t *signing_participant_dto_local_var = NULL;

    // signing_participant_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(signing_participant_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // signing_participant_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(signing_participant_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // signing_participant_dto->signing_request_id
    cJSON *signing_request_id = cJSON_GetObjectItemCaseSensitive(signing_participant_dtoJSON, "signingRequestId");
    if (signing_request_id) { 
    if(!cJSON_IsString(signing_request_id) && !cJSON_IsNull(signing_request_id))
    {
    goto end; //String
    }
    }

    // signing_participant_dto->contact_id
    cJSON *contact_id = cJSON_GetObjectItemCaseSensitive(signing_participant_dtoJSON, "contactId");
    if (contact_id) { 
    if(!cJSON_IsString(contact_id) && !cJSON_IsNull(contact_id))
    {
    goto end; //String
    }
    }

    // signing_participant_dto->contact_name
    cJSON *contact_name = cJSON_GetObjectItemCaseSensitive(signing_participant_dtoJSON, "contactName");
    if (contact_name) { 
    if(!cJSON_IsString(contact_name) && !cJSON_IsNull(contact_name))
    {
    goto end; //String
    }
    }

    // signing_participant_dto->role
    cJSON *role = cJSON_GetObjectItemCaseSensitive(signing_participant_dtoJSON, "role");
    trustservice_signing_participant_dto_ROLE_e roleVariable;
    if (role) { 
    if(!cJSON_IsString(role))
    {
    goto end; //Enum
    }
    roleVariable = signing_participant_dto_role_FromString(role->valuestring);
    }

    // signing_participant_dto->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(signing_participant_dtoJSON, "status");
    trustservice_signing_participant_dto_STATUS_e statusVariable;
    if (status) { 
    if(!cJSON_IsString(status))
    {
    goto end; //Enum
    }
    statusVariable = signing_participant_dto_status_FromString(status->valuestring);
    }

    // signing_participant_dto->routing_order
    cJSON *routing_order = cJSON_GetObjectItemCaseSensitive(signing_participant_dtoJSON, "routingOrder");
    if (routing_order) { 
    if(!cJSON_IsNumber(routing_order))
    {
    goto end; //Numeric
    }
    }

    // signing_participant_dto->sent_at_utc
    cJSON *sent_at_utc = cJSON_GetObjectItemCaseSensitive(signing_participant_dtoJSON, "sentAtUtc");
    if (sent_at_utc) { 
    if(!cJSON_IsString(sent_at_utc) && !cJSON_IsNull(sent_at_utc))
    {
    goto end; //DateTime
    }
    }

    // signing_participant_dto->viewed_at_utc
    cJSON *viewed_at_utc = cJSON_GetObjectItemCaseSensitive(signing_participant_dtoJSON, "viewedAtUtc");
    if (viewed_at_utc) { 
    if(!cJSON_IsString(viewed_at_utc) && !cJSON_IsNull(viewed_at_utc))
    {
    goto end; //DateTime
    }
    }

    // signing_participant_dto->signed_at_utc
    cJSON *signed_at_utc = cJSON_GetObjectItemCaseSensitive(signing_participant_dtoJSON, "signedAtUtc");
    if (signed_at_utc) { 
    if(!cJSON_IsString(signed_at_utc) && !cJSON_IsNull(signed_at_utc))
    {
    goto end; //DateTime
    }
    }

    // signing_participant_dto->approved_at_utc
    cJSON *approved_at_utc = cJSON_GetObjectItemCaseSensitive(signing_participant_dtoJSON, "approvedAtUtc");
    if (approved_at_utc) { 
    if(!cJSON_IsString(approved_at_utc) && !cJSON_IsNull(approved_at_utc))
    {
    goto end; //DateTime
    }
    }

    // signing_participant_dto->declined_at_utc
    cJSON *declined_at_utc = cJSON_GetObjectItemCaseSensitive(signing_participant_dtoJSON, "declinedAtUtc");
    if (declined_at_utc) { 
    if(!cJSON_IsString(declined_at_utc) && !cJSON_IsNull(declined_at_utc))
    {
    goto end; //DateTime
    }
    }

    // signing_participant_dto->decline_reason
    cJSON *decline_reason = cJSON_GetObjectItemCaseSensitive(signing_participant_dtoJSON, "declineReason");
    if (decline_reason) { 
    if(!cJSON_IsString(decline_reason) && !cJSON_IsNull(decline_reason))
    {
    goto end; //String
    }
    }

    // signing_participant_dto->signature_id
    cJSON *signature_id = cJSON_GetObjectItemCaseSensitive(signing_participant_dtoJSON, "signatureId");
    if (signature_id) { 
    if(!cJSON_IsString(signature_id) && !cJSON_IsNull(signature_id))
    {
    goto end; //String
    }
    }

    // signing_participant_dto->access_token_expires_at_utc
    cJSON *access_token_expires_at_utc = cJSON_GetObjectItemCaseSensitive(signing_participant_dtoJSON, "accessTokenExpiresAtUtc");
    if (access_token_expires_at_utc) { 
    if(!cJSON_IsString(access_token_expires_at_utc) && !cJSON_IsNull(access_token_expires_at_utc))
    {
    goto end; //DateTime
    }
    }

    // signing_participant_dto->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(signing_participant_dtoJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // signing_participant_dto->external_reference
    cJSON *external_reference = cJSON_GetObjectItemCaseSensitive(signing_participant_dtoJSON, "externalReference");
    if (external_reference) { 
    if(!cJSON_IsString(external_reference) && !cJSON_IsNull(external_reference))
    {
    goto end; //String
    }
    }


    signing_participant_dto_local_var = signing_participant_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        signing_request_id && !cJSON_IsNull(signing_request_id) ? strdup(signing_request_id->valuestring) : NULL,
        contact_id && !cJSON_IsNull(contact_id) ? strdup(contact_id->valuestring) : NULL,
        contact_name && !cJSON_IsNull(contact_name) ? strdup(contact_name->valuestring) : NULL,
        role ? roleVariable : trustservice_signing_participant_dto_ROLE_NULL,
        status ? statusVariable : trustservice_signing_participant_dto_STATUS_NULL,
        routing_order ? routing_order->valuedouble : 0,
        sent_at_utc && !cJSON_IsNull(sent_at_utc) ? strdup(sent_at_utc->valuestring) : NULL,
        viewed_at_utc && !cJSON_IsNull(viewed_at_utc) ? strdup(viewed_at_utc->valuestring) : NULL,
        signed_at_utc && !cJSON_IsNull(signed_at_utc) ? strdup(signed_at_utc->valuestring) : NULL,
        approved_at_utc && !cJSON_IsNull(approved_at_utc) ? strdup(approved_at_utc->valuestring) : NULL,
        declined_at_utc && !cJSON_IsNull(declined_at_utc) ? strdup(declined_at_utc->valuestring) : NULL,
        decline_reason && !cJSON_IsNull(decline_reason) ? strdup(decline_reason->valuestring) : NULL,
        signature_id && !cJSON_IsNull(signature_id) ? strdup(signature_id->valuestring) : NULL,
        access_token_expires_at_utc && !cJSON_IsNull(access_token_expires_at_utc) ? strdup(access_token_expires_at_utc->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        external_reference && !cJSON_IsNull(external_reference) ? strdup(external_reference->valuestring) : NULL
        );

    return signing_participant_dto_local_var;
end:
    return NULL;

}
