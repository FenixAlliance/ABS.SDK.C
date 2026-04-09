/*
 * log_dto.h
 *
 * 
 */

#ifndef _log_dto_H_
#define _log_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct log_dto_t log_dto_t;


// Enum LOGTYPE for log_dto

typedef enum  { securityservice_log_dto_LOGTYPE_NULL = 0, securityservice_log_dto_LOGTYPE__Continue, securityservice_log_dto_LOGTYPE_SwitchingProtocols, securityservice_log_dto_LOGTYPE_Processing, securityservice_log_dto_LOGTYPE_EarlyHints, securityservice_log_dto_LOGTYPE_OK, securityservice_log_dto_LOGTYPE_Created, securityservice_log_dto_LOGTYPE_Accepted, securityservice_log_dto_LOGTYPE_NonAuthoritativeInformation, securityservice_log_dto_LOGTYPE_NoContent, securityservice_log_dto_LOGTYPE_ResetContent, securityservice_log_dto_LOGTYPE_PartialContent, securityservice_log_dto_LOGTYPE_MultiStatus, securityservice_log_dto_LOGTYPE_AlreadyReported, securityservice_log_dto_LOGTYPE_IMUsed, securityservice_log_dto_LOGTYPE_MultipleChoices, securityservice_log_dto_LOGTYPE_MovedPermanently, securityservice_log_dto_LOGTYPE_Found, securityservice_log_dto_LOGTYPE_SeeOther, securityservice_log_dto_LOGTYPE_NotModified, securityservice_log_dto_LOGTYPE_UseProxy, securityservice_log_dto_LOGTYPE_Unused, securityservice_log_dto_LOGTYPE_TemporaryRedirect, securityservice_log_dto_LOGTYPE_PermanentRedirect, securityservice_log_dto_LOGTYPE_BadRequest, securityservice_log_dto_LOGTYPE_Unauthorized, securityservice_log_dto_LOGTYPE_PaymentRequired, securityservice_log_dto_LOGTYPE_Forbidden, securityservice_log_dto_LOGTYPE_NotFound, securityservice_log_dto_LOGTYPE_MethodNotAllowed, securityservice_log_dto_LOGTYPE_NotAcceptable, securityservice_log_dto_LOGTYPE_ProxyAuthenticationRequired, securityservice_log_dto_LOGTYPE_RequestTimeout, securityservice_log_dto_LOGTYPE_Conflict, securityservice_log_dto_LOGTYPE_Gone, securityservice_log_dto_LOGTYPE_LengthRequired, securityservice_log_dto_LOGTYPE_PreconditionFailed, securityservice_log_dto_LOGTYPE_RequestEntityTooLarge, securityservice_log_dto_LOGTYPE_RequestUriTooLong, securityservice_log_dto_LOGTYPE_UnsupportedMediaType, securityservice_log_dto_LOGTYPE_RequestedRangeNotSatisfiable, securityservice_log_dto_LOGTYPE_ExpectationFailed, securityservice_log_dto_LOGTYPE_MisdirectedRequest, securityservice_log_dto_LOGTYPE_UnprocessableEntity, securityservice_log_dto_LOGTYPE_Locked, securityservice_log_dto_LOGTYPE_FailedDependency, securityservice_log_dto_LOGTYPE_UpgradeRequired, securityservice_log_dto_LOGTYPE_PreconditionRequired, securityservice_log_dto_LOGTYPE_TooManyRequests, securityservice_log_dto_LOGTYPE_RequestHeaderFieldsTooLarge, securityservice_log_dto_LOGTYPE_UnavailableForLegalReasons, securityservice_log_dto_LOGTYPE_InternalServerError, securityservice_log_dto_LOGTYPE_NotImplemented, securityservice_log_dto_LOGTYPE_BadGateway, securityservice_log_dto_LOGTYPE_ServiceUnavailable, securityservice_log_dto_LOGTYPE_GatewayTimeout, securityservice_log_dto_LOGTYPE_HttpVersionNotSupported, securityservice_log_dto_LOGTYPE_VariantAlsoNegotiates, securityservice_log_dto_LOGTYPE_InsufficientStorage, securityservice_log_dto_LOGTYPE_LoopDetected, securityservice_log_dto_LOGTYPE_NotExtended, securityservice_log_dto_LOGTYPE_NetworkAuthenticationRequired } securityservice_log_dto_LOGTYPE_e;

char* log_dto_log_type_ToString(securityservice_log_dto_LOGTYPE_e log_type);

securityservice_log_dto_LOGTYPE_e log_dto_log_type_FromString(char* log_type);



typedef struct log_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *type; // string
    char *message; // string
    securityservice_log_dto_LOGTYPE_e log_type; //enum
    char *business_id; // string

} log_dto_t;

log_dto_t *log_dto_create(
    char *id,
    char *timestamp,
    char *type,
    char *message,
    securityservice_log_dto_LOGTYPE_e log_type,
    char *business_id
);

void log_dto_free(log_dto_t *log_dto);

log_dto_t *log_dto_parseFromJSON(cJSON *log_dtoJSON);

cJSON *log_dto_convertToJSON(log_dto_t *log_dto);

#endif /* _log_dto_H_ */

