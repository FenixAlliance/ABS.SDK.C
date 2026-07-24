#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "journal_entry_dto.h"


char* journal_entry_dto_entry_type_ToString(accountingservice_journal_entry_dto_ENTRYTYPE_e entry_type) {
    char* entry_typeArray[] =  { "NULL", "Simple", "Compound", "Adjusting", "Reversing" };
    return entry_typeArray[entry_type];
}

accountingservice_journal_entry_dto_ENTRYTYPE_e journal_entry_dto_entry_type_FromString(char* entry_type){
    int stringToReturn = 0;
    char *entry_typeArray[] =  { "NULL", "Simple", "Compound", "Adjusting", "Reversing" };
    size_t sizeofArray = sizeof(entry_typeArray) / sizeof(entry_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(entry_type, entry_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* journal_entry_dto_status_ToString(accountingservice_journal_entry_dto_STATUS_e status) {
    char* statusArray[] =  { "NULL", "Draft", "Posted", "Reversed", "Voided" };
    return statusArray[status];
}

accountingservice_journal_entry_dto_STATUS_e journal_entry_dto_status_FromString(char* status){
    int stringToReturn = 0;
    char *statusArray[] =  { "NULL", "Draft", "Posted", "Reversed", "Voided" };
    size_t sizeofArray = sizeof(statusArray) / sizeof(statusArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(status, statusArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

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
    ) {
    journal_entry_dto_t *journal_entry_dto_local_var = malloc(sizeof(journal_entry_dto_t));
    if (!journal_entry_dto_local_var) {
        return NULL;
    }
    journal_entry_dto_local_var->id = id;
    journal_entry_dto_local_var->tenant_id = tenant_id;
    journal_entry_dto_local_var->enrollment_id = enrollment_id;
    journal_entry_dto_local_var->journal_id = journal_id;
    journal_entry_dto_local_var->journal_name = journal_name;
    journal_entry_dto_local_var->journal_code = journal_code;
    journal_entry_dto_local_var->fiscal_period_id = fiscal_period_id;
    journal_entry_dto_local_var->financial_book_id = financial_book_id;
    journal_entry_dto_local_var->description = description;
    journal_entry_dto_local_var->entry_type = entry_type;
    journal_entry_dto_local_var->status = status;
    journal_entry_dto_local_var->posting_date = posting_date;
    journal_entry_dto_local_var->is_opening_balance = is_opening_balance;
    journal_entry_dto_local_var->transaction_currency_id = transaction_currency_id;
    journal_entry_dto_local_var->source_document_type = source_document_type;
    journal_entry_dto_local_var->source_document_id = source_document_id;
    journal_entry_dto_local_var->idempotency_key = idempotency_key;
    journal_entry_dto_local_var->reversal_of_journal_entry_id = reversal_of_journal_entry_id;
    journal_entry_dto_local_var->posted_by = posted_by;
    journal_entry_dto_local_var->forex_rate = forex_rate;
    journal_entry_dto_local_var->forex_rates_snapshot = forex_rates_snapshot;
    journal_entry_dto_local_var->timestamp = timestamp;
    journal_entry_dto_local_var->debit_in_usd = debit_in_usd;
    journal_entry_dto_local_var->credit_in_usd = credit_in_usd;
    journal_entry_dto_local_var->accounting_entries = accounting_entries;
    journal_entry_dto_local_var->total_debit = total_debit;
    journal_entry_dto_local_var->total_credit = total_credit;
    journal_entry_dto_local_var->total_debit_amount = total_debit_amount;
    journal_entry_dto_local_var->total_credit_amount = total_credit_amount;

    return journal_entry_dto_local_var;
}


void journal_entry_dto_free(journal_entry_dto_t *journal_entry_dto) {
    if(NULL == journal_entry_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (journal_entry_dto->id) {
        free(journal_entry_dto->id);
        journal_entry_dto->id = NULL;
    }
    if (journal_entry_dto->tenant_id) {
        free(journal_entry_dto->tenant_id);
        journal_entry_dto->tenant_id = NULL;
    }
    if (journal_entry_dto->enrollment_id) {
        free(journal_entry_dto->enrollment_id);
        journal_entry_dto->enrollment_id = NULL;
    }
    if (journal_entry_dto->journal_id) {
        free(journal_entry_dto->journal_id);
        journal_entry_dto->journal_id = NULL;
    }
    if (journal_entry_dto->journal_name) {
        free(journal_entry_dto->journal_name);
        journal_entry_dto->journal_name = NULL;
    }
    if (journal_entry_dto->journal_code) {
        free(journal_entry_dto->journal_code);
        journal_entry_dto->journal_code = NULL;
    }
    if (journal_entry_dto->fiscal_period_id) {
        free(journal_entry_dto->fiscal_period_id);
        journal_entry_dto->fiscal_period_id = NULL;
    }
    if (journal_entry_dto->financial_book_id) {
        free(journal_entry_dto->financial_book_id);
        journal_entry_dto->financial_book_id = NULL;
    }
    if (journal_entry_dto->description) {
        free(journal_entry_dto->description);
        journal_entry_dto->description = NULL;
    }
    if (journal_entry_dto->posting_date) {
        free(journal_entry_dto->posting_date);
        journal_entry_dto->posting_date = NULL;
    }
    if (journal_entry_dto->transaction_currency_id) {
        free(journal_entry_dto->transaction_currency_id);
        journal_entry_dto->transaction_currency_id = NULL;
    }
    if (journal_entry_dto->source_document_type) {
        free(journal_entry_dto->source_document_type);
        journal_entry_dto->source_document_type = NULL;
    }
    if (journal_entry_dto->source_document_id) {
        free(journal_entry_dto->source_document_id);
        journal_entry_dto->source_document_id = NULL;
    }
    if (journal_entry_dto->idempotency_key) {
        free(journal_entry_dto->idempotency_key);
        journal_entry_dto->idempotency_key = NULL;
    }
    if (journal_entry_dto->reversal_of_journal_entry_id) {
        free(journal_entry_dto->reversal_of_journal_entry_id);
        journal_entry_dto->reversal_of_journal_entry_id = NULL;
    }
    if (journal_entry_dto->posted_by) {
        free(journal_entry_dto->posted_by);
        journal_entry_dto->posted_by = NULL;
    }
    if (journal_entry_dto->forex_rates_snapshot) {
        free(journal_entry_dto->forex_rates_snapshot);
        journal_entry_dto->forex_rates_snapshot = NULL;
    }
    if (journal_entry_dto->timestamp) {
        free(journal_entry_dto->timestamp);
        journal_entry_dto->timestamp = NULL;
    }
    if (journal_entry_dto->accounting_entries) {
        list_ForEach(listEntry, journal_entry_dto->accounting_entries) {
            accounting_entry_dto_free(listEntry->data);
        }
        list_freeList(journal_entry_dto->accounting_entries);
        journal_entry_dto->accounting_entries = NULL;
    }
    if (journal_entry_dto->total_debit_amount) {
        money_free(journal_entry_dto->total_debit_amount);
        journal_entry_dto->total_debit_amount = NULL;
    }
    if (journal_entry_dto->total_credit_amount) {
        money_free(journal_entry_dto->total_credit_amount);
        journal_entry_dto->total_credit_amount = NULL;
    }
    free(journal_entry_dto);
}

cJSON *journal_entry_dto_convertToJSON(journal_entry_dto_t *journal_entry_dto) {
    cJSON *item = cJSON_CreateObject();

    // journal_entry_dto->id
    if(journal_entry_dto->id) {
    if(cJSON_AddStringToObject(item, "id", journal_entry_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // journal_entry_dto->tenant_id
    if(journal_entry_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", journal_entry_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // journal_entry_dto->enrollment_id
    if(journal_entry_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", journal_entry_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // journal_entry_dto->journal_id
    if(journal_entry_dto->journal_id) {
    if(cJSON_AddStringToObject(item, "journalId", journal_entry_dto->journal_id) == NULL) {
    goto fail; //String
    }
    }


    // journal_entry_dto->journal_name
    if(journal_entry_dto->journal_name) {
    if(cJSON_AddStringToObject(item, "journalName", journal_entry_dto->journal_name) == NULL) {
    goto fail; //String
    }
    }


    // journal_entry_dto->journal_code
    if(journal_entry_dto->journal_code) {
    if(cJSON_AddStringToObject(item, "journalCode", journal_entry_dto->journal_code) == NULL) {
    goto fail; //String
    }
    }


    // journal_entry_dto->fiscal_period_id
    if(journal_entry_dto->fiscal_period_id) {
    if(cJSON_AddStringToObject(item, "fiscalPeriodId", journal_entry_dto->fiscal_period_id) == NULL) {
    goto fail; //String
    }
    }


    // journal_entry_dto->financial_book_id
    if(journal_entry_dto->financial_book_id) {
    if(cJSON_AddStringToObject(item, "financialBookId", journal_entry_dto->financial_book_id) == NULL) {
    goto fail; //String
    }
    }


    // journal_entry_dto->description
    if(journal_entry_dto->description) {
    if(cJSON_AddStringToObject(item, "description", journal_entry_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // journal_entry_dto->entry_type
    if(journal_entry_dto->entry_type != accountingservice_journal_entry_dto_ENTRYTYPE_NULL) {
    if(cJSON_AddStringToObject(item, "entryType", entry_typejournal_entry_dto_ToString(journal_entry_dto->entry_type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // journal_entry_dto->status
    if(journal_entry_dto->status != accountingservice_journal_entry_dto_STATUS_NULL) {
    if(cJSON_AddStringToObject(item, "status", statusjournal_entry_dto_ToString(journal_entry_dto->status)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // journal_entry_dto->posting_date
    if(journal_entry_dto->posting_date) {
    if(cJSON_AddStringToObject(item, "postingDate", journal_entry_dto->posting_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // journal_entry_dto->is_opening_balance
    if(journal_entry_dto->is_opening_balance) {
    if(cJSON_AddBoolToObject(item, "isOpeningBalance", journal_entry_dto->is_opening_balance) == NULL) {
    goto fail; //Bool
    }
    }


    // journal_entry_dto->transaction_currency_id
    if(journal_entry_dto->transaction_currency_id) {
    if(cJSON_AddStringToObject(item, "transactionCurrencyId", journal_entry_dto->transaction_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // journal_entry_dto->source_document_type
    if(journal_entry_dto->source_document_type) {
    if(cJSON_AddStringToObject(item, "sourceDocumentType", journal_entry_dto->source_document_type) == NULL) {
    goto fail; //String
    }
    }


    // journal_entry_dto->source_document_id
    if(journal_entry_dto->source_document_id) {
    if(cJSON_AddStringToObject(item, "sourceDocumentId", journal_entry_dto->source_document_id) == NULL) {
    goto fail; //String
    }
    }


    // journal_entry_dto->idempotency_key
    if(journal_entry_dto->idempotency_key) {
    if(cJSON_AddStringToObject(item, "idempotencyKey", journal_entry_dto->idempotency_key) == NULL) {
    goto fail; //String
    }
    }


    // journal_entry_dto->reversal_of_journal_entry_id
    if(journal_entry_dto->reversal_of_journal_entry_id) {
    if(cJSON_AddStringToObject(item, "reversalOfJournalEntryId", journal_entry_dto->reversal_of_journal_entry_id) == NULL) {
    goto fail; //String
    }
    }


    // journal_entry_dto->posted_by
    if(journal_entry_dto->posted_by) {
    if(cJSON_AddStringToObject(item, "postedBy", journal_entry_dto->posted_by) == NULL) {
    goto fail; //String
    }
    }


    // journal_entry_dto->forex_rate
    if(journal_entry_dto->forex_rate) {
    if(cJSON_AddNumberToObject(item, "forexRate", journal_entry_dto->forex_rate) == NULL) {
    goto fail; //Numeric
    }
    }


    // journal_entry_dto->forex_rates_snapshot
    if(journal_entry_dto->forex_rates_snapshot) {
    if(cJSON_AddStringToObject(item, "forexRatesSnapshot", journal_entry_dto->forex_rates_snapshot) == NULL) {
    goto fail; //String
    }
    }


    // journal_entry_dto->timestamp
    if(journal_entry_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", journal_entry_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // journal_entry_dto->debit_in_usd
    if(journal_entry_dto->debit_in_usd) {
    if(cJSON_AddNumberToObject(item, "debitInUsd", journal_entry_dto->debit_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // journal_entry_dto->credit_in_usd
    if(journal_entry_dto->credit_in_usd) {
    if(cJSON_AddNumberToObject(item, "creditInUsd", journal_entry_dto->credit_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // journal_entry_dto->accounting_entries
    if(journal_entry_dto->accounting_entries) {
    cJSON *accounting_entries = cJSON_AddArrayToObject(item, "accountingEntries");
    if(accounting_entries == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *accounting_entriesListEntry;
    if (journal_entry_dto->accounting_entries) {
    list_ForEach(accounting_entriesListEntry, journal_entry_dto->accounting_entries) {
    cJSON *itemLocal = accounting_entry_dto_convertToJSON(accounting_entriesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(accounting_entries, itemLocal);
    }
    }
    }


    // journal_entry_dto->total_debit
    if(journal_entry_dto->total_debit) {
    if(cJSON_AddNumberToObject(item, "totalDebit", journal_entry_dto->total_debit) == NULL) {
    goto fail; //Numeric
    }
    }


    // journal_entry_dto->total_credit
    if(journal_entry_dto->total_credit) {
    if(cJSON_AddNumberToObject(item, "totalCredit", journal_entry_dto->total_credit) == NULL) {
    goto fail; //Numeric
    }
    }


    // journal_entry_dto->total_debit_amount
    if(journal_entry_dto->total_debit_amount) {
    cJSON *total_debit_amount_local_JSON = money_convertToJSON(journal_entry_dto->total_debit_amount);
    if(total_debit_amount_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "totalDebitAmount", total_debit_amount_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // journal_entry_dto->total_credit_amount
    if(journal_entry_dto->total_credit_amount) {
    cJSON *total_credit_amount_local_JSON = money_convertToJSON(journal_entry_dto->total_credit_amount);
    if(total_credit_amount_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "totalCreditAmount", total_credit_amount_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

journal_entry_dto_t *journal_entry_dto_parseFromJSON(cJSON *journal_entry_dtoJSON){

    journal_entry_dto_t *journal_entry_dto_local_var = NULL;

    // define the local list for journal_entry_dto->accounting_entries
    list_t *accounting_entriesList = NULL;

    // define the local variable for journal_entry_dto->total_debit_amount
    money_t *total_debit_amount_local_nonprim = NULL;

    // define the local variable for journal_entry_dto->total_credit_amount
    money_t *total_credit_amount_local_nonprim = NULL;

    // journal_entry_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(journal_entry_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // journal_entry_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(journal_entry_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // journal_entry_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(journal_entry_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // journal_entry_dto->journal_id
    cJSON *journal_id = cJSON_GetObjectItemCaseSensitive(journal_entry_dtoJSON, "journalId");
    if (journal_id) { 
    if(!cJSON_IsString(journal_id) && !cJSON_IsNull(journal_id))
    {
    goto end; //String
    }
    }

    // journal_entry_dto->journal_name
    cJSON *journal_name = cJSON_GetObjectItemCaseSensitive(journal_entry_dtoJSON, "journalName");
    if (journal_name) { 
    if(!cJSON_IsString(journal_name) && !cJSON_IsNull(journal_name))
    {
    goto end; //String
    }
    }

    // journal_entry_dto->journal_code
    cJSON *journal_code = cJSON_GetObjectItemCaseSensitive(journal_entry_dtoJSON, "journalCode");
    if (journal_code) { 
    if(!cJSON_IsString(journal_code) && !cJSON_IsNull(journal_code))
    {
    goto end; //String
    }
    }

    // journal_entry_dto->fiscal_period_id
    cJSON *fiscal_period_id = cJSON_GetObjectItemCaseSensitive(journal_entry_dtoJSON, "fiscalPeriodId");
    if (fiscal_period_id) { 
    if(!cJSON_IsString(fiscal_period_id) && !cJSON_IsNull(fiscal_period_id))
    {
    goto end; //String
    }
    }

    // journal_entry_dto->financial_book_id
    cJSON *financial_book_id = cJSON_GetObjectItemCaseSensitive(journal_entry_dtoJSON, "financialBookId");
    if (financial_book_id) { 
    if(!cJSON_IsString(financial_book_id) && !cJSON_IsNull(financial_book_id))
    {
    goto end; //String
    }
    }

    // journal_entry_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(journal_entry_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // journal_entry_dto->entry_type
    cJSON *entry_type = cJSON_GetObjectItemCaseSensitive(journal_entry_dtoJSON, "entryType");
    accountingservice_journal_entry_dto_ENTRYTYPE_e entry_typeVariable;
    if (entry_type) { 
    if(!cJSON_IsString(entry_type))
    {
    goto end; //Enum
    }
    entry_typeVariable = journal_entry_dto_entry_type_FromString(entry_type->valuestring);
    }

    // journal_entry_dto->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(journal_entry_dtoJSON, "status");
    accountingservice_journal_entry_dto_STATUS_e statusVariable;
    if (status) { 
    if(!cJSON_IsString(status))
    {
    goto end; //Enum
    }
    statusVariable = journal_entry_dto_status_FromString(status->valuestring);
    }

    // journal_entry_dto->posting_date
    cJSON *posting_date = cJSON_GetObjectItemCaseSensitive(journal_entry_dtoJSON, "postingDate");
    if (posting_date) { 
    if(!cJSON_IsString(posting_date) && !cJSON_IsNull(posting_date))
    {
    goto end; //DateTime
    }
    }

    // journal_entry_dto->is_opening_balance
    cJSON *is_opening_balance = cJSON_GetObjectItemCaseSensitive(journal_entry_dtoJSON, "isOpeningBalance");
    if (is_opening_balance) { 
    if(!cJSON_IsBool(is_opening_balance))
    {
    goto end; //Bool
    }
    }

    // journal_entry_dto->transaction_currency_id
    cJSON *transaction_currency_id = cJSON_GetObjectItemCaseSensitive(journal_entry_dtoJSON, "transactionCurrencyId");
    if (transaction_currency_id) { 
    if(!cJSON_IsString(transaction_currency_id) && !cJSON_IsNull(transaction_currency_id))
    {
    goto end; //String
    }
    }

    // journal_entry_dto->source_document_type
    cJSON *source_document_type = cJSON_GetObjectItemCaseSensitive(journal_entry_dtoJSON, "sourceDocumentType");
    if (source_document_type) { 
    if(!cJSON_IsString(source_document_type) && !cJSON_IsNull(source_document_type))
    {
    goto end; //String
    }
    }

    // journal_entry_dto->source_document_id
    cJSON *source_document_id = cJSON_GetObjectItemCaseSensitive(journal_entry_dtoJSON, "sourceDocumentId");
    if (source_document_id) { 
    if(!cJSON_IsString(source_document_id) && !cJSON_IsNull(source_document_id))
    {
    goto end; //String
    }
    }

    // journal_entry_dto->idempotency_key
    cJSON *idempotency_key = cJSON_GetObjectItemCaseSensitive(journal_entry_dtoJSON, "idempotencyKey");
    if (idempotency_key) { 
    if(!cJSON_IsString(idempotency_key) && !cJSON_IsNull(idempotency_key))
    {
    goto end; //String
    }
    }

    // journal_entry_dto->reversal_of_journal_entry_id
    cJSON *reversal_of_journal_entry_id = cJSON_GetObjectItemCaseSensitive(journal_entry_dtoJSON, "reversalOfJournalEntryId");
    if (reversal_of_journal_entry_id) { 
    if(!cJSON_IsString(reversal_of_journal_entry_id) && !cJSON_IsNull(reversal_of_journal_entry_id))
    {
    goto end; //String
    }
    }

    // journal_entry_dto->posted_by
    cJSON *posted_by = cJSON_GetObjectItemCaseSensitive(journal_entry_dtoJSON, "postedBy");
    if (posted_by) { 
    if(!cJSON_IsString(posted_by) && !cJSON_IsNull(posted_by))
    {
    goto end; //String
    }
    }

    // journal_entry_dto->forex_rate
    cJSON *forex_rate = cJSON_GetObjectItemCaseSensitive(journal_entry_dtoJSON, "forexRate");
    if (forex_rate) { 
    if(!cJSON_IsNumber(forex_rate))
    {
    goto end; //Numeric
    }
    }

    // journal_entry_dto->forex_rates_snapshot
    cJSON *forex_rates_snapshot = cJSON_GetObjectItemCaseSensitive(journal_entry_dtoJSON, "forexRatesSnapshot");
    if (forex_rates_snapshot) { 
    if(!cJSON_IsString(forex_rates_snapshot) && !cJSON_IsNull(forex_rates_snapshot))
    {
    goto end; //String
    }
    }

    // journal_entry_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(journal_entry_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // journal_entry_dto->debit_in_usd
    cJSON *debit_in_usd = cJSON_GetObjectItemCaseSensitive(journal_entry_dtoJSON, "debitInUsd");
    if (debit_in_usd) { 
    if(!cJSON_IsNumber(debit_in_usd))
    {
    goto end; //Numeric
    }
    }

    // journal_entry_dto->credit_in_usd
    cJSON *credit_in_usd = cJSON_GetObjectItemCaseSensitive(journal_entry_dtoJSON, "creditInUsd");
    if (credit_in_usd) { 
    if(!cJSON_IsNumber(credit_in_usd))
    {
    goto end; //Numeric
    }
    }

    // journal_entry_dto->accounting_entries
    cJSON *accounting_entries = cJSON_GetObjectItemCaseSensitive(journal_entry_dtoJSON, "accountingEntries");
    if (accounting_entries) { 
    cJSON *accounting_entries_local_nonprimitive = NULL;
    if(!cJSON_IsArray(accounting_entries)){
        goto end; //nonprimitive container
    }

    accounting_entriesList = list_createList();

    cJSON_ArrayForEach(accounting_entries_local_nonprimitive,accounting_entries )
    {
        if(!cJSON_IsObject(accounting_entries_local_nonprimitive)){
            goto end;
        }
        accounting_entry_dto_t *accounting_entriesItem = accounting_entry_dto_parseFromJSON(accounting_entries_local_nonprimitive);

        list_addElement(accounting_entriesList, accounting_entriesItem);
    }
    }

    // journal_entry_dto->total_debit
    cJSON *total_debit = cJSON_GetObjectItemCaseSensitive(journal_entry_dtoJSON, "totalDebit");
    if (total_debit) { 
    if(!cJSON_IsNumber(total_debit))
    {
    goto end; //Numeric
    }
    }

    // journal_entry_dto->total_credit
    cJSON *total_credit = cJSON_GetObjectItemCaseSensitive(journal_entry_dtoJSON, "totalCredit");
    if (total_credit) { 
    if(!cJSON_IsNumber(total_credit))
    {
    goto end; //Numeric
    }
    }

    // journal_entry_dto->total_debit_amount
    cJSON *total_debit_amount = cJSON_GetObjectItemCaseSensitive(journal_entry_dtoJSON, "totalDebitAmount");
    if (total_debit_amount) { 
    total_debit_amount_local_nonprim = money_parseFromJSON(total_debit_amount); //nonprimitive
    }

    // journal_entry_dto->total_credit_amount
    cJSON *total_credit_amount = cJSON_GetObjectItemCaseSensitive(journal_entry_dtoJSON, "totalCreditAmount");
    if (total_credit_amount) { 
    total_credit_amount_local_nonprim = money_parseFromJSON(total_credit_amount); //nonprimitive
    }


    journal_entry_dto_local_var = journal_entry_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        journal_id && !cJSON_IsNull(journal_id) ? strdup(journal_id->valuestring) : NULL,
        journal_name && !cJSON_IsNull(journal_name) ? strdup(journal_name->valuestring) : NULL,
        journal_code && !cJSON_IsNull(journal_code) ? strdup(journal_code->valuestring) : NULL,
        fiscal_period_id && !cJSON_IsNull(fiscal_period_id) ? strdup(fiscal_period_id->valuestring) : NULL,
        financial_book_id && !cJSON_IsNull(financial_book_id) ? strdup(financial_book_id->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        entry_type ? entry_typeVariable : accountingservice_journal_entry_dto_ENTRYTYPE_NULL,
        status ? statusVariable : accountingservice_journal_entry_dto_STATUS_NULL,
        posting_date && !cJSON_IsNull(posting_date) ? strdup(posting_date->valuestring) : NULL,
        is_opening_balance ? is_opening_balance->valueint : 0,
        transaction_currency_id && !cJSON_IsNull(transaction_currency_id) ? strdup(transaction_currency_id->valuestring) : NULL,
        source_document_type && !cJSON_IsNull(source_document_type) ? strdup(source_document_type->valuestring) : NULL,
        source_document_id && !cJSON_IsNull(source_document_id) ? strdup(source_document_id->valuestring) : NULL,
        idempotency_key && !cJSON_IsNull(idempotency_key) ? strdup(idempotency_key->valuestring) : NULL,
        reversal_of_journal_entry_id && !cJSON_IsNull(reversal_of_journal_entry_id) ? strdup(reversal_of_journal_entry_id->valuestring) : NULL,
        posted_by && !cJSON_IsNull(posted_by) ? strdup(posted_by->valuestring) : NULL,
        forex_rate ? forex_rate->valuedouble : 0,
        forex_rates_snapshot && !cJSON_IsNull(forex_rates_snapshot) ? strdup(forex_rates_snapshot->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        debit_in_usd ? debit_in_usd->valuedouble : 0,
        credit_in_usd ? credit_in_usd->valuedouble : 0,
        accounting_entries ? accounting_entriesList : NULL,
        total_debit ? total_debit->valuedouble : 0,
        total_credit ? total_credit->valuedouble : 0,
        total_debit_amount ? total_debit_amount_local_nonprim : NULL,
        total_credit_amount ? total_credit_amount_local_nonprim : NULL
        );

    return journal_entry_dto_local_var;
end:
    if (accounting_entriesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, accounting_entriesList) {
            accounting_entry_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(accounting_entriesList);
        accounting_entriesList = NULL;
    }
    if (total_debit_amount_local_nonprim) {
        money_free(total_debit_amount_local_nonprim);
        total_debit_amount_local_nonprim = NULL;
    }
    if (total_credit_amount_local_nonprim) {
        money_free(total_credit_amount_local_nonprim);
        total_credit_amount_local_nonprim = NULL;
    }
    return NULL;

}
