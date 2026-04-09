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
    int group; //boolean
    int opening; //boolean
    char *description; // string
    char *date; //date time
    double debit; //numeric
    double credit; //numeric
    char *journal_id; // string
    char *currency_id; // string
    char *invoice_code; // string
    char *debit_account_id; // string
    char *credit_account_id; // string
    char *parent_journal_entry_id; // string

} journal_entry_update_dto_t;

journal_entry_update_dto_t *journal_entry_update_dto_create(
    int group,
    int opening,
    char *description,
    char *date,
    double debit,
    double credit,
    char *journal_id,
    char *currency_id,
    char *invoice_code,
    char *debit_account_id,
    char *credit_account_id,
    char *parent_journal_entry_id
);

void journal_entry_update_dto_free(journal_entry_update_dto_t *journal_entry_update_dto);

journal_entry_update_dto_t *journal_entry_update_dto_parseFromJSON(cJSON *journal_entry_update_dtoJSON);

cJSON *journal_entry_update_dto_convertToJSON(journal_entry_update_dto_t *journal_entry_update_dto);

#endif /* _journal_entry_update_dto_H_ */

