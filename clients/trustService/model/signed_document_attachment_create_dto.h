/*
 * signed_document_attachment_create_dto.h
 *
 * 
 */

#ifndef _signed_document_attachment_create_dto_H_
#define _signed_document_attachment_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct signed_document_attachment_create_dto_t signed_document_attachment_create_dto_t;


// Enum ATTACHMENTROLE for signed_document_attachment_create_dto

typedef enum  { trustservice_signed_document_attachment_create_dto_ATTACHMENTROLE_NULL = 0, trustservice_signed_document_attachment_create_dto_ATTACHMENTROLE_Unknown, trustservice_signed_document_attachment_create_dto_ATTACHMENTROLE_Source, trustservice_signed_document_attachment_create_dto_ATTACHMENTROLE_SupportingEvidence, trustservice_signed_document_attachment_create_dto_ATTACHMENTROLE_AuthorityResponse, trustservice_signed_document_attachment_create_dto_ATTACHMENTROLE_HumanReadablePdf, trustservice_signed_document_attachment_create_dto_ATTACHMENTROLE_XmlPayload, trustservice_signed_document_attachment_create_dto_ATTACHMENTROLE_ValidationReport, trustservice_signed_document_attachment_create_dto_ATTACHMENTROLE_Other } trustservice_signed_document_attachment_create_dto_ATTACHMENTROLE_e;

char* signed_document_attachment_create_dto_attachment_role_ToString(trustservice_signed_document_attachment_create_dto_ATTACHMENTROLE_e attachment_role);

trustservice_signed_document_attachment_create_dto_ATTACHMENTROLE_e signed_document_attachment_create_dto_attachment_role_FromString(char* attachment_role);



typedef struct signed_document_attachment_create_dto_t {
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
    trustservice_signed_document_attachment_create_dto_ATTACHMENTROLE_e attachment_role; //enum

} signed_document_attachment_create_dto_t;

signed_document_attachment_create_dto_t *signed_document_attachment_create_dto_create(
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
    trustservice_signed_document_attachment_create_dto_ATTACHMENTROLE_e attachment_role
);

void signed_document_attachment_create_dto_free(signed_document_attachment_create_dto_t *signed_document_attachment_create_dto);

signed_document_attachment_create_dto_t *signed_document_attachment_create_dto_parseFromJSON(cJSON *signed_document_attachment_create_dtoJSON);

cJSON *signed_document_attachment_create_dto_convertToJSON(signed_document_attachment_create_dto_t *signed_document_attachment_create_dto);

#endif /* _signed_document_attachment_create_dto_H_ */

