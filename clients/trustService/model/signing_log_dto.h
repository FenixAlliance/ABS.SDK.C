/*
 * signing_log_dto.h
 *
 * 
 */

#ifndef _signing_log_dto_H_
#define _signing_log_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct signing_log_dto_t signing_log_dto_t;


// Enum LOGTYPE for signing_log_dto

typedef enum  { trustservice_signing_log_dto_LOGTYPE_NULL = 0, trustservice_signing_log_dto_LOGTYPE__Continue, trustservice_signing_log_dto_LOGTYPE_SwitchingProtocols, trustservice_signing_log_dto_LOGTYPE_Processing, trustservice_signing_log_dto_LOGTYPE_EarlyHints, trustservice_signing_log_dto_LOGTYPE_OK, trustservice_signing_log_dto_LOGTYPE_Created, trustservice_signing_log_dto_LOGTYPE_Accepted, trustservice_signing_log_dto_LOGTYPE_NonAuthoritativeInformation, trustservice_signing_log_dto_LOGTYPE_NoContent, trustservice_signing_log_dto_LOGTYPE_ResetContent, trustservice_signing_log_dto_LOGTYPE_PartialContent, trustservice_signing_log_dto_LOGTYPE_MultiStatus, trustservice_signing_log_dto_LOGTYPE_AlreadyReported, trustservice_signing_log_dto_LOGTYPE_IMUsed, trustservice_signing_log_dto_LOGTYPE_MultipleChoices, trustservice_signing_log_dto_LOGTYPE_MovedPermanently, trustservice_signing_log_dto_LOGTYPE_Found, trustservice_signing_log_dto_LOGTYPE_SeeOther, trustservice_signing_log_dto_LOGTYPE_NotModified, trustservice_signing_log_dto_LOGTYPE_UseProxy, trustservice_signing_log_dto_LOGTYPE_Unused, trustservice_signing_log_dto_LOGTYPE_TemporaryRedirect, trustservice_signing_log_dto_LOGTYPE_PermanentRedirect, trustservice_signing_log_dto_LOGTYPE_BadRequest, trustservice_signing_log_dto_LOGTYPE_Unauthorized, trustservice_signing_log_dto_LOGTYPE_PaymentRequired, trustservice_signing_log_dto_LOGTYPE_Forbidden, trustservice_signing_log_dto_LOGTYPE_NotFound, trustservice_signing_log_dto_LOGTYPE_MethodNotAllowed, trustservice_signing_log_dto_LOGTYPE_NotAcceptable, trustservice_signing_log_dto_LOGTYPE_ProxyAuthenticationRequired, trustservice_signing_log_dto_LOGTYPE_RequestTimeout, trustservice_signing_log_dto_LOGTYPE_Conflict, trustservice_signing_log_dto_LOGTYPE_Gone, trustservice_signing_log_dto_LOGTYPE_LengthRequired, trustservice_signing_log_dto_LOGTYPE_PreconditionFailed, trustservice_signing_log_dto_LOGTYPE_RequestEntityTooLarge, trustservice_signing_log_dto_LOGTYPE_RequestUriTooLong, trustservice_signing_log_dto_LOGTYPE_UnsupportedMediaType, trustservice_signing_log_dto_LOGTYPE_RequestedRangeNotSatisfiable, trustservice_signing_log_dto_LOGTYPE_ExpectationFailed, trustservice_signing_log_dto_LOGTYPE_MisdirectedRequest, trustservice_signing_log_dto_LOGTYPE_UnprocessableEntity, trustservice_signing_log_dto_LOGTYPE_Locked, trustservice_signing_log_dto_LOGTYPE_FailedDependency, trustservice_signing_log_dto_LOGTYPE_UpgradeRequired, trustservice_signing_log_dto_LOGTYPE_PreconditionRequired, trustservice_signing_log_dto_LOGTYPE_TooManyRequests, trustservice_signing_log_dto_LOGTYPE_RequestHeaderFieldsTooLarge, trustservice_signing_log_dto_LOGTYPE_UnavailableForLegalReasons, trustservice_signing_log_dto_LOGTYPE_InternalServerError, trustservice_signing_log_dto_LOGTYPE_NotImplemented, trustservice_signing_log_dto_LOGTYPE_BadGateway, trustservice_signing_log_dto_LOGTYPE_ServiceUnavailable, trustservice_signing_log_dto_LOGTYPE_GatewayTimeout, trustservice_signing_log_dto_LOGTYPE_HttpVersionNotSupported, trustservice_signing_log_dto_LOGTYPE_VariantAlsoNegotiates, trustservice_signing_log_dto_LOGTYPE_InsufficientStorage, trustservice_signing_log_dto_LOGTYPE_LoopDetected, trustservice_signing_log_dto_LOGTYPE_NotExtended, trustservice_signing_log_dto_LOGTYPE_NetworkAuthenticationRequired } trustservice_signing_log_dto_LOGTYPE_e;

char* signing_log_dto_log_type_ToString(trustservice_signing_log_dto_LOGTYPE_e log_type);

trustservice_signing_log_dto_LOGTYPE_e signing_log_dto_log_type_FromString(char* log_type);

// Enum OPERATIONTYPE for signing_log_dto

typedef enum  { trustservice_signing_log_dto_OPERATIONTYPE_NULL = 0, trustservice_signing_log_dto_OPERATIONTYPE_Unknown, trustservice_signing_log_dto_OPERATIONTYPE_Sign, trustservice_signing_log_dto_OPERATIONTYPE_Verify, trustservice_signing_log_dto_OPERATIONTYPE_Seal, trustservice_signing_log_dto_OPERATIONTYPE_RotateCredential, trustservice_signing_log_dto_OPERATIONTYPE_ResolveCredential, trustservice_signing_log_dto_OPERATIONTYPE_SubmitToAuthority, trustservice_signing_log_dto_OPERATIONTYPE_ReceiveAuthorityResponse, trustservice_signing_log_dto_OPERATIONTYPE_Freeze } trustservice_signing_log_dto_OPERATIONTYPE_e;

char* signing_log_dto_operation_type_ToString(trustservice_signing_log_dto_OPERATIONTYPE_e operation_type);

trustservice_signing_log_dto_OPERATIONTYPE_e signing_log_dto_operation_type_FromString(char* operation_type);



typedef struct signing_log_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *type; // string
    char *message; // string
    trustservice_signing_log_dto_LOGTYPE_e log_type; //enum
    char *security_event; // string
    int requires_attention; //boolean
    char *tenant_id; // string
    char *user_id; // string
    char *enrollment_id; // string
    char *contact_id; // string
    char *signing_profile_id; // string
    char *signing_certificate_id; // string
    char *signed_document_id; // string
    trustservice_signing_log_dto_OPERATIONTYPE_e operation_type; //enum
    char *correlation_id; // string
    char *input_hash; // string
    char *output_hash; // string
    char *provider_name; // string
    char *result_code; // string
    char *signing_profile_display_name; // string
    char *signing_certificate_title; // string
    char *signed_document_title; // string

} signing_log_dto_t;

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
);

void signing_log_dto_free(signing_log_dto_t *signing_log_dto);

signing_log_dto_t *signing_log_dto_parseFromJSON(cJSON *signing_log_dtoJSON);

cJSON *signing_log_dto_convertToJSON(signing_log_dto_t *signing_log_dto);

#endif /* _signing_log_dto_H_ */

