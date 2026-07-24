#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "signing_profile_dto.h"


char* signing_profile_dto_signature_format_ToString(trustservice_signing_profile_dto_SIGNATUREFORMAT_e signature_format) {
    char* signature_formatArray[] =  { "NULL", "Unknown", "XAdES", "PAdES", "CAdES", "SMIME", "DetachedXmlDSig", "Enveloped", "Other" };
    return signature_formatArray[signature_format];
}

trustservice_signing_profile_dto_SIGNATUREFORMAT_e signing_profile_dto_signature_format_FromString(char* signature_format){
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
char* signing_profile_dto_signature_purpose_ToString(trustservice_signing_profile_dto_SIGNATUREPURPOSE_e signature_purpose) {
    char* signature_purposeArray[] =  { "NULL", "Unknown", "RegulatorySubmission", "ContractExecution", "EmailSigning", "InternalApproval", "EvidenceSealing", "AgentCredential", "Other" };
    return signature_purposeArray[signature_purpose];
}

trustservice_signing_profile_dto_SIGNATUREPURPOSE_e signing_profile_dto_signature_purpose_FromString(char* signature_purpose){
    int stringToReturn = 0;
    char *signature_purposeArray[] =  { "NULL", "Unknown", "RegulatorySubmission", "ContractExecution", "EmailSigning", "InternalApproval", "EvidenceSealing", "AgentCredential", "Other" };
    size_t sizeofArray = sizeof(signature_purposeArray) / sizeof(signature_purposeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(signature_purpose, signature_purposeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

signing_profile_dto_t *signing_profile_dto_create(
    char *id,
    char *timestamp,
    char *contact_id,
    char *tenant_id,
    char *type,
    char *enrollment_id,
    char *about,
    int verified,
    int submitted,
    char *avatar_url,
    contact_dto_t *contact,
    char *qualified_name,
    char *verification_timestamp,
    char *data,
    char *data_label,
    char *data1,
    char *data1_label,
    char *data2,
    char *data2_label,
    char *data3,
    char *data3_label,
    char *data4,
    char *data4_label,
    char *data5,
    char *data5_label,
    char *data6,
    char *data6_label,
    char *data7,
    char *data7_label,
    char *data8,
    char *data8_label,
    char *data9,
    char *data9_label,
    char *contact_name,
    trustservice_signing_profile_dto_SIGNATUREFORMAT_e signature_format,
    trustservice_signing_profile_dto_SIGNATUREPURPOSE_e signature_purpose,
    char *digest_algorithm,
    char *signature_algorithm,
    char *canonicalization_algorithm,
    char *policy_identifier,
    char *policy_uri,
    char *authority_profile,
    int is_active,
    char *default_for_document_type
    ) {
    signing_profile_dto_t *signing_profile_dto_local_var = malloc(sizeof(signing_profile_dto_t));
    if (!signing_profile_dto_local_var) {
        return NULL;
    }
    signing_profile_dto_local_var->id = id;
    signing_profile_dto_local_var->timestamp = timestamp;
    signing_profile_dto_local_var->contact_id = contact_id;
    signing_profile_dto_local_var->tenant_id = tenant_id;
    signing_profile_dto_local_var->type = type;
    signing_profile_dto_local_var->enrollment_id = enrollment_id;
    signing_profile_dto_local_var->about = about;
    signing_profile_dto_local_var->verified = verified;
    signing_profile_dto_local_var->submitted = submitted;
    signing_profile_dto_local_var->avatar_url = avatar_url;
    signing_profile_dto_local_var->contact = contact;
    signing_profile_dto_local_var->qualified_name = qualified_name;
    signing_profile_dto_local_var->verification_timestamp = verification_timestamp;
    signing_profile_dto_local_var->data = data;
    signing_profile_dto_local_var->data_label = data_label;
    signing_profile_dto_local_var->data1 = data1;
    signing_profile_dto_local_var->data1_label = data1_label;
    signing_profile_dto_local_var->data2 = data2;
    signing_profile_dto_local_var->data2_label = data2_label;
    signing_profile_dto_local_var->data3 = data3;
    signing_profile_dto_local_var->data3_label = data3_label;
    signing_profile_dto_local_var->data4 = data4;
    signing_profile_dto_local_var->data4_label = data4_label;
    signing_profile_dto_local_var->data5 = data5;
    signing_profile_dto_local_var->data5_label = data5_label;
    signing_profile_dto_local_var->data6 = data6;
    signing_profile_dto_local_var->data6_label = data6_label;
    signing_profile_dto_local_var->data7 = data7;
    signing_profile_dto_local_var->data7_label = data7_label;
    signing_profile_dto_local_var->data8 = data8;
    signing_profile_dto_local_var->data8_label = data8_label;
    signing_profile_dto_local_var->data9 = data9;
    signing_profile_dto_local_var->data9_label = data9_label;
    signing_profile_dto_local_var->contact_name = contact_name;
    signing_profile_dto_local_var->signature_format = signature_format;
    signing_profile_dto_local_var->signature_purpose = signature_purpose;
    signing_profile_dto_local_var->digest_algorithm = digest_algorithm;
    signing_profile_dto_local_var->signature_algorithm = signature_algorithm;
    signing_profile_dto_local_var->canonicalization_algorithm = canonicalization_algorithm;
    signing_profile_dto_local_var->policy_identifier = policy_identifier;
    signing_profile_dto_local_var->policy_uri = policy_uri;
    signing_profile_dto_local_var->authority_profile = authority_profile;
    signing_profile_dto_local_var->is_active = is_active;
    signing_profile_dto_local_var->default_for_document_type = default_for_document_type;

    return signing_profile_dto_local_var;
}


void signing_profile_dto_free(signing_profile_dto_t *signing_profile_dto) {
    if(NULL == signing_profile_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (signing_profile_dto->id) {
        free(signing_profile_dto->id);
        signing_profile_dto->id = NULL;
    }
    if (signing_profile_dto->timestamp) {
        free(signing_profile_dto->timestamp);
        signing_profile_dto->timestamp = NULL;
    }
    if (signing_profile_dto->contact_id) {
        free(signing_profile_dto->contact_id);
        signing_profile_dto->contact_id = NULL;
    }
    if (signing_profile_dto->tenant_id) {
        free(signing_profile_dto->tenant_id);
        signing_profile_dto->tenant_id = NULL;
    }
    if (signing_profile_dto->type) {
        free(signing_profile_dto->type);
        signing_profile_dto->type = NULL;
    }
    if (signing_profile_dto->enrollment_id) {
        free(signing_profile_dto->enrollment_id);
        signing_profile_dto->enrollment_id = NULL;
    }
    if (signing_profile_dto->about) {
        free(signing_profile_dto->about);
        signing_profile_dto->about = NULL;
    }
    if (signing_profile_dto->avatar_url) {
        free(signing_profile_dto->avatar_url);
        signing_profile_dto->avatar_url = NULL;
    }
    if (signing_profile_dto->contact) {
        contact_dto_free(signing_profile_dto->contact);
        signing_profile_dto->contact = NULL;
    }
    if (signing_profile_dto->qualified_name) {
        free(signing_profile_dto->qualified_name);
        signing_profile_dto->qualified_name = NULL;
    }
    if (signing_profile_dto->verification_timestamp) {
        free(signing_profile_dto->verification_timestamp);
        signing_profile_dto->verification_timestamp = NULL;
    }
    if (signing_profile_dto->data) {
        free(signing_profile_dto->data);
        signing_profile_dto->data = NULL;
    }
    if (signing_profile_dto->data_label) {
        free(signing_profile_dto->data_label);
        signing_profile_dto->data_label = NULL;
    }
    if (signing_profile_dto->data1) {
        free(signing_profile_dto->data1);
        signing_profile_dto->data1 = NULL;
    }
    if (signing_profile_dto->data1_label) {
        free(signing_profile_dto->data1_label);
        signing_profile_dto->data1_label = NULL;
    }
    if (signing_profile_dto->data2) {
        free(signing_profile_dto->data2);
        signing_profile_dto->data2 = NULL;
    }
    if (signing_profile_dto->data2_label) {
        free(signing_profile_dto->data2_label);
        signing_profile_dto->data2_label = NULL;
    }
    if (signing_profile_dto->data3) {
        free(signing_profile_dto->data3);
        signing_profile_dto->data3 = NULL;
    }
    if (signing_profile_dto->data3_label) {
        free(signing_profile_dto->data3_label);
        signing_profile_dto->data3_label = NULL;
    }
    if (signing_profile_dto->data4) {
        free(signing_profile_dto->data4);
        signing_profile_dto->data4 = NULL;
    }
    if (signing_profile_dto->data4_label) {
        free(signing_profile_dto->data4_label);
        signing_profile_dto->data4_label = NULL;
    }
    if (signing_profile_dto->data5) {
        free(signing_profile_dto->data5);
        signing_profile_dto->data5 = NULL;
    }
    if (signing_profile_dto->data5_label) {
        free(signing_profile_dto->data5_label);
        signing_profile_dto->data5_label = NULL;
    }
    if (signing_profile_dto->data6) {
        free(signing_profile_dto->data6);
        signing_profile_dto->data6 = NULL;
    }
    if (signing_profile_dto->data6_label) {
        free(signing_profile_dto->data6_label);
        signing_profile_dto->data6_label = NULL;
    }
    if (signing_profile_dto->data7) {
        free(signing_profile_dto->data7);
        signing_profile_dto->data7 = NULL;
    }
    if (signing_profile_dto->data7_label) {
        free(signing_profile_dto->data7_label);
        signing_profile_dto->data7_label = NULL;
    }
    if (signing_profile_dto->data8) {
        free(signing_profile_dto->data8);
        signing_profile_dto->data8 = NULL;
    }
    if (signing_profile_dto->data8_label) {
        free(signing_profile_dto->data8_label);
        signing_profile_dto->data8_label = NULL;
    }
    if (signing_profile_dto->data9) {
        free(signing_profile_dto->data9);
        signing_profile_dto->data9 = NULL;
    }
    if (signing_profile_dto->data9_label) {
        free(signing_profile_dto->data9_label);
        signing_profile_dto->data9_label = NULL;
    }
    if (signing_profile_dto->contact_name) {
        free(signing_profile_dto->contact_name);
        signing_profile_dto->contact_name = NULL;
    }
    if (signing_profile_dto->digest_algorithm) {
        free(signing_profile_dto->digest_algorithm);
        signing_profile_dto->digest_algorithm = NULL;
    }
    if (signing_profile_dto->signature_algorithm) {
        free(signing_profile_dto->signature_algorithm);
        signing_profile_dto->signature_algorithm = NULL;
    }
    if (signing_profile_dto->canonicalization_algorithm) {
        free(signing_profile_dto->canonicalization_algorithm);
        signing_profile_dto->canonicalization_algorithm = NULL;
    }
    if (signing_profile_dto->policy_identifier) {
        free(signing_profile_dto->policy_identifier);
        signing_profile_dto->policy_identifier = NULL;
    }
    if (signing_profile_dto->policy_uri) {
        free(signing_profile_dto->policy_uri);
        signing_profile_dto->policy_uri = NULL;
    }
    if (signing_profile_dto->authority_profile) {
        free(signing_profile_dto->authority_profile);
        signing_profile_dto->authority_profile = NULL;
    }
    if (signing_profile_dto->default_for_document_type) {
        free(signing_profile_dto->default_for_document_type);
        signing_profile_dto->default_for_document_type = NULL;
    }
    free(signing_profile_dto);
}

cJSON *signing_profile_dto_convertToJSON(signing_profile_dto_t *signing_profile_dto) {
    cJSON *item = cJSON_CreateObject();

    // signing_profile_dto->id
    if(signing_profile_dto->id) {
    if(cJSON_AddStringToObject(item, "id", signing_profile_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_dto->timestamp
    if(signing_profile_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", signing_profile_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // signing_profile_dto->contact_id
    if(signing_profile_dto->contact_id) {
    if(cJSON_AddStringToObject(item, "contactId", signing_profile_dto->contact_id) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_dto->tenant_id
    if(signing_profile_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", signing_profile_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_dto->type
    if(signing_profile_dto->type) {
    if(cJSON_AddStringToObject(item, "type", signing_profile_dto->type) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_dto->enrollment_id
    if(signing_profile_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", signing_profile_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_dto->about
    if(signing_profile_dto->about) {
    if(cJSON_AddStringToObject(item, "about", signing_profile_dto->about) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_dto->verified
    if(signing_profile_dto->verified) {
    if(cJSON_AddBoolToObject(item, "verified", signing_profile_dto->verified) == NULL) {
    goto fail; //Bool
    }
    }


    // signing_profile_dto->submitted
    if(signing_profile_dto->submitted) {
    if(cJSON_AddBoolToObject(item, "submitted", signing_profile_dto->submitted) == NULL) {
    goto fail; //Bool
    }
    }


    // signing_profile_dto->avatar_url
    if(signing_profile_dto->avatar_url) {
    if(cJSON_AddStringToObject(item, "avatarUrl", signing_profile_dto->avatar_url) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_dto->contact
    if(signing_profile_dto->contact) {
    cJSON *contact_local_JSON = contact_dto_convertToJSON(signing_profile_dto->contact);
    if(contact_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "contact", contact_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // signing_profile_dto->qualified_name
    if(signing_profile_dto->qualified_name) {
    if(cJSON_AddStringToObject(item, "qualifiedName", signing_profile_dto->qualified_name) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_dto->verification_timestamp
    if(signing_profile_dto->verification_timestamp) {
    if(cJSON_AddStringToObject(item, "verificationTimestamp", signing_profile_dto->verification_timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // signing_profile_dto->data
    if(signing_profile_dto->data) {
    if(cJSON_AddStringToObject(item, "data", signing_profile_dto->data) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_dto->data_label
    if(signing_profile_dto->data_label) {
    if(cJSON_AddStringToObject(item, "dataLabel", signing_profile_dto->data_label) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_dto->data1
    if(signing_profile_dto->data1) {
    if(cJSON_AddStringToObject(item, "data1", signing_profile_dto->data1) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_dto->data1_label
    if(signing_profile_dto->data1_label) {
    if(cJSON_AddStringToObject(item, "data1Label", signing_profile_dto->data1_label) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_dto->data2
    if(signing_profile_dto->data2) {
    if(cJSON_AddStringToObject(item, "data2", signing_profile_dto->data2) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_dto->data2_label
    if(signing_profile_dto->data2_label) {
    if(cJSON_AddStringToObject(item, "data2Label", signing_profile_dto->data2_label) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_dto->data3
    if(signing_profile_dto->data3) {
    if(cJSON_AddStringToObject(item, "data3", signing_profile_dto->data3) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_dto->data3_label
    if(signing_profile_dto->data3_label) {
    if(cJSON_AddStringToObject(item, "data3Label", signing_profile_dto->data3_label) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_dto->data4
    if(signing_profile_dto->data4) {
    if(cJSON_AddStringToObject(item, "data4", signing_profile_dto->data4) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_dto->data4_label
    if(signing_profile_dto->data4_label) {
    if(cJSON_AddStringToObject(item, "data4Label", signing_profile_dto->data4_label) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_dto->data5
    if(signing_profile_dto->data5) {
    if(cJSON_AddStringToObject(item, "data5", signing_profile_dto->data5) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_dto->data5_label
    if(signing_profile_dto->data5_label) {
    if(cJSON_AddStringToObject(item, "data5Label", signing_profile_dto->data5_label) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_dto->data6
    if(signing_profile_dto->data6) {
    if(cJSON_AddStringToObject(item, "data6", signing_profile_dto->data6) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_dto->data6_label
    if(signing_profile_dto->data6_label) {
    if(cJSON_AddStringToObject(item, "data6Label", signing_profile_dto->data6_label) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_dto->data7
    if(signing_profile_dto->data7) {
    if(cJSON_AddStringToObject(item, "data7", signing_profile_dto->data7) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_dto->data7_label
    if(signing_profile_dto->data7_label) {
    if(cJSON_AddStringToObject(item, "data7Label", signing_profile_dto->data7_label) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_dto->data8
    if(signing_profile_dto->data8) {
    if(cJSON_AddStringToObject(item, "data8", signing_profile_dto->data8) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_dto->data8_label
    if(signing_profile_dto->data8_label) {
    if(cJSON_AddStringToObject(item, "data8Label", signing_profile_dto->data8_label) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_dto->data9
    if(signing_profile_dto->data9) {
    if(cJSON_AddStringToObject(item, "data9", signing_profile_dto->data9) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_dto->data9_label
    if(signing_profile_dto->data9_label) {
    if(cJSON_AddStringToObject(item, "data9Label", signing_profile_dto->data9_label) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_dto->contact_name
    if(signing_profile_dto->contact_name) {
    if(cJSON_AddStringToObject(item, "contactName", signing_profile_dto->contact_name) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_dto->signature_format
    if(signing_profile_dto->signature_format != trustservice_signing_profile_dto_SIGNATUREFORMAT_NULL) {
    if(cJSON_AddStringToObject(item, "signatureFormat", signature_formatsigning_profile_dto_ToString(signing_profile_dto->signature_format)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // signing_profile_dto->signature_purpose
    if(signing_profile_dto->signature_purpose != trustservice_signing_profile_dto_SIGNATUREPURPOSE_NULL) {
    if(cJSON_AddStringToObject(item, "signaturePurpose", signature_purposesigning_profile_dto_ToString(signing_profile_dto->signature_purpose)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // signing_profile_dto->digest_algorithm
    if(signing_profile_dto->digest_algorithm) {
    if(cJSON_AddStringToObject(item, "digestAlgorithm", signing_profile_dto->digest_algorithm) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_dto->signature_algorithm
    if(signing_profile_dto->signature_algorithm) {
    if(cJSON_AddStringToObject(item, "signatureAlgorithm", signing_profile_dto->signature_algorithm) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_dto->canonicalization_algorithm
    if(signing_profile_dto->canonicalization_algorithm) {
    if(cJSON_AddStringToObject(item, "canonicalizationAlgorithm", signing_profile_dto->canonicalization_algorithm) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_dto->policy_identifier
    if(signing_profile_dto->policy_identifier) {
    if(cJSON_AddStringToObject(item, "policyIdentifier", signing_profile_dto->policy_identifier) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_dto->policy_uri
    if(signing_profile_dto->policy_uri) {
    if(cJSON_AddStringToObject(item, "policyUri", signing_profile_dto->policy_uri) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_dto->authority_profile
    if(signing_profile_dto->authority_profile) {
    if(cJSON_AddStringToObject(item, "authorityProfile", signing_profile_dto->authority_profile) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_dto->is_active
    if(signing_profile_dto->is_active) {
    if(cJSON_AddBoolToObject(item, "isActive", signing_profile_dto->is_active) == NULL) {
    goto fail; //Bool
    }
    }


    // signing_profile_dto->default_for_document_type
    if(signing_profile_dto->default_for_document_type) {
    if(cJSON_AddStringToObject(item, "defaultForDocumentType", signing_profile_dto->default_for_document_type) == NULL) {
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

signing_profile_dto_t *signing_profile_dto_parseFromJSON(cJSON *signing_profile_dtoJSON){

    signing_profile_dto_t *signing_profile_dto_local_var = NULL;

    // define the local variable for signing_profile_dto->contact
    contact_dto_t *contact_local_nonprim = NULL;

    // signing_profile_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(signing_profile_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // signing_profile_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(signing_profile_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // signing_profile_dto->contact_id
    cJSON *contact_id = cJSON_GetObjectItemCaseSensitive(signing_profile_dtoJSON, "contactId");
    if (contact_id) { 
    if(!cJSON_IsString(contact_id) && !cJSON_IsNull(contact_id))
    {
    goto end; //String
    }
    }

    // signing_profile_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(signing_profile_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // signing_profile_dto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(signing_profile_dtoJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // signing_profile_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(signing_profile_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // signing_profile_dto->about
    cJSON *about = cJSON_GetObjectItemCaseSensitive(signing_profile_dtoJSON, "about");
    if (about) { 
    if(!cJSON_IsString(about) && !cJSON_IsNull(about))
    {
    goto end; //String
    }
    }

    // signing_profile_dto->verified
    cJSON *verified = cJSON_GetObjectItemCaseSensitive(signing_profile_dtoJSON, "verified");
    if (verified) { 
    if(!cJSON_IsBool(verified))
    {
    goto end; //Bool
    }
    }

    // signing_profile_dto->submitted
    cJSON *submitted = cJSON_GetObjectItemCaseSensitive(signing_profile_dtoJSON, "submitted");
    if (submitted) { 
    if(!cJSON_IsBool(submitted))
    {
    goto end; //Bool
    }
    }

    // signing_profile_dto->avatar_url
    cJSON *avatar_url = cJSON_GetObjectItemCaseSensitive(signing_profile_dtoJSON, "avatarUrl");
    if (avatar_url) { 
    if(!cJSON_IsString(avatar_url) && !cJSON_IsNull(avatar_url))
    {
    goto end; //String
    }
    }

    // signing_profile_dto->contact
    cJSON *contact = cJSON_GetObjectItemCaseSensitive(signing_profile_dtoJSON, "contact");
    if (contact) { 
    contact_local_nonprim = contact_dto_parseFromJSON(contact); //nonprimitive
    }

    // signing_profile_dto->qualified_name
    cJSON *qualified_name = cJSON_GetObjectItemCaseSensitive(signing_profile_dtoJSON, "qualifiedName");
    if (qualified_name) { 
    if(!cJSON_IsString(qualified_name) && !cJSON_IsNull(qualified_name))
    {
    goto end; //String
    }
    }

    // signing_profile_dto->verification_timestamp
    cJSON *verification_timestamp = cJSON_GetObjectItemCaseSensitive(signing_profile_dtoJSON, "verificationTimestamp");
    if (verification_timestamp) { 
    if(!cJSON_IsString(verification_timestamp) && !cJSON_IsNull(verification_timestamp))
    {
    goto end; //DateTime
    }
    }

    // signing_profile_dto->data
    cJSON *data = cJSON_GetObjectItemCaseSensitive(signing_profile_dtoJSON, "data");
    if (data) { 
    if(!cJSON_IsString(data) && !cJSON_IsNull(data))
    {
    goto end; //String
    }
    }

    // signing_profile_dto->data_label
    cJSON *data_label = cJSON_GetObjectItemCaseSensitive(signing_profile_dtoJSON, "dataLabel");
    if (data_label) { 
    if(!cJSON_IsString(data_label) && !cJSON_IsNull(data_label))
    {
    goto end; //String
    }
    }

    // signing_profile_dto->data1
    cJSON *data1 = cJSON_GetObjectItemCaseSensitive(signing_profile_dtoJSON, "data1");
    if (data1) { 
    if(!cJSON_IsString(data1) && !cJSON_IsNull(data1))
    {
    goto end; //String
    }
    }

    // signing_profile_dto->data1_label
    cJSON *data1_label = cJSON_GetObjectItemCaseSensitive(signing_profile_dtoJSON, "data1Label");
    if (data1_label) { 
    if(!cJSON_IsString(data1_label) && !cJSON_IsNull(data1_label))
    {
    goto end; //String
    }
    }

    // signing_profile_dto->data2
    cJSON *data2 = cJSON_GetObjectItemCaseSensitive(signing_profile_dtoJSON, "data2");
    if (data2) { 
    if(!cJSON_IsString(data2) && !cJSON_IsNull(data2))
    {
    goto end; //String
    }
    }

    // signing_profile_dto->data2_label
    cJSON *data2_label = cJSON_GetObjectItemCaseSensitive(signing_profile_dtoJSON, "data2Label");
    if (data2_label) { 
    if(!cJSON_IsString(data2_label) && !cJSON_IsNull(data2_label))
    {
    goto end; //String
    }
    }

    // signing_profile_dto->data3
    cJSON *data3 = cJSON_GetObjectItemCaseSensitive(signing_profile_dtoJSON, "data3");
    if (data3) { 
    if(!cJSON_IsString(data3) && !cJSON_IsNull(data3))
    {
    goto end; //String
    }
    }

    // signing_profile_dto->data3_label
    cJSON *data3_label = cJSON_GetObjectItemCaseSensitive(signing_profile_dtoJSON, "data3Label");
    if (data3_label) { 
    if(!cJSON_IsString(data3_label) && !cJSON_IsNull(data3_label))
    {
    goto end; //String
    }
    }

    // signing_profile_dto->data4
    cJSON *data4 = cJSON_GetObjectItemCaseSensitive(signing_profile_dtoJSON, "data4");
    if (data4) { 
    if(!cJSON_IsString(data4) && !cJSON_IsNull(data4))
    {
    goto end; //String
    }
    }

    // signing_profile_dto->data4_label
    cJSON *data4_label = cJSON_GetObjectItemCaseSensitive(signing_profile_dtoJSON, "data4Label");
    if (data4_label) { 
    if(!cJSON_IsString(data4_label) && !cJSON_IsNull(data4_label))
    {
    goto end; //String
    }
    }

    // signing_profile_dto->data5
    cJSON *data5 = cJSON_GetObjectItemCaseSensitive(signing_profile_dtoJSON, "data5");
    if (data5) { 
    if(!cJSON_IsString(data5) && !cJSON_IsNull(data5))
    {
    goto end; //String
    }
    }

    // signing_profile_dto->data5_label
    cJSON *data5_label = cJSON_GetObjectItemCaseSensitive(signing_profile_dtoJSON, "data5Label");
    if (data5_label) { 
    if(!cJSON_IsString(data5_label) && !cJSON_IsNull(data5_label))
    {
    goto end; //String
    }
    }

    // signing_profile_dto->data6
    cJSON *data6 = cJSON_GetObjectItemCaseSensitive(signing_profile_dtoJSON, "data6");
    if (data6) { 
    if(!cJSON_IsString(data6) && !cJSON_IsNull(data6))
    {
    goto end; //String
    }
    }

    // signing_profile_dto->data6_label
    cJSON *data6_label = cJSON_GetObjectItemCaseSensitive(signing_profile_dtoJSON, "data6Label");
    if (data6_label) { 
    if(!cJSON_IsString(data6_label) && !cJSON_IsNull(data6_label))
    {
    goto end; //String
    }
    }

    // signing_profile_dto->data7
    cJSON *data7 = cJSON_GetObjectItemCaseSensitive(signing_profile_dtoJSON, "data7");
    if (data7) { 
    if(!cJSON_IsString(data7) && !cJSON_IsNull(data7))
    {
    goto end; //String
    }
    }

    // signing_profile_dto->data7_label
    cJSON *data7_label = cJSON_GetObjectItemCaseSensitive(signing_profile_dtoJSON, "data7Label");
    if (data7_label) { 
    if(!cJSON_IsString(data7_label) && !cJSON_IsNull(data7_label))
    {
    goto end; //String
    }
    }

    // signing_profile_dto->data8
    cJSON *data8 = cJSON_GetObjectItemCaseSensitive(signing_profile_dtoJSON, "data8");
    if (data8) { 
    if(!cJSON_IsString(data8) && !cJSON_IsNull(data8))
    {
    goto end; //String
    }
    }

    // signing_profile_dto->data8_label
    cJSON *data8_label = cJSON_GetObjectItemCaseSensitive(signing_profile_dtoJSON, "data8Label");
    if (data8_label) { 
    if(!cJSON_IsString(data8_label) && !cJSON_IsNull(data8_label))
    {
    goto end; //String
    }
    }

    // signing_profile_dto->data9
    cJSON *data9 = cJSON_GetObjectItemCaseSensitive(signing_profile_dtoJSON, "data9");
    if (data9) { 
    if(!cJSON_IsString(data9) && !cJSON_IsNull(data9))
    {
    goto end; //String
    }
    }

    // signing_profile_dto->data9_label
    cJSON *data9_label = cJSON_GetObjectItemCaseSensitive(signing_profile_dtoJSON, "data9Label");
    if (data9_label) { 
    if(!cJSON_IsString(data9_label) && !cJSON_IsNull(data9_label))
    {
    goto end; //String
    }
    }

    // signing_profile_dto->contact_name
    cJSON *contact_name = cJSON_GetObjectItemCaseSensitive(signing_profile_dtoJSON, "contactName");
    if (contact_name) { 
    if(!cJSON_IsString(contact_name) && !cJSON_IsNull(contact_name))
    {
    goto end; //String
    }
    }

    // signing_profile_dto->signature_format
    cJSON *signature_format = cJSON_GetObjectItemCaseSensitive(signing_profile_dtoJSON, "signatureFormat");
    trustservice_signing_profile_dto_SIGNATUREFORMAT_e signature_formatVariable;
    if (signature_format) { 
    if(!cJSON_IsString(signature_format))
    {
    goto end; //Enum
    }
    signature_formatVariable = signing_profile_dto_signature_format_FromString(signature_format->valuestring);
    }

    // signing_profile_dto->signature_purpose
    cJSON *signature_purpose = cJSON_GetObjectItemCaseSensitive(signing_profile_dtoJSON, "signaturePurpose");
    trustservice_signing_profile_dto_SIGNATUREPURPOSE_e signature_purposeVariable;
    if (signature_purpose) { 
    if(!cJSON_IsString(signature_purpose))
    {
    goto end; //Enum
    }
    signature_purposeVariable = signing_profile_dto_signature_purpose_FromString(signature_purpose->valuestring);
    }

    // signing_profile_dto->digest_algorithm
    cJSON *digest_algorithm = cJSON_GetObjectItemCaseSensitive(signing_profile_dtoJSON, "digestAlgorithm");
    if (digest_algorithm) { 
    if(!cJSON_IsString(digest_algorithm) && !cJSON_IsNull(digest_algorithm))
    {
    goto end; //String
    }
    }

    // signing_profile_dto->signature_algorithm
    cJSON *signature_algorithm = cJSON_GetObjectItemCaseSensitive(signing_profile_dtoJSON, "signatureAlgorithm");
    if (signature_algorithm) { 
    if(!cJSON_IsString(signature_algorithm) && !cJSON_IsNull(signature_algorithm))
    {
    goto end; //String
    }
    }

    // signing_profile_dto->canonicalization_algorithm
    cJSON *canonicalization_algorithm = cJSON_GetObjectItemCaseSensitive(signing_profile_dtoJSON, "canonicalizationAlgorithm");
    if (canonicalization_algorithm) { 
    if(!cJSON_IsString(canonicalization_algorithm) && !cJSON_IsNull(canonicalization_algorithm))
    {
    goto end; //String
    }
    }

    // signing_profile_dto->policy_identifier
    cJSON *policy_identifier = cJSON_GetObjectItemCaseSensitive(signing_profile_dtoJSON, "policyIdentifier");
    if (policy_identifier) { 
    if(!cJSON_IsString(policy_identifier) && !cJSON_IsNull(policy_identifier))
    {
    goto end; //String
    }
    }

    // signing_profile_dto->policy_uri
    cJSON *policy_uri = cJSON_GetObjectItemCaseSensitive(signing_profile_dtoJSON, "policyUri");
    if (policy_uri) { 
    if(!cJSON_IsString(policy_uri) && !cJSON_IsNull(policy_uri))
    {
    goto end; //String
    }
    }

    // signing_profile_dto->authority_profile
    cJSON *authority_profile = cJSON_GetObjectItemCaseSensitive(signing_profile_dtoJSON, "authorityProfile");
    if (authority_profile) { 
    if(!cJSON_IsString(authority_profile) && !cJSON_IsNull(authority_profile))
    {
    goto end; //String
    }
    }

    // signing_profile_dto->is_active
    cJSON *is_active = cJSON_GetObjectItemCaseSensitive(signing_profile_dtoJSON, "isActive");
    if (is_active) { 
    if(!cJSON_IsBool(is_active))
    {
    goto end; //Bool
    }
    }

    // signing_profile_dto->default_for_document_type
    cJSON *default_for_document_type = cJSON_GetObjectItemCaseSensitive(signing_profile_dtoJSON, "defaultForDocumentType");
    if (default_for_document_type) { 
    if(!cJSON_IsString(default_for_document_type) && !cJSON_IsNull(default_for_document_type))
    {
    goto end; //String
    }
    }


    signing_profile_dto_local_var = signing_profile_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        contact_id && !cJSON_IsNull(contact_id) ? strdup(contact_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        about && !cJSON_IsNull(about) ? strdup(about->valuestring) : NULL,
        verified ? verified->valueint : 0,
        submitted ? submitted->valueint : 0,
        avatar_url && !cJSON_IsNull(avatar_url) ? strdup(avatar_url->valuestring) : NULL,
        contact ? contact_local_nonprim : NULL,
        qualified_name && !cJSON_IsNull(qualified_name) ? strdup(qualified_name->valuestring) : NULL,
        verification_timestamp && !cJSON_IsNull(verification_timestamp) ? strdup(verification_timestamp->valuestring) : NULL,
        data && !cJSON_IsNull(data) ? strdup(data->valuestring) : NULL,
        data_label && !cJSON_IsNull(data_label) ? strdup(data_label->valuestring) : NULL,
        data1 && !cJSON_IsNull(data1) ? strdup(data1->valuestring) : NULL,
        data1_label && !cJSON_IsNull(data1_label) ? strdup(data1_label->valuestring) : NULL,
        data2 && !cJSON_IsNull(data2) ? strdup(data2->valuestring) : NULL,
        data2_label && !cJSON_IsNull(data2_label) ? strdup(data2_label->valuestring) : NULL,
        data3 && !cJSON_IsNull(data3) ? strdup(data3->valuestring) : NULL,
        data3_label && !cJSON_IsNull(data3_label) ? strdup(data3_label->valuestring) : NULL,
        data4 && !cJSON_IsNull(data4) ? strdup(data4->valuestring) : NULL,
        data4_label && !cJSON_IsNull(data4_label) ? strdup(data4_label->valuestring) : NULL,
        data5 && !cJSON_IsNull(data5) ? strdup(data5->valuestring) : NULL,
        data5_label && !cJSON_IsNull(data5_label) ? strdup(data5_label->valuestring) : NULL,
        data6 && !cJSON_IsNull(data6) ? strdup(data6->valuestring) : NULL,
        data6_label && !cJSON_IsNull(data6_label) ? strdup(data6_label->valuestring) : NULL,
        data7 && !cJSON_IsNull(data7) ? strdup(data7->valuestring) : NULL,
        data7_label && !cJSON_IsNull(data7_label) ? strdup(data7_label->valuestring) : NULL,
        data8 && !cJSON_IsNull(data8) ? strdup(data8->valuestring) : NULL,
        data8_label && !cJSON_IsNull(data8_label) ? strdup(data8_label->valuestring) : NULL,
        data9 && !cJSON_IsNull(data9) ? strdup(data9->valuestring) : NULL,
        data9_label && !cJSON_IsNull(data9_label) ? strdup(data9_label->valuestring) : NULL,
        contact_name && !cJSON_IsNull(contact_name) ? strdup(contact_name->valuestring) : NULL,
        signature_format ? signature_formatVariable : trustservice_signing_profile_dto_SIGNATUREFORMAT_NULL,
        signature_purpose ? signature_purposeVariable : trustservice_signing_profile_dto_SIGNATUREPURPOSE_NULL,
        digest_algorithm && !cJSON_IsNull(digest_algorithm) ? strdup(digest_algorithm->valuestring) : NULL,
        signature_algorithm && !cJSON_IsNull(signature_algorithm) ? strdup(signature_algorithm->valuestring) : NULL,
        canonicalization_algorithm && !cJSON_IsNull(canonicalization_algorithm) ? strdup(canonicalization_algorithm->valuestring) : NULL,
        policy_identifier && !cJSON_IsNull(policy_identifier) ? strdup(policy_identifier->valuestring) : NULL,
        policy_uri && !cJSON_IsNull(policy_uri) ? strdup(policy_uri->valuestring) : NULL,
        authority_profile && !cJSON_IsNull(authority_profile) ? strdup(authority_profile->valuestring) : NULL,
        is_active ? is_active->valueint : 0,
        default_for_document_type && !cJSON_IsNull(default_for_document_type) ? strdup(default_for_document_type->valuestring) : NULL
        );

    return signing_profile_dto_local_var;
end:
    if (contact_local_nonprim) {
        contact_dto_free(contact_local_nonprim);
        contact_local_nonprim = NULL;
    }
    return NULL;

}
