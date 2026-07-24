/*
 * trust_signing_readiness_dto.h
 *
 * 
 */

#ifndef _trust_signing_readiness_dto_H_
#define _trust_signing_readiness_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct trust_signing_readiness_dto_t trust_signing_readiness_dto_t;


// Enum EXPECTEDSIGNATUREFORMAT for trust_signing_readiness_dto

typedef enum  { trustservice_trust_signing_readiness_dto_EXPECTEDSIGNATUREFORMAT_NULL = 0, trustservice_trust_signing_readiness_dto_EXPECTEDSIGNATUREFORMAT_Unknown, trustservice_trust_signing_readiness_dto_EXPECTEDSIGNATUREFORMAT_XAdES, trustservice_trust_signing_readiness_dto_EXPECTEDSIGNATUREFORMAT_PAdES, trustservice_trust_signing_readiness_dto_EXPECTEDSIGNATUREFORMAT_CAdES, trustservice_trust_signing_readiness_dto_EXPECTEDSIGNATUREFORMAT_SMIME, trustservice_trust_signing_readiness_dto_EXPECTEDSIGNATUREFORMAT_DetachedXmlDSig, trustservice_trust_signing_readiness_dto_EXPECTEDSIGNATUREFORMAT_Enveloped, trustservice_trust_signing_readiness_dto_EXPECTEDSIGNATUREFORMAT_Other } trustservice_trust_signing_readiness_dto_EXPECTEDSIGNATUREFORMAT_e;

char* trust_signing_readiness_dto_expected_signature_format_ToString(trustservice_trust_signing_readiness_dto_EXPECTEDSIGNATUREFORMAT_e expected_signature_format);

trustservice_trust_signing_readiness_dto_EXPECTEDSIGNATUREFORMAT_e trust_signing_readiness_dto_expected_signature_format_FromString(char* expected_signature_format);

// Enum EXPECTEDSIGNATUREPURPOSE for trust_signing_readiness_dto

typedef enum  { trustservice_trust_signing_readiness_dto_EXPECTEDSIGNATUREPURPOSE_NULL = 0, trustservice_trust_signing_readiness_dto_EXPECTEDSIGNATUREPURPOSE_Unknown, trustservice_trust_signing_readiness_dto_EXPECTEDSIGNATUREPURPOSE_RegulatorySubmission, trustservice_trust_signing_readiness_dto_EXPECTEDSIGNATUREPURPOSE_ContractExecution, trustservice_trust_signing_readiness_dto_EXPECTEDSIGNATUREPURPOSE_EmailSigning, trustservice_trust_signing_readiness_dto_EXPECTEDSIGNATUREPURPOSE_InternalApproval, trustservice_trust_signing_readiness_dto_EXPECTEDSIGNATUREPURPOSE_EvidenceSealing, trustservice_trust_signing_readiness_dto_EXPECTEDSIGNATUREPURPOSE_AgentCredential, trustservice_trust_signing_readiness_dto_EXPECTEDSIGNATUREPURPOSE_Other } trustservice_trust_signing_readiness_dto_EXPECTEDSIGNATUREPURPOSE_e;

char* trust_signing_readiness_dto_expected_signature_purpose_ToString(trustservice_trust_signing_readiness_dto_EXPECTEDSIGNATUREPURPOSE_e expected_signature_purpose);

trustservice_trust_signing_readiness_dto_EXPECTEDSIGNATUREPURPOSE_e trust_signing_readiness_dto_expected_signature_purpose_FromString(char* expected_signature_purpose);



typedef struct trust_signing_readiness_dto_t {
    int can_proceed; //boolean
    list_t *blocking_reasons; //primitive container
    list_t *warnings; //primitive container
    char *resolved_document_title; // string
    char *resolved_profile_display_name; // string
    char *resolved_certificate_title; // string
    trustservice_trust_signing_readiness_dto_EXPECTEDSIGNATUREFORMAT_e expected_signature_format; //enum
    trustservice_trust_signing_readiness_dto_EXPECTEDSIGNATUREPURPOSE_e expected_signature_purpose; //enum
    char *expected_digest_algorithm; // string
    char *expected_signature_algorithm; // string
    char *expected_canonicalization_algorithm; // string
    char *policy_identifier; // string
    char *authority_profile; // string
    int requires_custody_provider; //boolean
    int requires_source_artifact; //boolean
    int requires_certificate; //boolean
    char *correlation_id; // string

} trust_signing_readiness_dto_t;

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
);

void trust_signing_readiness_dto_free(trust_signing_readiness_dto_t *trust_signing_readiness_dto);

trust_signing_readiness_dto_t *trust_signing_readiness_dto_parseFromJSON(cJSON *trust_signing_readiness_dtoJSON);

cJSON *trust_signing_readiness_dto_convertToJSON(trust_signing_readiness_dto_t *trust_signing_readiness_dto);

#endif /* _trust_signing_readiness_dto_H_ */

