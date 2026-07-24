/*
 * signed_document_attachment_dto.h
 *
 * 
 */

#ifndef _signed_document_attachment_dto_H_
#define _signed_document_attachment_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct signed_document_attachment_dto_t signed_document_attachment_dto_t;


// Enum SCANSTATUS for signed_document_attachment_dto

typedef enum  { trustservice_signed_document_attachment_dto_SCANSTATUS_NULL = 0, trustservice_signed_document_attachment_dto_SCANSTATUS_NotRequired, trustservice_signed_document_attachment_dto_SCANSTATUS_Pending, trustservice_signed_document_attachment_dto_SCANSTATUS_Clean, trustservice_signed_document_attachment_dto_SCANSTATUS_Infected, trustservice_signed_document_attachment_dto_SCANSTATUS_Failed, trustservice_signed_document_attachment_dto_SCANSTATUS_Quarantined } trustservice_signed_document_attachment_dto_SCANSTATUS_e;

char* signed_document_attachment_dto_scan_status_ToString(trustservice_signed_document_attachment_dto_SCANSTATUS_e scan_status);

trustservice_signed_document_attachment_dto_SCANSTATUS_e signed_document_attachment_dto_scan_status_FromString(char* scan_status);

// Enum MUTABILITY for signed_document_attachment_dto

typedef enum  { trustservice_signed_document_attachment_dto_MUTABILITY_NULL = 0, trustservice_signed_document_attachment_dto_MUTABILITY_Editable, trustservice_signed_document_attachment_dto_MUTABILITY_Managed, trustservice_signed_document_attachment_dto_MUTABILITY_SealedEvidence } trustservice_signed_document_attachment_dto_MUTABILITY_e;

char* signed_document_attachment_dto_mutability_ToString(trustservice_signed_document_attachment_dto_MUTABILITY_e mutability);

trustservice_signed_document_attachment_dto_MUTABILITY_e signed_document_attachment_dto_mutability_FromString(char* mutability);

// Enum ATTACHMENTROLE for signed_document_attachment_dto

typedef enum  { trustservice_signed_document_attachment_dto_ATTACHMENTROLE_NULL = 0, trustservice_signed_document_attachment_dto_ATTACHMENTROLE_Unknown, trustservice_signed_document_attachment_dto_ATTACHMENTROLE_Source, trustservice_signed_document_attachment_dto_ATTACHMENTROLE_SupportingEvidence, trustservice_signed_document_attachment_dto_ATTACHMENTROLE_AuthorityResponse, trustservice_signed_document_attachment_dto_ATTACHMENTROLE_HumanReadablePdf, trustservice_signed_document_attachment_dto_ATTACHMENTROLE_XmlPayload, trustservice_signed_document_attachment_dto_ATTACHMENTROLE_ValidationReport, trustservice_signed_document_attachment_dto_ATTACHMENTROLE_Other } trustservice_signed_document_attachment_dto_ATTACHMENTROLE_e;

char* signed_document_attachment_dto_attachment_role_ToString(trustservice_signed_document_attachment_dto_ATTACHMENTROLE_e attachment_role);

trustservice_signed_document_attachment_dto_ATTACHMENTROLE_e signed_document_attachment_dto_attachment_role_FromString(char* attachment_role);



typedef struct signed_document_attachment_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *signed_document_id; // string
    char *title; // string
    char *file_name; // string
    char *content_type; // string
    long file_length; //numeric
    char *hash; // string
    char *file_upload_url; // string
    char *storage_key; // string
    char *storage_provider_key; // string
    trustservice_signed_document_attachment_dto_SCANSTATUS_e scan_status; //enum
    trustservice_signed_document_attachment_dto_MUTABILITY_e mutability; //enum
    trustservice_signed_document_attachment_dto_ATTACHMENTROLE_e attachment_role; //enum
    char *tenant_id; // string
    char *user_id; // string
    char *enrollment_id; // string
    char *signed_document_title; // string

} signed_document_attachment_dto_t;

signed_document_attachment_dto_t *signed_document_attachment_dto_create(
    char *id,
    char *timestamp,
    char *signed_document_id,
    char *title,
    char *file_name,
    char *content_type,
    long file_length,
    char *hash,
    char *file_upload_url,
    char *storage_key,
    char *storage_provider_key,
    trustservice_signed_document_attachment_dto_SCANSTATUS_e scan_status,
    trustservice_signed_document_attachment_dto_MUTABILITY_e mutability,
    trustservice_signed_document_attachment_dto_ATTACHMENTROLE_e attachment_role,
    char *tenant_id,
    char *user_id,
    char *enrollment_id,
    char *signed_document_title
);

void signed_document_attachment_dto_free(signed_document_attachment_dto_t *signed_document_attachment_dto);

signed_document_attachment_dto_t *signed_document_attachment_dto_parseFromJSON(cJSON *signed_document_attachment_dtoJSON);

cJSON *signed_document_attachment_dto_convertToJSON(signed_document_attachment_dto_t *signed_document_attachment_dto);

#endif /* _signed_document_attachment_dto_H_ */

