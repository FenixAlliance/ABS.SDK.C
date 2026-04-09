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




typedef struct journal_entry_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    int group; //boolean
    int opening; //boolean
    char *description; // string
    char *date; //date time
    double debit; //numeric
    double credit; //numeric
    char *journal_id; // string
    char *currency_id; // string
    char *debit_account_id; // string
    char *credit_account_id; // string
    char *parent_journal_entry_id; // string
    char *invoice_code; // string

} journal_entry_create_dto_t;

journal_entry_create_dto_t *journal_entry_create_dto_create(
    char *id,
    char *timestamp,
    int group,
    int opening,
    char *description,
    char *date,
    double debit,
    double credit,
    char *journal_id,
    char *currency_id,
    char *debit_account_id,
    char *credit_account_id,
    char *parent_journal_entry_id,
    char *invoice_code
);

void journal_entry_create_dto_free(journal_entry_create_dto_t *journal_entry_create_dto);

journal_entry_create_dto_t *journal_entry_create_dto_parseFromJSON(cJSON *journal_entry_create_dtoJSON);

cJSON *journal_entry_create_dto_convertToJSON(journal_entry_create_dto_t *journal_entry_create_dto);

#endif /* _journal_entry_create_dto_H_ */

