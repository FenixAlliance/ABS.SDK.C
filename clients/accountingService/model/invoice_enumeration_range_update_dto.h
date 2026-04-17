/*
 * invoice_enumeration_range_update_dto.h
 *
 * 
 */

#ifndef _invoice_enumeration_range_update_dto_H_
#define _invoice_enumeration_range_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct invoice_enumeration_range_update_dto_t invoice_enumeration_range_update_dto_t;


// Enum DOCUMENTTYPE for invoice_enumeration_range_update_dto

typedef enum  { accountingservice_invoice_enumeration_range_update_dto_DOCUMENTTYPE_NULL = 0, accountingservice_invoice_enumeration_range_update_dto_DOCUMENTTYPE_Standard, accountingservice_invoice_enumeration_range_update_dto_DOCUMENTTYPE_DebitNote, accountingservice_invoice_enumeration_range_update_dto_DOCUMENTTYPE_CreditNote } accountingservice_invoice_enumeration_range_update_dto_DOCUMENTTYPE_e;

char* invoice_enumeration_range_update_dto_document_type_ToString(accountingservice_invoice_enumeration_range_update_dto_DOCUMENTTYPE_e document_type);

accountingservice_invoice_enumeration_range_update_dto_DOCUMENTTYPE_e invoice_enumeration_range_update_dto_document_type_FromString(char* document_type);



typedef struct invoice_enumeration_range_update_dto_t {
    char *prefix; // string
    char *suffix; // string
    char *identifier; // string
    char *qualified_name; // string
    long current_numeration; //numeric
    long numeration_from; //numeric
    long numeration_to; //numeric
    char *valid_from; //date time
    char *valid_to; //date time
    char *fiscal_authority_id; // string
    accountingservice_invoice_enumeration_range_update_dto_DOCUMENTTYPE_e document_type; //enum

} invoice_enumeration_range_update_dto_t;

invoice_enumeration_range_update_dto_t *invoice_enumeration_range_update_dto_create(
    char *prefix,
    char *suffix,
    char *identifier,
    char *qualified_name,
    long current_numeration,
    long numeration_from,
    long numeration_to,
    char *valid_from,
    char *valid_to,
    char *fiscal_authority_id,
    accountingservice_invoice_enumeration_range_update_dto_DOCUMENTTYPE_e document_type
);

void invoice_enumeration_range_update_dto_free(invoice_enumeration_range_update_dto_t *invoice_enumeration_range_update_dto);

invoice_enumeration_range_update_dto_t *invoice_enumeration_range_update_dto_parseFromJSON(cJSON *invoice_enumeration_range_update_dtoJSON);

cJSON *invoice_enumeration_range_update_dto_convertToJSON(invoice_enumeration_range_update_dto_t *invoice_enumeration_range_update_dto);

#endif /* _invoice_enumeration_range_update_dto_H_ */

