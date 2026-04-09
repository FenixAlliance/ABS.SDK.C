#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "log_dto.h"


char* log_dto_log_type_ToString(securityservice_log_dto_LOGTYPE_e log_type) {
    char* log_typeArray[] =  { "NULL", "Continue", "SwitchingProtocols", "Processing", "EarlyHints", "OK", "Created", "Accepted", "NonAuthoritativeInformation", "NoContent", "ResetContent", "PartialContent", "MultiStatus", "AlreadyReported", "IMUsed", "MultipleChoices", "MovedPermanently", "Found", "SeeOther", "NotModified", "UseProxy", "Unused", "TemporaryRedirect", "PermanentRedirect", "BadRequest", "Unauthorized", "PaymentRequired", "Forbidden", "NotFound", "MethodNotAllowed", "NotAcceptable", "ProxyAuthenticationRequired", "RequestTimeout", "Conflict", "Gone", "LengthRequired", "PreconditionFailed", "RequestEntityTooLarge", "RequestUriTooLong", "UnsupportedMediaType", "RequestedRangeNotSatisfiable", "ExpectationFailed", "MisdirectedRequest", "UnprocessableEntity", "Locked", "FailedDependency", "UpgradeRequired", "PreconditionRequired", "TooManyRequests", "RequestHeaderFieldsTooLarge", "UnavailableForLegalReasons", "InternalServerError", "NotImplemented", "BadGateway", "ServiceUnavailable", "GatewayTimeout", "HttpVersionNotSupported", "VariantAlsoNegotiates", "InsufficientStorage", "LoopDetected", "NotExtended", "NetworkAuthenticationRequired" };
    return log_typeArray[log_type];
}

securityservice_log_dto_LOGTYPE_e log_dto_log_type_FromString(char* log_type){
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

log_dto_t *log_dto_create(
    char *id,
    char *timestamp,
    char *type,
    char *message,
    securityservice_log_dto_LOGTYPE_e log_type,
    char *business_id
    ) {
    log_dto_t *log_dto_local_var = malloc(sizeof(log_dto_t));
    if (!log_dto_local_var) {
        return NULL;
    }
    log_dto_local_var->id = id;
    log_dto_local_var->timestamp = timestamp;
    log_dto_local_var->type = type;
    log_dto_local_var->message = message;
    log_dto_local_var->log_type = log_type;
    log_dto_local_var->business_id = business_id;

    return log_dto_local_var;
}


void log_dto_free(log_dto_t *log_dto) {
    if(NULL == log_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (log_dto->id) {
        free(log_dto->id);
        log_dto->id = NULL;
    }
    if (log_dto->timestamp) {
        free(log_dto->timestamp);
        log_dto->timestamp = NULL;
    }
    if (log_dto->type) {
        free(log_dto->type);
        log_dto->type = NULL;
    }
    if (log_dto->message) {
        free(log_dto->message);
        log_dto->message = NULL;
    }
    if (log_dto->business_id) {
        free(log_dto->business_id);
        log_dto->business_id = NULL;
    }
    free(log_dto);
}

cJSON *log_dto_convertToJSON(log_dto_t *log_dto) {
    cJSON *item = cJSON_CreateObject();

    // log_dto->id
    if(log_dto->id) {
    if(cJSON_AddStringToObject(item, "id", log_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // log_dto->timestamp
    if(log_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", log_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // log_dto->type
    if(log_dto->type) {
    if(cJSON_AddStringToObject(item, "type", log_dto->type) == NULL) {
    goto fail; //String
    }
    }


    // log_dto->message
    if(log_dto->message) {
    if(cJSON_AddStringToObject(item, "message", log_dto->message) == NULL) {
    goto fail; //String
    }
    }


    // log_dto->log_type
    if(log_dto->log_type != securityservice_log_dto_LOGTYPE_NULL) {
    if(cJSON_AddStringToObject(item, "logType", log_typelog_dto_ToString(log_dto->log_type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // log_dto->business_id
    if(log_dto->business_id) {
    if(cJSON_AddStringToObject(item, "businessID", log_dto->business_id) == NULL) {
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

log_dto_t *log_dto_parseFromJSON(cJSON *log_dtoJSON){

    log_dto_t *log_dto_local_var = NULL;

    // log_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(log_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // log_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(log_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // log_dto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(log_dtoJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // log_dto->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(log_dtoJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message) && !cJSON_IsNull(message))
    {
    goto end; //String
    }
    }

    // log_dto->log_type
    cJSON *log_type = cJSON_GetObjectItemCaseSensitive(log_dtoJSON, "logType");
    securityservice_log_dto_LOGTYPE_e log_typeVariable;
    if (log_type) { 
    if(!cJSON_IsString(log_type))
    {
    goto end; //Enum
    }
    log_typeVariable = log_dto_log_type_FromString(log_type->valuestring);
    }

    // log_dto->business_id
    cJSON *business_id = cJSON_GetObjectItemCaseSensitive(log_dtoJSON, "businessID");
    if (business_id) { 
    if(!cJSON_IsString(business_id) && !cJSON_IsNull(business_id))
    {
    goto end; //String
    }
    }


    log_dto_local_var = log_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        message && !cJSON_IsNull(message) ? strdup(message->valuestring) : NULL,
        log_type ? log_typeVariable : securityservice_log_dto_LOGTYPE_NULL,
        business_id && !cJSON_IsNull(business_id) ? strdup(business_id->valuestring) : NULL
        );

    return log_dto_local_var;
end:
    return NULL;

}
