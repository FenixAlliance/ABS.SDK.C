#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "trust_signing_request_dto.h"


char* trust_signing_request_dto_requested_format_ToString(trustservice_trust_signing_request_dto_REQUESTEDFORMAT_e requested_format) {
    char* requested_formatArray[] =  { "NULL", "Unknown", "XAdES", "PAdES", "CAdES", "SMIME", "DetachedXmlDSig", "Enveloped", "Other" };
    return requested_formatArray[requested_format];
}

trustservice_trust_signing_request_dto_REQUESTEDFORMAT_e trust_signing_request_dto_requested_format_FromString(char* requested_format){
    int stringToReturn = 0;
    char *requested_formatArray[] =  { "NULL", "Unknown", "XAdES", "PAdES", "CAdES", "SMIME", "DetachedXmlDSig", "Enveloped", "Other" };
    size_t sizeofArray = sizeof(requested_formatArray) / sizeof(requested_formatArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(requested_format, requested_formatArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* trust_signing_request_dto_requested_purpose_ToString(trustservice_trust_signing_request_dto_REQUESTEDPURPOSE_e requested_purpose) {
    char* requested_purposeArray[] =  { "NULL", "Unknown", "RegulatorySubmission", "ContractExecution", "EmailSigning", "InternalApproval", "EvidenceSealing", "AgentCredential", "Other" };
    return requested_purposeArray[requested_purpose];
}

trustservice_trust_signing_request_dto_REQUESTEDPURPOSE_e trust_signing_request_dto_requested_purpose_FromString(char* requested_purpose){
    int stringToReturn = 0;
    char *requested_purposeArray[] =  { "NULL", "Unknown", "RegulatorySubmission", "ContractExecution", "EmailSigning", "InternalApproval", "EvidenceSealing", "AgentCredential", "Other" };
    size_t sizeofArray = sizeof(requested_purposeArray) / sizeof(requested_purposeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(requested_purpose, requested_purposeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

trust_signing_request_dto_t *trust_signing_request_dto_create(
    char *signed_document_id,
    char *signing_profile_id,
    char *signing_certificate_id,
    char *contact_id,
    trustservice_trust_signing_request_dto_REQUESTEDFORMAT_e requested_format,
    trustservice_trust_signing_request_dto_REQUESTEDPURPOSE_e requested_purpose,
    char *correlation_id,
    char *source_storage_object_id,
    char *source_sha256,
    char *external_reference,
    int dry_run
    ) {
    trust_signing_request_dto_t *trust_signing_request_dto_local_var = malloc(sizeof(trust_signing_request_dto_t));
    if (!trust_signing_request_dto_local_var) {
        return NULL;
    }
    trust_signing_request_dto_local_var->signed_document_id = signed_document_id;
    trust_signing_request_dto_local_var->signing_profile_id = signing_profile_id;
    trust_signing_request_dto_local_var->signing_certificate_id = signing_certificate_id;
    trust_signing_request_dto_local_var->contact_id = contact_id;
    trust_signing_request_dto_local_var->requested_format = requested_format;
    trust_signing_request_dto_local_var->requested_purpose = requested_purpose;
    trust_signing_request_dto_local_var->correlation_id = correlation_id;
    trust_signing_request_dto_local_var->source_storage_object_id = source_storage_object_id;
    trust_signing_request_dto_local_var->source_sha256 = source_sha256;
    trust_signing_request_dto_local_var->external_reference = external_reference;
    trust_signing_request_dto_local_var->dry_run = dry_run;

    return trust_signing_request_dto_local_var;
}


void trust_signing_request_dto_free(trust_signing_request_dto_t *trust_signing_request_dto) {
    if(NULL == trust_signing_request_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (trust_signing_request_dto->signed_document_id) {
        free(trust_signing_request_dto->signed_document_id);
        trust_signing_request_dto->signed_document_id = NULL;
    }
    if (trust_signing_request_dto->signing_profile_id) {
        free(trust_signing_request_dto->signing_profile_id);
        trust_signing_request_dto->signing_profile_id = NULL;
    }
    if (trust_signing_request_dto->signing_certificate_id) {
        free(trust_signing_request_dto->signing_certificate_id);
        trust_signing_request_dto->signing_certificate_id = NULL;
    }
    if (trust_signing_request_dto->contact_id) {
        free(trust_signing_request_dto->contact_id);
        trust_signing_request_dto->contact_id = NULL;
    }
    if (trust_signing_request_dto->correlation_id) {
        free(trust_signing_request_dto->correlation_id);
        trust_signing_request_dto->correlation_id = NULL;
    }
    if (trust_signing_request_dto->source_storage_object_id) {
        free(trust_signing_request_dto->source_storage_object_id);
        trust_signing_request_dto->source_storage_object_id = NULL;
    }
    if (trust_signing_request_dto->source_sha256) {
        free(trust_signing_request_dto->source_sha256);
        trust_signing_request_dto->source_sha256 = NULL;
    }
    if (trust_signing_request_dto->external_reference) {
        free(trust_signing_request_dto->external_reference);
        trust_signing_request_dto->external_reference = NULL;
    }
    free(trust_signing_request_dto);
}

cJSON *trust_signing_request_dto_convertToJSON(trust_signing_request_dto_t *trust_signing_request_dto) {
    cJSON *item = cJSON_CreateObject();

    // trust_signing_request_dto->signed_document_id
    if(trust_signing_request_dto->signed_document_id) {
    if(cJSON_AddStringToObject(item, "signedDocumentId", trust_signing_request_dto->signed_document_id) == NULL) {
    goto fail; //String
    }
    }


    // trust_signing_request_dto->signing_profile_id
    if(trust_signing_request_dto->signing_profile_id) {
    if(cJSON_AddStringToObject(item, "signingProfileId", trust_signing_request_dto->signing_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // trust_signing_request_dto->signing_certificate_id
    if(trust_signing_request_dto->signing_certificate_id) {
    if(cJSON_AddStringToObject(item, "signingCertificateId", trust_signing_request_dto->signing_certificate_id) == NULL) {
    goto fail; //String
    }
    }


    // trust_signing_request_dto->contact_id
    if(trust_signing_request_dto->contact_id) {
    if(cJSON_AddStringToObject(item, "contactId", trust_signing_request_dto->contact_id) == NULL) {
    goto fail; //String
    }
    }


    // trust_signing_request_dto->requested_format
    if(trust_signing_request_dto->requested_format != trustservice_trust_signing_request_dto_REQUESTEDFORMAT_NULL) {
    if(cJSON_AddStringToObject(item, "requestedFormat", requested_formattrust_signing_request_dto_ToString(trust_signing_request_dto->requested_format)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // trust_signing_request_dto->requested_purpose
    if(trust_signing_request_dto->requested_purpose != trustservice_trust_signing_request_dto_REQUESTEDPURPOSE_NULL) {
    if(cJSON_AddStringToObject(item, "requestedPurpose", requested_purposetrust_signing_request_dto_ToString(trust_signing_request_dto->requested_purpose)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // trust_signing_request_dto->correlation_id
    if(trust_signing_request_dto->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", trust_signing_request_dto->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // trust_signing_request_dto->source_storage_object_id
    if(trust_signing_request_dto->source_storage_object_id) {
    if(cJSON_AddStringToObject(item, "sourceStorageObjectId", trust_signing_request_dto->source_storage_object_id) == NULL) {
    goto fail; //String
    }
    }


    // trust_signing_request_dto->source_sha256
    if(trust_signing_request_dto->source_sha256) {
    if(cJSON_AddStringToObject(item, "sourceSha256", trust_signing_request_dto->source_sha256) == NULL) {
    goto fail; //String
    }
    }


    // trust_signing_request_dto->external_reference
    if(trust_signing_request_dto->external_reference) {
    if(cJSON_AddStringToObject(item, "externalReference", trust_signing_request_dto->external_reference) == NULL) {
    goto fail; //String
    }
    }


    // trust_signing_request_dto->dry_run
    if(trust_signing_request_dto->dry_run) {
    if(cJSON_AddBoolToObject(item, "dryRun", trust_signing_request_dto->dry_run) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

trust_signing_request_dto_t *trust_signing_request_dto_parseFromJSON(cJSON *trust_signing_request_dtoJSON){

    trust_signing_request_dto_t *trust_signing_request_dto_local_var = NULL;

    // trust_signing_request_dto->signed_document_id
    cJSON *signed_document_id = cJSON_GetObjectItemCaseSensitive(trust_signing_request_dtoJSON, "signedDocumentId");
    if (signed_document_id) { 
    if(!cJSON_IsString(signed_document_id) && !cJSON_IsNull(signed_document_id))
    {
    goto end; //String
    }
    }

    // trust_signing_request_dto->signing_profile_id
    cJSON *signing_profile_id = cJSON_GetObjectItemCaseSensitive(trust_signing_request_dtoJSON, "signingProfileId");
    if (signing_profile_id) { 
    if(!cJSON_IsString(signing_profile_id) && !cJSON_IsNull(signing_profile_id))
    {
    goto end; //String
    }
    }

    // trust_signing_request_dto->signing_certificate_id
    cJSON *signing_certificate_id = cJSON_GetObjectItemCaseSensitive(trust_signing_request_dtoJSON, "signingCertificateId");
    if (signing_certificate_id) { 
    if(!cJSON_IsString(signing_certificate_id) && !cJSON_IsNull(signing_certificate_id))
    {
    goto end; //String
    }
    }

    // trust_signing_request_dto->contact_id
    cJSON *contact_id = cJSON_GetObjectItemCaseSensitive(trust_signing_request_dtoJSON, "contactId");
    if (contact_id) { 
    if(!cJSON_IsString(contact_id) && !cJSON_IsNull(contact_id))
    {
    goto end; //String
    }
    }

    // trust_signing_request_dto->requested_format
    cJSON *requested_format = cJSON_GetObjectItemCaseSensitive(trust_signing_request_dtoJSON, "requestedFormat");
    trustservice_trust_signing_request_dto_REQUESTEDFORMAT_e requested_formatVariable;
    if (requested_format) { 
    if(!cJSON_IsString(requested_format))
    {
    goto end; //Enum
    }
    requested_formatVariable = trust_signing_request_dto_requested_format_FromString(requested_format->valuestring);
    }

    // trust_signing_request_dto->requested_purpose
    cJSON *requested_purpose = cJSON_GetObjectItemCaseSensitive(trust_signing_request_dtoJSON, "requestedPurpose");
    trustservice_trust_signing_request_dto_REQUESTEDPURPOSE_e requested_purposeVariable;
    if (requested_purpose) { 
    if(!cJSON_IsString(requested_purpose))
    {
    goto end; //Enum
    }
    requested_purposeVariable = trust_signing_request_dto_requested_purpose_FromString(requested_purpose->valuestring);
    }

    // trust_signing_request_dto->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(trust_signing_request_dtoJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // trust_signing_request_dto->source_storage_object_id
    cJSON *source_storage_object_id = cJSON_GetObjectItemCaseSensitive(trust_signing_request_dtoJSON, "sourceStorageObjectId");
    if (source_storage_object_id) { 
    if(!cJSON_IsString(source_storage_object_id) && !cJSON_IsNull(source_storage_object_id))
    {
    goto end; //String
    }
    }

    // trust_signing_request_dto->source_sha256
    cJSON *source_sha256 = cJSON_GetObjectItemCaseSensitive(trust_signing_request_dtoJSON, "sourceSha256");
    if (source_sha256) { 
    if(!cJSON_IsString(source_sha256) && !cJSON_IsNull(source_sha256))
    {
    goto end; //String
    }
    }

    // trust_signing_request_dto->external_reference
    cJSON *external_reference = cJSON_GetObjectItemCaseSensitive(trust_signing_request_dtoJSON, "externalReference");
    if (external_reference) { 
    if(!cJSON_IsString(external_reference) && !cJSON_IsNull(external_reference))
    {
    goto end; //String
    }
    }

    // trust_signing_request_dto->dry_run
    cJSON *dry_run = cJSON_GetObjectItemCaseSensitive(trust_signing_request_dtoJSON, "dryRun");
    if (dry_run) { 
    if(!cJSON_IsBool(dry_run))
    {
    goto end; //Bool
    }
    }


    trust_signing_request_dto_local_var = trust_signing_request_dto_create (
        signed_document_id && !cJSON_IsNull(signed_document_id) ? strdup(signed_document_id->valuestring) : NULL,
        signing_profile_id && !cJSON_IsNull(signing_profile_id) ? strdup(signing_profile_id->valuestring) : NULL,
        signing_certificate_id && !cJSON_IsNull(signing_certificate_id) ? strdup(signing_certificate_id->valuestring) : NULL,
        contact_id && !cJSON_IsNull(contact_id) ? strdup(contact_id->valuestring) : NULL,
        requested_format ? requested_formatVariable : trustservice_trust_signing_request_dto_REQUESTEDFORMAT_NULL,
        requested_purpose ? requested_purposeVariable : trustservice_trust_signing_request_dto_REQUESTEDPURPOSE_NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        source_storage_object_id && !cJSON_IsNull(source_storage_object_id) ? strdup(source_storage_object_id->valuestring) : NULL,
        source_sha256 && !cJSON_IsNull(source_sha256) ? strdup(source_sha256->valuestring) : NULL,
        external_reference && !cJSON_IsNull(external_reference) ? strdup(external_reference->valuestring) : NULL,
        dry_run ? dry_run->valueint : 0
        );

    return trust_signing_request_dto_local_var;
end:
    return NULL;

}
