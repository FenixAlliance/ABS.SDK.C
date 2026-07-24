/*
 * signature_dto.h
 *
 * 
 */

#ifndef _signature_dto_H_
#define _signature_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct signature_dto_t signature_dto_t;


// Enum SIGNINGSTATUS for signature_dto

typedef enum  { trustservice_signature_dto_SIGNINGSTATUS_NULL = 0, trustservice_signature_dto_SIGNINGSTATUS_Unknown, trustservice_signature_dto_SIGNINGSTATUS_Draft, trustservice_signature_dto_SIGNINGSTATUS__Signed, trustservice_signature_dto_SIGNINGSTATUS_Failed, trustservice_signature_dto_SIGNINGSTATUS_Revoked } trustservice_signature_dto_SIGNINGSTATUS_e;

char* signature_dto_signing_status_ToString(trustservice_signature_dto_SIGNINGSTATUS_e signing_status);

trustservice_signature_dto_SIGNINGSTATUS_e signature_dto_signing_status_FromString(char* signing_status);

// Enum VERIFICATIONSTATUS for signature_dto

typedef enum  { trustservice_signature_dto_VERIFICATIONSTATUS_NULL = 0, trustservice_signature_dto_VERIFICATIONSTATUS_Unknown, trustservice_signature_dto_VERIFICATIONSTATUS_NotVerified, trustservice_signature_dto_VERIFICATIONSTATUS_Valid, trustservice_signature_dto_VERIFICATIONSTATUS_Invalid, trustservice_signature_dto_VERIFICATIONSTATUS_Expired } trustservice_signature_dto_VERIFICATIONSTATUS_e;

char* signature_dto_verification_status_ToString(trustservice_signature_dto_VERIFICATIONSTATUS_e verification_status);

trustservice_signature_dto_VERIFICATIONSTATUS_e signature_dto_verification_status_FromString(char* verification_status);

// Enum SIGNATUREFORMAT for signature_dto

typedef enum  { trustservice_signature_dto_SIGNATUREFORMAT_NULL = 0, trustservice_signature_dto_SIGNATUREFORMAT_Unknown, trustservice_signature_dto_SIGNATUREFORMAT_XAdES, trustservice_signature_dto_SIGNATUREFORMAT_PAdES, trustservice_signature_dto_SIGNATUREFORMAT_CAdES, trustservice_signature_dto_SIGNATUREFORMAT_SMIME, trustservice_signature_dto_SIGNATUREFORMAT_DetachedXmlDSig, trustservice_signature_dto_SIGNATUREFORMAT_Enveloped, trustservice_signature_dto_SIGNATUREFORMAT_Other } trustservice_signature_dto_SIGNATUREFORMAT_e;

char* signature_dto_signature_format_ToString(trustservice_signature_dto_SIGNATUREFORMAT_e signature_format);

trustservice_signature_dto_SIGNATUREFORMAT_e signature_dto_signature_format_FromString(char* signature_format);



typedef struct signature_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *type; // string
    char *validation_code; // string
    char *signature_image; // string
    char *contact_id; // string
    char *tenant_id; // string
    char *user_id; // string
    char *enrollment_id; // string
    char *signing_profile_id; // string
    char *signing_certificate_id; // string
    char *signed_document_id; // string
    char *signed_at_utc; //date time
    trustservice_signature_dto_SIGNINGSTATUS_e signing_status; //enum
    trustservice_signature_dto_VERIFICATIONSTATUS_e verification_status; //enum
    trustservice_signature_dto_SIGNATUREFORMAT_e signature_format; //enum
    char *digest_algorithm; // string
    char *signature_algorithm; // string
    char *canonicalization_algorithm; // string
    char *policy_identifier; // string
    char *correlation_id; // string
    char *digest_value; // string
    char *signature_value_hash; // string
    char *contact_name; // string
    char *signing_profile_display_name; // string
    char *signing_certificate_title; // string
    char *signed_document_title; // string

} signature_dto_t;

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
);

void signature_dto_free(signature_dto_t *signature_dto);

signature_dto_t *signature_dto_parseFromJSON(cJSON *signature_dtoJSON);

cJSON *signature_dto_convertToJSON(signature_dto_t *signature_dto);

#endif /* _signature_dto_H_ */

