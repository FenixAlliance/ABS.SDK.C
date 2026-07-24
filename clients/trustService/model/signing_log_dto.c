#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "signing_log_dto.h"


char* signing_log_dto_log_type_ToString(trustservice_signing_log_dto_LOGTYPE_e log_type) {
    char* log_typeArray[] =  { "NULL", "Continue", "SwitchingProtocols", "Processing", "EarlyHints", "OK", "Created", "Accepted", "NonAuthoritativeInformation", "NoContent", "ResetContent", "PartialContent", "MultiStatus", "AlreadyReported", "IMUsed", "MultipleChoices", "MovedPermanently", "Found", "SeeOther", "NotModified", "UseProxy", "Unused", "TemporaryRedirect", "PermanentRedirect", "BadRequest", "Unauthorized", "PaymentRequired", "Forbidden", "NotFound", "MethodNotAllowed", "NotAcceptable", "ProxyAuthenticationRequired", "RequestTimeout", "Conflict", "Gone", "LengthRequired", "PreconditionFailed", "RequestEntityTooLarge", "RequestUriTooLong", "UnsupportedMediaType", "RequestedRangeNotSatisfiable", "ExpectationFailed", "MisdirectedRequest", "UnprocessableEntity", "Locked", "FailedDependency", "UpgradeRequired", "PreconditionRequired", "TooManyRequests", "RequestHeaderFieldsTooLarge", "UnavailableForLegalReasons", "InternalServerError", "NotImplemented", "BadGateway", "ServiceUnavailable", "GatewayTimeout", "HttpVersionNotSupported", "VariantAlsoNegotiates", "InsufficientStorage", "LoopDetected", "NotExtended", "NetworkAuthenticationRequired" };
    return log_typeArray[log_type];
}

trustservice_signing_log_dto_LOGTYPE_e signing_log_dto_log_type_FromString(char* log_type){
    int stringToReturn = 0;
    char *log_typeArray[] =  { "NULL", "Continue", "SwitchingProtocols", "Processing", "EarlyHints", "OK", "Created", "Accepted", "NonAuthoritativeInformation", "NoContent", "ResetContent", "PartialContent", "MultiStatus", "AlreadyReported", "IMUsed", "MultipleChoices", "MovedPermanently", "Found", "SeeOther", "NotModified", "UseProxy", "Unused", "TemporaryRedirect", "PermanentRedirect", "BadRequest", "Unauthorized", "PaymentRequired", "Forbidden", "NotFound", "MethodNotAllowed", "NotAcceptable", "ProxyAuthenticationRequired", "RequestTimeout", "Conflict", "Gone", "LengthRequired", "PreconditionFailed", "RequestEntityTooLarge", "RequestUriTooLong", "UnsupportedMediaType", "RequestedRangeNotSatisfiable", "ExpectationFailed", "MisdirectedRequest", "UnprocessableEntity", "Locked", "FailedDependency", "UpgradeRequired", "PreconditionRequired", "TooManyRequests", "RequestHeaderFieldsTooLarge", "UnavailableForLegalReasons", "InternalServerError", "NotImplemented", "BadGateway", "ServiceUnavailable", "GatewayTimeout", "HttpVersionNotSupported", "VariantAlsoNegotiates", "InsufficientStorage", "LoopDetected", "NotExtended", "NetworkAuthenticationRequired" };
    size_t sizeofArray = sizeof(log_typeArray) / sizeof(log_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(log_type, log_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* signing_log_dto_operation_type_ToString(trustservice_signing_log_dto_OPERATIONTYPE_e operation_type) {
    char* operation_typeArray[] =  { "NULL", "Unknown", "Sign", "Verify", "Seal", "RotateCredential", "ResolveCredential", "SubmitToAuthority", "ReceiveAuthorityResponse", "Freeze" };
    return operation_typeArray[operation_type];
}

trustservice_signing_log_dto_OPERATIONTYPE_e signing_log_dto_operation_type_FromString(char* operation_type){
    int stringToReturn = 0;
    char *operation_typeArray[] =  { "NULL", "Unknown", "Sign", "Verify", "Seal", "RotateCredential", "ResolveCredential", "SubmitToAuthority", "ReceiveAuthorityResponse", "Freeze" };
    size_t sizeofArray = sizeof(operation_typeArray) / sizeof(operation_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(operation_type, operation_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

signing_log_dto_t *signing_log_dto_create(
    char *id,
    char *timestamp,
    char *type,
    char *message,
    trustservice_signing_log_dto_LOGTYPE_e log_type,
    char *security_event,
    int requires_attention,
    char *tenant_id,
    char *user_id,
    char *enrollment_id,
    char *contact_id,
    char *signing_profile_id,
    char *signing_certificate_id,
    char *signed_document_id,
    trustservice_signing_log_dto_OPERATIONTYPE_e operation_type,
    char *correlation_id,
    char *input_hash,
    char *output_hash,
    char *provider_name,
    char *result_code,
    char *signing_profile_display_name,
    char *signing_certificate_title,
    char *signed_document_title
    ) {
    signing_log_dto_t *signing_log_dto_local_var = malloc(sizeof(signing_log_dto_t));
    if (!signing_log_dto_local_var) {
        return NULL;
    }
    signing_log_dto_local_var->id = id;
    signing_log_dto_local_var->timestamp = timestamp;
    signing_log_dto_local_var->type = type;
    signing_log_dto_local_var->message = message;
    signing_log_dto_local_var->log_type = log_type;
    signing_log_dto_local_var->security_event = security_event;
    signing_log_dto_local_var->requires_attention = requires_attention;
    signing_log_dto_local_var->tenant_id = tenant_id;
    signing_log_dto_local_var->user_id = user_id;
    signing_log_dto_local_var->enrollment_id = enrollment_id;
    signing_log_dto_local_var->contact_id = contact_id;
    signing_log_dto_local_var->signing_profile_id = signing_profile_id;
    signing_log_dto_local_var->signing_certificate_id = signing_certificate_id;
    signing_log_dto_local_var->signed_document_id = signed_document_id;
    signing_log_dto_local_var->operation_type = operation_type;
    signing_log_dto_local_var->correlation_id = correlation_id;
    signing_log_dto_local_var->input_hash = input_hash;
    signing_log_dto_local_var->output_hash = output_hash;
    signing_log_dto_local_var->provider_name = provider_name;
    signing_log_dto_local_var->result_code = result_code;
    signing_log_dto_local_var->signing_profile_display_name = signing_profile_display_name;
    signing_log_dto_local_var->signing_certificate_title = signing_certificate_title;
    signing_log_dto_local_var->signed_document_title = signed_document_title;

    return signing_log_dto_local_var;
}


void signing_log_dto_free(signing_log_dto_t *signing_log_dto) {
    if(NULL == signing_log_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (signing_log_dto->id) {
        free(signing_log_dto->id);
        signing_log_dto->id = NULL;
    }
    if (signing_log_dto->timestamp) {
        free(signing_log_dto->timestamp);
        signing_log_dto->timestamp = NULL;
    }
    if (signing_log_dto->type) {
        free(signing_log_dto->type);
        signing_log_dto->type = NULL;
    }
    if (signing_log_dto->message) {
        free(signing_log_dto->message);
        signing_log_dto->message = NULL;
    }
    if (signing_log_dto->security_event) {
        free(signing_log_dto->security_event);
        signing_log_dto->security_event = NULL;
    }
    if (signing_log_dto->tenant_id) {
        free(signing_log_dto->tenant_id);
        signing_log_dto->tenant_id = NULL;
    }
    if (signing_log_dto->user_id) {
        free(signing_log_dto->user_id);
        signing_log_dto->user_id = NULL;
    }
    if (signing_log_dto->enrollment_id) {
        free(signing_log_dto->enrollment_id);
        signing_log_dto->enrollment_id = NULL;
    }
    if (signing_log_dto->contact_id) {
        free(signing_log_dto->contact_id);
        signing_log_dto->contact_id = NULL;
    }
    if (signing_log_dto->signing_profile_id) {
        free(signing_log_dto->signing_profile_id);
        signing_log_dto->signing_profile_id = NULL;
    }
    if (signing_log_dto->signing_certificate_id) {
        free(signing_log_dto->signing_certificate_id);
        signing_log_dto->signing_certificate_id = NULL;
    }
    if (signing_log_dto->signed_document_id) {
        free(signing_log_dto->signed_document_id);
        signing_log_dto->signed_document_id = NULL;
    }
    if (signing_log_dto->correlation_id) {
        free(signing_log_dto->correlation_id);
        signing_log_dto->correlation_id = NULL;
    }
    if (signing_log_dto->input_hash) {
        free(signing_log_dto->input_hash);
        signing_log_dto->input_hash = NULL;
    }
    if (signing_log_dto->output_hash) {
        free(signing_log_dto->output_hash);
        signing_log_dto->output_hash = NULL;
    }
    if (signing_log_dto->provider_name) {
        free(signing_log_dto->provider_name);
        signing_log_dto->provider_name = NULL;
    }
    if (signing_log_dto->result_code) {
        free(signing_log_dto->result_code);
        signing_log_dto->result_code = NULL;
    }
    if (signing_log_dto->signing_profile_display_name) {
        free(signing_log_dto->signing_profile_display_name);
        signing_log_dto->signing_profile_display_name = NULL;
    }
    if (signing_log_dto->signing_certificate_title) {
        free(signing_log_dto->signing_certificate_title);
        signing_log_dto->signing_certificate_title = NULL;
    }
    if (signing_log_dto->signed_document_title) {
        free(signing_log_dto->signed_document_title);
        signing_log_dto->signed_document_title = NULL;
    }
    free(signing_log_dto);
}

cJSON *signing_log_dto_convertToJSON(signing_log_dto_t *signing_log_dto) {
    cJSON *item = cJSON_CreateObject();

    // signing_log_dto->id
    if(signing_log_dto->id) {
    if(cJSON_AddStringToObject(item, "id", signing_log_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // signing_log_dto->timestamp
    if(signing_log_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", signing_log_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // signing_log_dto->type
    if(signing_log_dto->type) {
    if(cJSON_AddStringToObject(item, "type", signing_log_dto->type) == NULL) {
    goto fail; //String
    }
    }


    // signing_log_dto->message
    if(signing_log_dto->message) {
    if(cJSON_AddStringToObject(item, "message", signing_log_dto->message) == NULL) {
    goto fail; //String
    }
    }


    // signing_log_dto->log_type
    if(signing_log_dto->log_type != trustservice_signing_log_dto_LOGTYPE_NULL) {
    if(cJSON_AddStringToObject(item, "logType", log_typesigning_log_dto_ToString(signing_log_dto->log_type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // signing_log_dto->security_event
    if(signing_log_dto->security_event) {
    if(cJSON_AddStringToObject(item, "securityEvent", signing_log_dto->security_event) == NULL) {
    goto fail; //String
    }
    }


    // signing_log_dto->requires_attention
    if(signing_log_dto->requires_attention) {
    if(cJSON_AddBoolToObject(item, "requiresAttention", signing_log_dto->requires_attention) == NULL) {
    goto fail; //Bool
    }
    }


    // signing_log_dto->tenant_id
    if(signing_log_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", signing_log_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // signing_log_dto->user_id
    if(signing_log_dto->user_id) {
    if(cJSON_AddStringToObject(item, "userId", signing_log_dto->user_id) == NULL) {
    goto fail; //String
    }
    }


    // signing_log_dto->enrollment_id
    if(signing_log_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", signing_log_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // signing_log_dto->contact_id
    if(signing_log_dto->contact_id) {
    if(cJSON_AddStringToObject(item, "contactId", signing_log_dto->contact_id) == NULL) {
    goto fail; //String
    }
    }


    // signing_log_dto->signing_profile_id
    if(signing_log_dto->signing_profile_id) {
    if(cJSON_AddStringToObject(item, "signingProfileId", signing_log_dto->signing_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // signing_log_dto->signing_certificate_id
    if(signing_log_dto->signing_certificate_id) {
    if(cJSON_AddStringToObject(item, "signingCertificateId", signing_log_dto->signing_certificate_id) == NULL) {
    goto fail; //String
    }
    }


    // signing_log_dto->signed_document_id
    if(signing_log_dto->signed_document_id) {
    if(cJSON_AddStringToObject(item, "signedDocumentId", signing_log_dto->signed_document_id) == NULL) {
    goto fail; //String
    }
    }


    // signing_log_dto->operation_type
    if(signing_log_dto->operation_type != trustservice_signing_log_dto_OPERATIONTYPE_NULL) {
    if(cJSON_AddStringToObject(item, "operationType", operation_typesigning_log_dto_ToString(signing_log_dto->operation_type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // signing_log_dto->correlation_id
    if(signing_log_dto->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", signing_log_dto->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // signing_log_dto->input_hash
    if(signing_log_dto->input_hash) {
    if(cJSON_AddStringToObject(item, "inputHash", signing_log_dto->input_hash) == NULL) {
    goto fail; //String
    }
    }


    // signing_log_dto->output_hash
    if(signing_log_dto->output_hash) {
    if(cJSON_AddStringToObject(item, "outputHash", signing_log_dto->output_hash) == NULL) {
    goto fail; //String
    }
    }


    // signing_log_dto->provider_name
    if(signing_log_dto->provider_name) {
    if(cJSON_AddStringToObject(item, "providerName", signing_log_dto->provider_name) == NULL) {
    goto fail; //String
    }
    }


    // signing_log_dto->result_code
    if(signing_log_dto->result_code) {
    if(cJSON_AddStringToObject(item, "resultCode", signing_log_dto->result_code) == NULL) {
    goto fail; //String
    }
    }


    // signing_log_dto->signing_profile_display_name
    if(signing_log_dto->signing_profile_display_name) {
    if(cJSON_AddStringToObject(item, "signingProfileDisplayName", signing_log_dto->signing_profile_display_name) == NULL) {
    goto fail; //String
    }
    }


    // signing_log_dto->signing_certificate_title
    if(signing_log_dto->signing_certificate_title) {
    if(cJSON_AddStringToObject(item, "signingCertificateTitle", signing_log_dto->signing_certificate_title) == NULL) {
    goto fail; //String
    }
    }


    // signing_log_dto->signed_document_title
    if(signing_log_dto->signed_document_title) {
    if(cJSON_AddStringToObject(item, "signedDocumentTitle", signing_log_dto->signed_document_title) == NULL) {
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

signing_log_dto_t *signing_log_dto_parseFromJSON(cJSON *signing_log_dtoJSON){

    signing_log_dto_t *signing_log_dto_local_var = NULL;

    // signing_log_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(signing_log_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // signing_log_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(signing_log_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // signing_log_dto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(signing_log_dtoJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // signing_log_dto->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(signing_log_dtoJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message) && !cJSON_IsNull(message))
    {
    goto end; //String
    }
    }

    // signing_log_dto->log_type
    cJSON *log_type = cJSON_GetObjectItemCaseSensitive(signing_log_dtoJSON, "logType");
    trustservice_signing_log_dto_LOGTYPE_e log_typeVariable;
    if (log_type) { 
    if(!cJSON_IsString(log_type))
    {
    goto end; //Enum
    }
    log_typeVariable = signing_log_dto_log_type_FromString(log_type->valuestring);
    }

    // signing_log_dto->security_event
    cJSON *security_event = cJSON_GetObjectItemCaseSensitive(signing_log_dtoJSON, "securityEvent");
    if (security_event) { 
    if(!cJSON_IsString(security_event) && !cJSON_IsNull(security_event))
    {
    goto end; //String
    }
    }

    // signing_log_dto->requires_attention
    cJSON *requires_attention = cJSON_GetObjectItemCaseSensitive(signing_log_dtoJSON, "requiresAttention");
    if (requires_attention) { 
    if(!cJSON_IsBool(requires_attention))
    {
    goto end; //Bool
    }
    }

    // signing_log_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(signing_log_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // signing_log_dto->user_id
    cJSON *user_id = cJSON_GetObjectItemCaseSensitive(signing_log_dtoJSON, "userId");
    if (user_id) { 
    if(!cJSON_IsString(user_id) && !cJSON_IsNull(user_id))
    {
    goto end; //String
    }
    }

    // signing_log_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(signing_log_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // signing_log_dto->contact_id
    cJSON *contact_id = cJSON_GetObjectItemCaseSensitive(signing_log_dtoJSON, "contactId");
    if (contact_id) { 
    if(!cJSON_IsString(contact_id) && !cJSON_IsNull(contact_id))
    {
    goto end; //String
    }
    }

    // signing_log_dto->signing_profile_id
    cJSON *signing_profile_id = cJSON_GetObjectItemCaseSensitive(signing_log_dtoJSON, "signingProfileId");
    if (signing_profile_id) { 
    if(!cJSON_IsString(signing_profile_id) && !cJSON_IsNull(signing_profile_id))
    {
    goto end; //String
    }
    }

    // signing_log_dto->signing_certificate_id
    cJSON *signing_certificate_id = cJSON_GetObjectItemCaseSensitive(signing_log_dtoJSON, "signingCertificateId");
    if (signing_certificate_id) { 
    if(!cJSON_IsString(signing_certificate_id) && !cJSON_IsNull(signing_certificate_id))
    {
    goto end; //String
    }
    }

    // signing_log_dto->signed_document_id
    cJSON *signed_document_id = cJSON_GetObjectItemCaseSensitive(signing_log_dtoJSON, "signedDocumentId");
    if (signed_document_id) { 
    if(!cJSON_IsString(signed_document_id) && !cJSON_IsNull(signed_document_id))
    {
    goto end; //String
    }
    }

    // signing_log_dto->operation_type
    cJSON *operation_type = cJSON_GetObjectItemCaseSensitive(signing_log_dtoJSON, "operationType");
    trustservice_signing_log_dto_OPERATIONTYPE_e operation_typeVariable;
    if (operation_type) { 
    if(!cJSON_IsString(operation_type))
    {
    goto end; //Enum
    }
    operation_typeVariable = signing_log_dto_operation_type_FromString(operation_type->valuestring);
    }

    // signing_log_dto->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(signing_log_dtoJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // signing_log_dto->input_hash
    cJSON *input_hash = cJSON_GetObjectItemCaseSensitive(signing_log_dtoJSON, "inputHash");
    if (input_hash) { 
    if(!cJSON_IsString(input_hash) && !cJSON_IsNull(input_hash))
    {
    goto end; //String
    }
    }

    // signing_log_dto->output_hash
    cJSON *output_hash = cJSON_GetObjectItemCaseSensitive(signing_log_dtoJSON, "outputHash");
    if (output_hash) { 
    if(!cJSON_IsString(output_hash) && !cJSON_IsNull(output_hash))
    {
    goto end; //String
    }
    }

    // signing_log_dto->provider_name
    cJSON *provider_name = cJSON_GetObjectItemCaseSensitive(signing_log_dtoJSON, "providerName");
    if (provider_name) { 
    if(!cJSON_IsString(provider_name) && !cJSON_IsNull(provider_name))
    {
    goto end; //String
    }
    }

    // signing_log_dto->result_code
    cJSON *result_code = cJSON_GetObjectItemCaseSensitive(signing_log_dtoJSON, "resultCode");
    if (result_code) { 
    if(!cJSON_IsString(result_code) && !cJSON_IsNull(result_code))
    {
    goto end; //String
    }
    }

    // signing_log_dto->signing_profile_display_name
    cJSON *signing_profile_display_name = cJSON_GetObjectItemCaseSensitive(signing_log_dtoJSON, "signingProfileDisplayName");
    if (signing_profile_display_name) { 
    if(!cJSON_IsString(signing_profile_display_name) && !cJSON_IsNull(signing_profile_display_name))
    {
    goto end; //String
    }
    }

    // signing_log_dto->signing_certificate_title
    cJSON *signing_certificate_title = cJSON_GetObjectItemCaseSensitive(signing_log_dtoJSON, "signingCertificateTitle");
    if (signing_certificate_title) { 
    if(!cJSON_IsString(signing_certificate_title) && !cJSON_IsNull(signing_certificate_title))
    {
    goto end; //String
    }
    }

    // signing_log_dto->signed_document_title
    cJSON *signed_document_title = cJSON_GetObjectItemCaseSensitive(signing_log_dtoJSON, "signedDocumentTitle");
    if (signed_document_title) { 
    if(!cJSON_IsString(signed_document_title) && !cJSON_IsNull(signed_document_title))
    {
    goto end; //String
    }
    }


    signing_log_dto_local_var = signing_log_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        message && !cJSON_IsNull(message) ? strdup(message->valuestring) : NULL,
        log_type ? log_typeVariable : trustservice_signing_log_dto_LOGTYPE_NULL,
        security_event && !cJSON_IsNull(security_event) ? strdup(security_event->valuestring) : NULL,
        requires_attention ? requires_attention->valueint : 0,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        user_id && !cJSON_IsNull(user_id) ? strdup(user_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        contact_id && !cJSON_IsNull(contact_id) ? strdup(contact_id->valuestring) : NULL,
        signing_profile_id && !cJSON_IsNull(signing_profile_id) ? strdup(signing_profile_id->valuestring) : NULL,
        signing_certificate_id && !cJSON_IsNull(signing_certificate_id) ? strdup(signing_certificate_id->valuestring) : NULL,
        signed_document_id && !cJSON_IsNull(signed_document_id) ? strdup(signed_document_id->valuestring) : NULL,
        operation_type ? operation_typeVariable : trustservice_signing_log_dto_OPERATIONTYPE_NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        input_hash && !cJSON_IsNull(input_hash) ? strdup(input_hash->valuestring) : NULL,
        output_hash && !cJSON_IsNull(output_hash) ? strdup(output_hash->valuestring) : NULL,
        provider_name && !cJSON_IsNull(provider_name) ? strdup(provider_name->valuestring) : NULL,
        result_code && !cJSON_IsNull(result_code) ? strdup(result_code->valuestring) : NULL,
        signing_profile_display_name && !cJSON_IsNull(signing_profile_display_name) ? strdup(signing_profile_display_name->valuestring) : NULL,
        signing_certificate_title && !cJSON_IsNull(signing_certificate_title) ? strdup(signing_certificate_title->valuestring) : NULL,
        signed_document_title && !cJSON_IsNull(signed_document_title) ? strdup(signed_document_title->valuestring) : NULL
        );

    return signing_log_dto_local_var;
end:
    return NULL;

}
