#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "journal_entry_create_dto.h"



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
    ) {
    journal_entry_create_dto_t *journal_entry_create_dto_local_var = malloc(sizeof(journal_entry_create_dto_t));
    if (!journal_entry_create_dto_local_var) {
        return NULL;
    }
    journal_entry_create_dto_local_var->id = id;
    journal_entry_create_dto_local_var->timestamp = timestamp;
    journal_entry_create_dto_local_var->journal_id = journal_id;
    journal_entry_create_dto_local_var->fiscal_period_id = fiscal_period_id;
    journal_entry_create_dto_local_var->transaction_currency_id = transaction_currency_id;
    journal_entry_create_dto_local_var->description = description;
    journal_entry_create_dto_local_var->source_document_type = source_document_type;
    journal_entry_create_dto_local_var->source_document_id = source_document_id;
    journal_entry_create_dto_local_var->idempotency_key = idempotency_key;
    journal_entry_create_dto_local_var->is_opening_balance = is_opening_balance;
    journal_entry_create_dto_local_var->accounting_entries = accounting_entries;

    return journal_entry_create_dto_local_var;
}


void journal_entry_create_dto_free(journal_entry_create_dto_t *journal_entry_create_dto) {
    if(NULL == journal_entry_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (journal_entry_create_dto->id) {
        free(journal_entry_create_dto->id);
        journal_entry_create_dto->id = NULL;
    }
    if (journal_entry_create_dto->timestamp) {
        free(journal_entry_create_dto->timestamp);
        journal_entry_create_dto->timestamp = NULL;
    }
    if (journal_entry_create_dto->journal_id) {
        free(journal_entry_create_dto->journal_id);
        journal_entry_create_dto->journal_id = NULL;
    }
    if (journal_entry_create_dto->fiscal_period_id) {
        free(journal_entry_create_dto->fiscal_period_id);
        journal_entry_create_dto->fiscal_period_id = NULL;
    }
    if (journal_entry_create_dto->transaction_currency_id) {
        free(journal_entry_create_dto->transaction_currency_id);
        journal_entry_create_dto->transaction_currency_id = NULL;
    }
    if (journal_entry_create_dto->description) {
        free(journal_entry_create_dto->description);
        journal_entry_create_dto->description = NULL;
    }
    if (journal_entry_create_dto->source_document_type) {
        free(journal_entry_create_dto->source_document_type);
        journal_entry_create_dto->source_document_type = NULL;
    }
    if (journal_entry_create_dto->source_document_id) {
        free(journal_entry_create_dto->source_document_id);
        journal_entry_create_dto->source_document_id = NULL;
    }
    if (journal_entry_create_dto->idempotency_key) {
        free(journal_entry_create_dto->idempotency_key);
        journal_entry_create_dto->idempotency_key = NULL;
    }
    if (journal_entry_create_dto->accounting_entries) {
        list_ForEach(listEntry, journal_entry_create_dto->accounting_entries) {
            accounting_entry_create_dto_free(listEntry->data);
        }
        list_freeList(journal_entry_create_dto->accounting_entries);
        journal_entry_create_dto->accounting_entries = NULL;
    }
    free(journal_entry_create_dto);
}

cJSON *journal_entry_create_dto_convertToJSON(journal_entry_create_dto_t *journal_entry_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // journal_entry_create_dto->id
    if(journal_entry_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", journal_entry_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // journal_entry_create_dto->timestamp
    if(journal_entry_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", journal_entry_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // journal_entry_create_dto->journal_id
    if (!journal_entry_create_dto->journal_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "journalId", journal_entry_create_dto->journal_id) == NULL) {
    goto fail; //String
    }


    // journal_entry_create_dto->fiscal_period_id
    if (!journal_entry_create_dto->fiscal_period_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "fiscalPeriodId", journal_entry_create_dto->fiscal_period_id) == NULL) {
    goto fail; //String
    }


    // journal_entry_create_dto->transaction_currency_id
    if (!journal_entry_create_dto->transaction_currency_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "transactionCurrencyId", journal_entry_create_dto->transaction_currency_id) == NULL) {
    goto fail; //String
    }


    // journal_entry_create_dto->description
    if (!journal_entry_create_dto->description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "description", journal_entry_create_dto->description) == NULL) {
    goto fail; //String
    }


    // journal_entry_create_dto->source_document_type
    if(journal_entry_create_dto->source_document_type) {
    if(cJSON_AddStringToObject(item, "sourceDocumentType", journal_entry_create_dto->source_document_type) == NULL) {
    goto fail; //String
    }
    }


    // journal_entry_create_dto->source_document_id
    if(journal_entry_create_dto->source_document_id) {
    if(cJSON_AddStringToObject(item, "sourceDocumentId", journal_entry_create_dto->source_document_id) == NULL) {
    goto fail; //String
    }
    }


    // journal_entry_create_dto->idempotency_key
    if(journal_entry_create_dto->idempotency_key) {
    if(cJSON_AddStringToObject(item, "idempotencyKey", journal_entry_create_dto->idempotency_key) == NULL) {
    goto fail; //String
    }
    }


    // journal_entry_create_dto->is_opening_balance
    if(journal_entry_create_dto->is_opening_balance) {
    if(cJSON_AddBoolToObject(item, "isOpeningBalance", journal_entry_create_dto->is_opening_balance) == NULL) {
    goto fail; //Bool
    }
    }


    // journal_entry_create_dto->accounting_entries
    if(journal_entry_create_dto->accounting_entries) {
    cJSON *accounting_entries = cJSON_AddArrayToObject(item, "accountingEntries");
    if(accounting_entries == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *accounting_entriesListEntry;
    if (journal_entry_create_dto->accounting_entries) {
    list_ForEach(accounting_entriesListEntry, journal_entry_create_dto->accounting_entries) {
    cJSON *itemLocal = accounting_entry_create_dto_convertToJSON(accounting_entriesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(accounting_entries, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

journal_entry_create_dto_t *journal_entry_create_dto_parseFromJSON(cJSON *journal_entry_create_dtoJSON){

    journal_entry_create_dto_t *journal_entry_create_dto_local_var = NULL;

    // define the local list for journal_entry_create_dto->accounting_entries
    list_t *accounting_entriesList = NULL;

    // journal_entry_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(journal_entry_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // journal_entry_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(journal_entry_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // journal_entry_create_dto->journal_id
    cJSON *journal_id = cJSON_GetObjectItemCaseSensitive(journal_entry_create_dtoJSON, "journalId");
    if (!journal_id) {
        goto end;
    }

    
    if(!cJSON_IsString(journal_id))
    {
    goto end; //String
    }

    // journal_entry_create_dto->fiscal_period_id
    cJSON *fiscal_period_id = cJSON_GetObjectItemCaseSensitive(journal_entry_create_dtoJSON, "fiscalPeriodId");
    if (!fiscal_period_id) {
        goto end;
    }

    
    if(!cJSON_IsString(fiscal_period_id))
    {
    goto end; //String
    }

    // journal_entry_create_dto->transaction_currency_id
    cJSON *transaction_currency_id = cJSON_GetObjectItemCaseSensitive(journal_entry_create_dtoJSON, "transactionCurrencyId");
    if (!transaction_currency_id) {
        goto end;
    }

    
    if(!cJSON_IsString(transaction_currency_id))
    {
    goto end; //String
    }

    // journal_entry_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(journal_entry_create_dtoJSON, "description");
    if (!description) {
        goto end;
    }

    
    if(!cJSON_IsString(description))
    {
    goto end; //String
    }

    // journal_entry_create_dto->source_document_type
    cJSON *source_document_type = cJSON_GetObjectItemCaseSensitive(journal_entry_create_dtoJSON, "sourceDocumentType");
    if (source_document_type) { 
    if(!cJSON_IsString(source_document_type) && !cJSON_IsNull(source_document_type))
    {
    goto end; //String
    }
    }

    // journal_entry_create_dto->source_document_id
    cJSON *source_document_id = cJSON_GetObjectItemCaseSensitive(journal_entry_create_dtoJSON, "sourceDocumentId");
    if (source_document_id) { 
    if(!cJSON_IsString(source_document_id) && !cJSON_IsNull(source_document_id))
    {
    goto end; //String
    }
    }

    // journal_entry_create_dto->idempotency_key
    cJSON *idempotency_key = cJSON_GetObjectItemCaseSensitive(journal_entry_create_dtoJSON, "idempotencyKey");
    if (idempotency_key) { 
    if(!cJSON_IsString(idempotency_key) && !cJSON_IsNull(idempotency_key))
    {
    goto end; //String
    }
    }

    // journal_entry_create_dto->is_opening_balance
    cJSON *is_opening_balance = cJSON_GetObjectItemCaseSensitive(journal_entry_create_dtoJSON, "isOpeningBalance");
    if (is_opening_balance) { 
    if(!cJSON_IsBool(is_opening_balance))
    {
    goto end; //Bool
    }
    }

    // journal_entry_create_dto->accounting_entries
    cJSON *accounting_entries = cJSON_GetObjectItemCaseSensitive(journal_entry_create_dtoJSON, "accountingEntries");
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
        accounting_entry_create_dto_t *accounting_entriesItem = accounting_entry_create_dto_parseFromJSON(accounting_entries_local_nonprimitive);

        list_addElement(accounting_entriesList, accounting_entriesItem);
    }
    }


    journal_entry_create_dto_local_var = journal_entry_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(journal_id->valuestring),
        strdup(fiscal_period_id->valuestring),
        strdup(transaction_currency_id->valuestring),
        strdup(description->valuestring),
        source_document_type && !cJSON_IsNull(source_document_type) ? strdup(source_document_type->valuestring) : NULL,
        source_document_id && !cJSON_IsNull(source_document_id) ? strdup(source_document_id->valuestring) : NULL,
        idempotency_key && !cJSON_IsNull(idempotency_key) ? strdup(idempotency_key->valuestring) : NULL,
        is_opening_balance ? is_opening_balance->valueint : 0,
        accounting_entries ? accounting_entriesList : NULL
        );

    return journal_entry_create_dto_local_var;
end:
    if (accounting_entriesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, accounting_entriesList) {
            accounting_entry_create_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(accounting_entriesList);
        accounting_entriesList = NULL;
    }
    return NULL;

}
