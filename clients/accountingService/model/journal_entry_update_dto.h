/*
 * journal_entry_update_dto.h
 *
 * 
 */

#ifndef _journal_entry_update_dto_H_
#define _journal_entry_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct journal_entry_update_dto_t journal_entry_update_dto_t;




typedef struct journal_entry_update_dto_t {
    char *fiscal_period_id; // string
    char *transaction_currency_id; // string
    char *description; // string
    char *source_document_type; // string
    char *source_document_id; // string
    int is_opening_balance; //boolean

} journal_entry_update_dto_t;

journal_entry_update_dto_t *journal_entry_update_dto_create(
    char *fiscal_period_id,
    char *transaction_currency_id,
    char *description,
    char *source_document_type,
    char *source_document_id,
    int is_opening_balance
);

void journal_entry_update_dto_free(journal_entry_update_dto_t *journal_entry_update_dto);

journal_entry_update_dto_t *journal_entry_update_dto_parseFromJSON(cJSON *journal_entry_update_dtoJSON);

cJSON *journal_entry_update_dto_convertToJSON(journal_entry_update_dto_t *journal_entry_update_dto);

#endif /* _journal_entry_update_dto_H_ */

