/*
 * signed_document_create_dto.h
 *
 * 
 */

#ifndef _signed_document_create_dto_H_
#define _signed_document_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct signed_document_create_dto_t signed_document_create_dto_t;


// Enum DOCUMENTSTANDARD for signed_document_create_dto

typedef enum  { trustservice_signed_document_create_dto_DOCUMENTSTANDARD_NULL = 0, trustservice_signed_document_create_dto_DOCUMENTSTANDARD_None, trustservice_signed_document_create_dto_DOCUMENTSTANDARD_Ubl, trustservice_signed_document_create_dto_DOCUMENTSTANDARD_Pdf, trustservice_signed_document_create_dto_DOCUMENTSTANDARD_Xml, trustservice_signed_document_create_dto_DOCUMENTSTANDARD_Email, trustservice_signed_document_create_dto_DOCUMENTSTANDARD_Json, trustservice_signed_document_create_dto_DOCUMENTSTANDARD_Other } trustservice_signed_document_create_dto_DOCUMENTSTANDARD_e;

char* signed_document_create_dto_document_standard_ToString(trustservice_signed_document_create_dto_DOCUMENTSTANDARD_e document_standard);

trustservice_signed_document_create_dto_DOCUMENTSTANDARD_e signed_document_create_dto_document_standard_FromString(char* document_standard);

// Enum TRUSTDOCUMENTTYPE for signed_document_create_dto

typedef enum  { trustservice_signed_document_create_dto_TRUSTDOCUMENTTYPE_NULL = 0, trustservice_signed_document_create_dto_TRUSTDOCUMENTTYPE_Unknown, trustservice_signed_document_create_dto_TRUSTDOCUMENTTYPE_Invoice, trustservice_signed_document_create_dto_TRUSTDOCUMENTTYPE_CreditNote, trustservice_signed_document_create_dto_TRUSTDOCUMENTTYPE_DebitNote, trustservice_signed_document_create_dto_TRUSTDOCUMENTTYPE_Contract, trustservice_signed_document_create_dto_TRUSTDOCUMENTTYPE_Certificate, trustservice_signed_document_create_dto_TRUSTDOCUMENTTYPE_Email, trustservice_signed_document_create_dto_TRUSTDOCUMENTTYPE_AuthorityResponse, trustservice_signed_document_create_dto_TRUSTDOCUMENTTYPE_Other } trustservice_signed_document_create_dto_TRUSTDOCUMENTTYPE_e;

char* signed_document_create_dto_trust_document_type_ToString(trustservice_signed_document_create_dto_TRUSTDOCUMENTTYPE_e trust_document_type);

trustservice_signed_document_create_dto_TRUSTDOCUMENTTYPE_e signed_document_create_dto_trust_document_type_FromString(char* trust_document_type);



typedef struct signed_document_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *url; // string
    char *type; // string
    char *title; // string
    char *content_type; // string
    char *contact_id; // string
    trustservice_signed_document_create_dto_DOCUMENTSTANDARD_e document_standard; //enum
    trustservice_signed_document_create_dto_TRUSTDOCUMENTTYPE_e trust_document_type; //enum
    char *correlation_id; // string
    char *external_reference; // string

} signed_document_create_dto_t;

signed_document_create_dto_t *signed_document_create_dto_create(
    char *id,
    char *timestamp,
    char *url,
    char *type,
    char *title,
    char *content_type,
    char *contact_id,
    trustservice_signed_document_create_dto_DOCUMENTSTANDARD_e document_standard,
    trustservice_signed_document_create_dto_TRUSTDOCUMENTTYPE_e trust_document_type,
    char *correlation_id,
    char *external_reference
);

void signed_document_create_dto_free(signed_document_create_dto_t *signed_document_create_dto);

signed_document_create_dto_t *signed_document_create_dto_parseFromJSON(cJSON *signed_document_create_dtoJSON);

cJSON *signed_document_create_dto_convertToJSON(signed_document_create_dto_t *signed_document_create_dto);

#endif /* _signed_document_create_dto_H_ */

