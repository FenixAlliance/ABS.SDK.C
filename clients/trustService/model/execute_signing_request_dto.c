#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "execute_signing_request_dto.h"



execute_signing_request_dto_t *execute_signing_request_dto_create(
    char *provider_name,
    char *provider_mode,
    char *signing_profile_id,
    char *signing_certificate_id
    ) {
    execute_signing_request_dto_t *execute_signing_request_dto_local_var = malloc(sizeof(execute_signing_request_dto_t));
    if (!execute_signing_request_dto_local_var) {
        return NULL;
    }
    execute_signing_request_dto_local_var->provider_name = provider_name;
    execute_signing_request_dto_local_var->provider_mode = provider_mode;
    execute_signing_request_dto_local_var->signing_profile_id = signing_profile_id;
    execute_signing_request_dto_local_var->signing_certificate_id = signing_certificate_id;

    return execute_signing_request_dto_local_var;
}


void execute_signing_request_dto_free(execute_signing_request_dto_t *execute_signing_request_dto) {
    if(NULL == execute_signing_request_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (execute_signing_request_dto->provider_name) {
        free(execute_signing_request_dto->provider_name);
        execute_signing_request_dto->provider_name = NULL;
    }
    if (execute_signing_request_dto->provider_mode) {
        free(execute_signing_request_dto->provider_mode);
        execute_signing_request_dto->provider_mode = NULL;
    }
    if (execute_signing_request_dto->signing_profile_id) {
        free(execute_signing_request_dto->signing_profile_id);
        execute_signing_request_dto->signing_profile_id = NULL;
    }
    if (execute_signing_request_dto->signing_certificate_id) {
        free(execute_signing_request_dto->signing_certificate_id);
        execute_signing_request_dto->signing_certificate_id = NULL;
    }
    free(execute_signing_request_dto);
}

cJSON *execute_signing_request_dto_convertToJSON(execute_signing_request_dto_t *execute_signing_request_dto) {
    cJSON *item = cJSON_CreateObject();

    // execute_signing_request_dto->provider_name
    if (!execute_signing_request_dto->provider_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "providerName", execute_signing_request_dto->provider_name) == NULL) {
    goto fail; //String
    }


    // execute_signing_request_dto->provider_mode
    if(execute_signing_request_dto->provider_mode) {
    if(cJSON_AddStringToObject(item, "providerMode", execute_signing_request_dto->provider_mode) == NULL) {
    goto fail; //String
    }
    }


    // execute_signing_request_dto->signing_profile_id
    if(execute_signing_request_dto->signing_profile_id) {
    if(cJSON_AddStringToObject(item, "signingProfileId", execute_signing_request_dto->signing_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // execute_signing_request_dto->signing_certificate_id
    if(execute_signing_request_dto->signing_certificate_id) {
    if(cJSON_AddStringToObject(item, "signingCertificateId", execute_signing_request_dto->signing_certificate_id) == NULL) {
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

execute_signing_request_dto_t *execute_signing_request_dto_parseFromJSON(cJSON *execute_signing_request_dtoJSON){

    execute_signing_request_dto_t *execute_signing_request_dto_local_var = NULL;

    // execute_signing_request_dto->provider_name
    cJSON *provider_name = cJSON_GetObjectItemCaseSensitive(execute_signing_request_dtoJSON, "providerName");
    if (!provider_name) {
        goto end;
    }

    
    if(!cJSON_IsString(provider_name))
    {
    goto end; //String
    }

    // execute_signing_request_dto->provider_mode
    cJSON *provider_mode = cJSON_GetObjectItemCaseSensitive(execute_signing_request_dtoJSON, "providerMode");
    if (provider_mode) { 
    if(!cJSON_IsString(provider_mode) && !cJSON_IsNull(provider_mode))
    {
    goto end; //String
    }
    }

    // execute_signing_request_dto->signing_profile_id
    cJSON *signing_profile_id = cJSON_GetObjectItemCaseSensitive(execute_signing_request_dtoJSON, "signingProfileId");
    if (signing_profile_id) { 
    if(!cJSON_IsString(signing_profile_id) && !cJSON_IsNull(signing_profile_id))
    {
    goto end; //String
    }
    }

    // execute_signing_request_dto->signing_certificate_id
    cJSON *signing_certificate_id = cJSON_GetObjectItemCaseSensitive(execute_signing_request_dtoJSON, "signingCertificateId");
    if (signing_certificate_id) { 
    if(!cJSON_IsString(signing_certificate_id) && !cJSON_IsNull(signing_certificate_id))
    {
    goto end; //String
    }
    }


    execute_signing_request_dto_local_var = execute_signing_request_dto_create (
        strdup(provider_name->valuestring),
        provider_mode && !cJSON_IsNull(provider_mode) ? strdup(provider_mode->valuestring) : NULL,
        signing_profile_id && !cJSON_IsNull(signing_profile_id) ? strdup(signing_profile_id->valuestring) : NULL,
        signing_certificate_id && !cJSON_IsNull(signing_certificate_id) ? strdup(signing_certificate_id->valuestring) : NULL
        );

    return execute_signing_request_dto_local_var;
end:
    return NULL;

}
