/*
 * journal_entry_create_dto.h
 *
 * 
 */

#ifndef _journal_entry_create_dto_H_
#define _journal_entry_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct journal_entry_create_dto_t journal_entry_create_dto_t;

#include "accounting_entry_create_dto.h"



typedef struct journal_entry_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *journal_id; // string
    char *fiscal_period_id; // string
    char *transaction_currency_id; // string
    char *description; // string
    char *source_document_type; // string
    char *source_document_id; // string
    char *idempotency_key; // string
    int is_opening_balance; //boolean
    list_t *accounting_entries; //nonprimitive container

} journal_entry_create_dto_t;

journal_entry_create_dto_t *journal_entry_create_dto_create(
    char *id,
    char *timestamp,
    char *journal_id,
    char *fiscal_period_id,
    char *transaction_currency_id,
    char *description,
    char *source_document_type,
    char *source_document_id,
    char *idempotency_key,
    int is_opening_balance,
    list_t *accounting_entries
);

void journal_entry_create_dto_free(journal_entry_create_dto_t *journal_entry_create_dto);

journal_entry_create_dto_t *journal_entry_create_dto_parseFromJSON(cJSON *journal_entry_create_dtoJSON);

cJSON *journal_entry_create_dto_convertToJSON(journal_entry_create_dto_t *journal_entry_create_dto);

#endif /* _journal_entry_create_dto_H_ */

