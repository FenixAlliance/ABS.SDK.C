#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "journal_entry_update_dto.h"



journal_entry_update_dto_t *journal_entry_update_dto_create(
    char *fiscal_period_id,
    char *transaction_currency_id,
    char *description,
    char *source_document_type,
    char *source_document_id,
    int is_opening_balance
    ) {
    journal_entry_update_dto_t *journal_entry_update_dto_local_var = malloc(sizeof(journal_entry_update_dto_t));
    if (!journal_entry_update_dto_local_var) {
        return NULL;
    }
    journal_entry_update_dto_local_var->fiscal_period_id = fiscal_period_id;
    journal_entry_update_dto_local_var->transaction_currency_id = transaction_currency_id;
    journal_entry_update_dto_local_var->description = description;
    journal_entry_update_dto_local_var->source_document_type = source_document_type;
    journal_entry_update_dto_local_var->source_document_id = source_document_id;
    journal_entry_update_dto_local_var->is_opening_balance = is_opening_balance;

    return journal_entry_update_dto_local_var;
}


void journal_entry_update_dto_free(journal_entry_update_dto_t *journal_entry_update_dto) {
    if(NULL == journal_entry_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (journal_entry_update_dto->fiscal_period_id) {
        free(journal_entry_update_dto->fiscal_period_id);
        journal_entry_update_dto->fiscal_period_id = NULL;
    }
    if (journal_entry_update_dto->transaction_currency_id) {
        free(journal_entry_update_dto->transaction_currency_id);
        journal_entry_update_dto->transaction_currency_id = NULL;
    }
    if (journal_entry_update_dto->description) {
        free(journal_entry_update_dto->description);
        journal_entry_update_dto->description = NULL;
    }
    if (journal_entry_update_dto->source_document_type) {
        free(journal_entry_update_dto->source_document_type);
        journal_entry_update_dto->source_document_type = NULL;
    }
    if (journal_entry_update_dto->source_document_id) {
        free(journal_entry_update_dto->source_document_id);
        journal_entry_update_dto->source_document_id = NULL;
    }
    free(journal_entry_update_dto);
}

cJSON *journal_entry_update_dto_convertToJSON(journal_entry_update_dto_t *journal_entry_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // journal_entry_update_dto->fiscal_period_id
    if (!journal_entry_update_dto->fiscal_period_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "fiscalPeriodId", journal_entry_update_dto->fiscal_period_id) == NULL) {
    goto fail; //String
    }


    // journal_entry_update_dto->transaction_currency_id
    if (!journal_entry_update_dto->transaction_currency_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "transactionCurrencyId", journal_entry_update_dto->transaction_currency_id) == NULL) {
    goto fail; //String
    }


    // journal_entry_update_dto->description
    if (!journal_entry_update_dto->description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "description", journal_entry_update_dto->description) == NULL) {
    goto fail; //String
    }


    // journal_entry_update_dto->source_document_type
    if(journal_entry_update_dto->source_document_type) {
    if(cJSON_AddStringToObject(item, "sourceDocumentType", journal_entry_update_dto->source_document_type) == NULL) {
    goto fail; //String
    }
    }


    // journal_entry_update_dto->source_document_id
    if(journal_entry_update_dto->source_document_id) {
    if(cJSON_AddStringToObject(item, "sourceDocumentId", journal_entry_update_dto->source_document_id) == NULL) {
    goto fail; //String
    }
    }


    // journal_entry_update_dto->is_opening_balance
    if(journal_entry_update_dto->is_opening_balance) {
    if(cJSON_AddBoolToObject(item, "isOpeningBalance", journal_entry_update_dto->is_opening_balance) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

journal_entry_update_dto_t *journal_entry_update_dto_parseFromJSON(cJSON *journal_entry_update_dtoJSON){

    journal_entry_update_dto_t *journal_entry_update_dto_local_var = NULL;

    // journal_entry_update_dto->fiscal_period_id
    cJSON *fiscal_period_id = cJSON_GetObjectItemCaseSensitive(journal_entry_update_dtoJSON, "fiscalPeriodId");
    if (!fiscal_period_id) {
        goto end;
    }

    
    if(!cJSON_IsString(fiscal_period_id))
    {
    goto end; //String
    }

    // journal_entry_update_dto->transaction_currency_id
    cJSON *transaction_currency_id = cJSON_GetObjectItemCaseSensitive(journal_entry_update_dtoJSON, "transactionCurrencyId");
    if (!transaction_currency_id) {
        goto end;
    }

    
    if(!cJSON_IsString(transaction_currency_id))
    {
    goto end; //String
    }

    // journal_entry_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(journal_entry_update_dtoJSON, "description");
    if (!description) {
        goto end;
    }

    
    if(!cJSON_IsString(description))
    {
    goto end; //String
    }

    // journal_entry_update_dto->source_document_type
    cJSON *source_document_type = cJSON_GetObjectItemCaseSensitive(journal_entry_update_dtoJSON, "sourceDocumentType");
    if (source_document_type) { 
    if(!cJSON_IsString(source_document_type) && !cJSON_IsNull(source_document_type))
    {
    goto end; //String
    }
    }

    // journal_entry_update_dto->source_document_id
    cJSON *source_document_id = cJSON_GetObjectItemCaseSensitive(journal_entry_update_dtoJSON, "sourceDocumentId");
    if (source_document_id) { 
    if(!cJSON_IsString(source_document_id) && !cJSON_IsNull(source_document_id))
    {
    goto end; //String
    }
    }

    // journal_entry_update_dto->is_opening_balance
    cJSON *is_opening_balance = cJSON_GetObjectItemCaseSensitive(journal_entry_update_dtoJSON, "isOpeningBalance");
    if (is_opening_balance) { 
    if(!cJSON_IsBool(is_opening_balance))
    {
    goto end; //Bool
    }
    }


    journal_entry_update_dto_local_var = journal_entry_update_dto_create (
        strdup(fiscal_period_id->valuestring),
        strdup(transaction_currency_id->valuestring),
        strdup(description->valuestring),
        source_document_type && !cJSON_IsNull(source_document_type) ? strdup(source_document_type->valuestring) : NULL,
        source_document_id && !cJSON_IsNull(source_document_id) ? strdup(source_document_id->valuestring) : NULL,
        is_opening_balance ? is_opening_balance->valueint : 0
        );

    return journal_entry_update_dto_local_var;
end:
    return NULL;

}
