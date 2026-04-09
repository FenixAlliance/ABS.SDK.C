/*
 * invoice_enumeration_range_dto.h
 *
 * 
 */

#ifndef _invoice_enumeration_range_dto_H_
#define _invoice_enumeration_range_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct invoice_enumeration_range_dto_t invoice_enumeration_range_dto_t;


// Enum DOCUMENTTYPE for invoice_enumeration_range_dto

typedef enum  { accountingservice_invoice_enumeration_range_dto_DOCUMENTTYPE_NULL = 0, accountingservice_invoice_enumeration_range_dto_DOCUMENTTYPE_Standard, accountingservice_invoice_enumeration_range_dto_DOCUMENTTYPE_DebitNote, accountingservice_invoice_enumeration_range_dto_DOCUMENTTYPE_CreditNote } accountingservice_invoice_enumeration_range_dto_DOCUMENTTYPE_e;

char* invoice_enumeration_range_dto_document_type_ToString(accountingservice_invoice_enumeration_range_dto_DOCUMENTTYPE_e document_type);

accountingservice_invoice_enumeration_range_dto_DOCUMENTTYPE_e invoice_enumeration_range_dto_document_type_FromString(char* document_type);



typedef struct invoice_enumeration_range_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *prefix; // string
    char *suffix; // string
    char *identifier; // string
    char *qualified_name; // string
    long current_numeration; //numeric
    long numeration_to; //numeric
    long numeration_from; //numeric
    char *valid_from; //date time
    char *valid_to; //date time
    char *fiscal_authority_id; // string
    char *tenant_id; // string
    char *enrollment_id; // string
    accountingservice_invoice_enumeration_range_dto_DOCUMENTTYPE_e document_type; //enum

} invoice_enumeration_range_dto_t;

invoice_enumeration_range_dto_t *invoice_enumeration_range_dto_create(
    char *id,
    char *timestamp,
    char *prefix,
    char *suffix,
    char *identifier,
    char *qualified_name,
    long current_numeration,
    long numeration_to,
    long numeration_from,
    char *valid_from,
    char *valid_to,
    char *fiscal_authority_id,
    char *tenant_id,
    char *enrollment_id,
    accountingservice_invoice_enumeration_range_dto_DOCUMENTTYPE_e document_type
);

void invoice_enumeration_range_dto_free(invoice_enumeration_range_dto_t *invoice_enumeration_range_dto);

invoice_enumeration_range_dto_t *invoice_enumeration_range_dto_parseFromJSON(cJSON *invoice_enumeration_range_dtoJSON);

cJSON *invoice_enumeration_range_dto_convertToJSON(invoice_enumeration_range_dto_t *invoice_enumeration_range_dto);

#endif /* _invoice_enumeration_range_dto_H_ */

