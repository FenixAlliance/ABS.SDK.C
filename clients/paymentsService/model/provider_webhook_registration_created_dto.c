#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "provider_webhook_registration_created_dto.h"


char* provider_webhook_registration_created_dto_status_ToString(paymentsservice_provider_webhook_registration_created_dto_STATUS_e status) {
    char* statusArray[] =  { "NULL", "Draft", "Active", "Disabled", "Suspended" };
    return statusArray[status];
}

paymentsservice_provider_webhook_registration_created_dto_STATUS_e provider_webhook_registration_created_dto_status_FromString(char* status){
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

provider_webhook_registration_created_dto_t *provider_webhook_registration_created_dto_create(
    char *id,
    char *provider_code,
    paymentsservice_provider_webhook_registration_created_dto_STATUS_e status,
    char *webhook_registration_key,
    char *webhook_url
    ) {
    provider_webhook_registration_created_dto_t *provider_webhook_registration_created_dto_local_var = malloc(sizeof(provider_webhook_registration_created_dto_t));
    if (!provider_webhook_registration_created_dto_local_var) {
        return NULL;
    }
    provider_webhook_registration_created_dto_local_var->id = id;
    provider_webhook_registration_created_dto_local_var->provider_code = provider_code;
    provider_webhook_registration_created_dto_local_var->status = status;
    provider_webhook_registration_created_dto_local_var->webhook_registration_key = webhook_registration_key;
    provider_webhook_registration_created_dto_local_var->webhook_url = webhook_url;

    return provider_webhook_registration_created_dto_local_var;
}


void provider_webhook_registration_created_dto_free(provider_webhook_registration_created_dto_t *provider_webhook_registration_created_dto) {
    if(NULL == provider_webhook_registration_created_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (provider_webhook_registration_created_dto->id) {
        free(provider_webhook_registration_created_dto->id);
        provider_webhook_registration_created_dto->id = NULL;
    }
    if (provider_webhook_registration_created_dto->provider_code) {
        free(provider_webhook_registration_created_dto->provider_code);
        provider_webhook_registration_created_dto->provider_code = NULL;
    }
    if (provider_webhook_registration_created_dto->webhook_registration_key) {
        free(provider_webhook_registration_created_dto->webhook_registration_key);
        provider_webhook_registration_created_dto->webhook_registration_key = NULL;
    }
    if (provider_webhook_registration_created_dto->webhook_url) {
        free(provider_webhook_registration_created_dto->webhook_url);
        provider_webhook_registration_created_dto->webhook_url = NULL;
    }
    free(provider_webhook_registration_created_dto);
}

cJSON *provider_webhook_registration_created_dto_convertToJSON(provider_webhook_registration_created_dto_t *provider_webhook_registration_created_dto) {
    cJSON *item = cJSON_CreateObject();

    // provider_webhook_registration_created_dto->id
    if(provider_webhook_registration_created_dto->id) {
    if(cJSON_AddStringToObject(item, "id", provider_webhook_registration_created_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // provider_webhook_registration_created_dto->provider_code
    if(provider_webhook_registration_created_dto->provider_code) {
    if(cJSON_AddStringToObject(item, "providerCode", provider_webhook_registration_created_dto->provider_code) == NULL) {
    goto fail; //String
    }
    }


    // provider_webhook_registration_created_dto->status
    if(provider_webhook_registration_created_dto->status != paymentsservice_provider_webhook_registration_created_dto_STATUS_NULL) {
    if(cJSON_AddStringToObject(item, "status", statusprovider_webhook_registration_created_dto_ToString(provider_webhook_registration_created_dto->status)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // provider_webhook_registration_created_dto->webhook_registration_key
    if(provider_webhook_registration_created_dto->webhook_registration_key) {
    if(cJSON_AddStringToObject(item, "webhookRegistrationKey", provider_webhook_registration_created_dto->webhook_registration_key) == NULL) {
    goto fail; //String
    }
    }


    // provider_webhook_registration_created_dto->webhook_url
    if(provider_webhook_registration_created_dto->webhook_url) {
    if(cJSON_AddStringToObject(item, "webhookUrl", provider_webhook_registration_created_dto->webhook_url) == NULL) {
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

provider_webhook_registration_created_dto_t *provider_webhook_registration_created_dto_parseFromJSON(cJSON *provider_webhook_registration_created_dtoJSON){

    provider_webhook_registration_created_dto_t *provider_webhook_registration_created_dto_local_var = NULL;

    // provider_webhook_registration_created_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(provider_webhook_registration_created_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // provider_webhook_registration_created_dto->provider_code
    cJSON *provider_code = cJSON_GetObjectItemCaseSensitive(provider_webhook_registration_created_dtoJSON, "providerCode");
    if (provider_code) { 
    if(!cJSON_IsString(provider_code) && !cJSON_IsNull(provider_code))
    {
    goto end; //String
    }
    }

    // provider_webhook_registration_created_dto->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(provider_webhook_registration_created_dtoJSON, "status");
    paymentsservice_provider_webhook_registration_created_dto_STATUS_e statusVariable;
    if (status) { 
    if(!cJSON_IsString(status))
    {
    goto end; //Enum
    }
    statusVariable = provider_webhook_registration_created_dto_status_FromString(status->valuestring);
    }

    // provider_webhook_registration_created_dto->webhook_registration_key
    cJSON *webhook_registration_key = cJSON_GetObjectItemCaseSensitive(provider_webhook_registration_created_dtoJSON, "webhookRegistrationKey");
    if (webhook_registration_key) { 
    if(!cJSON_IsString(webhook_registration_key) && !cJSON_IsNull(webhook_registration_key))
    {
    goto end; //String
    }
    }

    // provider_webhook_registration_created_dto->webhook_url
    cJSON *webhook_url = cJSON_GetObjectItemCaseSensitive(provider_webhook_registration_created_dtoJSON, "webhookUrl");
    if (webhook_url) { 
    if(!cJSON_IsString(webhook_url) && !cJSON_IsNull(webhook_url))
    {
    goto end; //String
    }
    }


    provider_webhook_registration_created_dto_local_var = provider_webhook_registration_created_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        provider_code && !cJSON_IsNull(provider_code) ? strdup(provider_code->valuestring) : NULL,
        status ? statusVariable : paymentsservice_provider_webhook_registration_created_dto_STATUS_NULL,
        webhook_registration_key && !cJSON_IsNull(webhook_registration_key) ? strdup(webhook_registration_key->valuestring) : NULL,
        webhook_url && !cJSON_IsNull(webhook_url) ? strdup(webhook_url->valuestring) : NULL
        );

    return provider_webhook_registration_created_dto_local_var;
end:
    return NULL;

}
