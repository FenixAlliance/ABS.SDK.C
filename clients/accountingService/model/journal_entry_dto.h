/*
 * journal_entry_dto.h
 *
 * 
 */

#ifndef _journal_entry_dto_H_
#define _journal_entry_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct journal_entry_dto_t journal_entry_dto_t;

#include "money.h"



typedef struct journal_entry_dto_t {
    char *id; // string
    char *timestamp; //date time
    int group; //boolean
    int opening; //boolean
    char *description; // string
    char *date; //date time
    char *forex_rates_snapshot; // string
    double forex_rate; //numeric
    double credit; //numeric
    double debit; //numeric
    char *currency_id; // string
    char *tenant_id; // string
    char *enrollment_id; // string
    char *journal_id; // string
    char *journal_name; // string
    char *journal_code; // string
    char *credit_account_id; // string
    char *credit_account_name; // string
    char *debit_account_id; // string
    char *debit_account_name; // string
    char *invoice_code; // string
    char *parent_journal_entry_id; // string
    struct money_t *credit_amount; //model
    struct money_t *debit_amount; //model

} journal_entry_dto_t;

journal_entry_dto_t *journal_entry_dto_create(
    char *id,
    char *timestamp,
    int group,
    int opening,
    char *description,
    char *date,
    char *forex_rates_snapshot,
    double forex_rate,
    double credit,
    double debit,
    char *currency_id,
    char *tenant_id,
    char *enrollment_id,
    char *journal_id,
    char *journal_name,
    char *journal_code,
    char *credit_account_id,
    char *credit_account_name,
    char *debit_account_id,
    char *debit_account_name,
    char *invoice_code,
    char *parent_journal_entry_id,
    money_t *credit_amount,
    money_t *debit_amount
);

void journal_entry_dto_free(journal_entry_dto_t *journal_entry_dto);

journal_entry_dto_t *journal_entry_dto_parseFromJSON(cJSON *journal_entry_dtoJSON);

cJSON *journal_entry_dto_convertToJSON(journal_entry_dto_t *journal_entry_dto);

#endif /* _journal_entry_dto_H_ */

