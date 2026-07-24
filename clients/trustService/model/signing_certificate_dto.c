#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "signing_certificate_dto.h"


char* signing_certificate_dto_certificate_type_ToString(trustservice_signing_certificate_dto_CERTIFICATETYPE_e certificate_type) {
    char* certificate_typeArray[] =  { "NULL", "AuthSignedCertificate", "SelfSignedCertificate", "AllianceSignedCertificate" };
    return certificate_typeArray[certificate_type];
}

trustservice_signing_certificate_dto_CERTIFICATETYPE_e signing_certificate_dto_certificate_type_FromString(char* certificate_type){
    int stringToReturn = 0;
    char *certificate_typeArray[] =  { "NULL", "AuthSignedCertificate", "SelfSignedCertificate", "AllianceSignedCertificate" };
    size_t sizeofArray = sizeof(certificate_typeArray) / sizeof(certificate_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(certificate_type, certificate_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* signing_certificate_dto_certificate_status_ToString(trustservice_signing_certificate_dto_CERTIFICATESTATUS_e certificate_status) {
    char* certificate_statusArray[] =  { "NULL", "Unknown", "Active", "Expiring", "Expired", "Revoked", "Disabled" };
    return certificate_statusArray[certificate_status];
}

trustservice_signing_certificate_dto_CERTIFICATESTATUS_e signing_certificate_dto_certificate_status_FromString(char* certificate_status){
    int stringToReturn = 0;
    char *certificate_statusArray[] =  { "NULL", "Unknown", "Active", "Expiring", "Expired", "Revoked", "Disabled" };
    size_t sizeofArray = sizeof(certificate_statusArray) / sizeof(certificate_statusArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(certificate_status, certificate_statusArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

signing_certificate_dto_t *signing_certificate_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *type,
    char *url,
    char *csr,
    char *public_key,
    char *signature,
    long file_length_in_bits,
    trustservice_signing_certificate_dto_CERTIFICATETYPE_e certificate_type,
    char *contact_id,
    char *tenant_id,
    char *user_id,
    char *enrollment_id,
    char *security_certificate_id,
    trustservice_signing_certificate_dto_CERTIFICATESTATUS_e certificate_status,
    char *thumbprint,
    char *subject_name,
    char *issuer_name,
    char *serial_number,
    char *not_before_utc,
    char *not_after_utc,
    char *contact_name
    ) {
    signing_certificate_dto_t *signing_certificate_dto_local_var = malloc(sizeof(signing_certificate_dto_t));
    if (!signing_certificate_dto_local_var) {
        return NULL;
    }
    signing_certificate_dto_local_var->id = id;
    signing_certificate_dto_local_var->timestamp = timestamp;
    signing_certificate_dto_local_var->title = title;
    signing_certificate_dto_local_var->type = type;
    signing_certificate_dto_local_var->url = url;
    signing_certificate_dto_local_var->csr = csr;
    signing_certificate_dto_local_var->public_key = public_key;
    signing_certificate_dto_local_var->signature = signature;
    signing_certificate_dto_local_var->file_length_in_bits = file_length_in_bits;
    signing_certificate_dto_local_var->certificate_type = certificate_type;
    signing_certificate_dto_local_var->contact_id = contact_id;
    signing_certificate_dto_local_var->tenant_id = tenant_id;
    signing_certificate_dto_local_var->user_id = user_id;
    signing_certificate_dto_local_var->enrollment_id = enrollment_id;
    signing_certificate_dto_local_var->security_certificate_id = security_certificate_id;
    signing_certificate_dto_local_var->certificate_status = certificate_status;
    signing_certificate_dto_local_var->thumbprint = thumbprint;
    signing_certificate_dto_local_var->subject_name = subject_name;
    signing_certificate_dto_local_var->issuer_name = issuer_name;
    signing_certificate_dto_local_var->serial_number = serial_number;
    signing_certificate_dto_local_var->not_before_utc = not_before_utc;
    signing_certificate_dto_local_var->not_after_utc = not_after_utc;
    signing_certificate_dto_local_var->contact_name = contact_name;

    return signing_certificate_dto_local_var;
}


void signing_certificate_dto_free(signing_certificate_dto_t *signing_certificate_dto) {
    if(NULL == signing_certificate_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (signing_certificate_dto->id) {
        free(signing_certificate_dto->id);
        signing_certificate_dto->id = NULL;
    }
    if (signing_certificate_dto->timestamp) {
        free(signing_certificate_dto->timestamp);
        signing_certificate_dto->timestamp = NULL;
    }
    if (signing_certificate_dto->title) {
        free(signing_certificate_dto->title);
        signing_certificate_dto->title = NULL;
    }
    if (signing_certificate_dto->type) {
        free(signing_certificate_dto->type);
        signing_certificate_dto->type = NULL;
    }
    if (signing_certificate_dto->url) {
        free(signing_certificate_dto->url);
        signing_certificate_dto->url = NULL;
    }
    if (signing_certificate_dto->csr) {
        free(signing_certificate_dto->csr);
        signing_certificate_dto->csr = NULL;
    }
    if (signing_certificate_dto->public_key) {
        free(signing_certificate_dto->public_key);
        signing_certificate_dto->public_key = NULL;
    }
    if (signing_certificate_dto->signature) {
        free(signing_certificate_dto->signature);
        signing_certificate_dto->signature = NULL;
    }
    if (signing_certificate_dto->contact_id) {
        free(signing_certificate_dto->contact_id);
        signing_certificate_dto->contact_id = NULL;
    }
    if (signing_certificate_dto->tenant_id) {
        free(signing_certificate_dto->tenant_id);
        signing_certificate_dto->tenant_id = NULL;
    }
    if (signing_certificate_dto->user_id) {
        free(signing_certificate_dto->user_id);
        signing_certificate_dto->user_id = NULL;
    }
    if (signing_certificate_dto->enrollment_id) {
        free(signing_certificate_dto->enrollment_id);
        signing_certificate_dto->enrollment_id = NULL;
    }
    if (signing_certificate_dto->security_certificate_id) {
        free(signing_certificate_dto->security_certificate_id);
        signing_certificate_dto->security_certificate_id = NULL;
    }
    if (signing_certificate_dto->thumbprint) {
        free(signing_certificate_dto->thumbprint);
        signing_certificate_dto->thumbprint = NULL;
    }
    if (signing_certificate_dto->subject_name) {
        free(signing_certificate_dto->subject_name);
        signing_certificate_dto->subject_name = NULL;
    }
    if (signing_certificate_dto->issuer_name) {
        free(signing_certificate_dto->issuer_name);
        signing_certificate_dto->issuer_name = NULL;
    }
    if (signing_certificate_dto->serial_number) {
        free(signing_certificate_dto->serial_number);
        signing_certificate_dto->serial_number = NULL;
    }
    if (signing_certificate_dto->not_before_utc) {
        free(signing_certificate_dto->not_before_utc);
        signing_certificate_dto->not_before_utc = NULL;
    }
    if (signing_certificate_dto->not_after_utc) {
        free(signing_certificate_dto->not_after_utc);
        signing_certificate_dto->not_after_utc = NULL;
    }
    if (signing_certificate_dto->contact_name) {
        free(signing_certificate_dto->contact_name);
        signing_certificate_dto->contact_name = NULL;
    }
    free(signing_certificate_dto);
}

cJSON *signing_certificate_dto_convertToJSON(signing_certificate_dto_t *signing_certificate_dto) {
    cJSON *item = cJSON_CreateObject();

    // signing_certificate_dto->id
    if(signing_certificate_dto->id) {
    if(cJSON_AddStringToObject(item, "id", signing_certificate_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // signing_certificate_dto->timestamp
    if(signing_certificate_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", signing_certificate_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // signing_certificate_dto->title
    if(signing_certificate_dto->title) {
    if(cJSON_AddStringToObject(item, "title", signing_certificate_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // signing_certificate_dto->type
    if(signing_certificate_dto->type) {
    if(cJSON_AddStringToObject(item, "type", signing_certificate_dto->type) == NULL) {
    goto fail; //String
    }
    }


    // signing_certificate_dto->url
    if(signing_certificate_dto->url) {
    if(cJSON_AddStringToObject(item, "url", signing_certificate_dto->url) == NULL) {
    goto fail; //String
    }
    }


    // signing_certificate_dto->csr
    if(signing_certificate_dto->csr) {
    if(cJSON_AddStringToObject(item, "csr", signing_certificate_dto->csr) == NULL) {
    goto fail; //String
    }
    }


    // signing_certificate_dto->public_key
    if(signing_certificate_dto->public_key) {
    if(cJSON_AddStringToObject(item, "publicKey", signing_certificate_dto->public_key) == NULL) {
    goto fail; //String
    }
    }


    // signing_certificate_dto->signature
    if(signing_certificate_dto->signature) {
    if(cJSON_AddStringToObject(item, "signature", signing_certificate_dto->signature) == NULL) {
    goto fail; //String
    }
    }


    // signing_certificate_dto->file_length_in_bits
    if(signing_certificate_dto->file_length_in_bits) {
    if(cJSON_AddNumberToObject(item, "fileLengthInBits", signing_certificate_dto->file_length_in_bits) == NULL) {
    goto fail; //Numeric
    }
    }


    // signing_certificate_dto->certificate_type
    if(signing_certificate_dto->certificate_type != trustservice_signing_certificate_dto_CERTIFICATETYPE_NULL) {
    if(cJSON_AddStringToObject(item, "certificateType", certificate_typesigning_certificate_dto_ToString(signing_certificate_dto->certificate_type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // signing_certificate_dto->contact_id
    if(signing_certificate_dto->contact_id) {
    if(cJSON_AddStringToObject(item, "contactId", signing_certificate_dto->contact_id) == NULL) {
    goto fail; //String
    }
    }


    // signing_certificate_dto->tenant_id
    if(signing_certificate_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", signing_certificate_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // signing_certificate_dto->user_id
    if(signing_certificate_dto->user_id) {
    if(cJSON_AddStringToObject(item, "userId", signing_certificate_dto->user_id) == NULL) {
    goto fail; //String
    }
    }


    // signing_certificate_dto->enrollment_id
    if(signing_certificate_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", signing_certificate_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // signing_certificate_dto->security_certificate_id
    if(signing_certificate_dto->security_certificate_id) {
    if(cJSON_AddStringToObject(item, "securityCertificateId", signing_certificate_dto->security_certificate_id) == NULL) {
    goto fail; //String
    }
    }


    // signing_certificate_dto->certificate_status
    if(signing_certificate_dto->certificate_status != trustservice_signing_certificate_dto_CERTIFICATESTATUS_NULL) {
    if(cJSON_AddStringToObject(item, "certificateStatus", certificate_statussigning_certificate_dto_ToString(signing_certificate_dto->certificate_status)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // signing_certificate_dto->thumbprint
    if(signing_certificate_dto->thumbprint) {
    if(cJSON_AddStringToObject(item, "thumbprint", signing_certificate_dto->thumbprint) == NULL) {
    goto fail; //String
    }
    }


    // signing_certificate_dto->subject_name
    if(signing_certificate_dto->subject_name) {
    if(cJSON_AddStringToObject(item, "subjectName", signing_certificate_dto->subject_name) == NULL) {
    goto fail; //String
    }
    }


    // signing_certificate_dto->issuer_name
    if(signing_certificate_dto->issuer_name) {
    if(cJSON_AddStringToObject(item, "issuerName", signing_certificate_dto->issuer_name) == NULL) {
    goto fail; //String
    }
    }


    // signing_certificate_dto->serial_number
    if(signing_certificate_dto->serial_number) {
    if(cJSON_AddStringToObject(item, "serialNumber", signing_certificate_dto->serial_number) == NULL) {
    goto fail; //String
    }
    }


    // signing_certificate_dto->not_before_utc
    if(signing_certificate_dto->not_before_utc) {
    if(cJSON_AddStringToObject(item, "notBeforeUtc", signing_certificate_dto->not_before_utc) == NULL) {
    goto fail; //Date-Time
    }
    }


    // signing_certificate_dto->not_after_utc
    if(signing_certificate_dto->not_after_utc) {
    if(cJSON_AddStringToObject(item, "notAfterUtc", signing_certificate_dto->not_after_utc) == NULL) {
    goto fail; //Date-Time
    }
    }


    // signing_certificate_dto->contact_name
    if(signing_certificate_dto->contact_name) {
    if(cJSON_AddStringToObject(item, "contactName", signing_certificate_dto->contact_name) == NULL) {
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

signing_certificate_dto_t *signing_certificate_dto_parseFromJSON(cJSON *signing_certificate_dtoJSON){

    signing_certificate_dto_t *signing_certificate_dto_local_var = NULL;

    // signing_certificate_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(signing_certificate_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // signing_certificate_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(signing_certificate_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // signing_certificate_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(signing_certificate_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // signing_certificate_dto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(signing_certificate_dtoJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // signing_certificate_dto->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(signing_certificate_dtoJSON, "url");
    if (url) { 
    if(!cJSON_IsString(url) && !cJSON_IsNull(url))
    {
    goto end; //String
    }
    }

    // signing_certificate_dto->csr
    cJSON *csr = cJSON_GetObjectItemCaseSensitive(signing_certificate_dtoJSON, "csr");
    if (csr) { 
    if(!cJSON_IsString(csr) && !cJSON_IsNull(csr))
    {
    goto end; //String
    }
    }

    // signing_certificate_dto->public_key
    cJSON *public_key = cJSON_GetObjectItemCaseSensitive(signing_certificate_dtoJSON, "publicKey");
    if (public_key) { 
    if(!cJSON_IsString(public_key) && !cJSON_IsNull(public_key))
    {
    goto end; //String
    }
    }

    // signing_certificate_dto->signature
    cJSON *signature = cJSON_GetObjectItemCaseSensitive(signing_certificate_dtoJSON, "signature");
    if (signature) { 
    if(!cJSON_IsString(signature) && !cJSON_IsNull(signature))
    {
    goto end; //String
    }
    }

    // signing_certificate_dto->file_length_in_bits
    cJSON *file_length_in_bits = cJSON_GetObjectItemCaseSensitive(signing_certificate_dtoJSON, "fileLengthInBits");
    if (file_length_in_bits) { 
    if(!cJSON_IsNumber(file_length_in_bits))
    {
    goto end; //Numeric
    }
    }

    // signing_certificate_dto->certificate_type
    cJSON *certificate_type = cJSON_GetObjectItemCaseSensitive(signing_certificate_dtoJSON, "certificateType");
    trustservice_signing_certificate_dto_CERTIFICATETYPE_e certificate_typeVariable;
    if (certificate_type) { 
    if(!cJSON_IsString(certificate_type))
    {
    goto end; //Enum
    }
    certificate_typeVariable = signing_certificate_dto_certificate_type_FromString(certificate_type->valuestring);
    }

    // signing_certificate_dto->contact_id
    cJSON *contact_id = cJSON_GetObjectItemCaseSensitive(signing_certificate_dtoJSON, "contactId");
    if (contact_id) { 
    if(!cJSON_IsString(contact_id) && !cJSON_IsNull(contact_id))
    {
    goto end; //String
    }
    }

    // signing_certificate_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(signing_certificate_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // signing_certificate_dto->user_id
    cJSON *user_id = cJSON_GetObjectItemCaseSensitive(signing_certificate_dtoJSON, "userId");
    if (user_id) { 
    if(!cJSON_IsString(user_id) && !cJSON_IsNull(user_id))
    {
    goto end; //String
    }
    }

    // signing_certificate_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(signing_certificate_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // signing_certificate_dto->security_certificate_id
    cJSON *security_certificate_id = cJSON_GetObjectItemCaseSensitive(signing_certificate_dtoJSON, "securityCertificateId");
    if (security_certificate_id) { 
    if(!cJSON_IsString(security_certificate_id) && !cJSON_IsNull(security_certificate_id))
    {
    goto end; //String
    }
    }

    // signing_certificate_dto->certificate_status
    cJSON *certificate_status = cJSON_GetObjectItemCaseSensitive(signing_certificate_dtoJSON, "certificateStatus");
    trustservice_signing_certificate_dto_CERTIFICATESTATUS_e certificate_statusVariable;
    if (certificate_status) { 
    if(!cJSON_IsString(certificate_status))
    {
    goto end; //Enum
    }
    certificate_statusVariable = signing_certificate_dto_certificate_status_FromString(certificate_status->valuestring);
    }

    // signing_certificate_dto->thumbprint
    cJSON *thumbprint = cJSON_GetObjectItemCaseSensitive(signing_certificate_dtoJSON, "thumbprint");
    if (thumbprint) { 
    if(!cJSON_IsString(thumbprint) && !cJSON_IsNull(thumbprint))
    {
    goto end; //String
    }
    }

    // signing_certificate_dto->subject_name
    cJSON *subject_name = cJSON_GetObjectItemCaseSensitive(signing_certificate_dtoJSON, "subjectName");
    if (subject_name) { 
    if(!cJSON_IsString(subject_name) && !cJSON_IsNull(subject_name))
    {
    goto end; //String
    }
    }

    // signing_certificate_dto->issuer_name
    cJSON *issuer_name = cJSON_GetObjectItemCaseSensitive(signing_certificate_dtoJSON, "issuerName");
    if (issuer_name) { 
    if(!cJSON_IsString(issuer_name) && !cJSON_IsNull(issuer_name))
    {
    goto end; //String
    }
    }

    // signing_certificate_dto->serial_number
    cJSON *serial_number = cJSON_GetObjectItemCaseSensitive(signing_certificate_dtoJSON, "serialNumber");
    if (serial_number) { 
    if(!cJSON_IsString(serial_number) && !cJSON_IsNull(serial_number))
    {
    goto end; //String
    }
    }

    // signing_certificate_dto->not_before_utc
    cJSON *not_before_utc = cJSON_GetObjectItemCaseSensitive(signing_certificate_dtoJSON, "notBeforeUtc");
    if (not_before_utc) { 
    if(!cJSON_IsString(not_before_utc) && !cJSON_IsNull(not_before_utc))
    {
    goto end; //DateTime
    }
    }

    // signing_certificate_dto->not_after_utc
    cJSON *not_after_utc = cJSON_GetObjectItemCaseSensitive(signing_certificate_dtoJSON, "notAfterUtc");
    if (not_after_utc) { 
    if(!cJSON_IsString(not_after_utc) && !cJSON_IsNull(not_after_utc))
    {
    goto end; //DateTime
    }
    }

    // signing_certificate_dto->contact_name
    cJSON *contact_name = cJSON_GetObjectItemCaseSensitive(signing_certificate_dtoJSON, "contactName");
    if (contact_name) { 
    if(!cJSON_IsString(contact_name) && !cJSON_IsNull(contact_name))
    {
    goto end; //String
    }
    }


    signing_certificate_dto_local_var = signing_certificate_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        url && !cJSON_IsNull(url) ? strdup(url->valuestring) : NULL,
        csr && !cJSON_IsNull(csr) ? strdup(csr->valuestring) : NULL,
        public_key && !cJSON_IsNull(public_key) ? strdup(public_key->valuestring) : NULL,
        signature && !cJSON_IsNull(signature) ? strdup(signature->valuestring) : NULL,
        file_length_in_bits ? file_length_in_bits->valuedouble : 0,
        certificate_type ? certificate_typeVariable : trustservice_signing_certificate_dto_CERTIFICATETYPE_NULL,
        contact_id && !cJSON_IsNull(contact_id) ? strdup(contact_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        user_id && !cJSON_IsNull(user_id) ? strdup(user_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        security_certificate_id && !cJSON_IsNull(security_certificate_id) ? strdup(security_certificate_id->valuestring) : NULL,
        certificate_status ? certificate_statusVariable : trustservice_signing_certificate_dto_CERTIFICATESTATUS_NULL,
        thumbprint && !cJSON_IsNull(thumbprint) ? strdup(thumbprint->valuestring) : NULL,
        subject_name && !cJSON_IsNull(subject_name) ? strdup(subject_name->valuestring) : NULL,
        issuer_name && !cJSON_IsNull(issuer_name) ? strdup(issuer_name->valuestring) : NULL,
        serial_number && !cJSON_IsNull(serial_number) ? strdup(serial_number->valuestring) : NULL,
        not_before_utc && !cJSON_IsNull(not_before_utc) ? strdup(not_before_utc->valuestring) : NULL,
        not_after_utc && !cJSON_IsNull(not_after_utc) ? strdup(not_after_utc->valuestring) : NULL,
        contact_name && !cJSON_IsNull(contact_name) ? strdup(contact_name->valuestring) : NULL
        );

    return signing_certificate_dto_local_var;
end:
    return NULL;

}
