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

#include "accounting_entry_dto.h"
#include "money.h"

// Enum ENTRYTYPE for journal_entry_dto

typedef enum  { accountingservice_journal_entry_dto_ENTRYTYPE_NULL = 0, accountingservice_journal_entry_dto_ENTRYTYPE_Simple, accountingservice_journal_entry_dto_ENTRYTYPE_Compound, accountingservice_journal_entry_dto_ENTRYTYPE_Adjusting, accountingservice_journal_entry_dto_ENTRYTYPE_Reversing } accountingservice_journal_entry_dto_ENTRYTYPE_e;

char* journal_entry_dto_entry_type_ToString(accountingservice_journal_entry_dto_ENTRYTYPE_e entry_type);

accountingservice_journal_entry_dto_ENTRYTYPE_e journal_entry_dto_entry_type_FromString(char* entry_type);

// Enum STATUS for journal_entry_dto

typedef enum  { accountingservice_journal_entry_dto_STATUS_NULL = 0, accountingservice_journal_entry_dto_STATUS_Draft, accountingservice_journal_entry_dto_STATUS_Posted, accountingservice_journal_entry_dto_STATUS_Reversed, accountingservice_journal_entry_dto_STATUS_Voided } accountingservice_journal_entry_dto_STATUS_e;

char* journal_entry_dto_status_ToString(accountingservice_journal_entry_dto_STATUS_e status);

accountingservice_journal_entry_dto_STATUS_e journal_entry_dto_status_FromString(char* status);



typedef struct journal_entry_dto_t {
    char *id; // string
    char *tenant_id; // string
    char *enrollment_id; // string
    char *journal_id; // string
    char *journal_name; // string
    char *journal_code; // string
    char *fiscal_period_id; // string
    char *financial_book_id; // string
    char *description; // string
    accountingservice_journal_entry_dto_ENTRYTYPE_e entry_type; //enum
    accountingservice_journal_entry_dto_STATUS_e status; //enum
    char *posting_date; //date time
    int is_opening_balance; //boolean
    char *transaction_currency_id; // string
    char *source_document_type; // string
    char *source_document_id; // string
    char *idempotency_key; // string
    char *reversal_of_journal_entry_id; // string
    char *posted_by; // string
    double forex_rate; //numeric
    char *forex_rates_snapshot; // string
    char *timestamp; //date time
    double debit_in_usd; //numeric
    double credit_in_usd; //numeric
    list_t *accounting_entries; //nonprimitive container
    double total_debit; //numeric
    double total_credit; //numeric
    struct money_t *total_debit_amount; //model
    struct money_t *total_credit_amount; //model

} journal_entry_dto_t;

journal_entry_dto_t *journal_entry_dto_create(
    char *id,
    char *tenant_id,
    char *enrollment_id,
    char *journal_id,
    char *journal_name,
    char *journal_code,
    char *fiscal_period_id,
    char *financial_book_id,
    char *description,
    accountingservice_journal_entry_dto_ENTRYTYPE_e entry_type,
    accountingservice_journal_entry_dto_STATUS_e status,
    char *posting_date,
    int is_opening_balance,
    char *transaction_currency_id,
    char *source_document_type,
    char *source_document_id,
    char *idempotency_key,
    char *reversal_of_journal_entry_id,
    char *posted_by,
    double forex_rate,
    char *forex_rates_snapshot,
    char *timestamp,
    double debit_in_usd,
    double credit_in_usd,
    list_t *accounting_entries,
    double total_debit,
    double total_credit,
    money_t *total_debit_amount,
    money_t *total_credit_amount
);

void journal_entry_dto_free(journal_entry_dto_t *journal_entry_dto);

journal_entry_dto_t *journal_entry_dto_parseFromJSON(cJSON *journal_entry_dtoJSON);

cJSON *journal_entry_dto_convertToJSON(journal_entry_dto_t *journal_entry_dto);

#endif /* _journal_entry_dto_H_ */

