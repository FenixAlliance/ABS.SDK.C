#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "signed_document_dto.h"


char* signed_document_dto_document_standard_ToString(trustservice_signed_document_dto_DOCUMENTSTANDARD_e document_standard) {
    char* document_standardArray[] =  { "NULL", "None", "Ubl", "Pdf", "Xml", "Email", "Json", "Other" };
    return document_standardArray[document_standard];
}

trustservice_signed_document_dto_DOCUMENTSTANDARD_e signed_document_dto_document_standard_FromString(char* document_standard){
    int stringToReturn = 0;
    char *document_standardArray[] =  { "NULL", "None", "Ubl", "Pdf", "Xml", "Email", "Json", "Other" };
    size_t sizeofArray = sizeof(document_standardArray) / sizeof(document_standardArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(document_standard, document_standardArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* signed_document_dto_trust_document_type_ToString(trustservice_signed_document_dto_TRUSTDOCUMENTTYPE_e trust_document_type) {
    char* trust_document_typeArray[] =  { "NULL", "Unknown", "Invoice", "CreditNote", "DebitNote", "Contract", "Certificate", "Email", "AuthorityResponse", "Other" };
    return trust_document_typeArray[trust_document_type];
}

trustservice_signed_document_dto_TRUSTDOCUMENTTYPE_e signed_document_dto_trust_document_type_FromString(char* trust_document_type){
    int stringToReturn = 0;
    char *trust_document_typeArray[] =  { "NULL", "Unknown", "Invoice", "CreditNote", "DebitNote", "Contract", "Certificate", "Email", "AuthorityResponse", "Other" };
    size_t sizeofArray = sizeof(trust_document_typeArray) / sizeof(trust_document_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(trust_document_type, trust_document_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* signed_document_dto_signing_status_ToString(trustservice_signed_document_dto_SIGNINGSTATUS_e signing_status) {
    char* signing_statusArray[] =  { "NULL", "Unknown", "Draft", "Signed", "Failed", "Revoked" };
    return signing_statusArray[signing_status];
}

trustservice_signed_document_dto_SIGNINGSTATUS_e signed_document_dto_signing_status_FromString(char* signing_status){
    int stringToReturn = 0;
    char *signing_statusArray[] =  { "NULL", "Unknown", "Draft", "Signed", "Failed", "Revoked" };
    size_t sizeofArray = sizeof(signing_statusArray) / sizeof(signing_statusArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(signing_status, signing_statusArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* signed_document_dto_verification_status_ToString(trustservice_signed_document_dto_VERIFICATIONSTATUS_e verification_status) {
    char* verification_statusArray[] =  { "NULL", "Unknown", "NotVerified", "Valid", "Invalid", "Expired" };
    return verification_statusArray[verification_status];
}

trustservice_signed_document_dto_VERIFICATIONSTATUS_e signed_document_dto_verification_status_FromString(char* verification_status){
    int stringToReturn = 0;
    char *verification_statusArray[] =  { "NULL", "Unknown", "NotVerified", "Valid", "Invalid", "Expired" };
    size_t sizeofArray = sizeof(verification_statusArray) / sizeof(verification_statusArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(verification_status, verification_statusArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* signed_document_dto_lock_state_ToString(trustservice_signed_document_dto_LOCKSTATE_e lock_state) {
    char* lock_stateArray[] =  { "NULL", "Draft", "Editable", "FrozenForSignature", "SigningInProgress", "Sealed", "Voided", "Superseded" };
    return lock_stateArray[lock_state];
}

trustservice_signed_document_dto_LOCKSTATE_e signed_document_dto_lock_state_FromString(char* lock_state){
    int stringToReturn = 0;
    char *lock_stateArray[] =  { "NULL", "Draft", "Editable", "FrozenForSignature", "SigningInProgress", "Sealed", "Voided", "Superseded" };
    size_t sizeofArray = sizeof(lock_stateArray) / sizeof(lock_stateArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(lock_state, lock_stateArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

signed_document_dto_t *signed_document_dto_create(
    char *id,
    char *timestamp,
    int _signed,
    char *url,
    char *type,
    char *title,
    char *content_type,
    long file_length_in_bits,
    char *tenant_id,
    char *contact_id,
    char *user_id,
    char *enrollment_id,
    trustservice_signed_document_dto_DOCUMENTSTANDARD_e document_standard,
    trustservice_signed_document_dto_TRUSTDOCUMENTTYPE_e trust_document_type,
    trustservice_signed_document_dto_SIGNINGSTATUS_e signing_status,
    trustservice_signed_document_dto_VERIFICATIONSTATUS_e verification_status,
    char *signed_at_utc,
    char *correlation_id,
    char *external_reference,
    char *source_storage_object_id,
    char *source_sha256,
    char *signed_storage_object_id,
    char *signed_sha256,
    char *evidence_storage_object_id,
    char *evidence_sha256,
    char *primary_file_upload_id,
    char *frozen_source_file_upload_id,
    char *signed_file_upload_id,
    char *evidence_file_upload_id,
    trustservice_signed_document_dto_LOCKSTATE_e lock_state,
    char *graphical_representation_file_upload_id,
    char *graphical_representation_storage_object_id,
    char *graphical_representation_sha256,
    char *graphical_representation_content_type,
    char *graphical_representation_generated_at_utc,
    char *contact_name
    ) {
    signed_document_dto_t *signed_document_dto_local_var = malloc(sizeof(signed_document_dto_t));
    if (!signed_document_dto_local_var) {
        return NULL;
    }
    signed_document_dto_local_var->id = id;
    signed_document_dto_local_var->timestamp = timestamp;
    signed_document_dto_local_var->_signed = _signed;
    signed_document_dto_local_var->url = url;
    signed_document_dto_local_var->type = type;
    signed_document_dto_local_var->title = title;
    signed_document_dto_local_var->content_type = content_type;
    signed_document_dto_local_var->file_length_in_bits = file_length_in_bits;
    signed_document_dto_local_var->tenant_id = tenant_id;
    signed_document_dto_local_var->contact_id = contact_id;
    signed_document_dto_local_var->user_id = user_id;
    signed_document_dto_local_var->enrollment_id = enrollment_id;
    signed_document_dto_local_var->document_standard = document_standard;
    signed_document_dto_local_var->trust_document_type = trust_document_type;
    signed_document_dto_local_var->signing_status = signing_status;
    signed_document_dto_local_var->verification_status = verification_status;
    signed_document_dto_local_var->signed_at_utc = signed_at_utc;
    signed_document_dto_local_var->correlation_id = correlation_id;
    signed_document_dto_local_var->external_reference = external_reference;
    signed_document_dto_local_var->source_storage_object_id = source_storage_object_id;
    signed_document_dto_local_var->source_sha256 = source_sha256;
    signed_document_dto_local_var->signed_storage_object_id = signed_storage_object_id;
    signed_document_dto_local_var->signed_sha256 = signed_sha256;
    signed_document_dto_local_var->evidence_storage_object_id = evidence_storage_object_id;
    signed_document_dto_local_var->evidence_sha256 = evidence_sha256;
    signed_document_dto_local_var->primary_file_upload_id = primary_file_upload_id;
    signed_document_dto_local_var->frozen_source_file_upload_id = frozen_source_file_upload_id;
    signed_document_dto_local_var->signed_file_upload_id = signed_file_upload_id;
    signed_document_dto_local_var->evidence_file_upload_id = evidence_file_upload_id;
    signed_document_dto_local_var->lock_state = lock_state;
    signed_document_dto_local_var->graphical_representation_file_upload_id = graphical_representation_file_upload_id;
    signed_document_dto_local_var->graphical_representation_storage_object_id = graphical_representation_storage_object_id;
    signed_document_dto_local_var->graphical_representation_sha256 = graphical_representation_sha256;
    signed_document_dto_local_var->graphical_representation_content_type = graphical_representation_content_type;
    signed_document_dto_local_var->graphical_representation_generated_at_utc = graphical_representation_generated_at_utc;
    signed_document_dto_local_var->contact_name = contact_name;

    return signed_document_dto_local_var;
}


void signed_document_dto_free(signed_document_dto_t *signed_document_dto) {
    if(NULL == signed_document_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (signed_document_dto->id) {
        free(signed_document_dto->id);
        signed_document_dto->id = NULL;
    }
    if (signed_document_dto->timestamp) {
        free(signed_document_dto->timestamp);
        signed_document_dto->timestamp = NULL;
    }
    if (signed_document_dto->url) {
        free(signed_document_dto->url);
        signed_document_dto->url = NULL;
    }
    if (signed_document_dto->type) {
        free(signed_document_dto->type);
        signed_document_dto->type = NULL;
    }
    if (signed_document_dto->title) {
        free(signed_document_dto->title);
        signed_document_dto->title = NULL;
    }
    if (signed_document_dto->content_type) {
        free(signed_document_dto->content_type);
        signed_document_dto->content_type = NULL;
    }
    if (signed_document_dto->tenant_id) {
        free(signed_document_dto->tenant_id);
        signed_document_dto->tenant_id = NULL;
    }
    if (signed_document_dto->contact_id) {
        free(signed_document_dto->contact_id);
        signed_document_dto->contact_id = NULL;
    }
    if (signed_document_dto->user_id) {
        free(signed_document_dto->user_id);
        signed_document_dto->user_id = NULL;
    }
    if (signed_document_dto->enrollment_id) {
        free(signed_document_dto->enrollment_id);
        signed_document_dto->enrollment_id = NULL;
    }
    if (signed_document_dto->signed_at_utc) {
        free(signed_document_dto->signed_at_utc);
        signed_document_dto->signed_at_utc = NULL;
    }
    if (signed_document_dto->correlation_id) {
        free(signed_document_dto->correlation_id);
        signed_document_dto->correlation_id = NULL;
    }
    if (signed_document_dto->external_reference) {
        free(signed_document_dto->external_reference);
        signed_document_dto->external_reference = NULL;
    }
    if (signed_document_dto->source_storage_object_id) {
        free(signed_document_dto->source_storage_object_id);
        signed_document_dto->source_storage_object_id = NULL;
    }
    if (signed_document_dto->source_sha256) {
        free(signed_document_dto->source_sha256);
        signed_document_dto->source_sha256 = NULL;
    }
    if (signed_document_dto->signed_storage_object_id) {
        free(signed_document_dto->signed_storage_object_id);
        signed_document_dto->signed_storage_object_id = NULL;
    }
    if (signed_document_dto->signed_sha256) {
        free(signed_document_dto->signed_sha256);
        signed_document_dto->signed_sha256 = NULL;
    }
    if (signed_document_dto->evidence_storage_object_id) {
        free(signed_document_dto->evidence_storage_object_id);
        signed_document_dto->evidence_storage_object_id = NULL;
    }
    if (signed_document_dto->evidence_sha256) {
        free(signed_document_dto->evidence_sha256);
        signed_document_dto->evidence_sha256 = NULL;
    }
    if (signed_document_dto->primary_file_upload_id) {
        free(signed_document_dto->primary_file_upload_id);
        signed_document_dto->primary_file_upload_id = NULL;
    }
    if (signed_document_dto->frozen_source_file_upload_id) {
        free(signed_document_dto->frozen_source_file_upload_id);
        signed_document_dto->frozen_source_file_upload_id = NULL;
    }
    if (signed_document_dto->signed_file_upload_id) {
        free(signed_document_dto->signed_file_upload_id);
        signed_document_dto->signed_file_upload_id = NULL;
    }
    if (signed_document_dto->evidence_file_upload_id) {
        free(signed_document_dto->evidence_file_upload_id);
        signed_document_dto->evidence_file_upload_id = NULL;
    }
    if (signed_document_dto->graphical_representation_file_upload_id) {
        free(signed_document_dto->graphical_representation_file_upload_id);
        signed_document_dto->graphical_representation_file_upload_id = NULL;
    }
    if (signed_document_dto->graphical_representation_storage_object_id) {
        free(signed_document_dto->graphical_representation_storage_object_id);
        signed_document_dto->graphical_representation_storage_object_id = NULL;
    }
    if (signed_document_dto->graphical_representation_sha256) {
        free(signed_document_dto->graphical_representation_sha256);
        signed_document_dto->graphical_representation_sha256 = NULL;
    }
    if (signed_document_dto->graphical_representation_content_type) {
        free(signed_document_dto->graphical_representation_content_type);
        signed_document_dto->graphical_representation_content_type = NULL;
    }
    if (signed_document_dto->graphical_representation_generated_at_utc) {
        free(signed_document_dto->graphical_representation_generated_at_utc);
        signed_document_dto->graphical_representation_generated_at_utc = NULL;
    }
    if (signed_document_dto->contact_name) {
        free(signed_document_dto->contact_name);
        signed_document_dto->contact_name = NULL;
    }
    free(signed_document_dto);
}

cJSON *signed_document_dto_convertToJSON(signed_document_dto_t *signed_document_dto) {
    cJSON *item = cJSON_CreateObject();

    // signed_document_dto->id
    if(signed_document_dto->id) {
    if(cJSON_AddStringToObject(item, "id", signed_document_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_dto->timestamp
    if(signed_document_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", signed_document_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // signed_document_dto->_signed
    if(signed_document_dto->_signed) {
    if(cJSON_AddBoolToObject(item, "signed", signed_document_dto->_signed) == NULL) {
    goto fail; //Bool
    }
    }


    // signed_document_dto->url
    if(signed_document_dto->url) {
    if(cJSON_AddStringToObject(item, "url", signed_document_dto->url) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_dto->type
    if(signed_document_dto->type) {
    if(cJSON_AddStringToObject(item, "type", signed_document_dto->type) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_dto->title
    if(signed_document_dto->title) {
    if(cJSON_AddStringToObject(item, "title", signed_document_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_dto->content_type
    if(signed_document_dto->content_type) {
    if(cJSON_AddStringToObject(item, "contentType", signed_document_dto->content_type) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_dto->file_length_in_bits
    if(signed_document_dto->file_length_in_bits) {
    if(cJSON_AddNumberToObject(item, "fileLengthInBits", signed_document_dto->file_length_in_bits) == NULL) {
    goto fail; //Numeric
    }
    }


    // signed_document_dto->tenant_id
    if(signed_document_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", signed_document_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_dto->contact_id
    if(signed_document_dto->contact_id) {
    if(cJSON_AddStringToObject(item, "contactId", signed_document_dto->contact_id) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_dto->user_id
    if(signed_document_dto->user_id) {
    if(cJSON_AddStringToObject(item, "userId", signed_document_dto->user_id) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_dto->enrollment_id
    if(signed_document_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", signed_document_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_dto->document_standard
    if(signed_document_dto->document_standard != trustservice_signed_document_dto_DOCUMENTSTANDARD_NULL) {
    if(cJSON_AddStringToObject(item, "documentStandard", document_standardsigned_document_dto_ToString(signed_document_dto->document_standard)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // signed_document_dto->trust_document_type
    if(signed_document_dto->trust_document_type != trustservice_signed_document_dto_TRUSTDOCUMENTTYPE_NULL) {
    if(cJSON_AddStringToObject(item, "trustDocumentType", trust_document_typesigned_document_dto_ToString(signed_document_dto->trust_document_type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // signed_document_dto->signing_status
    if(signed_document_dto->signing_status != trustservice_signed_document_dto_SIGNINGSTATUS_NULL) {
    if(cJSON_AddStringToObject(item, "signingStatus", signing_statussigned_document_dto_ToString(signed_document_dto->signing_status)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // signed_document_dto->verification_status
    if(signed_document_dto->verification_status != trustservice_signed_document_dto_VERIFICATIONSTATUS_NULL) {
    if(cJSON_AddStringToObject(item, "verificationStatus", verification_statussigned_document_dto_ToString(signed_document_dto->verification_status)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // signed_document_dto->signed_at_utc
    if(signed_document_dto->signed_at_utc) {
    if(cJSON_AddStringToObject(item, "signedAtUtc", signed_document_dto->signed_at_utc) == NULL) {
    goto fail; //Date-Time
    }
    }


    // signed_document_dto->correlation_id
    if(signed_document_dto->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", signed_document_dto->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_dto->external_reference
    if(signed_document_dto->external_reference) {
    if(cJSON_AddStringToObject(item, "externalReference", signed_document_dto->external_reference) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_dto->source_storage_object_id
    if(signed_document_dto->source_storage_object_id) {
    if(cJSON_AddStringToObject(item, "sourceStorageObjectId", signed_document_dto->source_storage_object_id) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_dto->source_sha256
    if(signed_document_dto->source_sha256) {
    if(cJSON_AddStringToObject(item, "sourceSha256", signed_document_dto->source_sha256) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_dto->signed_storage_object_id
    if(signed_document_dto->signed_storage_object_id) {
    if(cJSON_AddStringToObject(item, "signedStorageObjectId", signed_document_dto->signed_storage_object_id) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_dto->signed_sha256
    if(signed_document_dto->signed_sha256) {
    if(cJSON_AddStringToObject(item, "signedSha256", signed_document_dto->signed_sha256) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_dto->evidence_storage_object_id
    if(signed_document_dto->evidence_storage_object_id) {
    if(cJSON_AddStringToObject(item, "evidenceStorageObjectId", signed_document_dto->evidence_storage_object_id) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_dto->evidence_sha256
    if(signed_document_dto->evidence_sha256) {
    if(cJSON_AddStringToObject(item, "evidenceSha256", signed_document_dto->evidence_sha256) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_dto->primary_file_upload_id
    if(signed_document_dto->primary_file_upload_id) {
    if(cJSON_AddStringToObject(item, "primaryFileUploadId", signed_document_dto->primary_file_upload_id) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_dto->frozen_source_file_upload_id
    if(signed_document_dto->frozen_source_file_upload_id) {
    if(cJSON_AddStringToObject(item, "frozenSourceFileUploadId", signed_document_dto->frozen_source_file_upload_id) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_dto->signed_file_upload_id
    if(signed_document_dto->signed_file_upload_id) {
    if(cJSON_AddStringToObject(item, "signedFileUploadId", signed_document_dto->signed_file_upload_id) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_dto->evidence_file_upload_id
    if(signed_document_dto->evidence_file_upload_id) {
    if(cJSON_AddStringToObject(item, "evidenceFileUploadId", signed_document_dto->evidence_file_upload_id) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_dto->lock_state
    if(signed_document_dto->lock_state != trustservice_signed_document_dto_LOCKSTATE_NULL) {
    if(cJSON_AddStringToObject(item, "lockState", lock_statesigned_document_dto_ToString(signed_document_dto->lock_state)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // signed_document_dto->graphical_representation_file_upload_id
    if(signed_document_dto->graphical_representation_file_upload_id) {
    if(cJSON_AddStringToObject(item, "graphicalRepresentationFileUploadId", signed_document_dto->graphical_representation_file_upload_id) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_dto->graphical_representation_storage_object_id
    if(signed_document_dto->graphical_representation_storage_object_id) {
    if(cJSON_AddStringToObject(item, "graphicalRepresentationStorageObjectId", signed_document_dto->graphical_representation_storage_object_id) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_dto->graphical_representation_sha256
    if(signed_document_dto->graphical_representation_sha256) {
    if(cJSON_AddStringToObject(item, "graphicalRepresentationSha256", signed_document_dto->graphical_representation_sha256) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_dto->graphical_representation_content_type
    if(signed_document_dto->graphical_representation_content_type) {
    if(cJSON_AddStringToObject(item, "graphicalRepresentationContentType", signed_document_dto->graphical_representation_content_type) == NULL) {
    goto fail; //String
    }
    }


    // signed_document_dto->graphical_representation_generated_at_utc
    if(signed_document_dto->graphical_representation_generated_at_utc) {
    if(cJSON_AddStringToObject(item, "graphicalRepresentationGeneratedAtUtc", signed_document_dto->graphical_representation_generated_at_utc) == NULL) {
    goto fail; //Date-Time
    }
    }


    // signed_document_dto->contact_name
    if(signed_document_dto->contact_name) {
    if(cJSON_AddStringToObject(item, "contactName", signed_document_dto->contact_name) == NULL) {
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

signed_document_dto_t *signed_document_dto_parseFromJSON(cJSON *signed_document_dtoJSON){

    signed_document_dto_t *signed_document_dto_local_var = NULL;

    // signed_document_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(signed_document_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // signed_document_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(signed_document_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // signed_document_dto->_signed
    cJSON *_signed = cJSON_GetObjectItemCaseSensitive(signed_document_dtoJSON, "signed");
    if (_signed) { 
    if(!cJSON_IsBool(_signed))
    {
    goto end; //Bool
    }
    }

    // signed_document_dto->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(signed_document_dtoJSON, "url");
    if (url) { 
    if(!cJSON_IsString(url) && !cJSON_IsNull(url))
    {
    goto end; //String
    }
    }

    // signed_document_dto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(signed_document_dtoJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // signed_document_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(signed_document_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // signed_document_dto->content_type
    cJSON *content_type = cJSON_GetObjectItemCaseSensitive(signed_document_dtoJSON, "contentType");
    if (content_type) { 
    if(!cJSON_IsString(content_type) && !cJSON_IsNull(content_type))
    {
    goto end; //String
    }
    }

    // signed_document_dto->file_length_in_bits
    cJSON *file_length_in_bits = cJSON_GetObjectItemCaseSensitive(signed_document_dtoJSON, "fileLengthInBits");
    if (file_length_in_bits) { 
    if(!cJSON_IsNumber(file_length_in_bits))
    {
    goto end; //Numeric
    }
    }

    // signed_document_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(signed_document_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // signed_document_dto->contact_id
    cJSON *contact_id = cJSON_GetObjectItemCaseSensitive(signed_document_dtoJSON, "contactId");
    if (contact_id) { 
    if(!cJSON_IsString(contact_id) && !cJSON_IsNull(contact_id))
    {
    goto end; //String
    }
    }

    // signed_document_dto->user_id
    cJSON *user_id = cJSON_GetObjectItemCaseSensitive(signed_document_dtoJSON, "userId");
    if (user_id) { 
    if(!cJSON_IsString(user_id) && !cJSON_IsNull(user_id))
    {
    goto end; //String
    }
    }

    // signed_document_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(signed_document_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // signed_document_dto->document_standard
    cJSON *document_standard = cJSON_GetObjectItemCaseSensitive(signed_document_dtoJSON, "documentStandard");
    trustservice_signed_document_dto_DOCUMENTSTANDARD_e document_standardVariable;
    if (document_standard) { 
    if(!cJSON_IsString(document_standard))
    {
    goto end; //Enum
    }
    document_standardVariable = signed_document_dto_document_standard_FromString(document_standard->valuestring);
    }

    // signed_document_dto->trust_document_type
    cJSON *trust_document_type = cJSON_GetObjectItemCaseSensitive(signed_document_dtoJSON, "trustDocumentType");
    trustservice_signed_document_dto_TRUSTDOCUMENTTYPE_e trust_document_typeVariable;
    if (trust_document_type) { 
    if(!cJSON_IsString(trust_document_type))
    {
    goto end; //Enum
    }
    trust_document_typeVariable = signed_document_dto_trust_document_type_FromString(trust_document_type->valuestring);
    }

    // signed_document_dto->signing_status
    cJSON *signing_status = cJSON_GetObjectItemCaseSensitive(signed_document_dtoJSON, "signingStatus");
    trustservice_signed_document_dto_SIGNINGSTATUS_e signing_statusVariable;
    if (signing_status) { 
    if(!cJSON_IsString(signing_status))
    {
    goto end; //Enum
    }
    signing_statusVariable = signed_document_dto_signing_status_FromString(signing_status->valuestring);
    }

    // signed_document_dto->verification_status
    cJSON *verification_status = cJSON_GetObjectItemCaseSensitive(signed_document_dtoJSON, "verificationStatus");
    trustservice_signed_document_dto_VERIFICATIONSTATUS_e verification_statusVariable;
    if (verification_status) { 
    if(!cJSON_IsString(verification_status))
    {
    goto end; //Enum
    }
    verification_statusVariable = signed_document_dto_verification_status_FromString(verification_status->valuestring);
    }

    // signed_document_dto->signed_at_utc
    cJSON *signed_at_utc = cJSON_GetObjectItemCaseSensitive(signed_document_dtoJSON, "signedAtUtc");
    if (signed_at_utc) { 
    if(!cJSON_IsString(signed_at_utc) && !cJSON_IsNull(signed_at_utc))
    {
    goto end; //DateTime
    }
    }

    // signed_document_dto->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(signed_document_dtoJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // signed_document_dto->external_reference
    cJSON *external_reference = cJSON_GetObjectItemCaseSensitive(signed_document_dtoJSON, "externalReference");
    if (external_reference) { 
    if(!cJSON_IsString(external_reference) && !cJSON_IsNull(external_reference))
    {
    goto end; //String
    }
    }

    // signed_document_dto->source_storage_object_id
    cJSON *source_storage_object_id = cJSON_GetObjectItemCaseSensitive(signed_document_dtoJSON, "sourceStorageObjectId");
    if (source_storage_object_id) { 
    if(!cJSON_IsString(source_storage_object_id) && !cJSON_IsNull(source_storage_object_id))
    {
    goto end; //String
    }
    }

    // signed_document_dto->source_sha256
    cJSON *source_sha256 = cJSON_GetObjectItemCaseSensitive(signed_document_dtoJSON, "sourceSha256");
    if (source_sha256) { 
    if(!cJSON_IsString(source_sha256) && !cJSON_IsNull(source_sha256))
    {
    goto end; //String
    }
    }

    // signed_document_dto->signed_storage_object_id
    cJSON *signed_storage_object_id = cJSON_GetObjectItemCaseSensitive(signed_document_dtoJSON, "signedStorageObjectId");
    if (signed_storage_object_id) { 
    if(!cJSON_IsString(signed_storage_object_id) && !cJSON_IsNull(signed_storage_object_id))
    {
    goto end; //String
    }
    }

    // signed_document_dto->signed_sha256
    cJSON *signed_sha256 = cJSON_GetObjectItemCaseSensitive(signed_document_dtoJSON, "signedSha256");
    if (signed_sha256) { 
    if(!cJSON_IsString(signed_sha256) && !cJSON_IsNull(signed_sha256))
    {
    goto end; //String
    }
    }

    // signed_document_dto->evidence_storage_object_id
    cJSON *evidence_storage_object_id = cJSON_GetObjectItemCaseSensitive(signed_document_dtoJSON, "evidenceStorageObjectId");
    if (evidence_storage_object_id) { 
    if(!cJSON_IsString(evidence_storage_object_id) && !cJSON_IsNull(evidence_storage_object_id))
    {
    goto end; //String
    }
    }

    // signed_document_dto->evidence_sha256
    cJSON *evidence_sha256 = cJSON_GetObjectItemCaseSensitive(signed_document_dtoJSON, "evidenceSha256");
    if (evidence_sha256) { 
    if(!cJSON_IsString(evidence_sha256) && !cJSON_IsNull(evidence_sha256))
    {
    goto end; //String
    }
    }

    // signed_document_dto->primary_file_upload_id
    cJSON *primary_file_upload_id = cJSON_GetObjectItemCaseSensitive(signed_document_dtoJSON, "primaryFileUploadId");
    if (primary_file_upload_id) { 
    if(!cJSON_IsString(primary_file_upload_id) && !cJSON_IsNull(primary_file_upload_id))
    {
    goto end; //String
    }
    }

    // signed_document_dto->frozen_source_file_upload_id
    cJSON *frozen_source_file_upload_id = cJSON_GetObjectItemCaseSensitive(signed_document_dtoJSON, "frozenSourceFileUploadId");
    if (frozen_source_file_upload_id) { 
    if(!cJSON_IsString(frozen_source_file_upload_id) && !cJSON_IsNull(frozen_source_file_upload_id))
    {
    goto end; //String
    }
    }

    // signed_document_dto->signed_file_upload_id
    cJSON *signed_file_upload_id = cJSON_GetObjectItemCaseSensitive(signed_document_dtoJSON, "signedFileUploadId");
    if (signed_file_upload_id) { 
    if(!cJSON_IsString(signed_file_upload_id) && !cJSON_IsNull(signed_file_upload_id))
    {
    goto end; //String
    }
    }

    // signed_document_dto->evidence_file_upload_id
    cJSON *evidence_file_upload_id = cJSON_GetObjectItemCaseSensitive(signed_document_dtoJSON, "evidenceFileUploadId");
    if (evidence_file_upload_id) { 
    if(!cJSON_IsString(evidence_file_upload_id) && !cJSON_IsNull(evidence_file_upload_id))
    {
    goto end; //String
    }
    }

    // signed_document_dto->lock_state
    cJSON *lock_state = cJSON_GetObjectItemCaseSensitive(signed_document_dtoJSON, "lockState");
    trustservice_signed_document_dto_LOCKSTATE_e lock_stateVariable;
    if (lock_state) { 
    if(!cJSON_IsString(lock_state))
    {
    goto end; //Enum
    }
    lock_stateVariable = signed_document_dto_lock_state_FromString(lock_state->valuestring);
    }

    // signed_document_dto->graphical_representation_file_upload_id
    cJSON *graphical_representation_file_upload_id = cJSON_GetObjectItemCaseSensitive(signed_document_dtoJSON, "graphicalRepresentationFileUploadId");
    if (graphical_representation_file_upload_id) { 
    if(!cJSON_IsString(graphical_representation_file_upload_id) && !cJSON_IsNull(graphical_representation_file_upload_id))
    {
    goto end; //String
    }
    }

    // signed_document_dto->graphical_representation_storage_object_id
    cJSON *graphical_representation_storage_object_id = cJSON_GetObjectItemCaseSensitive(signed_document_dtoJSON, "graphicalRepresentationStorageObjectId");
    if (graphical_representation_storage_object_id) { 
    if(!cJSON_IsString(graphical_representation_storage_object_id) && !cJSON_IsNull(graphical_representation_storage_object_id))
    {
    goto end; //String
    }
    }

    // signed_document_dto->graphical_representation_sha256
    cJSON *graphical_representation_sha256 = cJSON_GetObjectItemCaseSensitive(signed_document_dtoJSON, "graphicalRepresentationSha256");
    if (graphical_representation_sha256) { 
    if(!cJSON_IsString(graphical_representation_sha256) && !cJSON_IsNull(graphical_representation_sha256))
    {
    goto end; //String
    }
    }

    // signed_document_dto->graphical_representation_content_type
    cJSON *graphical_representation_content_type = cJSON_GetObjectItemCaseSensitive(signed_document_dtoJSON, "graphicalRepresentationContentType");
    if (graphical_representation_content_type) { 
    if(!cJSON_IsString(graphical_representation_content_type) && !cJSON_IsNull(graphical_representation_content_type))
    {
    goto end; //String
    }
    }

    // signed_document_dto->graphical_representation_generated_at_utc
    cJSON *graphical_representation_generated_at_utc = cJSON_GetObjectItemCaseSensitive(signed_document_dtoJSON, "graphicalRepresentationGeneratedAtUtc");
    if (graphical_representation_generated_at_utc) { 
    if(!cJSON_IsString(graphical_representation_generated_at_utc) && !cJSON_IsNull(graphical_representation_generated_at_utc))
    {
    goto end; //DateTime
    }
    }

    // signed_document_dto->contact_name
    cJSON *contact_name = cJSON_GetObjectItemCaseSensitive(signed_document_dtoJSON, "contactName");
    if (contact_name) { 
    if(!cJSON_IsString(contact_name) && !cJSON_IsNull(contact_name))
    {
    goto end; //String
    }
    }


    signed_document_dto_local_var = signed_document_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        _signed ? _signed->valueint : 0,
        url && !cJSON_IsNull(url) ? strdup(url->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        content_type && !cJSON_IsNull(content_type) ? strdup(content_type->valuestring) : NULL,
        file_length_in_bits ? file_length_in_bits->valuedouble : 0,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        contact_id && !cJSON_IsNull(contact_id) ? strdup(contact_id->valuestring) : NULL,
        user_id && !cJSON_IsNull(user_id) ? strdup(user_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        document_standard ? document_standardVariable : trustservice_signed_document_dto_DOCUMENTSTANDARD_NULL,
        trust_document_type ? trust_document_typeVariable : trustservice_signed_document_dto_TRUSTDOCUMENTTYPE_NULL,
        signing_status ? signing_statusVariable : trustservice_signed_document_dto_SIGNINGSTATUS_NULL,
        verification_status ? verification_statusVariable : trustservice_signed_document_dto_VERIFICATIONSTATUS_NULL,
        signed_at_utc && !cJSON_IsNull(signed_at_utc) ? strdup(signed_at_utc->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        external_reference && !cJSON_IsNull(external_reference) ? strdup(external_reference->valuestring) : NULL,
        source_storage_object_id && !cJSON_IsNull(source_storage_object_id) ? strdup(source_storage_object_id->valuestring) : NULL,
        source_sha256 && !cJSON_IsNull(source_sha256) ? strdup(source_sha256->valuestring) : NULL,
        signed_storage_object_id && !cJSON_IsNull(signed_storage_object_id) ? strdup(signed_storage_object_id->valuestring) : NULL,
        signed_sha256 && !cJSON_IsNull(signed_sha256) ? strdup(signed_sha256->valuestring) : NULL,
        evidence_storage_object_id && !cJSON_IsNull(evidence_storage_object_id) ? strdup(evidence_storage_object_id->valuestring) : NULL,
        evidence_sha256 && !cJSON_IsNull(evidence_sha256) ? strdup(evidence_sha256->valuestring) : NULL,
        primary_file_upload_id && !cJSON_IsNull(primary_file_upload_id) ? strdup(primary_file_upload_id->valuestring) : NULL,
        frozen_source_file_upload_id && !cJSON_IsNull(frozen_source_file_upload_id) ? strdup(frozen_source_file_upload_id->valuestring) : NULL,
        signed_file_upload_id && !cJSON_IsNull(signed_file_upload_id) ? strdup(signed_file_upload_id->valuestring) : NULL,
        evidence_file_upload_id && !cJSON_IsNull(evidence_file_upload_id) ? strdup(evidence_file_upload_id->valuestring) : NULL,
        lock_state ? lock_stateVariable : trustservice_signed_document_dto_LOCKSTATE_NULL,
        graphical_representation_file_upload_id && !cJSON_IsNull(graphical_representation_file_upload_id) ? strdup(graphical_representation_file_upload_id->valuestring) : NULL,
        graphical_representation_storage_object_id && !cJSON_IsNull(graphical_representation_storage_object_id) ? strdup(graphical_representation_storage_object_id->valuestring) : NULL,
        graphical_representation_sha256 && !cJSON_IsNull(graphical_representation_sha256) ? strdup(graphical_representation_sha256->valuestring) : NULL,
        graphical_representation_content_type && !cJSON_IsNull(graphical_representation_content_type) ? strdup(graphical_representation_content_type->valuestring) : NULL,
        graphical_representation_generated_at_utc && !cJSON_IsNull(graphical_representation_generated_at_utc) ? strdup(graphical_representation_generated_at_utc->valuestring) : NULL,
        contact_name && !cJSON_IsNull(contact_name) ? strdup(contact_name->valuestring) : NULL
        );

    return signed_document_dto_local_var;
end:
    return NULL;

}
