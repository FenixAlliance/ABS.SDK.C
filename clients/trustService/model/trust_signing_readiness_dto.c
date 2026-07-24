#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "trust_signing_readiness_dto.h"


char* trust_signing_readiness_dto_expected_signature_format_ToString(trustservice_trust_signing_readiness_dto_EXPECTEDSIGNATUREFORMAT_e expected_signature_format) {
    char* expected_signature_formatArray[] =  { "NULL", "Unknown", "XAdES", "PAdES", "CAdES", "SMIME", "DetachedXmlDSig", "Enveloped", "Other" };
    return expected_signature_formatArray[expected_signature_format];
}

trustservice_trust_signing_readiness_dto_EXPECTEDSIGNATUREFORMAT_e trust_signing_readiness_dto_expected_signature_format_FromString(char* expected_signature_format){
    int stringToReturn = 0;
    char *expected_signature_formatArray[] =  { "NULL", "Unknown", "XAdES", "PAdES", "CAdES", "SMIME", "DetachedXmlDSig", "Enveloped", "Other" };
    size_t sizeofArray = sizeof(expected_signature_formatArray) / sizeof(expected_signature_formatArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(expected_signature_format, expected_signature_formatArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* trust_signing_readiness_dto_expected_signature_purpose_ToString(trustservice_trust_signing_readiness_dto_EXPECTEDSIGNATUREPURPOSE_e expected_signature_purpose) {
    char* expected_signature_purposeArray[] =  { "NULL", "Unknown", "RegulatorySubmission", "ContractExecution", "EmailSigning", "InternalApproval", "EvidenceSealing", "AgentCredential", "Other" };
    return expected_signature_purposeArray[expected_signature_purpose];
}

trustservice_trust_signing_readiness_dto_EXPECTEDSIGNATUREPURPOSE_e trust_signing_readiness_dto_expected_signature_purpose_FromString(char* expected_signature_purpose){
    int stringToReturn = 0;
    char *expected_signature_purposeArray[] =  { "NULL", "Unknown", "RegulatorySubmission", "ContractExecution", "EmailSigning", "InternalApproval", "EvidenceSealing", "AgentCredential", "Other" };
    size_t sizeofArray = sizeof(expected_signature_purposeArray) / sizeof(expected_signature_purposeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(expected_signature_purpose, expected_signature_purposeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

trust_signing_readiness_dto_t *trust_signing_readiness_dto_create(
    int can_proceed,
    list_t *blocking_reasons,
    list_t *warnings,
    char *resolved_document_title,
    char *resolved_profile_display_name,
    char *resolved_certificate_title,
    trustservice_trust_signing_readiness_dto_EXPECTEDSIGNATUREFORMAT_e expected_signature_format,
    trustservice_trust_signing_readiness_dto_EXPECTEDSIGNATUREPURPOSE_e expected_signature_purpose,
    char *expected_digest_algorithm,
    char *expected_signature_algorithm,
    char *expected_canonicalization_algorithm,
    char *policy_identifier,
    char *authority_profile,
    int requires_custody_provider,
    int requires_source_artifact,
    int requires_certificate,
    char *correlation_id
    ) {
    trust_signing_readiness_dto_t *trust_signing_readiness_dto_local_var = malloc(sizeof(trust_signing_readiness_dto_t));
    if (!trust_signing_readiness_dto_local_var) {
        return NULL;
    }
    trust_signing_readiness_dto_local_var->can_proceed = can_proceed;
    trust_signing_readiness_dto_local_var->blocking_reasons = blocking_reasons;
    trust_signing_readiness_dto_local_var->warnings = warnings;
    trust_signing_readiness_dto_local_var->resolved_document_title = resolved_document_title;
    trust_signing_readiness_dto_local_var->resolved_profile_display_name = resolved_profile_display_name;
    trust_signing_readiness_dto_local_var->resolved_certificate_title = resolved_certificate_title;
    trust_signing_readiness_dto_local_var->expected_signature_format = expected_signature_format;
    trust_signing_readiness_dto_local_var->expected_signature_purpose = expected_signature_purpose;
    trust_signing_readiness_dto_local_var->expected_digest_algorithm = expected_digest_algorithm;
    trust_signing_readiness_dto_local_var->expected_signature_algorithm = expected_signature_algorithm;
    trust_signing_readiness_dto_local_var->expected_canonicalization_algorithm = expected_canonicalization_algorithm;
    trust_signing_readiness_dto_local_var->policy_identifier = policy_identifier;
    trust_signing_readiness_dto_local_var->authority_profile = authority_profile;
    trust_signing_readiness_dto_local_var->requires_custody_provider = requires_custody_provider;
    trust_signing_readiness_dto_local_var->requires_source_artifact = requires_source_artifact;
    trust_signing_readiness_dto_local_var->requires_certificate = requires_certificate;
    trust_signing_readiness_dto_local_var->correlation_id = correlation_id;

    return trust_signing_readiness_dto_local_var;
}


void trust_signing_readiness_dto_free(trust_signing_readiness_dto_t *trust_signing_readiness_dto) {
    if(NULL == trust_signing_readiness_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (trust_signing_readiness_dto->blocking_reasons) {
        list_ForEach(listEntry, trust_signing_readiness_dto->blocking_reasons) {
            free(listEntry->data);
        }
        list_freeList(trust_signing_readiness_dto->blocking_reasons);
        trust_signing_readiness_dto->blocking_reasons = NULL;
    }
    if (trust_signing_readiness_dto->warnings) {
        list_ForEach(listEntry, trust_signing_readiness_dto->warnings) {
            free(listEntry->data);
        }
        list_freeList(trust_signing_readiness_dto->warnings);
        trust_signing_readiness_dto->warnings = NULL;
    }
    if (trust_signing_readiness_dto->resolved_document_title) {
        free(trust_signing_readiness_dto->resolved_document_title);
        trust_signing_readiness_dto->resolved_document_title = NULL;
    }
    if (trust_signing_readiness_dto->resolved_profile_display_name) {
        free(trust_signing_readiness_dto->resolved_profile_display_name);
        trust_signing_readiness_dto->resolved_profile_display_name = NULL;
    }
    if (trust_signing_readiness_dto->resolved_certificate_title) {
        free(trust_signing_readiness_dto->resolved_certificate_title);
        trust_signing_readiness_dto->resolved_certificate_title = NULL;
    }
    if (trust_signing_readiness_dto->expected_digest_algorithm) {
        free(trust_signing_readiness_dto->expected_digest_algorithm);
        trust_signing_readiness_dto->expected_digest_algorithm = NULL;
    }
    if (trust_signing_readiness_dto->expected_signature_algorithm) {
        free(trust_signing_readiness_dto->expected_signature_algorithm);
        trust_signing_readiness_dto->expected_signature_algorithm = NULL;
    }
    if (trust_signing_readiness_dto->expected_canonicalization_algorithm) {
        free(trust_signing_readiness_dto->expected_canonicalization_algorithm);
        trust_signing_readiness_dto->expected_canonicalization_algorithm = NULL;
    }
    if (trust_signing_readiness_dto->policy_identifier) {
        free(trust_signing_readiness_dto->policy_identifier);
        trust_signing_readiness_dto->policy_identifier = NULL;
    }
    if (trust_signing_readiness_dto->authority_profile) {
        free(trust_signing_readiness_dto->authority_profile);
        trust_signing_readiness_dto->authority_profile = NULL;
    }
    if (trust_signing_readiness_dto->correlation_id) {
        free(trust_signing_readiness_dto->correlation_id);
        trust_signing_readiness_dto->correlation_id = NULL;
    }
    free(trust_signing_readiness_dto);
}

cJSON *trust_signing_readiness_dto_convertToJSON(trust_signing_readiness_dto_t *trust_signing_readiness_dto) {
    cJSON *item = cJSON_CreateObject();

    // trust_signing_readiness_dto->can_proceed
    if(trust_signing_readiness_dto->can_proceed) {
    if(cJSON_AddBoolToObject(item, "canProceed", trust_signing_readiness_dto->can_proceed) == NULL) {
    goto fail; //Bool
    }
    }


    // trust_signing_readiness_dto->blocking_reasons
    if(trust_signing_readiness_dto->blocking_reasons) {
    cJSON *blocking_reasons = cJSON_AddArrayToObject(item, "blockingReasons");
    if(blocking_reasons == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *blocking_reasonsListEntry;
    list_ForEach(blocking_reasonsListEntry, trust_signing_readiness_dto->blocking_reasons) {
    if(cJSON_AddStringToObject(blocking_reasons, "", (char*)blocking_reasonsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // trust_signing_readiness_dto->warnings
    if(trust_signing_readiness_dto->warnings) {
    cJSON *warnings = cJSON_AddArrayToObject(item, "warnings");
    if(warnings == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *warningsListEntry;
    list_ForEach(warningsListEntry, trust_signing_readiness_dto->warnings) {
    if(cJSON_AddStringToObject(warnings, "", (char*)warningsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // trust_signing_readiness_dto->resolved_document_title
    if(trust_signing_readiness_dto->resolved_document_title) {
    if(cJSON_AddStringToObject(item, "resolvedDocumentTitle", trust_signing_readiness_dto->resolved_document_title) == NULL) {
    goto fail; //String
    }
    }


    // trust_signing_readiness_dto->resolved_profile_display_name
    if(trust_signing_readiness_dto->resolved_profile_display_name) {
    if(cJSON_AddStringToObject(item, "resolvedProfileDisplayName", trust_signing_readiness_dto->resolved_profile_display_name) == NULL) {
    goto fail; //String
    }
    }


    // trust_signing_readiness_dto->resolved_certificate_title
    if(trust_signing_readiness_dto->resolved_certificate_title) {
    if(cJSON_AddStringToObject(item, "resolvedCertificateTitle", trust_signing_readiness_dto->resolved_certificate_title) == NULL) {
    goto fail; //String
    }
    }


    // trust_signing_readiness_dto->expected_signature_format
    if(trust_signing_readiness_dto->expected_signature_format != trustservice_trust_signing_readiness_dto_EXPECTEDSIGNATUREFORMAT_NULL) {
    if(cJSON_AddStringToObject(item, "expectedSignatureFormat", expected_signature_formattrust_signing_readiness_dto_ToString(trust_signing_readiness_dto->expected_signature_format)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // trust_signing_readiness_dto->expected_signature_purpose
    if(trust_signing_readiness_dto->expected_signature_purpose != trustservice_trust_signing_readiness_dto_EXPECTEDSIGNATUREPURPOSE_NULL) {
    if(cJSON_AddStringToObject(item, "expectedSignaturePurpose", expected_signature_purposetrust_signing_readiness_dto_ToString(trust_signing_readiness_dto->expected_signature_purpose)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // trust_signing_readiness_dto->expected_digest_algorithm
    if(trust_signing_readiness_dto->expected_digest_algorithm) {
    if(cJSON_AddStringToObject(item, "expectedDigestAlgorithm", trust_signing_readiness_dto->expected_digest_algorithm) == NULL) {
    goto fail; //String
    }
    }


    // trust_signing_readiness_dto->expected_signature_algorithm
    if(trust_signing_readiness_dto->expected_signature_algorithm) {
    if(cJSON_AddStringToObject(item, "expectedSignatureAlgorithm", trust_signing_readiness_dto->expected_signature_algorithm) == NULL) {
    goto fail; //String
    }
    }


    // trust_signing_readiness_dto->expected_canonicalization_algorithm
    if(trust_signing_readiness_dto->expected_canonicalization_algorithm) {
    if(cJSON_AddStringToObject(item, "expectedCanonicalizationAlgorithm", trust_signing_readiness_dto->expected_canonicalization_algorithm) == NULL) {
    goto fail; //String
    }
    }


    // trust_signing_readiness_dto->policy_identifier
    if(trust_signing_readiness_dto->policy_identifier) {
    if(cJSON_AddStringToObject(item, "policyIdentifier", trust_signing_readiness_dto->policy_identifier) == NULL) {
    goto fail; //String
    }
    }


    // trust_signing_readiness_dto->authority_profile
    if(trust_signing_readiness_dto->authority_profile) {
    if(cJSON_AddStringToObject(item, "authorityProfile", trust_signing_readiness_dto->authority_profile) == NULL) {
    goto fail; //String
    }
    }


    // trust_signing_readiness_dto->requires_custody_provider
    if(trust_signing_readiness_dto->requires_custody_provider) {
    if(cJSON_AddBoolToObject(item, "requiresCustodyProvider", trust_signing_readiness_dto->requires_custody_provider) == NULL) {
    goto fail; //Bool
    }
    }


    // trust_signing_readiness_dto->requires_source_artifact
    if(trust_signing_readiness_dto->requires_source_artifact) {
    if(cJSON_AddBoolToObject(item, "requiresSourceArtifact", trust_signing_readiness_dto->requires_source_artifact) == NULL) {
    goto fail; //Bool
    }
    }


    // trust_signing_readiness_dto->requires_certificate
    if(trust_signing_readiness_dto->requires_certificate) {
    if(cJSON_AddBoolToObject(item, "requiresCertificate", trust_signing_readiness_dto->requires_certificate) == NULL) {
    goto fail; //Bool
    }
    }


    // trust_signing_readiness_dto->correlation_id
    if(trust_signing_readiness_dto->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", trust_signing_readiness_dto->correlation_id) == NULL) {
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

trust_signing_readiness_dto_t *trust_signing_readiness_dto_parseFromJSON(cJSON *trust_signing_readiness_dtoJSON){

    trust_signing_readiness_dto_t *trust_signing_readiness_dto_local_var = NULL;

    // define the local list for trust_signing_readiness_dto->blocking_reasons
    list_t *blocking_reasonsList = NULL;

    // define the local list for trust_signing_readiness_dto->warnings
    list_t *warningsList = NULL;

    // trust_signing_readiness_dto->can_proceed
    cJSON *can_proceed = cJSON_GetObjectItemCaseSensitive(trust_signing_readiness_dtoJSON, "canProceed");
    if (can_proceed) { 
    if(!cJSON_IsBool(can_proceed))
    {
    goto end; //Bool
    }
    }

    // trust_signing_readiness_dto->blocking_reasons
    cJSON *blocking_reasons = cJSON_GetObjectItemCaseSensitive(trust_signing_readiness_dtoJSON, "blockingReasons");
    if (blocking_reasons) { 
    cJSON *blocking_reasons_local = NULL;
    if(!cJSON_IsArray(blocking_reasons)) {
        goto end;//primitive container
    }
    blocking_reasonsList = list_createList();

    cJSON_ArrayForEach(blocking_reasons_local, blocking_reasons)
    {
        if(!cJSON_IsString(blocking_reasons_local))
        {
            goto end;
        }
        list_addElement(blocking_reasonsList , strdup(blocking_reasons_local->valuestring));
    }
    }

    // trust_signing_readiness_dto->warnings
    cJSON *warnings = cJSON_GetObjectItemCaseSensitive(trust_signing_readiness_dtoJSON, "warnings");
    if (warnings) { 
    cJSON *warnings_local = NULL;
    if(!cJSON_IsArray(warnings)) {
        goto end;//primitive container
    }
    warningsList = list_createList();

    cJSON_ArrayForEach(warnings_local, warnings)
    {
        if(!cJSON_IsString(warnings_local))
        {
            goto end;
        }
        list_addElement(warningsList , strdup(warnings_local->valuestring));
    }
    }

    // trust_signing_readiness_dto->resolved_document_title
    cJSON *resolved_document_title = cJSON_GetObjectItemCaseSensitive(trust_signing_readiness_dtoJSON, "resolvedDocumentTitle");
    if (resolved_document_title) { 
    if(!cJSON_IsString(resolved_document_title) && !cJSON_IsNull(resolved_document_title))
    {
    goto end; //String
    }
    }

    // trust_signing_readiness_dto->resolved_profile_display_name
    cJSON *resolved_profile_display_name = cJSON_GetObjectItemCaseSensitive(trust_signing_readiness_dtoJSON, "resolvedProfileDisplayName");
    if (resolved_profile_display_name) { 
    if(!cJSON_IsString(resolved_profile_display_name) && !cJSON_IsNull(resolved_profile_display_name))
    {
    goto end; //String
    }
    }

    // trust_signing_readiness_dto->resolved_certificate_title
    cJSON *resolved_certificate_title = cJSON_GetObjectItemCaseSensitive(trust_signing_readiness_dtoJSON, "resolvedCertificateTitle");
    if (resolved_certificate_title) { 
    if(!cJSON_IsString(resolved_certificate_title) && !cJSON_IsNull(resolved_certificate_title))
    {
    goto end; //String
    }
    }

    // trust_signing_readiness_dto->expected_signature_format
    cJSON *expected_signature_format = cJSON_GetObjectItemCaseSensitive(trust_signing_readiness_dtoJSON, "expectedSignatureFormat");
    trustservice_trust_signing_readiness_dto_EXPECTEDSIGNATUREFORMAT_e expected_signature_formatVariable;
    if (expected_signature_format) { 
    if(!cJSON_IsString(expected_signature_format))
    {
    goto end; //Enum
    }
    expected_signature_formatVariable = trust_signing_readiness_dto_expected_signature_format_FromString(expected_signature_format->valuestring);
    }

    // trust_signing_readiness_dto->expected_signature_purpose
    cJSON *expected_signature_purpose = cJSON_GetObjectItemCaseSensitive(trust_signing_readiness_dtoJSON, "expectedSignaturePurpose");
    trustservice_trust_signing_readiness_dto_EXPECTEDSIGNATUREPURPOSE_e expected_signature_purposeVariable;
    if (expected_signature_purpose) { 
    if(!cJSON_IsString(expected_signature_purpose))
    {
    goto end; //Enum
    }
    expected_signature_purposeVariable = trust_signing_readiness_dto_expected_signature_purpose_FromString(expected_signature_purpose->valuestring);
    }

    // trust_signing_readiness_dto->expected_digest_algorithm
    cJSON *expected_digest_algorithm = cJSON_GetObjectItemCaseSensitive(trust_signing_readiness_dtoJSON, "expectedDigestAlgorithm");
    if (expected_digest_algorithm) { 
    if(!cJSON_IsString(expected_digest_algorithm) && !cJSON_IsNull(expected_digest_algorithm))
    {
    goto end; //String
    }
    }

    // trust_signing_readiness_dto->expected_signature_algorithm
    cJSON *expected_signature_algorithm = cJSON_GetObjectItemCaseSensitive(trust_signing_readiness_dtoJSON, "expectedSignatureAlgorithm");
    if (expected_signature_algorithm) { 
    if(!cJSON_IsString(expected_signature_algorithm) && !cJSON_IsNull(expected_signature_algorithm))
    {
    goto end; //String
    }
    }

    // trust_signing_readiness_dto->expected_canonicalization_algorithm
    cJSON *expected_canonicalization_algorithm = cJSON_GetObjectItemCaseSensitive(trust_signing_readiness_dtoJSON, "expectedCanonicalizationAlgorithm");
    if (expected_canonicalization_algorithm) { 
    if(!cJSON_IsString(expected_canonicalization_algorithm) && !cJSON_IsNull(expected_canonicalization_algorithm))
    {
    goto end; //String
    }
    }

    // trust_signing_readiness_dto->policy_identifier
    cJSON *policy_identifier = cJSON_GetObjectItemCaseSensitive(trust_signing_readiness_dtoJSON, "policyIdentifier");
    if (policy_identifier) { 
    if(!cJSON_IsString(policy_identifier) && !cJSON_IsNull(policy_identifier))
    {
    goto end; //String
    }
    }

    // trust_signing_readiness_dto->authority_profile
    cJSON *authority_profile = cJSON_GetObjectItemCaseSensitive(trust_signing_readiness_dtoJSON, "authorityProfile");
    if (authority_profile) { 
    if(!cJSON_IsString(authority_profile) && !cJSON_IsNull(authority_profile))
    {
    goto end; //String
    }
    }

    // trust_signing_readiness_dto->requires_custody_provider
    cJSON *requires_custody_provider = cJSON_GetObjectItemCaseSensitive(trust_signing_readiness_dtoJSON, "requiresCustodyProvider");
    if (requires_custody_provider) { 
    if(!cJSON_IsBool(requires_custody_provider))
    {
    goto end; //Bool
    }
    }

    // trust_signing_readiness_dto->requires_source_artifact
    cJSON *requires_source_artifact = cJSON_GetObjectItemCaseSensitive(trust_signing_readiness_dtoJSON, "requiresSourceArtifact");
    if (requires_source_artifact) { 
    if(!cJSON_IsBool(requires_source_artifact))
    {
    goto end; //Bool
    }
    }

    // trust_signing_readiness_dto->requires_certificate
    cJSON *requires_certificate = cJSON_GetObjectItemCaseSensitive(trust_signing_readiness_dtoJSON, "requiresCertificate");
    if (requires_certificate) { 
    if(!cJSON_IsBool(requires_certificate))
    {
    goto end; //Bool
    }
    }

    // trust_signing_readiness_dto->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(trust_signing_readiness_dtoJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }


    trust_signing_readiness_dto_local_var = trust_signing_readiness_dto_create (
        can_proceed ? can_proceed->valueint : 0,
        blocking_reasons ? blocking_reasonsList : NULL,
        warnings ? warningsList : NULL,
        resolved_document_title && !cJSON_IsNull(resolved_document_title) ? strdup(resolved_document_title->valuestring) : NULL,
        resolved_profile_display_name && !cJSON_IsNull(resolved_profile_display_name) ? strdup(resolved_profile_display_name->valuestring) : NULL,
        resolved_certificate_title && !cJSON_IsNull(resolved_certificate_title) ? strdup(resolved_certificate_title->valuestring) : NULL,
        expected_signature_format ? expected_signature_formatVariable : trustservice_trust_signing_readiness_dto_EXPECTEDSIGNATUREFORMAT_NULL,
        expected_signature_purpose ? expected_signature_purposeVariable : trustservice_trust_signing_readiness_dto_EXPECTEDSIGNATUREPURPOSE_NULL,
        expected_digest_algorithm && !cJSON_IsNull(expected_digest_algorithm) ? strdup(expected_digest_algorithm->valuestring) : NULL,
        expected_signature_algorithm && !cJSON_IsNull(expected_signature_algorithm) ? strdup(expected_signature_algorithm->valuestring) : NULL,
        expected_canonicalization_algorithm && !cJSON_IsNull(expected_canonicalization_algorithm) ? strdup(expected_canonicalization_algorithm->valuestring) : NULL,
        policy_identifier && !cJSON_IsNull(policy_identifier) ? strdup(policy_identifier->valuestring) : NULL,
        authority_profile && !cJSON_IsNull(authority_profile) ? strdup(authority_profile->valuestring) : NULL,
        requires_custody_provider ? requires_custody_provider->valueint : 0,
        requires_source_artifact ? requires_source_artifact->valueint : 0,
        requires_certificate ? requires_certificate->valueint : 0,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL
        );

    return trust_signing_readiness_dto_local_var;
end:
    if (blocking_reasonsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, blocking_reasonsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(blocking_reasonsList);
        blocking_reasonsList = NULL;
    }
    if (warningsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, warningsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(warningsList);
        warningsList = NULL;
    }
    return NULL;

}
