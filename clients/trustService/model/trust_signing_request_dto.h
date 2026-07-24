/*
 * trust_signing_request_dto.h
 *
 * 
 */

#ifndef _trust_signing_request_dto_H_
#define _trust_signing_request_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct trust_signing_request_dto_t trust_signing_request_dto_t;


// Enum REQUESTEDFORMAT for trust_signing_request_dto

typedef enum  { trustservice_trust_signing_request_dto_REQUESTEDFORMAT_NULL = 0, trustservice_trust_signing_request_dto_REQUESTEDFORMAT_Unknown, trustservice_trust_signing_request_dto_REQUESTEDFORMAT_XAdES, trustservice_trust_signing_request_dto_REQUESTEDFORMAT_PAdES, trustservice_trust_signing_request_dto_REQUESTEDFORMAT_CAdES, trustservice_trust_signing_request_dto_REQUESTEDFORMAT_SMIME, trustservice_trust_signing_request_dto_REQUESTEDFORMAT_DetachedXmlDSig, trustservice_trust_signing_request_dto_REQUESTEDFORMAT_Enveloped, trustservice_trust_signing_request_dto_REQUESTEDFORMAT_Other } trustservice_trust_signing_request_dto_REQUESTEDFORMAT_e;

char* trust_signing_request_dto_requested_format_ToString(trustservice_trust_signing_request_dto_REQUESTEDFORMAT_e requested_format);

trustservice_trust_signing_request_dto_REQUESTEDFORMAT_e trust_signing_request_dto_requested_format_FromString(char* requested_format);

// Enum REQUESTEDPURPOSE for trust_signing_request_dto

typedef enum  { trustservice_trust_signing_request_dto_REQUESTEDPURPOSE_NULL = 0, trustservice_trust_signing_request_dto_REQUESTEDPURPOSE_Unknown, trustservice_trust_signing_request_dto_REQUESTEDPURPOSE_RegulatorySubmission, trustservice_trust_signing_request_dto_REQUESTEDPURPOSE_ContractExecution, trustservice_trust_signing_request_dto_REQUESTEDPURPOSE_EmailSigning, trustservice_trust_signing_request_dto_REQUESTEDPURPOSE_InternalApproval, trustservice_trust_signing_request_dto_REQUESTEDPURPOSE_EvidenceSealing, trustservice_trust_signing_request_dto_REQUESTEDPURPOSE_AgentCredential, trustservice_trust_signing_request_dto_REQUESTEDPURPOSE_Other } trustservice_trust_signing_request_dto_REQUESTEDPURPOSE_e;

char* trust_signing_request_dto_requested_purpose_ToString(trustservice_trust_signing_request_dto_REQUESTEDPURPOSE_e requested_purpose);

trustservice_trust_signing_request_dto_REQUESTEDPURPOSE_e trust_signing_request_dto_requested_purpose_FromString(char* requested_purpose);



typedef struct trust_signing_request_dto_t {
    char *signed_document_id; // string
    char *signing_profile_id; // string
    char *signing_certificate_id; // string
    char *contact_id; // string
    trustservice_trust_signing_request_dto_REQUESTEDFORMAT_e requested_format; //enum
    trustservice_trust_signing_request_dto_REQUESTEDPURPOSE_e requested_purpose; //enum
    char *correlation_id; // string
    char *source_storage_object_id; // string
    char *source_sha256; // string
    char *external_reference; // string
    int dry_run; //boolean

} trust_signing_request_dto_t;

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
);

void trust_signing_request_dto_free(trust_signing_request_dto_t *trust_signing_request_dto);

trust_signing_request_dto_t *trust_signing_request_dto_parseFromJSON(cJSON *trust_signing_request_dtoJSON);

cJSON *trust_signing_request_dto_convertToJSON(trust_signing_request_dto_t *trust_signing_request_dto);

#endif /* _trust_signing_request_dto_H_ */

