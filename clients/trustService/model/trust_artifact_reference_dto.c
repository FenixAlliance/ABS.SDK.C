#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "trust_artifact_reference_dto.h"



trust_artifact_reference_dto_t *trust_artifact_reference_dto_create(
    char *storage_object_id,
    char *storage_key,
    char *storage_provider_key,
    char *sha256,
    char *content_type,
    long length,
    char *mutability
    ) {
    trust_artifact_reference_dto_t *trust_artifact_reference_dto_local_var = malloc(sizeof(trust_artifact_reference_dto_t));
    if (!trust_artifact_reference_dto_local_var) {
        return NULL;
    }
    trust_artifact_reference_dto_local_var->storage_object_id = storage_object_id;
    trust_artifact_reference_dto_local_var->storage_key = storage_key;
    trust_artifact_reference_dto_local_var->storage_provider_key = storage_provider_key;
    trust_artifact_reference_dto_local_var->sha256 = sha256;
    trust_artifact_reference_dto_local_var->content_type = content_type;
    trust_artifact_reference_dto_local_var->length = length;
    trust_artifact_reference_dto_local_var->mutability = mutability;

    return trust_artifact_reference_dto_local_var;
}


void trust_artifact_reference_dto_free(trust_artifact_reference_dto_t *trust_artifact_reference_dto) {
    if(NULL == trust_artifact_reference_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (trust_artifact_reference_dto->storage_object_id) {
        free(trust_artifact_reference_dto->storage_object_id);
        trust_artifact_reference_dto->storage_object_id = NULL;
    }
    if (trust_artifact_reference_dto->storage_key) {
        free(trust_artifact_reference_dto->storage_key);
        trust_artifact_reference_dto->storage_key = NULL;
    }
    if (trust_artifact_reference_dto->storage_provider_key) {
        free(trust_artifact_reference_dto->storage_provider_key);
        trust_artifact_reference_dto->storage_provider_key = NULL;
    }
    if (trust_artifact_reference_dto->sha256) {
        free(trust_artifact_reference_dto->sha256);
        trust_artifact_reference_dto->sha256 = NULL;
    }
    if (trust_artifact_reference_dto->content_type) {
        free(trust_artifact_reference_dto->content_type);
        trust_artifact_reference_dto->content_type = NULL;
    }
    if (trust_artifact_reference_dto->mutability) {
        free(trust_artifact_reference_dto->mutability);
        trust_artifact_reference_dto->mutability = NULL;
    }
    free(trust_artifact_reference_dto);
}

cJSON *trust_artifact_reference_dto_convertToJSON(trust_artifact_reference_dto_t *trust_artifact_reference_dto) {
    cJSON *item = cJSON_CreateObject();

    // trust_artifact_reference_dto->storage_object_id
    if(trust_artifact_reference_dto->storage_object_id) {
    if(cJSON_AddStringToObject(item, "storageObjectId", trust_artifact_reference_dto->storage_object_id) == NULL) {
    goto fail; //String
    }
    }


    // trust_artifact_reference_dto->storage_key
    if(trust_artifact_reference_dto->storage_key) {
    if(cJSON_AddStringToObject(item, "storageKey", trust_artifact_reference_dto->storage_key) == NULL) {
    goto fail; //String
    }
    }


    // trust_artifact_reference_dto->storage_provider_key
    if(trust_artifact_reference_dto->storage_provider_key) {
    if(cJSON_AddStringToObject(item, "storageProviderKey", trust_artifact_reference_dto->storage_provider_key) == NULL) {
    goto fail; //String
    }
    }


    // trust_artifact_reference_dto->sha256
    if(trust_artifact_reference_dto->sha256) {
    if(cJSON_AddStringToObject(item, "sha256", trust_artifact_reference_dto->sha256) == NULL) {
    goto fail; //String
    }
    }


    // trust_artifact_reference_dto->content_type
    if(trust_artifact_reference_dto->content_type) {
    if(cJSON_AddStringToObject(item, "contentType", trust_artifact_reference_dto->content_type) == NULL) {
    goto fail; //String
    }
    }


    // trust_artifact_reference_dto->length
    if(trust_artifact_reference_dto->length) {
    if(cJSON_AddNumberToObject(item, "length", trust_artifact_reference_dto->length) == NULL) {
    goto fail; //Numeric
    }
    }


    // trust_artifact_reference_dto->mutability
    if(trust_artifact_reference_dto->mutability) {
    if(cJSON_AddStringToObject(item, "mutability", trust_artifact_reference_dto->mutability) == NULL) {
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

trust_artifact_reference_dto_t *trust_artifact_reference_dto_parseFromJSON(cJSON *trust_artifact_reference_dtoJSON){

    trust_artifact_reference_dto_t *trust_artifact_reference_dto_local_var = NULL;

    // trust_artifact_reference_dto->storage_object_id
    cJSON *storage_object_id = cJSON_GetObjectItemCaseSensitive(trust_artifact_reference_dtoJSON, "storageObjectId");
    if (storage_object_id) { 
    if(!cJSON_IsString(storage_object_id) && !cJSON_IsNull(storage_object_id))
    {
    goto end; //String
    }
    }

    // trust_artifact_reference_dto->storage_key
    cJSON *storage_key = cJSON_GetObjectItemCaseSensitive(trust_artifact_reference_dtoJSON, "storageKey");
    if (storage_key) { 
    if(!cJSON_IsString(storage_key) && !cJSON_IsNull(storage_key))
    {
    goto end; //String
    }
    }

    // trust_artifact_reference_dto->storage_provider_key
    cJSON *storage_provider_key = cJSON_GetObjectItemCaseSensitive(trust_artifact_reference_dtoJSON, "storageProviderKey");
    if (storage_provider_key) { 
    if(!cJSON_IsString(storage_provider_key) && !cJSON_IsNull(storage_provider_key))
    {
    goto end; //String
    }
    }

    // trust_artifact_reference_dto->sha256
    cJSON *sha256 = cJSON_GetObjectItemCaseSensitive(trust_artifact_reference_dtoJSON, "sha256");
    if (sha256) { 
    if(!cJSON_IsString(sha256) && !cJSON_IsNull(sha256))
    {
    goto end; //String
    }
    }

    // trust_artifact_reference_dto->content_type
    cJSON *content_type = cJSON_GetObjectItemCaseSensitive(trust_artifact_reference_dtoJSON, "contentType");
    if (content_type) { 
    if(!cJSON_IsString(content_type) && !cJSON_IsNull(content_type))
    {
    goto end; //String
    }
    }

    // trust_artifact_reference_dto->length
    cJSON *length = cJSON_GetObjectItemCaseSensitive(trust_artifact_reference_dtoJSON, "length");
    if (length) { 
    if(!cJSON_IsNumber(length))
    {
    goto end; //Numeric
    }
    }

    // trust_artifact_reference_dto->mutability
    cJSON *mutability = cJSON_GetObjectItemCaseSensitive(trust_artifact_reference_dtoJSON, "mutability");
    if (mutability) { 
    if(!cJSON_IsString(mutability) && !cJSON_IsNull(mutability))
    {
    goto end; //String
    }
    }


    trust_artifact_reference_dto_local_var = trust_artifact_reference_dto_create (
        storage_object_id && !cJSON_IsNull(storage_object_id) ? strdup(storage_object_id->valuestring) : NULL,
        storage_key && !cJSON_IsNull(storage_key) ? strdup(storage_key->valuestring) : NULL,
        storage_provider_key && !cJSON_IsNull(storage_provider_key) ? strdup(storage_provider_key->valuestring) : NULL,
        sha256 && !cJSON_IsNull(sha256) ? strdup(sha256->valuestring) : NULL,
        content_type && !cJSON_IsNull(content_type) ? strdup(content_type->valuestring) : NULL,
        length ? length->valuedouble : 0,
        mutability && !cJSON_IsNull(mutability) ? strdup(mutability->valuestring) : NULL
        );

    return trust_artifact_reference_dto_local_var;
end:
    return NULL;

}
