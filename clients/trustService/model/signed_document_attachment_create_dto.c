#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "signed_document_attachment_create_dto.h"


char* signed_document_attachment_create_dto_attachment_role_ToString(trustservice_signed_document_attachment_create_dto_ATTACHMENTROLE_e attachment_role) {
    char* attachment_roleArray[] =  { "NULL", "Unknown", "Source", "SupportingEvidence", "AuthorityResponse", "HumanReadablePdf", "XmlPayload", "ValidationReport", "Other" };
    return attachment_roleArray[attachment_role];
}

trustservice_signed_document_attachment_create_dto_ATTACHMENTROLE_e signed_document_attachment_create_dto_attachment_role_FromString(char* attachment_role){
    int stringToReturn = 0;
    char *attachment_roleArray[] =  { "NULL", "Unknown", "Source", "SupportingEvidence", "AuthorityResponse", "HumanReadablePdf", "XmlPayload", "ValidationReport", "Other" };
    size_t sizeofArray = sizeof(attachment_roleArray) / sizeof(attachment_roleArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(attachment_role, attachment_roleArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

signed_document_attachment_create_dto_t *signed_document_attachment_create_dto_create(
    char *id,
    char *timestamp,
    char *signed_document_id,
    char *title,
    char *file_name,
    char *content_type,
    long file_length,
    char *hash,
    char *file_upload_url,
    char *storage_key,
    char *storage_provider_key,
    trustservice_signed_document_attachment_create_dto_ATTACHMENTROLE_e attachment_role
    ) {
    signed_document_attachment_create_dto_t *signed_document_attachment_create_dto_local_var = malloc(sizeof(signed_document_attachment_create_dto_t));
    if (!signed_document_attachment_create_dto_local_var) {
        return NULL;
    }
    signed_document_attachment_create_dto_local_var->id = id;
    signed_document_attachment_create_dto_local_var->timestamp = timestamp;
    signed_document_attachment_create_dto_local_var->signed_document_id = signed_document_id;
    signed_document_attachment_create_dto_local_var->title = title;
    signed_document_attachment_create_dto_local_var->file_name = file_name;
    signed_document_attachment_create_dto_local_var->content_type = content_type;
    signed_document_attachment_create_dto_local_var->file_length = file_length;
    signed_document_attachment_create_dto_local_var->hash = hash;
    signed_document_attachment_create_dto_local_var->file_upload_url = file_upload_url;
    signed_document_attachment_create_dto_local_var->storage_key = storage_key;
    signed_document_attachment_create_dto_local_var->storage_provider_key = storage_provider_key;
    signed_document_attachment_create_dto_local_var->attachment_role = attachment_role;

    return signed_document_attachment_create_dto_local_var;
}


void signed_document_attachment_create_dto_free(signed_document_attachment_create_dto_t *signed_document_attachment_create_dto) {
    if(NULL == signed_document_attachment_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (signed_document_attachment_create_dto->id) {
        free(signed_document_attachment_create_dto->id);
        signed_document_attachment_create_dto->id = NULL;
    }
    if (signed_document_attachment_create_dto->timestamp) {
        free(signed_document_attachment_create_dto->timestamp);
        signed_document_attachment_create_dto->timestamp = NULL;
    }
    if (signed_document_attachment_create_dto->signed_document_id) {
        free(signed_document_attachment_create_dto->signed_document_id);
        signed_document_attachment_create_dto->signed_document_id = NULL;
    }
    if (signed_document_attachment_create_dto->title) {
        free(signed_document_attachment_create_dto->title);
        signed_document_attachment_create_dto->title = NULL;
    }
    if (signed_document_attachment_create_dto->file_name) {
        free(signed_document_attachment_create_dto->file_name);
        signed_document_attachment_create_dto->file_name = NULL;
    }
    if (signed_document_attachment_create_dto->content_type) {
        free(signed_document_attachment_create_dto->content_type);
        signed_document_attachment_create_dto->content_type = NULL;
    }
    if (signed_document_attachment_create_dto->hash) {
        free(signed_document_attachment_create_dto->hash);
        signed_document_attachment_create_dto->hash = NULL;
    }
    if (signed_document_attachment_create_dto->file_upload_url) {
        free(signed_document_attachment_create_dto->file_upload_url);
        signed_document_attachment_create_dto->file_upload_url = NULL;
    }
    if (signed_document_attachment_create_dto->storage_key) {
        free(signed_document_attachment_create_dto->storage_key);
        signed_document_attachment_create_dto->storage_key = NULL;
    }
    if (signed_document_attachment_create_dto->storage_provider_key) {
        free(signed_document_attachment_create_dto->storage_provider_key);
        signed_document_attachment_create_dto->storage_provider_key = NULL;
    }
    free(signed_document_attachment_create_dto);
}

cJSON *signed_document_attachment_create_dto_convertToJSON(signed_document_attachment_create_dto_t *signed_document_attachment_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // signed_document_attachment_create_dto->id
    if(signed_document_attachment_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", signed_document_attachment_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_attachment_create_dto->timestamp
    if(signed_document_attachment_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", signed_document_attachment_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // signed_document_attachment_create_dto->signed_document_id
    if (!signed_document_attachment_create_dto->signed_document_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "signedDocumentId", signed_document_attachment_create_dto->signed_document_id) == NULL) {
    goto fail; //String
    }


    // signed_document_attachment_create_dto->title
    if (!signed_document_attachment_create_dto->title) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "title", signed_document_attachment_create_dto->title) == NULL) {
    goto fail; //String
    }


    // signed_document_attachment_create_dto->file_name
    if(signed_document_attachment_create_dto->file_name) {
    if(cJSON_AddStringToObject(item, "fileName", signed_document_attachment_create_dto->file_name) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_attachment_create_dto->content_type
    if(signed_document_attachment_create_dto->content_type) {
    if(cJSON_AddStringToObject(item, "contentType", signed_document_attachment_create_dto->content_type) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_attachment_create_dto->file_length
    if(signed_document_attachment_create_dto->file_length) {
    if(cJSON_AddNumberToObject(item, "fileLength", signed_document_attachment_create_dto->file_length) == NULL) {
    goto fail; //Numeric
    }
    }


    // signed_document_attachment_create_dto->hash
    if(signed_document_attachment_create_dto->hash) {
    if(cJSON_AddStringToObject(item, "hash", signed_document_attachment_create_dto->hash) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_attachment_create_dto->file_upload_url
    if(signed_document_attachment_create_dto->file_upload_url) {
    if(cJSON_AddStringToObject(item, "fileUploadUrl", signed_document_attachment_create_dto->file_upload_url) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_attachment_create_dto->storage_key
    if (!signed_document_attachment_create_dto->storage_key) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "storageKey", signed_document_attachment_create_dto->storage_key) == NULL) {
    goto fail; //String
    }


    // signed_document_attachment_create_dto->storage_provider_key
    if(signed_document_attachment_create_dto->storage_provider_key) {
    if(cJSON_AddStringToObject(item, "storageProviderKey", signed_document_attachment_create_dto->storage_provider_key) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_attachment_create_dto->attachment_role
    if(signed_document_attachment_create_dto->attachment_role != trustservice_signed_document_attachment_create_dto_ATTACHMENTROLE_NULL) {
    if(cJSON_AddStringToObject(item, "attachmentRole", attachment_rolesigned_document_attachment_create_dto_ToString(signed_document_attachment_create_dto->attachment_role)) == NULL)
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

signed_document_attachment_create_dto_t *signed_document_attachment_create_dto_parseFromJSON(cJSON *signed_document_attachment_create_dtoJSON){

    signed_document_attachment_create_dto_t *signed_document_attachment_create_dto_local_var = NULL;

    // signed_document_attachment_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(signed_document_attachment_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // signed_document_attachment_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(signed_document_attachment_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // signed_document_attachment_create_dto->signed_document_id
    cJSON *signed_document_id = cJSON_GetObjectItemCaseSensitive(signed_document_attachment_create_dtoJSON, "signedDocumentId");
    if (!signed_document_id) {
        goto end;
    }

    
    if(!cJSON_IsString(signed_document_id))
    {
    goto end; //String
    }

    // signed_document_attachment_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(signed_document_attachment_create_dtoJSON, "title");
    if (!title) {
        goto end;
    }

    
    if(!cJSON_IsString(title))
    {
    goto end; //String
    }

    // signed_document_attachment_create_dto->file_name
    cJSON *file_name = cJSON_GetObjectItemCaseSensitive(signed_document_attachment_create_dtoJSON, "fileName");
    if (file_name) { 
    if(!cJSON_IsString(file_name) && !cJSON_IsNull(file_name))
    {
    goto end; //String
    }
    }

    // signed_document_attachment_create_dto->content_type
    cJSON *content_type = cJSON_GetObjectItemCaseSensitive(signed_document_attachment_create_dtoJSON, "contentType");
    if (content_type) { 
    if(!cJSON_IsString(content_type) && !cJSON_IsNull(content_type))
    {
    goto end; //String
    }
    }

    // signed_document_attachment_create_dto->file_length
    cJSON *file_length = cJSON_GetObjectItemCaseSensitive(signed_document_attachment_create_dtoJSON, "fileLength");
    if (file_length) { 
    if(!cJSON_IsNumber(file_length))
    {
    goto end; //Numeric
    }
    }

    // signed_document_attachment_create_dto->hash
    cJSON *hash = cJSON_GetObjectItemCaseSensitive(signed_document_attachment_create_dtoJSON, "hash");
    if (hash) { 
    if(!cJSON_IsString(hash) && !cJSON_IsNull(hash))
    {
    goto end; //String
    }
    }

    // signed_document_attachment_create_dto->file_upload_url
    cJSON *file_upload_url = cJSON_GetObjectItemCaseSensitive(signed_document_attachment_create_dtoJSON, "fileUploadUrl");
    if (file_upload_url) { 
    if(!cJSON_IsString(file_upload_url) && !cJSON_IsNull(file_upload_url))
    {
    goto end; //String
    }
    }

    // signed_document_attachment_create_dto->storage_key
    cJSON *storage_key = cJSON_GetObjectItemCaseSensitive(signed_document_attachment_create_dtoJSON, "storageKey");
    if (!storage_key) {
        goto end;
    }

    
    if(!cJSON_IsString(storage_key))
    {
    goto end; //String
    }

    // signed_document_attachment_create_dto->storage_provider_key
    cJSON *storage_provider_key = cJSON_GetObjectItemCaseSensitive(signed_document_attachment_create_dtoJSON, "storageProviderKey");
    if (storage_provider_key) { 
    if(!cJSON_IsString(storage_provider_key) && !cJSON_IsNull(storage_provider_key))
    {
    goto end; //String
    }
    }

    // signed_document_attachment_create_dto->attachment_role
    cJSON *attachment_role = cJSON_GetObjectItemCaseSensitive(signed_document_attachment_create_dtoJSON, "attachmentRole");
    trustservice_signed_document_attachment_create_dto_ATTACHMENTROLE_e attachment_roleVariable;
    if (attachment_role) { 
    if(!cJSON_IsString(attachment_role))
    {
    goto end; //Enum
    }
    attachment_roleVariable = signed_document_attachment_create_dto_attachment_role_FromString(attachment_role->valuestring);
    }


    signed_document_attachment_create_dto_local_var = signed_document_attachment_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(signed_document_id->valuestring),
        strdup(title->valuestring),
        file_name && !cJSON_IsNull(file_name) ? strdup(file_name->valuestring) : NULL,
        content_type && !cJSON_IsNull(content_type) ? strdup(content_type->valuestring) : NULL,
        file_length ? file_length->valuedouble : 0,
        hash && !cJSON_IsNull(hash) ? strdup(hash->valuestring) : NULL,
        file_upload_url && !cJSON_IsNull(file_upload_url) ? strdup(file_upload_url->valuestring) : NULL,
        strdup(storage_key->valuestring),
        storage_provider_key && !cJSON_IsNull(storage_provider_key) ? strdup(storage_provider_key->valuestring) : NULL,
        attachment_role ? attachment_roleVariable : trustservice_signed_document_attachment_create_dto_ATTACHMENTROLE_NULL
        );

    return signed_document_attachment_create_dto_local_var;
end:
    return NULL;

}
