/*
 * signed_document_dto.h
 *
 * 
 */

#ifndef _signed_document_dto_H_
#define _signed_document_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct signed_document_dto_t signed_document_dto_t;


// Enum DOCUMENTSTANDARD for signed_document_dto

typedef enum  { trustservice_signed_document_dto_DOCUMENTSTANDARD_NULL = 0, trustservice_signed_document_dto_DOCUMENTSTANDARD_None, trustservice_signed_document_dto_DOCUMENTSTANDARD_Ubl, trustservice_signed_document_dto_DOCUMENTSTANDARD_Pdf, trustservice_signed_document_dto_DOCUMENTSTANDARD_Xml, trustservice_signed_document_dto_DOCUMENTSTANDARD_Email, trustservice_signed_document_dto_DOCUMENTSTANDARD_Json, trustservice_signed_document_dto_DOCUMENTSTANDARD_Other } trustservice_signed_document_dto_DOCUMENTSTANDARD_e;

char* signed_document_dto_document_standard_ToString(trustservice_signed_document_dto_DOCUMENTSTANDARD_e document_standard);

trustservice_signed_document_dto_DOCUMENTSTANDARD_e signed_document_dto_document_standard_FromString(char* document_standard);

// Enum TRUSTDOCUMENTTYPE for signed_document_dto

typedef enum  { trustservice_signed_document_dto_TRUSTDOCUMENTTYPE_NULL = 0, trustservice_signed_document_dto_TRUSTDOCUMENTTYPE_Unknown, trustservice_signed_document_dto_TRUSTDOCUMENTTYPE_Invoice, trustservice_signed_document_dto_TRUSTDOCUMENTTYPE_CreditNote, trustservice_signed_document_dto_TRUSTDOCUMENTTYPE_DebitNote, trustservice_signed_document_dto_TRUSTDOCUMENTTYPE_Contract, trustservice_signed_document_dto_TRUSTDOCUMENTTYPE_Certificate, trustservice_signed_document_dto_TRUSTDOCUMENTTYPE_Email, trustservice_signed_document_dto_TRUSTDOCUMENTTYPE_AuthorityResponse, trustservice_signed_document_dto_TRUSTDOCUMENTTYPE_Other } trustservice_signed_document_dto_TRUSTDOCUMENTTYPE_e;

char* signed_document_dto_trust_document_type_ToString(trustservice_signed_document_dto_TRUSTDOCUMENTTYPE_e trust_document_type);

trustservice_signed_document_dto_TRUSTDOCUMENTTYPE_e signed_document_dto_trust_document_type_FromString(char* trust_document_type);

// Enum SIGNINGSTATUS for signed_document_dto

typedef enum  { trustservice_signed_document_dto_SIGNINGSTATUS_NULL = 0, trustservice_signed_document_dto_SIGNINGSTATUS_Unknown, trustservice_signed_document_dto_SIGNINGSTATUS_Draft, trustservice_signed_document_dto_SIGNINGSTATUS__Signed, trustservice_signed_document_dto_SIGNINGSTATUS_Failed, trustservice_signed_document_dto_SIGNINGSTATUS_Revoked } trustservice_signed_document_dto_SIGNINGSTATUS_e;

char* signed_document_dto_signing_status_ToString(trustservice_signed_document_dto_SIGNINGSTATUS_e signing_status);

trustservice_signed_document_dto_SIGNINGSTATUS_e signed_document_dto_signing_status_FromString(char* signing_status);

// Enum VERIFICATIONSTATUS for signed_document_dto

typedef enum  { trustservice_signed_document_dto_VERIFICATIONSTATUS_NULL = 0, trustservice_signed_document_dto_VERIFICATIONSTATUS_Unknown, trustservice_signed_document_dto_VERIFICATIONSTATUS_NotVerified, trustservice_signed_document_dto_VERIFICATIONSTATUS_Valid, trustservice_signed_document_dto_VERIFICATIONSTATUS_Invalid, trustservice_signed_document_dto_VERIFICATIONSTATUS_Expired } trustservice_signed_document_dto_VERIFICATIONSTATUS_e;

char* signed_document_dto_verification_status_ToString(trustservice_signed_document_dto_VERIFICATIONSTATUS_e verification_status);

trustservice_signed_document_dto_VERIFICATIONSTATUS_e signed_document_dto_verification_status_FromString(char* verification_status);

// Enum LOCKSTATE for signed_document_dto

typedef enum  { trustservice_signed_document_dto_LOCKSTATE_NULL = 0, trustservice_signed_document_dto_LOCKSTATE_Draft, trustservice_signed_document_dto_LOCKSTATE_Editable, trustservice_signed_document_dto_LOCKSTATE_FrozenForSignature, trustservice_signed_document_dto_LOCKSTATE_SigningInProgress, trustservice_signed_document_dto_LOCKSTATE_Sealed, trustservice_signed_document_dto_LOCKSTATE_Voided, trustservice_signed_document_dto_LOCKSTATE_Superseded } trustservice_signed_document_dto_LOCKSTATE_e;

char* signed_document_dto_lock_state_ToString(trustservice_signed_document_dto_LOCKSTATE_e lock_state);

trustservice_signed_document_dto_LOCKSTATE_e signed_document_dto_lock_state_FromString(char* lock_state);



typedef struct signed_document_dto_t {
    char *id; // string
    char *timestamp; //date time
    int _signed; //boolean
    char *url; // string
    char *type; // string
    char *title; // string
    char *content_type; // string
    long file_length_in_bits; //numeric
    char *tenant_id; // string
    char *contact_id; // string
    char *user_id; // string
    char *enrollment_id; // string
    trustservice_signed_document_dto_DOCUMENTSTANDARD_e document_standard; //enum
    trustservice_signed_document_dto_TRUSTDOCUMENTTYPE_e trust_document_type; //enum
    trustservice_signed_document_dto_SIGNINGSTATUS_e signing_status; //enum
    trustservice_signed_document_dto_VERIFICATIONSTATUS_e verification_status; //enum
    char *signed_at_utc; //date time
    char *correlation_id; // string
    char *external_reference; // string
    char *source_storage_object_id; // string
    char *source_sha256; // string
    char *signed_storage_object_id; // string
    char *signed_sha256; // string
    char *evidence_storage_object_id; // string
    char *evidence_sha256; // string
    char *primary_file_upload_id; // string
    char *frozen_source_file_upload_id; // string
    char *signed_file_upload_id; // string
    char *evidence_file_upload_id; // string
    trustservice_signed_document_dto_LOCKSTATE_e lock_state; //enum
    char *graphical_representation_file_upload_id; // string
    char *graphical_representation_storage_object_id; // string
    char *graphical_representation_sha256; // string
    char *graphical_representation_content_type; // string
    char *graphical_representation_generated_at_utc; //date time
    char *contact_name; // string

} signed_document_dto_t;

signed_document_dto_t *signed_document_dto_create(
    char *id,
    char *timestamp,
    int _signed,
    char *url,
    char *type,
    char *title,
    char *content_type,
    long file_length_in_bits,
    char *tenant_id,
    char *contact_id,
    char *user_id,
    char *enrollment_id,
    trustservice_signed_document_dto_DOCUMENTSTANDARD_e document_standard,
    trustservice_signed_document_dto_TRUSTDOCUMENTTYPE_e trust_document_type,
    trustservice_signed_document_dto_SIGNINGSTATUS_e signing_status,
    trustservice_signed_document_dto_VERIFICATIONSTATUS_e verification_status,
    char *signed_at_utc,
    char *correlation_id,
    char *external_reference,
    char *source_storage_object_id,
    char *source_sha256,
    char *signed_storage_object_id,
    char *signed_sha256,
    char *evidence_storage_object_id,
    char *evidence_sha256,
    char *primary_file_upload_id,
    char *frozen_source_file_upload_id,
    char *signed_file_upload_id,
    char *evidence_file_upload_id,
    trustservice_signed_document_dto_LOCKSTATE_e lock_state,
    char *graphical_representation_file_upload_id,
    char *graphical_representation_storage_object_id,
    char *graphical_representation_sha256,
    char *graphical_representation_content_type,
    char *graphical_representation_generated_at_utc,
    char *contact_name
);

void signed_document_dto_free(signed_document_dto_t *signed_document_dto);

signed_document_dto_t *signed_document_dto_parseFromJSON(cJSON *signed_document_dtoJSON);

cJSON *signed_document_dto_convertToJSON(signed_document_dto_t *signed_document_dto);

#endif /* _signed_document_dto_H_ */

