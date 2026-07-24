#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "signed_document_attachment_dto.h"


char* signed_document_attachment_dto_scan_status_ToString(trustservice_signed_document_attachment_dto_SCANSTATUS_e scan_status) {
    char* scan_statusArray[] =  { "NULL", "NotRequired", "Pending", "Clean", "Infected", "Failed", "Quarantined" };
    return scan_statusArray[scan_status];
}

trustservice_signed_document_attachment_dto_SCANSTATUS_e signed_document_attachment_dto_scan_status_FromString(char* scan_status){
    int stringToReturn = 0;
    char *scan_statusArray[] =  { "NULL", "NotRequired", "Pending", "Clean", "Infected", "Failed", "Quarantined" };
    size_t sizeofArray = sizeof(scan_statusArray) / sizeof(scan_statusArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(scan_status, scan_statusArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* signed_document_attachment_dto_mutability_ToString(trustservice_signed_document_attachment_dto_MUTABILITY_e mutability) {
    char* mutabilityArray[] =  { "NULL", "Editable", "Managed", "SealedEvidence" };
    return mutabilityArray[mutability];
}

trustservice_signed_document_attachment_dto_MUTABILITY_e signed_document_attachment_dto_mutability_FromString(char* mutability){
    int stringToReturn = 0;
    char *mutabilityArray[] =  { "NULL", "Editable", "Managed", "SealedEvidence" };
    size_t sizeofArray = sizeof(mutabilityArray) / sizeof(mutabilityArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(mutability, mutabilityArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* signed_document_attachment_dto_attachment_role_ToString(trustservice_signed_document_attachment_dto_ATTACHMENTROLE_e attachment_role) {
    char* attachment_roleArray[] =  { "NULL", "Unknown", "Source", "SupportingEvidence", "AuthorityResponse", "HumanReadablePdf", "XmlPayload", "ValidationReport", "Other" };
    return attachment_roleArray[attachment_role];
}

trustservice_signed_document_attachment_dto_ATTACHMENTROLE_e signed_document_attachment_dto_attachment_role_FromString(char* attachment_role){
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

signed_document_attachment_dto_t *signed_document_attachment_dto_create(
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
    trustservice_signed_document_attachment_dto_SCANSTATUS_e scan_status,
    trustservice_signed_document_attachment_dto_MUTABILITY_e mutability,
    trustservice_signed_document_attachment_dto_ATTACHMENTROLE_e attachment_role,
    char *tenant_id,
    char *user_id,
    char *enrollment_id,
    char *signed_document_title
    ) {
    signed_document_attachment_dto_t *signed_document_attachment_dto_local_var = malloc(sizeof(signed_document_attachment_dto_t));
    if (!signed_document_attachment_dto_local_var) {
        return NULL;
    }
    signed_document_attachment_dto_local_var->id = id;
    signed_document_attachment_dto_local_var->timestamp = timestamp;
    signed_document_attachment_dto_local_var->signed_document_id = signed_document_id;
    signed_document_attachment_dto_local_var->title = title;
    signed_document_attachment_dto_local_var->file_name = file_name;
    signed_document_attachment_dto_local_var->content_type = content_type;
    signed_document_attachment_dto_local_var->file_length = file_length;
    signed_document_attachment_dto_local_var->hash = hash;
    signed_document_attachment_dto_local_var->file_upload_url = file_upload_url;
    signed_document_attachment_dto_local_var->storage_key = storage_key;
    signed_document_attachment_dto_local_var->storage_provider_key = storage_provider_key;
    signed_document_attachment_dto_local_var->scan_status = scan_status;
    signed_document_attachment_dto_local_var->mutability = mutability;
    signed_document_attachment_dto_local_var->attachment_role = attachment_role;
    signed_document_attachment_dto_local_var->tenant_id = tenant_id;
    signed_document_attachment_dto_local_var->user_id = user_id;
    signed_document_attachment_dto_local_var->enrollment_id = enrollment_id;
    signed_document_attachment_dto_local_var->signed_document_title = signed_document_title;

    return signed_document_attachment_dto_local_var;
}


void signed_document_attachment_dto_free(signed_document_attachment_dto_t *signed_document_attachment_dto) {
    if(NULL == signed_document_attachment_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (signed_document_attachment_dto->id) {
        free(signed_document_attachment_dto->id);
        signed_document_attachment_dto->id = NULL;
    }
    if (signed_document_attachment_dto->timestamp) {
        free(signed_document_attachment_dto->timestamp);
        signed_document_attachment_dto->timestamp = NULL;
    }
    if (signed_document_attachment_dto->signed_document_id) {
        free(signed_document_attachment_dto->signed_document_id);
        signed_document_attachment_dto->signed_document_id = NULL;
    }
    if (signed_document_attachment_dto->title) {
        free(signed_document_attachment_dto->title);
        signed_document_attachment_dto->title = NULL;
    }
    if (signed_document_attachment_dto->file_name) {
        free(signed_document_attachment_dto->file_name);
        signed_document_attachment_dto->file_name = NULL;
    }
    if (signed_document_attachment_dto->content_type) {
        free(signed_document_attachment_dto->content_type);
        signed_document_attachment_dto->content_type = NULL;
    }
    if (signed_document_attachment_dto->hash) {
        free(signed_document_attachment_dto->hash);
        signed_document_attachment_dto->hash = NULL;
    }
    if (signed_document_attachment_dto->file_upload_url) {
        free(signed_document_attachment_dto->file_upload_url);
        signed_document_attachment_dto->file_upload_url = NULL;
    }
    if (signed_document_attachment_dto->storage_key) {
        free(signed_document_attachment_dto->storage_key);
        signed_document_attachment_dto->storage_key = NULL;
    }
    if (signed_document_attachment_dto->storage_provider_key) {
        free(signed_document_attachment_dto->storage_provider_key);
        signed_document_attachment_dto->storage_provider_key = NULL;
    }
    if (signed_document_attachment_dto->tenant_id) {
        free(signed_document_attachment_dto->tenant_id);
        signed_document_attachment_dto->tenant_id = NULL;
    }
    if (signed_document_attachment_dto->user_id) {
        free(signed_document_attachment_dto->user_id);
        signed_document_attachment_dto->user_id = NULL;
    }
    if (signed_document_attachment_dto->enrollment_id) {
        free(signed_document_attachment_dto->enrollment_id);
        signed_document_attachment_dto->enrollment_id = NULL;
    }
    if (signed_document_attachment_dto->signed_document_title) {
        free(signed_document_attachment_dto->signed_document_title);
        signed_document_attachment_dto->signed_document_title = NULL;
    }
    free(signed_document_attachment_dto);
}

cJSON *signed_document_attachment_dto_convertToJSON(signed_document_attachment_dto_t *signed_document_attachment_dto) {
    cJSON *item = cJSON_CreateObject();

    // signed_document_attachment_dto->id
    if(signed_document_attachment_dto->id) {
    if(cJSON_AddStringToObject(item, "id", signed_document_attachment_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_attachment_dto->timestamp
    if(signed_document_attachment_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", signed_document_attachment_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // signed_document_attachment_dto->signed_document_id
    if(signed_document_attachment_dto->signed_document_id) {
    if(cJSON_AddStringToObject(item, "signedDocumentId", signed_document_attachment_dto->signed_document_id) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_attachment_dto->title
    if(signed_document_attachment_dto->title) {
    if(cJSON_AddStringToObject(item, "title", signed_document_attachment_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_attachment_dto->file_name
    if(signed_document_attachment_dto->file_name) {
    if(cJSON_AddStringToObject(item, "fileName", signed_document_attachment_dto->file_name) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_attachment_dto->content_type
    if(signed_document_attachment_dto->content_type) {
    if(cJSON_AddStringToObject(item, "contentType", signed_document_attachment_dto->content_type) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_attachment_dto->file_length
    if(signed_document_attachment_dto->file_length) {
    if(cJSON_AddNumberToObject(item, "fileLength", signed_document_attachment_dto->file_length) == NULL) {
    goto fail; //Numeric
    }
    }


    // signed_document_attachment_dto->hash
    if(signed_document_attachment_dto->hash) {
    if(cJSON_AddStringToObject(item, "hash", signed_document_attachment_dto->hash) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_attachment_dto->file_upload_url
    if(signed_document_attachment_dto->file_upload_url) {
    if(cJSON_AddStringToObject(item, "fileUploadUrl", signed_document_attachment_dto->file_upload_url) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_attachment_dto->storage_key
    if(signed_document_attachment_dto->storage_key) {
    if(cJSON_AddStringToObject(item, "storageKey", signed_document_attachment_dto->storage_key) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_attachment_dto->storage_provider_key
    if(signed_document_attachment_dto->storage_provider_key) {
    if(cJSON_AddStringToObject(item, "storageProviderKey", signed_document_attachment_dto->storage_provider_key) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_attachment_dto->scan_status
    if(signed_document_attachment_dto->scan_status != trustservice_signed_document_attachment_dto_SCANSTATUS_NULL) {
    if(cJSON_AddStringToObject(item, "scanStatus", scan_statussigned_document_attachment_dto_ToString(signed_document_attachment_dto->scan_status)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // signed_document_attachment_dto->mutability
    if(signed_document_attachment_dto->mutability != trustservice_signed_document_attachment_dto_MUTABILITY_NULL) {
    if(cJSON_AddStringToObject(item, "mutability", mutabilitysigned_document_attachment_dto_ToString(signed_document_attachment_dto->mutability)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // signed_document_attachment_dto->attachment_role
    if(signed_document_attachment_dto->attachment_role != trustservice_signed_document_attachment_dto_ATTACHMENTROLE_NULL) {
    if(cJSON_AddStringToObject(item, "attachmentRole", attachment_rolesigned_document_attachment_dto_ToString(signed_document_attachment_dto->attachment_role)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // signed_document_attachment_dto->tenant_id
    if(signed_document_attachment_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", signed_document_attachment_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_attachment_dto->user_id
    if(signed_document_attachment_dto->user_id) {
    if(cJSON_AddStringToObject(item, "userId", signed_document_attachment_dto->user_id) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_attachment_dto->enrollment_id
    if(signed_document_attachment_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", signed_document_attachment_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_attachment_dto->signed_document_title
    if(signed_document_attachment_dto->signed_document_title) {
    if(cJSON_AddStringToObject(item, "signedDocumentTitle", signed_document_attachment_dto->signed_document_title) == NULL) {
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

signed_document_attachment_dto_t *signed_document_attachment_dto_parseFromJSON(cJSON *signed_document_attachment_dtoJSON){

    signed_document_attachment_dto_t *signed_document_attachment_dto_local_var = NULL;

    // signed_document_attachment_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(signed_document_attachment_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // signed_document_attachment_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(signed_document_attachment_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // signed_document_attachment_dto->signed_document_id
    cJSON *signed_document_id = cJSON_GetObjectItemCaseSensitive(signed_document_attachment_dtoJSON, "signedDocumentId");
    if (signed_document_id) { 
    if(!cJSON_IsString(signed_document_id) && !cJSON_IsNull(signed_document_id))
    {
    goto end; //String
    }
    }

    // signed_document_attachment_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(signed_document_attachment_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // signed_document_attachment_dto->file_name
    cJSON *file_name = cJSON_GetObjectItemCaseSensitive(signed_document_attachment_dtoJSON, "fileName");
    if (file_name) { 
    if(!cJSON_IsString(file_name) && !cJSON_IsNull(file_name))
    {
    goto end; //String
    }
    }

    // signed_document_attachment_dto->content_type
    cJSON *content_type = cJSON_GetObjectItemCaseSensitive(signed_document_attachment_dtoJSON, "contentType");
    if (content_type) { 
    if(!cJSON_IsString(content_type) && !cJSON_IsNull(content_type))
    {
    goto end; //String
    }
    }

    // signed_document_attachment_dto->file_length
    cJSON *file_length = cJSON_GetObjectItemCaseSensitive(signed_document_attachment_dtoJSON, "fileLength");
    if (file_length) { 
    if(!cJSON_IsNumber(file_length))
    {
    goto end; //Numeric
    }
    }

    // signed_document_attachment_dto->hash
    cJSON *hash = cJSON_GetObjectItemCaseSensitive(signed_document_attachment_dtoJSON, "hash");
    if (hash) { 
    if(!cJSON_IsString(hash) && !cJSON_IsNull(hash))
    {
    goto end; //String
    }
    }

    // signed_document_attachment_dto->file_upload_url
    cJSON *file_upload_url = cJSON_GetObjectItemCaseSensitive(signed_document_attachment_dtoJSON, "fileUploadUrl");
    if (file_upload_url) { 
    if(!cJSON_IsString(file_upload_url) && !cJSON_IsNull(file_upload_url))
    {
    goto end; //String
    }
    }

    // signed_document_attachment_dto->storage_key
    cJSON *storage_key = cJSON_GetObjectItemCaseSensitive(signed_document_attachment_dtoJSON, "storageKey");
    if (storage_key) { 
    if(!cJSON_IsString(storage_key) && !cJSON_IsNull(storage_key))
    {
    goto end; //String
    }
    }

    // signed_document_attachment_dto->storage_provider_key
    cJSON *storage_provider_key = cJSON_GetObjectItemCaseSensitive(signed_document_attachment_dtoJSON, "storageProviderKey");
    if (storage_provider_key) { 
    if(!cJSON_IsString(storage_provider_key) && !cJSON_IsNull(storage_provider_key))
    {
    goto end; //String
    }
    }

    // signed_document_attachment_dto->scan_status
    cJSON *scan_status = cJSON_GetObjectItemCaseSensitive(signed_document_attachment_dtoJSON, "scanStatus");
    trustservice_signed_document_attachment_dto_SCANSTATUS_e scan_statusVariable;
    if (scan_status) { 
    if(!cJSON_IsString(scan_status))
    {
    goto end; //Enum
    }
    scan_statusVariable = signed_document_attachment_dto_scan_status_FromString(scan_status->valuestring);
    }

    // signed_document_attachment_dto->mutability
    cJSON *mutability = cJSON_GetObjectItemCaseSensitive(signed_document_attachment_dtoJSON, "mutability");
    trustservice_signed_document_attachment_dto_MUTABILITY_e mutabilityVariable;
    if (mutability) { 
    if(!cJSON_IsString(mutability))
    {
    goto end; //Enum
    }
    mutabilityVariable = signed_document_attachment_dto_mutability_FromString(mutability->valuestring);
    }

    // signed_document_attachment_dto->attachment_role
    cJSON *attachment_role = cJSON_GetObjectItemCaseSensitive(signed_document_attachment_dtoJSON, "attachmentRole");
    trustservice_signed_document_attachment_dto_ATTACHMENTROLE_e attachment_roleVariable;
    if (attachment_role) { 
    if(!cJSON_IsString(attachment_role))
    {
    goto end; //Enum
    }
    attachment_roleVariable = signed_document_attachment_dto_attachment_role_FromString(attachment_role->valuestring);
    }

    // signed_document_attachment_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(signed_document_attachment_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // signed_document_attachment_dto->user_id
    cJSON *user_id = cJSON_GetObjectItemCaseSensitive(signed_document_attachment_dtoJSON, "userId");
    if (user_id) { 
    if(!cJSON_IsString(user_id) && !cJSON_IsNull(user_id))
    {
    goto end; //String
    }
    }

    // signed_document_attachment_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(signed_document_attachment_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // signed_document_attachment_dto->signed_document_title
    cJSON *signed_document_title = cJSON_GetObjectItemCaseSensitive(signed_document_attachment_dtoJSON, "signedDocumentTitle");
    if (signed_document_title) { 
    if(!cJSON_IsString(signed_document_title) && !cJSON_IsNull(signed_document_title))
    {
    goto end; //String
    }
    }


    signed_document_attachment_dto_local_var = signed_document_attachment_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        signed_document_id && !cJSON_IsNull(signed_document_id) ? strdup(signed_document_id->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        file_name && !cJSON_IsNull(file_name) ? strdup(file_name->valuestring) : NULL,
        content_type && !cJSON_IsNull(content_type) ? strdup(content_type->valuestring) : NULL,
        file_length ? file_length->valuedouble : 0,
        hash && !cJSON_IsNull(hash) ? strdup(hash->valuestring) : NULL,
        file_upload_url && !cJSON_IsNull(file_upload_url) ? strdup(file_upload_url->valuestring) : NULL,
        storage_key && !cJSON_IsNull(storage_key) ? strdup(storage_key->valuestring) : NULL,
        storage_provider_key && !cJSON_IsNull(storage_provider_key) ? strdup(storage_provider_key->valuestring) : NULL,
        scan_status ? scan_statusVariable : trustservice_signed_document_attachment_dto_SCANSTATUS_NULL,
        mutability ? mutabilityVariable : trustservice_signed_document_attachment_dto_MUTABILITY_NULL,
        attachment_role ? attachment_roleVariable : trustservice_signed_document_attachment_dto_ATTACHMENTROLE_NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        user_id && !cJSON_IsNull(user_id) ? strdup(user_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        signed_document_title && !cJSON_IsNull(signed_document_title) ? strdup(signed_document_title->valuestring) : NULL
        );

    return signed_document_attachment_dto_local_var;
end:
    return NULL;

}
