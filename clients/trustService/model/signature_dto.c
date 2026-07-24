#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "signature_dto.h"


char* signature_dto_signing_status_ToString(trustservice_signature_dto_SIGNINGSTATUS_e signing_status) {
    char* signing_statusArray[] =  { "NULL", "Unknown", "Draft", "Signed", "Failed", "Revoked" };
    return signing_statusArray[signing_status];
}

trustservice_signature_dto_SIGNINGSTATUS_e signature_dto_signing_status_FromString(char* signing_status){
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
char* signature_dto_verification_status_ToString(trustservice_signature_dto_VERIFICATIONSTATUS_e verification_status) {
    char* verification_statusArray[] =  { "NULL", "Unknown", "NotVerified", "Valid", "Invalid", "Expired" };
    return verification_statusArray[verification_status];
}

trustservice_signature_dto_VERIFICATIONSTATUS_e signature_dto_verification_status_FromString(char* verification_status){
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
char* signature_dto_signature_format_ToString(trustservice_signature_dto_SIGNATUREFORMAT_e signature_format) {
    char* signature_formatArray[] =  { "NULL", "Unknown", "XAdES", "PAdES", "CAdES", "SMIME", "DetachedXmlDSig", "Enveloped", "Other" };
    return signature_formatArray[signature_format];
}

trustservice_signature_dto_SIGNATUREFORMAT_e signature_dto_signature_format_FromString(char* signature_format){
    int stringToReturn = 0;
    char *signature_formatArray[] =  { "NULL", "Unknown", "XAdES", "PAdES", "CAdES", "SMIME", "DetachedXmlDSig", "Enveloped", "Other" };
    size_t sizeofArray = sizeof(signature_formatArray) / sizeof(signature_formatArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(signature_format, signature_formatArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

signature_dto_t *signature_dto_create(
    char *id,
    char *timestamp,
    char *type,
    char *validation_code,
    char *signature_image,
    char *contact_id,
    char *tenant_id,
    char *user_id,
    char *enrollment_id,
    char *signing_profile_id,
    char *signing_certificate_id,
    char *signed_document_id,
    char *signed_at_utc,
    trustservice_signature_dto_SIGNINGSTATUS_e signing_status,
    trustservice_signature_dto_VERIFICATIONSTATUS_e verification_status,
    trustservice_signature_dto_SIGNATUREFORMAT_e signature_format,
    char *digest_algorithm,
    char *signature_algorithm,
    char *canonicalization_algorithm,
    char *policy_identifier,
    char *correlation_id,
    char *digest_value,
    char *signature_value_hash,
    char *contact_name,
    char *signing_profile_display_name,
    char *signing_certificate_title,
    char *signed_document_title
    ) {
    signature_dto_t *signature_dto_local_var = malloc(sizeof(signature_dto_t));
    if (!signature_dto_local_var) {
        return NULL;
    }
    signature_dto_local_var->id = id;
    signature_dto_local_var->timestamp = timestamp;
    signature_dto_local_var->type = type;
    signature_dto_local_var->validation_code = validation_code;
    signature_dto_local_var->signature_image = signature_image;
    signature_dto_local_var->contact_id = contact_id;
    signature_dto_local_var->tenant_id = tenant_id;
    signature_dto_local_var->user_id = user_id;
    signature_dto_local_var->enrollment_id = enrollment_id;
    signature_dto_local_var->signing_profile_id = signing_profile_id;
    signature_dto_local_var->signing_certificate_id = signing_certificate_id;
    signature_dto_local_var->signed_document_id = signed_document_id;
    signature_dto_local_var->signed_at_utc = signed_at_utc;
    signature_dto_local_var->signing_status = signing_status;
    signature_dto_local_var->verification_status = verification_status;
    signature_dto_local_var->signature_format = signature_format;
    signature_dto_local_var->digest_algorithm = digest_algorithm;
    signature_dto_local_var->signature_algorithm = signature_algorithm;
    signature_dto_local_var->canonicalization_algorithm = canonicalization_algorithm;
    signature_dto_local_var->policy_identifier = policy_identifier;
    signature_dto_local_var->correlation_id = correlation_id;
    signature_dto_local_var->digest_value = digest_value;
    signature_dto_local_var->signature_value_hash = signature_value_hash;
    signature_dto_local_var->contact_name = contact_name;
    signature_dto_local_var->signing_profile_display_name = signing_profile_display_name;
    signature_dto_local_var->signing_certificate_title = signing_certificate_title;
    signature_dto_local_var->signed_document_title = signed_document_title;

    return signature_dto_local_var;
}


void signature_dto_free(signature_dto_t *signature_dto) {
    if(NULL == signature_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (signature_dto->id) {
        free(signature_dto->id);
        signature_dto->id = NULL;
    }
    if (signature_dto->timestamp) {
        free(signature_dto->timestamp);
        signature_dto->timestamp = NULL;
    }
    if (signature_dto->type) {
        free(signature_dto->type);
        signature_dto->type = NULL;
    }
    if (signature_dto->validation_code) {
        free(signature_dto->validation_code);
        signature_dto->validation_code = NULL;
    }
    if (signature_dto->signature_image) {
        free(signature_dto->signature_image);
        signature_dto->signature_image = NULL;
    }
    if (signature_dto->contact_id) {
        free(signature_dto->contact_id);
        signature_dto->contact_id = NULL;
    }
    if (signature_dto->tenant_id) {
        free(signature_dto->tenant_id);
        signature_dto->tenant_id = NULL;
    }
    if (signature_dto->user_id) {
        free(signature_dto->user_id);
        signature_dto->user_id = NULL;
    }
    if (signature_dto->enrollment_id) {
        free(signature_dto->enrollment_id);
        signature_dto->enrollment_id = NULL;
    }
    if (signature_dto->signing_profile_id) {
        free(signature_dto->signing_profile_id);
        signature_dto->signing_profile_id = NULL;
    }
    if (signature_dto->signing_certificate_id) {
        free(signature_dto->signing_certificate_id);
        signature_dto->signing_certificate_id = NULL;
    }
    if (signature_dto->signed_document_id) {
        free(signature_dto->signed_document_id);
        signature_dto->signed_document_id = NULL;
    }
    if (signature_dto->signed_at_utc) {
        free(signature_dto->signed_at_utc);
        signature_dto->signed_at_utc = NULL;
    }
    if (signature_dto->digest_algorithm) {
        free(signature_dto->digest_algorithm);
        signature_dto->digest_algorithm = NULL;
    }
    if (signature_dto->signature_algorithm) {
        free(signature_dto->signature_algorithm);
        signature_dto->signature_algorithm = NULL;
    }
    if (signature_dto->canonicalization_algorithm) {
        free(signature_dto->canonicalization_algorithm);
        signature_dto->canonicalization_algorithm = NULL;
    }
    if (signature_dto->policy_identifier) {
        free(signature_dto->policy_identifier);
        signature_dto->policy_identifier = NULL;
    }
    if (signature_dto->correlation_id) {
        free(signature_dto->correlation_id);
        signature_dto->correlation_id = NULL;
    }
    if (signature_dto->digest_value) {
        free(signature_dto->digest_value);
        signature_dto->digest_value = NULL;
    }
    if (signature_dto->signature_value_hash) {
        free(signature_dto->signature_value_hash);
        signature_dto->signature_value_hash = NULL;
    }
    if (signature_dto->contact_name) {
        free(signature_dto->contact_name);
        signature_dto->contact_name = NULL;
    }
    if (signature_dto->signing_profile_display_name) {
        free(signature_dto->signing_profile_display_name);
        signature_dto->signing_profile_display_name = NULL;
    }
    if (signature_dto->signing_certificate_title) {
        free(signature_dto->signing_certificate_title);
        signature_dto->signing_certificate_title = NULL;
    }
    if (signature_dto->signed_document_title) {
        free(signature_dto->signed_document_title);
        signature_dto->signed_document_title = NULL;
    }
    free(signature_dto);
}

cJSON *signature_dto_convertToJSON(signature_dto_t *signature_dto) {
    cJSON *item = cJSON_CreateObject();

    // signature_dto->id
    if(signature_dto->id) {
    if(cJSON_AddStringToObject(item, "id", signature_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // signature_dto->timestamp
    if(signature_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", signature_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // signature_dto->type
    if(signature_dto->type) {
    if(cJSON_AddStringToObject(item, "type", signature_dto->type) == NULL) {
    goto fail; //String
    }
    }


    // signature_dto->validation_code
    if(signature_dto->validation_code) {
    if(cJSON_AddStringToObject(item, "validationCode", signature_dto->validation_code) == NULL) {
    goto fail; //String
    }
    }


    // signature_dto->signature_image
    if(signature_dto->signature_image) {
    if(cJSON_AddStringToObject(item, "signatureImage", signature_dto->signature_image) == NULL) {
    goto fail; //String
    }
    }


    // signature_dto->contact_id
    if(signature_dto->contact_id) {
    if(cJSON_AddStringToObject(item, "contactId", signature_dto->contact_id) == NULL) {
    goto fail; //String
    }
    }


    // signature_dto->tenant_id
    if(signature_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", signature_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // signature_dto->user_id
    if(signature_dto->user_id) {
    if(cJSON_AddStringToObject(item, "userId", signature_dto->user_id) == NULL) {
    goto fail; //String
    }
    }


    // signature_dto->enrollment_id
    if(signature_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", signature_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // signature_dto->signing_profile_id
    if(signature_dto->signing_profile_id) {
    if(cJSON_AddStringToObject(item, "signingProfileId", signature_dto->signing_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // signature_dto->signing_certificate_id
    if(signature_dto->signing_certificate_id) {
    if(cJSON_AddStringToObject(item, "signingCertificateId", signature_dto->signing_certificate_id) == NULL) {
    goto fail; //String
    }
    }


    // signature_dto->signed_document_id
    if(signature_dto->signed_document_id) {
    if(cJSON_AddStringToObject(item, "signedDocumentId", signature_dto->signed_document_id) == NULL) {
    goto fail; //String
    }
    }


    // signature_dto->signed_at_utc
    if(signature_dto->signed_at_utc) {
    if(cJSON_AddStringToObject(item, "signedAtUtc", signature_dto->signed_at_utc) == NULL) {
    goto fail; //Date-Time
    }
    }


    // signature_dto->signing_status
    if(signature_dto->signing_status != trustservice_signature_dto_SIGNINGSTATUS_NULL) {
    if(cJSON_AddStringToObject(item, "signingStatus", signing_statussignature_dto_ToString(signature_dto->signing_status)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // signature_dto->verification_status
    if(signature_dto->verification_status != trustservice_signature_dto_VERIFICATIONSTATUS_NULL) {
    if(cJSON_AddStringToObject(item, "verificationStatus", verification_statussignature_dto_ToString(signature_dto->verification_status)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // signature_dto->signature_format
    if(signature_dto->signature_format != trustservice_signature_dto_SIGNATUREFORMAT_NULL) {
    if(cJSON_AddStringToObject(item, "signatureFormat", signature_formatsignature_dto_ToString(signature_dto->signature_format)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // signature_dto->digest_algorithm
    if(signature_dto->digest_algorithm) {
    if(cJSON_AddStringToObject(item, "digestAlgorithm", signature_dto->digest_algorithm) == NULL) {
    goto fail; //String
    }
    }


    // signature_dto->signature_algorithm
    if(signature_dto->signature_algorithm) {
    if(cJSON_AddStringToObject(item, "signatureAlgorithm", signature_dto->signature_algorithm) == NULL) {
    goto fail; //String
    }
    }


    // signature_dto->canonicalization_algorithm
    if(signature_dto->canonicalization_algorithm) {
    if(cJSON_AddStringToObject(item, "canonicalizationAlgorithm", signature_dto->canonicalization_algorithm) == NULL) {
    goto fail; //String
    }
    }


    // signature_dto->policy_identifier
    if(signature_dto->policy_identifier) {
    if(cJSON_AddStringToObject(item, "policyIdentifier", signature_dto->policy_identifier) == NULL) {
    goto fail; //String
    }
    }


    // signature_dto->correlation_id
    if(signature_dto->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", signature_dto->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // signature_dto->digest_value
    if(signature_dto->digest_value) {
    if(cJSON_AddStringToObject(item, "digestValue", signature_dto->digest_value) == NULL) {
    goto fail; //String
    }
    }


    // signature_dto->signature_value_hash
    if(signature_dto->signature_value_hash) {
    if(cJSON_AddStringToObject(item, "signatureValueHash", signature_dto->signature_value_hash) == NULL) {
    goto fail; //String
    }
    }


    // signature_dto->contact_name
    if(signature_dto->contact_name) {
    if(cJSON_AddStringToObject(item, "contactName", signature_dto->contact_name) == NULL) {
    goto fail; //String
    }
    }


    // signature_dto->signing_profile_display_name
    if(signature_dto->signing_profile_display_name) {
    if(cJSON_AddStringToObject(item, "signingProfileDisplayName", signature_dto->signing_profile_display_name) == NULL) {
    goto fail; //String
    }
    }


    // signature_dto->signing_certificate_title
    if(signature_dto->signing_certificate_title) {
    if(cJSON_AddStringToObject(item, "signingCertificateTitle", signature_dto->signing_certificate_title) == NULL) {
    goto fail; //String
    }
    }


    // signature_dto->signed_document_title
    if(signature_dto->signed_document_title) {
    if(cJSON_AddStringToObject(item, "signedDocumentTitle", signature_dto->signed_document_title) == NULL) {
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

signature_dto_t *signature_dto_parseFromJSON(cJSON *signature_dtoJSON){

    signature_dto_t *signature_dto_local_var = NULL;

    // signature_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(signature_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // signature_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(signature_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // signature_dto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(signature_dtoJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // signature_dto->validation_code
    cJSON *validation_code = cJSON_GetObjectItemCaseSensitive(signature_dtoJSON, "validationCode");
    if (validation_code) { 
    if(!cJSON_IsString(validation_code) && !cJSON_IsNull(validation_code))
    {
    goto end; //String
    }
    }

    // signature_dto->signature_image
    cJSON *signature_image = cJSON_GetObjectItemCaseSensitive(signature_dtoJSON, "signatureImage");
    if (signature_image) { 
    if(!cJSON_IsString(signature_image) && !cJSON_IsNull(signature_image))
    {
    goto end; //String
    }
    }

    // signature_dto->contact_id
    cJSON *contact_id = cJSON_GetObjectItemCaseSensitive(signature_dtoJSON, "contactId");
    if (contact_id) { 
    if(!cJSON_IsString(contact_id) && !cJSON_IsNull(contact_id))
    {
    goto end; //String
    }
    }

    // signature_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(signature_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // signature_dto->user_id
    cJSON *user_id = cJSON_GetObjectItemCaseSensitive(signature_dtoJSON, "userId");
    if (user_id) { 
    if(!cJSON_IsString(user_id) && !cJSON_IsNull(user_id))
    {
    goto end; //String
    }
    }

    // signature_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(signature_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // signature_dto->signing_profile_id
    cJSON *signing_profile_id = cJSON_GetObjectItemCaseSensitive(signature_dtoJSON, "signingProfileId");
    if (signing_profile_id) { 
    if(!cJSON_IsString(signing_profile_id) && !cJSON_IsNull(signing_profile_id))
    {
    goto end; //String
    }
    }

    // signature_dto->signing_certificate_id
    cJSON *signing_certificate_id = cJSON_GetObjectItemCaseSensitive(signature_dtoJSON, "signingCertificateId");
    if (signing_certificate_id) { 
    if(!cJSON_IsString(signing_certificate_id) && !cJSON_IsNull(signing_certificate_id))
    {
    goto end; //String
    }
    }

    // signature_dto->signed_document_id
    cJSON *signed_document_id = cJSON_GetObjectItemCaseSensitive(signature_dtoJSON, "signedDocumentId");
    if (signed_document_id) { 
    if(!cJSON_IsString(signed_document_id) && !cJSON_IsNull(signed_document_id))
    {
    goto end; //String
    }
    }

    // signature_dto->signed_at_utc
    cJSON *signed_at_utc = cJSON_GetObjectItemCaseSensitive(signature_dtoJSON, "signedAtUtc");
    if (signed_at_utc) { 
    if(!cJSON_IsString(signed_at_utc) && !cJSON_IsNull(signed_at_utc))
    {
    goto end; //DateTime
    }
    }

    // signature_dto->signing_status
    cJSON *signing_status = cJSON_GetObjectItemCaseSensitive(signature_dtoJSON, "signingStatus");
    trustservice_signature_dto_SIGNINGSTATUS_e signing_statusVariable;
    if (signing_status) { 
    if(!cJSON_IsString(signing_status))
    {
    goto end; //Enum
    }
    signing_statusVariable = signature_dto_signing_status_FromString(signing_status->valuestring);
    }

    // signature_dto->verification_status
    cJSON *verification_status = cJSON_GetObjectItemCaseSensitive(signature_dtoJSON, "verificationStatus");
    trustservice_signature_dto_VERIFICATIONSTATUS_e verification_statusVariable;
    if (verification_status) { 
    if(!cJSON_IsString(verification_status))
    {
    goto end; //Enum
    }
    verification_statusVariable = signature_dto_verification_status_FromString(verification_status->valuestring);
    }

    // signature_dto->signature_format
    cJSON *signature_format = cJSON_GetObjectItemCaseSensitive(signature_dtoJSON, "signatureFormat");
    trustservice_signature_dto_SIGNATUREFORMAT_e signature_formatVariable;
    if (signature_format) { 
    if(!cJSON_IsString(signature_format))
    {
    goto end; //Enum
    }
    signature_formatVariable = signature_dto_signature_format_FromString(signature_format->valuestring);
    }

    // signature_dto->digest_algorithm
    cJSON *digest_algorithm = cJSON_GetObjectItemCaseSensitive(signature_dtoJSON, "digestAlgorithm");
    if (digest_algorithm) { 
    if(!cJSON_IsString(digest_algorithm) && !cJSON_IsNull(digest_algorithm))
    {
    goto end; //String
    }
    }

    // signature_dto->signature_algorithm
    cJSON *signature_algorithm = cJSON_GetObjectItemCaseSensitive(signature_dtoJSON, "signatureAlgorithm");
    if (signature_algorithm) { 
    if(!cJSON_IsString(signature_algorithm) && !cJSON_IsNull(signature_algorithm))
    {
    goto end; //String
    }
    }

    // signature_dto->canonicalization_algorithm
    cJSON *canonicalization_algorithm = cJSON_GetObjectItemCaseSensitive(signature_dtoJSON, "canonicalizationAlgorithm");
    if (canonicalization_algorithm) { 
    if(!cJSON_IsString(canonicalization_algorithm) && !cJSON_IsNull(canonicalization_algorithm))
    {
    goto end; //String
    }
    }

    // signature_dto->policy_identifier
    cJSON *policy_identifier = cJSON_GetObjectItemCaseSensitive(signature_dtoJSON, "policyIdentifier");
    if (policy_identifier) { 
    if(!cJSON_IsString(policy_identifier) && !cJSON_IsNull(policy_identifier))
    {
    goto end; //String
    }
    }

    // signature_dto->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(signature_dtoJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // signature_dto->digest_value
    cJSON *digest_value = cJSON_GetObjectItemCaseSensitive(signature_dtoJSON, "digestValue");
    if (digest_value) { 
    if(!cJSON_IsString(digest_value) && !cJSON_IsNull(digest_value))
    {
    goto end; //String
    }
    }

    // signature_dto->signature_value_hash
    cJSON *signature_value_hash = cJSON_GetObjectItemCaseSensitive(signature_dtoJSON, "signatureValueHash");
    if (signature_value_hash) { 
    if(!cJSON_IsString(signature_value_hash) && !cJSON_IsNull(signature_value_hash))
    {
    goto end; //String
    }
    }

    // signature_dto->contact_name
    cJSON *contact_name = cJSON_GetObjectItemCaseSensitive(signature_dtoJSON, "contactName");
    if (contact_name) { 
    if(!cJSON_IsString(contact_name) && !cJSON_IsNull(contact_name))
    {
    goto end; //String
    }
    }

    // signature_dto->signing_profile_display_name
    cJSON *signing_profile_display_name = cJSON_GetObjectItemCaseSensitive(signature_dtoJSON, "signingProfileDisplayName");
    if (signing_profile_display_name) { 
    if(!cJSON_IsString(signing_profile_display_name) && !cJSON_IsNull(signing_profile_display_name))
    {
    goto end; //String
    }
    }

    // signature_dto->signing_certificate_title
    cJSON *signing_certificate_title = cJSON_GetObjectItemCaseSensitive(signature_dtoJSON, "signingCertificateTitle");
    if (signing_certificate_title) { 
    if(!cJSON_IsString(signing_certificate_title) && !cJSON_IsNull(signing_certificate_title))
    {
    goto end; //String
    }
    }

    // signature_dto->signed_document_title
    cJSON *signed_document_title = cJSON_GetObjectItemCaseSensitive(signature_dtoJSON, "signedDocumentTitle");
    if (signed_document_title) { 
    if(!cJSON_IsString(signed_document_title) && !cJSON_IsNull(signed_document_title))
    {
    goto end; //String
    }
    }


    signature_dto_local_var = signature_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        validation_code && !cJSON_IsNull(validation_code) ? strdup(validation_code->valuestring) : NULL,
        signature_image && !cJSON_IsNull(signature_image) ? strdup(signature_image->valuestring) : NULL,
        contact_id && !cJSON_IsNull(contact_id) ? strdup(contact_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        user_id && !cJSON_IsNull(user_id) ? strdup(user_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        signing_profile_id && !cJSON_IsNull(signing_profile_id) ? strdup(signing_profile_id->valuestring) : NULL,
        signing_certificate_id && !cJSON_IsNull(signing_certificate_id) ? strdup(signing_certificate_id->valuestring) : NULL,
        signed_document_id && !cJSON_IsNull(signed_document_id) ? strdup(signed_document_id->valuestring) : NULL,
        signed_at_utc && !cJSON_IsNull(signed_at_utc) ? strdup(signed_at_utc->valuestring) : NULL,
        signing_status ? signing_statusVariable : trustservice_signature_dto_SIGNINGSTATUS_NULL,
        verification_status ? verification_statusVariable : trustservice_signature_dto_VERIFICATIONSTATUS_NULL,
        signature_format ? signature_formatVariable : trustservice_signature_dto_SIGNATUREFORMAT_NULL,
        digest_algorithm && !cJSON_IsNull(digest_algorithm) ? strdup(digest_algorithm->valuestring) : NULL,
        signature_algorithm && !cJSON_IsNull(signature_algorithm) ? strdup(signature_algorithm->valuestring) : NULL,
        canonicalization_algorithm && !cJSON_IsNull(canonicalization_algorithm) ? strdup(canonicalization_algorithm->valuestring) : NULL,
        policy_identifier && !cJSON_IsNull(policy_identifier) ? strdup(policy_identifier->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        digest_value && !cJSON_IsNull(digest_value) ? strdup(digest_value->valuestring) : NULL,
        signature_value_hash && !cJSON_IsNull(signature_value_hash) ? strdup(signature_value_hash->valuestring) : NULL,
        contact_name && !cJSON_IsNull(contact_name) ? strdup(contact_name->valuestring) : NULL,
        signing_profile_display_name && !cJSON_IsNull(signing_profile_display_name) ? strdup(signing_profile_display_name->valuestring) : NULL,
        signing_certificate_title && !cJSON_IsNull(signing_certificate_title) ? strdup(signing_certificate_title->valuestring) : NULL,
        signed_document_title && !cJSON_IsNull(signed_document_title) ? strdup(signed_document_title->valuestring) : NULL
        );

    return signature_dto_local_var;
end:
    return NULL;

}
