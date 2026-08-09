#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "payment_provider_registration_dto.h"


char* payment_provider_registration_dto_credential_mode_ToString(paymentsservice_payment_provider_registration_dto_CREDENTIALMODE_e credential_mode) {
    char* credential_modeArray[] =  { "NULL", "TenantManaged", "PlatformManaged", "ExternalReference" };
    return credential_modeArray[credential_mode];
}

paymentsservice_payment_provider_registration_dto_CREDENTIALMODE_e payment_provider_registration_dto_credential_mode_FromString(char* credential_mode){
    int stringToReturn = 0;
    char *credential_modeArray[] =  { "NULL", "TenantManaged", "PlatformManaged", "ExternalReference" };
    size_t sizeofArray = sizeof(credential_modeArray) / sizeof(credential_modeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(credential_mode, credential_modeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* payment_provider_registration_dto_enabled_capabilities_ToString(paymentsservice_payment_provider_registration_dto_ENABLEDCAPABILITIES_e enabled_capabilities) {
    char* enabled_capabilitiesArray[] =  { "NULL", "None", "Collection", "Authorization", "Capture", "Refund", "Void", "SplitPayment", "Transfer", "Payout", "RecipientOnboarding", "BalanceInquiry" };
    return enabled_capabilitiesArray[enabled_capabilities];
}

paymentsservice_payment_provider_registration_dto_ENABLEDCAPABILITIES_e payment_provider_registration_dto_enabled_capabilities_FromString(char* enabled_capabilities){
    int stringToReturn = 0;
    char *enabled_capabilitiesArray[] =  { "NULL", "None", "Collection", "Authorization", "Capture", "Refund", "Void", "SplitPayment", "Transfer", "Payout", "RecipientOnboarding", "BalanceInquiry" };
    size_t sizeofArray = sizeof(enabled_capabilitiesArray) / sizeof(enabled_capabilitiesArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(enabled_capabilities, enabled_capabilitiesArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* payment_provider_registration_dto_status_ToString(paymentsservice_payment_provider_registration_dto_STATUS_e status) {
    char* statusArray[] =  { "NULL", "Draft", "Active", "Disabled", "Suspended" };
    return statusArray[status];
}

paymentsservice_payment_provider_registration_dto_STATUS_e payment_provider_registration_dto_status_FromString(char* status){
    int stringToReturn = 0;
    char *statusArray[] =  { "NULL", "Draft", "Active", "Disabled", "Suspended" };
    size_t sizeofArray = sizeof(statusArray) / sizeof(statusArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(status, statusArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

payment_provider_registration_dto_t *payment_provider_registration_dto_create(
    char *id,
    char *created_at_utc,
    char *last_modified_utc,
    char *tenant_id,
    char *enrollment_id,
    char *provider_code,
    char *credential_set_reference,
    int has_credential,
    paymentsservice_payment_provider_registration_dto_CREDENTIALMODE_e credential_mode,
    char *external_account_id,
    paymentsservice_payment_provider_registration_dto_ENABLEDCAPABILITIES_e enabled_capabilities,
    paymentsservice_payment_provider_registration_dto_STATUS_e status
    ) {
    payment_provider_registration_dto_t *payment_provider_registration_dto_local_var = malloc(sizeof(payment_provider_registration_dto_t));
    if (!payment_provider_registration_dto_local_var) {
        return NULL;
    }
    payment_provider_registration_dto_local_var->id = id;
    payment_provider_registration_dto_local_var->created_at_utc = created_at_utc;
    payment_provider_registration_dto_local_var->last_modified_utc = last_modified_utc;
    payment_provider_registration_dto_local_var->tenant_id = tenant_id;
    payment_provider_registration_dto_local_var->enrollment_id = enrollment_id;
    payment_provider_registration_dto_local_var->provider_code = provider_code;
    payment_provider_registration_dto_local_var->credential_set_reference = credential_set_reference;
    payment_provider_registration_dto_local_var->has_credential = has_credential;
    payment_provider_registration_dto_local_var->credential_mode = credential_mode;
    payment_provider_registration_dto_local_var->external_account_id = external_account_id;
    payment_provider_registration_dto_local_var->enabled_capabilities = enabled_capabilities;
    payment_provider_registration_dto_local_var->status = status;

    return payment_provider_registration_dto_local_var;
}


void payment_provider_registration_dto_free(payment_provider_registration_dto_t *payment_provider_registration_dto) {
    if(NULL == payment_provider_registration_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (payment_provider_registration_dto->id) {
        free(payment_provider_registration_dto->id);
        payment_provider_registration_dto->id = NULL;
    }
    if (payment_provider_registration_dto->created_at_utc) {
        free(payment_provider_registration_dto->created_at_utc);
        payment_provider_registration_dto->created_at_utc = NULL;
    }
    if (payment_provider_registration_dto->last_modified_utc) {
        free(payment_provider_registration_dto->last_modified_utc);
        payment_provider_registration_dto->last_modified_utc = NULL;
    }
    if (payment_provider_registration_dto->tenant_id) {
        free(payment_provider_registration_dto->tenant_id);
        payment_provider_registration_dto->tenant_id = NULL;
    }
    if (payment_provider_registration_dto->enrollment_id) {
        free(payment_provider_registration_dto->enrollment_id);
        payment_provider_registration_dto->enrollment_id = NULL;
    }
    if (payment_provider_registration_dto->provider_code) {
        free(payment_provider_registration_dto->provider_code);
        payment_provider_registration_dto->provider_code = NULL;
    }
    if (payment_provider_registration_dto->credential_set_reference) {
        free(payment_provider_registration_dto->credential_set_reference);
        payment_provider_registration_dto->credential_set_reference = NULL;
    }
    if (payment_provider_registration_dto->external_account_id) {
        free(payment_provider_registration_dto->external_account_id);
        payment_provider_registration_dto->external_account_id = NULL;
    }
    free(payment_provider_registration_dto);
}

cJSON *payment_provider_registration_dto_convertToJSON(payment_provider_registration_dto_t *payment_provider_registration_dto) {
    cJSON *item = cJSON_CreateObject();

    // payment_provider_registration_dto->id
    if(payment_provider_registration_dto->id) {
    if(cJSON_AddStringToObject(item, "id", payment_provider_registration_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // payment_provider_registration_dto->created_at_utc
    if(payment_provider_registration_dto->created_at_utc) {
    if(cJSON_AddStringToObject(item, "createdAtUtc", payment_provider_registration_dto->created_at_utc) == NULL) {
    goto fail; //Date-Time
    }
    }


    // payment_provider_registration_dto->last_modified_utc
    if(payment_provider_registration_dto->last_modified_utc) {
    if(cJSON_AddStringToObject(item, "lastModifiedUtc", payment_provider_registration_dto->last_modified_utc) == NULL) {
    goto fail; //Date-Time
    }
    }


    // payment_provider_registration_dto->tenant_id
    if(payment_provider_registration_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", payment_provider_registration_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // payment_provider_registration_dto->enrollment_id
    if(payment_provider_registration_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", payment_provider_registration_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // payment_provider_registration_dto->provider_code
    if(payment_provider_registration_dto->provider_code) {
    if(cJSON_AddStringToObject(item, "providerCode", payment_provider_registration_dto->provider_code) == NULL) {
    goto fail; //String
    }
    }


    // payment_provider_registration_dto->credential_set_reference
    if(payment_provider_registration_dto->credential_set_reference) {
    if(cJSON_AddStringToObject(item, "credentialSetReference", payment_provider_registration_dto->credential_set_reference) == NULL) {
    goto fail; //String
    }
    }


    // payment_provider_registration_dto->has_credential
    if(payment_provider_registration_dto->has_credential) {
    if(cJSON_AddBoolToObject(item, "hasCredential", payment_provider_registration_dto->has_credential) == NULL) {
    goto fail; //Bool
    }
    }


    // payment_provider_registration_dto->credential_mode
    if(payment_provider_registration_dto->credential_mode != paymentsservice_payment_provider_registration_dto_CREDENTIALMODE_NULL) {
    if(cJSON_AddStringToObject(item, "credentialMode", credential_modepayment_provider_registration_dto_ToString(payment_provider_registration_dto->credential_mode)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // payment_provider_registration_dto->external_account_id
    if(payment_provider_registration_dto->external_account_id) {
    if(cJSON_AddStringToObject(item, "externalAccountId", payment_provider_registration_dto->external_account_id) == NULL) {
    goto fail; //String
    }
    }


    // payment_provider_registration_dto->enabled_capabilities
    if(payment_provider_registration_dto->enabled_capabilities != paymentsservice_payment_provider_registration_dto_ENABLEDCAPABILITIES_NULL) {
    if(cJSON_AddStringToObject(item, "enabledCapabilities", enabled_capabilitiespayment_provider_registration_dto_ToString(payment_provider_registration_dto->enabled_capabilities)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // payment_provider_registration_dto->status
    if(payment_provider_registration_dto->status != paymentsservice_payment_provider_registration_dto_STATUS_NULL) {
    if(cJSON_AddStringToObject(item, "status", statuspayment_provider_registration_dto_ToString(payment_provider_registration_dto->status)) == NULL)
    {
    goto fail; //Enum
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

payment_provider_registration_dto_t *payment_provider_registration_dto_parseFromJSON(cJSON *payment_provider_registration_dtoJSON){

    payment_provider_registration_dto_t *payment_provider_registration_dto_local_var = NULL;

    // payment_provider_registration_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(payment_provider_registration_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // payment_provider_registration_dto->created_at_utc
    cJSON *created_at_utc = cJSON_GetObjectItemCaseSensitive(payment_provider_registration_dtoJSON, "createdAtUtc");
    if (created_at_utc) { 
    if(!cJSON_IsString(created_at_utc) && !cJSON_IsNull(created_at_utc))
    {
    goto end; //DateTime
    }
    }

    // payment_provider_registration_dto->last_modified_utc
    cJSON *last_modified_utc = cJSON_GetObjectItemCaseSensitive(payment_provider_registration_dtoJSON, "lastModifiedUtc");
    if (last_modified_utc) { 
    if(!cJSON_IsString(last_modified_utc) && !cJSON_IsNull(last_modified_utc))
    {
    goto end; //DateTime
    }
    }

    // payment_provider_registration_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(payment_provider_registration_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // payment_provider_registration_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(payment_provider_registration_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // payment_provider_registration_dto->provider_code
    cJSON *provider_code = cJSON_GetObjectItemCaseSensitive(payment_provider_registration_dtoJSON, "providerCode");
    if (provider_code) { 
    if(!cJSON_IsString(provider_code) && !cJSON_IsNull(provider_code))
    {
    goto end; //String
    }
    }

    // payment_provider_registration_dto->credential_set_reference
    cJSON *credential_set_reference = cJSON_GetObjectItemCaseSensitive(payment_provider_registration_dtoJSON, "credentialSetReference");
    if (credential_set_reference) { 
    if(!cJSON_IsString(credential_set_reference) && !cJSON_IsNull(credential_set_reference))
    {
    goto end; //String
    }
    }

    // payment_provider_registration_dto->has_credential
    cJSON *has_credential = cJSON_GetObjectItemCaseSensitive(payment_provider_registration_dtoJSON, "hasCredential");
    if (has_credential) { 
    if(!cJSON_IsBool(has_credential))
    {
    goto end; //Bool
    }
    }

    // payment_provider_registration_dto->credential_mode
    cJSON *credential_mode = cJSON_GetObjectItemCaseSensitive(payment_provider_registration_dtoJSON, "credentialMode");
    paymentsservice_payment_provider_registration_dto_CREDENTIALMODE_e credential_modeVariable;
    if (credential_mode) { 
    if(!cJSON_IsString(credential_mode))
    {
    goto end; //Enum
    }
    credential_modeVariable = payment_provider_registration_dto_credential_mode_FromString(credential_mode->valuestring);
    }

    // payment_provider_registration_dto->external_account_id
    cJSON *external_account_id = cJSON_GetObjectItemCaseSensitive(payment_provider_registration_dtoJSON, "externalAccountId");
    if (external_account_id) { 
    if(!cJSON_IsString(external_account_id) && !cJSON_IsNull(external_account_id))
    {
    goto end; //String
    }
    }

    // payment_provider_registration_dto->enabled_capabilities
    cJSON *enabled_capabilities = cJSON_GetObjectItemCaseSensitive(payment_provider_registration_dtoJSON, "enabledCapabilities");
    paymentsservice_payment_provider_registration_dto_ENABLEDCAPABILITIES_e enabled_capabilitiesVariable;
    if (enabled_capabilities) { 
    if(!cJSON_IsString(enabled_capabilities))
    {
    goto end; //Enum
    }
    enabled_capabilitiesVariable = payment_provider_registration_dto_enabled_capabilities_FromString(enabled_capabilities->valuestring);
    }

    // payment_provider_registration_dto->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(payment_provider_registration_dtoJSON, "status");
    paymentsservice_payment_provider_registration_dto_STATUS_e statusVariable;
    if (status) { 
    if(!cJSON_IsString(status))
    {
    goto end; //Enum
    }
    statusVariable = payment_provider_registration_dto_status_FromString(status->valuestring);
    }


    payment_provider_registration_dto_local_var = payment_provider_registration_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        created_at_utc && !cJSON_IsNull(created_at_utc) ? strdup(created_at_utc->valuestring) : NULL,
        last_modified_utc && !cJSON_IsNull(last_modified_utc) ? strdup(last_modified_utc->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        provider_code && !cJSON_IsNull(provider_code) ? strdup(provider_code->valuestring) : NULL,
        credential_set_reference && !cJSON_IsNull(credential_set_reference) ? strdup(credential_set_reference->valuestring) : NULL,
        has_credential ? has_credential->valueint : 0,
        credential_mode ? credential_modeVariable : paymentsservice_payment_provider_registration_dto_CREDENTIALMODE_NULL,
        external_account_id && !cJSON_IsNull(external_account_id) ? strdup(external_account_id->valuestring) : NULL,
        enabled_capabilities ? enabled_capabilitiesVariable : paymentsservice_payment_provider_registration_dto_ENABLEDCAPABILITIES_NULL,
        status ? statusVariable : paymentsservice_payment_provider_registration_dto_STATUS_NULL
        );

    return payment_provider_registration_dto_local_var;
end:
    return NULL;

}
