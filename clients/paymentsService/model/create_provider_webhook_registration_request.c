#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "create_provider_webhook_registration_request.h"


char* create_provider_webhook_registration_request_credential_mode_ToString(paymentsservice_create_provider_webhook_registration_request_CREDENTIALMODE_e credential_mode) {
    char* credential_modeArray[] =  { "NULL", "TenantManaged", "PlatformManaged", "ExternalReference" };
    return credential_modeArray[credential_mode];
}

paymentsservice_create_provider_webhook_registration_request_CREDENTIALMODE_e create_provider_webhook_registration_request_credential_mode_FromString(char* credential_mode){
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

create_provider_webhook_registration_request_t *create_provider_webhook_registration_request_create(
    char *provider_code,
    char *external_account_id,
    char *webhook_signing_secret,
    paymentsservice_create_provider_webhook_registration_request_CREDENTIALMODE_e credential_mode
    ) {
    create_provider_webhook_registration_request_t *create_provider_webhook_registration_request_local_var = malloc(sizeof(create_provider_webhook_registration_request_t));
    if (!create_provider_webhook_registration_request_local_var) {
        return NULL;
    }
    create_provider_webhook_registration_request_local_var->provider_code = provider_code;
    create_provider_webhook_registration_request_local_var->external_account_id = external_account_id;
    create_provider_webhook_registration_request_local_var->webhook_signing_secret = webhook_signing_secret;
    create_provider_webhook_registration_request_local_var->credential_mode = credential_mode;

    return create_provider_webhook_registration_request_local_var;
}


void create_provider_webhook_registration_request_free(create_provider_webhook_registration_request_t *create_provider_webhook_registration_request) {
    if(NULL == create_provider_webhook_registration_request){
        return ;
    }
    listEntry_t *listEntry;
    if (create_provider_webhook_registration_request->provider_code) {
        free(create_provider_webhook_registration_request->provider_code);
        create_provider_webhook_registration_request->provider_code = NULL;
    }
    if (create_provider_webhook_registration_request->external_account_id) {
        free(create_provider_webhook_registration_request->external_account_id);
        create_provider_webhook_registration_request->external_account_id = NULL;
    }
    if (create_provider_webhook_registration_request->webhook_signing_secret) {
        free(create_provider_webhook_registration_request->webhook_signing_secret);
        create_provider_webhook_registration_request->webhook_signing_secret = NULL;
    }
    free(create_provider_webhook_registration_request);
}

cJSON *create_provider_webhook_registration_request_convertToJSON(create_provider_webhook_registration_request_t *create_provider_webhook_registration_request) {
    cJSON *item = cJSON_CreateObject();

    // create_provider_webhook_registration_request->provider_code
    if(create_provider_webhook_registration_request->provider_code) {
    if(cJSON_AddStringToObject(item, "providerCode", create_provider_webhook_registration_request->provider_code) == NULL) {
    goto fail; //String
    }
    }


    // create_provider_webhook_registration_request->external_account_id
    if(create_provider_webhook_registration_request->external_account_id) {
    if(cJSON_AddStringToObject(item, "externalAccountId", create_provider_webhook_registration_request->external_account_id) == NULL) {
    goto fail; //String
    }
    }


    // create_provider_webhook_registration_request->webhook_signing_secret
    if(create_provider_webhook_registration_request->webhook_signing_secret) {
    if(cJSON_AddStringToObject(item, "webhookSigningSecret", create_provider_webhook_registration_request->webhook_signing_secret) == NULL) {
    goto fail; //String
    }
    }


    // create_provider_webhook_registration_request->credential_mode
    if(create_provider_webhook_registration_request->credential_mode != paymentsservice_create_provider_webhook_registration_request_CREDENTIALMODE_NULL) {
    if(cJSON_AddStringToObject(item, "credentialMode", credential_modecreate_provider_webhook_registration_request_ToString(create_provider_webhook_registration_request->credential_mode)) == NULL)
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

create_provider_webhook_registration_request_t *create_provider_webhook_registration_request_parseFromJSON(cJSON *create_provider_webhook_registration_requestJSON){

    create_provider_webhook_registration_request_t *create_provider_webhook_registration_request_local_var = NULL;

    // create_provider_webhook_registration_request->provider_code
    cJSON *provider_code = cJSON_GetObjectItemCaseSensitive(create_provider_webhook_registration_requestJSON, "providerCode");
    if (provider_code) { 
    if(!cJSON_IsString(provider_code) && !cJSON_IsNull(provider_code))
    {
    goto end; //String
    }
    }

    // create_provider_webhook_registration_request->external_account_id
    cJSON *external_account_id = cJSON_GetObjectItemCaseSensitive(create_provider_webhook_registration_requestJSON, "externalAccountId");
    if (external_account_id) { 
    if(!cJSON_IsString(external_account_id) && !cJSON_IsNull(external_account_id))
    {
    goto end; //String
    }
    }

    // create_provider_webhook_registration_request->webhook_signing_secret
    cJSON *webhook_signing_secret = cJSON_GetObjectItemCaseSensitive(create_provider_webhook_registration_requestJSON, "webhookSigningSecret");
    if (webhook_signing_secret) { 
    if(!cJSON_IsString(webhook_signing_secret) && !cJSON_IsNull(webhook_signing_secret))
    {
    goto end; //String
    }
    }

    // create_provider_webhook_registration_request->credential_mode
    cJSON *credential_mode = cJSON_GetObjectItemCaseSensitive(create_provider_webhook_registration_requestJSON, "credentialMode");
    paymentsservice_create_provider_webhook_registration_request_CREDENTIALMODE_e credential_modeVariable;
    if (credential_mode) { 
    if(!cJSON_IsString(credential_mode))
    {
    goto end; //Enum
    }
    credential_modeVariable = create_provider_webhook_registration_request_credential_mode_FromString(credential_mode->valuestring);
    }


    create_provider_webhook_registration_request_local_var = create_provider_webhook_registration_request_create (
        provider_code && !cJSON_IsNull(provider_code) ? strdup(provider_code->valuestring) : NULL,
        external_account_id && !cJSON_IsNull(external_account_id) ? strdup(external_account_id->valuestring) : NULL,
        webhook_signing_secret && !cJSON_IsNull(webhook_signing_secret) ? strdup(webhook_signing_secret->valuestring) : NULL,
        credential_mode ? credential_modeVariable : paymentsservice_create_provider_webhook_registration_request_CREDENTIALMODE_NULL
        );

    return create_provider_webhook_registration_request_local_var;
end:
    return NULL;

}
