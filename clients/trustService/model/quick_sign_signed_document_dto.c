#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "quick_sign_signed_document_dto.h"



quick_sign_signed_document_dto_t *quick_sign_signed_document_dto_create(
    char *provider_name,
    char *signing_certificate_id,
    char *signing_profile_id
    ) {
    quick_sign_signed_document_dto_t *quick_sign_signed_document_dto_local_var = malloc(sizeof(quick_sign_signed_document_dto_t));
    if (!quick_sign_signed_document_dto_local_var) {
        return NULL;
    }
    quick_sign_signed_document_dto_local_var->provider_name = provider_name;
    quick_sign_signed_document_dto_local_var->signing_certificate_id = signing_certificate_id;
    quick_sign_signed_document_dto_local_var->signing_profile_id = signing_profile_id;

    return quick_sign_signed_document_dto_local_var;
}


void quick_sign_signed_document_dto_free(quick_sign_signed_document_dto_t *quick_sign_signed_document_dto) {
    if(NULL == quick_sign_signed_document_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (quick_sign_signed_document_dto->provider_name) {
        free(quick_sign_signed_document_dto->provider_name);
        quick_sign_signed_document_dto->provider_name = NULL;
    }
    if (quick_sign_signed_document_dto->signing_certificate_id) {
        free(quick_sign_signed_document_dto->signing_certificate_id);
        quick_sign_signed_document_dto->signing_certificate_id = NULL;
    }
    if (quick_sign_signed_document_dto->signing_profile_id) {
        free(quick_sign_signed_document_dto->signing_profile_id);
        quick_sign_signed_document_dto->signing_profile_id = NULL;
    }
    free(quick_sign_signed_document_dto);
}

cJSON *quick_sign_signed_document_dto_convertToJSON(quick_sign_signed_document_dto_t *quick_sign_signed_document_dto) {
    cJSON *item = cJSON_CreateObject();

    // quick_sign_signed_document_dto->provider_name
    if (!quick_sign_signed_document_dto->provider_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "providerName", quick_sign_signed_document_dto->provider_name) == NULL) {
    goto fail; //String
    }


    // quick_sign_signed_document_dto->signing_certificate_id
    if (!quick_sign_signed_document_dto->signing_certificate_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "signingCertificateId", quick_sign_signed_document_dto->signing_certificate_id) == NULL) {
    goto fail; //String
    }


    // quick_sign_signed_document_dto->signing_profile_id
    if(quick_sign_signed_document_dto->signing_profile_id) {
    if(cJSON_AddStringToObject(item, "signingProfileId", quick_sign_signed_document_dto->signing_profile_id) == NULL) {
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

quick_sign_signed_document_dto_t *quick_sign_signed_document_dto_parseFromJSON(cJSON *quick_sign_signed_document_dtoJSON){

    quick_sign_signed_document_dto_t *quick_sign_signed_document_dto_local_var = NULL;

    // quick_sign_signed_document_dto->provider_name
    cJSON *provider_name = cJSON_GetObjectItemCaseSensitive(quick_sign_signed_document_dtoJSON, "providerName");
    if (!provider_name) {
        goto end;
    }

    
    if(!cJSON_IsString(provider_name))
    {
    goto end; //String
    }

    // quick_sign_signed_document_dto->signing_certificate_id
    cJSON *signing_certificate_id = cJSON_GetObjectItemCaseSensitive(quick_sign_signed_document_dtoJSON, "signingCertificateId");
    if (!signing_certificate_id) {
        goto end;
    }

    
    if(!cJSON_IsString(signing_certificate_id))
    {
    goto end; //String
    }

    // quick_sign_signed_document_dto->signing_profile_id
    cJSON *signing_profile_id = cJSON_GetObjectItemCaseSensitive(quick_sign_signed_document_dtoJSON, "signingProfileId");
    if (signing_profile_id) { 
    if(!cJSON_IsString(signing_profile_id) && !cJSON_IsNull(signing_profile_id))
    {
    goto end; //String
    }
    }


    quick_sign_signed_document_dto_local_var = quick_sign_signed_document_dto_create (
        strdup(provider_name->valuestring),
        strdup(signing_certificate_id->valuestring),
        signing_profile_id && !cJSON_IsNull(signing_profile_id) ? strdup(signing_profile_id->valuestring) : NULL
        );

    return quick_sign_signed_document_dto_local_var;
end:
    return NULL;

}
