#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "journal_entry_update_dto.h"



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
    ) {
    journal_entry_update_dto_t *journal_entry_update_dto_local_var = malloc(sizeof(journal_entry_update_dto_t));
    if (!journal_entry_update_dto_local_var) {
        return NULL;
    }
    journal_entry_update_dto_local_var->group = group;
    journal_entry_update_dto_local_var->opening = opening;
    journal_entry_update_dto_local_var->description = description;
    journal_entry_update_dto_local_var->date = date;
    journal_entry_update_dto_local_var->debit = debit;
    journal_entry_update_dto_local_var->credit = credit;
    journal_entry_update_dto_local_var->journal_id = journal_id;
    journal_entry_update_dto_local_var->currency_id = currency_id;
    journal_entry_update_dto_local_var->invoice_code = invoice_code;
    journal_entry_update_dto_local_var->debit_account_id = debit_account_id;
    journal_entry_update_dto_local_var->credit_account_id = credit_account_id;
    journal_entry_update_dto_local_var->parent_journal_entry_id = parent_journal_entry_id;

    return journal_entry_update_dto_local_var;
}


void journal_entry_update_dto_free(journal_entry_update_dto_t *journal_entry_update_dto) {
    if(NULL == journal_entry_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (journal_entry_update_dto->description) {
        free(journal_entry_update_dto->description);
        journal_entry_update_dto->description = NULL;
    }
    if (journal_entry_update_dto->date) {
        free(journal_entry_update_dto->date);
        journal_entry_update_dto->date = NULL;
    }
    if (journal_entry_update_dto->journal_id) {
        free(journal_entry_update_dto->journal_id);
        journal_entry_update_dto->journal_id = NULL;
    }
    if (journal_entry_update_dto->currency_id) {
        free(journal_entry_update_dto->currency_id);
        journal_entry_update_dto->currency_id = NULL;
    }
    if (journal_entry_update_dto->invoice_code) {
        free(journal_entry_update_dto->invoice_code);
        journal_entry_update_dto->invoice_code = NULL;
    }
    if (journal_entry_update_dto->debit_account_id) {
        free(journal_entry_update_dto->debit_account_id);
        journal_entry_update_dto->debit_account_id = NULL;
    }
    if (journal_entry_update_dto->credit_account_id) {
        free(journal_entry_update_dto->credit_account_id);
        journal_entry_update_dto->credit_account_id = NULL;
    }
    if (journal_entry_update_dto->parent_journal_entry_id) {
        free(journal_entry_update_dto->parent_journal_entry_id);
        journal_entry_update_dto->parent_journal_entry_id = NULL;
    }
    free(journal_entry_update_dto);
}

cJSON *journal_entry_update_dto_convertToJSON(journal_entry_update_dto_t *journal_entry_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // journal_entry_update_dto->group
    if(journal_entry_update_dto->group) {
    if(cJSON_AddBoolToObject(item, "group", journal_entry_update_dto->group) == NULL) {
    goto fail; //Bool
    }
    }


    // journal_entry_update_dto->opening
    if(journal_entry_update_dto->opening) {
    if(cJSON_AddBoolToObject(item, "opening", journal_entry_update_dto->opening) == NULL) {
    goto fail; //Bool
    }
    }


    // journal_entry_update_dto->description
    if (!journal_entry_update_dto->description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "description", journal_entry_update_dto->description) == NULL) {
    goto fail; //String
    }


    // journal_entry_update_dto->date
    if (!journal_entry_update_dto->date) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "date", journal_entry_update_dto->date) == NULL) {
    goto fail; //Date-Time
    }


    // journal_entry_update_dto->debit
    if(journal_entry_update_dto->debit) {
    if(cJSON_AddNumberToObject(item, "debit", journal_entry_update_dto->debit) == NULL) {
    goto fail; //Numeric
    }
    }


    // journal_entry_update_dto->credit
    if(journal_entry_update_dto->credit) {
    if(cJSON_AddNumberToObject(item, "credit", journal_entry_update_dto->credit) == NULL) {
    goto fail; //Numeric
    }
    }


    // journal_entry_update_dto->journal_id
    if (!journal_entry_update_dto->journal_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "journalId", journal_entry_update_dto->journal_id) == NULL) {
    goto fail; //String
    }


    // journal_entry_update_dto->currency_id
    if (!journal_entry_update_dto->currency_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "currencyId", journal_entry_update_dto->currency_id) == NULL) {
    goto fail; //String
    }


    // journal_entry_update_dto->invoice_code
    if(journal_entry_update_dto->invoice_code) {
    if(cJSON_AddStringToObject(item, "invoiceCode", journal_entry_update_dto->invoice_code) == NULL) {
    goto fail; //String
    }
    }


    // journal_entry_update_dto->debit_account_id
    if (!journal_entry_update_dto->debit_account_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "debitAccountId", journal_entry_update_dto->debit_account_id) == NULL) {
    goto fail; //String
    }


    // journal_entry_update_dto->credit_account_id
    if (!journal_entry_update_dto->credit_account_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "creditAccountId", journal_entry_update_dto->credit_account_id) == NULL) {
    goto fail; //String
    }


    // journal_entry_update_dto->parent_journal_entry_id
    if(journal_entry_update_dto->parent_journal_entry_id) {
    if(cJSON_AddStringToObject(item, "parentJournalEntryId", journal_entry_update_dto->parent_journal_entry_id) == NULL) {
    goto fail; //String
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

    // journal_entry_update_dto->group
    cJSON *group = cJSON_GetObjectItemCaseSensitive(journal_entry_update_dtoJSON, "group");
    if (group) { 
    if(!cJSON_IsBool(group))
    {
    goto end; //Bool
    }
    }

    // journal_entry_update_dto->opening
    cJSON *opening = cJSON_GetObjectItemCaseSensitive(journal_entry_update_dtoJSON, "opening");
    if (opening) { 
    if(!cJSON_IsBool(opening))
    {
    goto end; //Bool
    }
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

    // journal_entry_update_dto->date
    cJSON *date = cJSON_GetObjectItemCaseSensitive(journal_entry_update_dtoJSON, "date");
    if (!date) {
        goto end;
    }

    
    if(!cJSON_IsString(date) && !cJSON_IsNull(date))
    {
    goto end; //DateTime
    }

    // journal_entry_update_dto->debit
    cJSON *debit = cJSON_GetObjectItemCaseSensitive(journal_entry_update_dtoJSON, "debit");
    if (debit) { 
    if(!cJSON_IsNumber(debit))
    {
    goto end; //Numeric
    }
    }

    // journal_entry_update_dto->credit
    cJSON *credit = cJSON_GetObjectItemCaseSensitive(journal_entry_update_dtoJSON, "credit");
    if (credit) { 
    if(!cJSON_IsNumber(credit))
    {
    goto end; //Numeric
    }
    }

    // journal_entry_update_dto->journal_id
    cJSON *journal_id = cJSON_GetObjectItemCaseSensitive(journal_entry_update_dtoJSON, "journalId");
    if (!journal_id) {
        goto end;
    }

    
    if(!cJSON_IsString(journal_id))
    {
    goto end; //String
    }

    // journal_entry_update_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(journal_entry_update_dtoJSON, "currencyId");
    if (!currency_id) {
        goto end;
    }

    
    if(!cJSON_IsString(currency_id))
    {
    goto end; //String
    }

    // journal_entry_update_dto->invoice_code
    cJSON *invoice_code = cJSON_GetObjectItemCaseSensitive(journal_entry_update_dtoJSON, "invoiceCode");
    if (invoice_code) { 
    if(!cJSON_IsString(invoice_code) && !cJSON_IsNull(invoice_code))
    {
    goto end; //String
    }
    }

    // journal_entry_update_dto->debit_account_id
    cJSON *debit_account_id = cJSON_GetObjectItemCaseSensitive(journal_entry_update_dtoJSON, "debitAccountId");
    if (!debit_account_id) {
        goto end;
    }

    
    if(!cJSON_IsString(debit_account_id))
    {
    goto end; //String
    }

    // journal_entry_update_dto->credit_account_id
    cJSON *credit_account_id = cJSON_GetObjectItemCaseSensitive(journal_entry_update_dtoJSON, "creditAccountId");
    if (!credit_account_id) {
        goto end;
    }

    
    if(!cJSON_IsString(credit_account_id))
    {
    goto end; //String
    }

    // journal_entry_update_dto->parent_journal_entry_id
    cJSON *parent_journal_entry_id = cJSON_GetObjectItemCaseSensitive(journal_entry_update_dtoJSON, "parentJournalEntryId");
    if (parent_journal_entry_id) { 
    if(!cJSON_IsString(parent_journal_entry_id) && !cJSON_IsNull(parent_journal_entry_id))
    {
    goto end; //String
    }
    }


    journal_entry_update_dto_local_var = journal_entry_update_dto_create (
        group ? group->valueint : 0,
        opening ? opening->valueint : 0,
        strdup(description->valuestring),
        strdup(date->valuestring),
        debit ? debit->valuedouble : 0,
        credit ? credit->valuedouble : 0,
        strdup(journal_id->valuestring),
        strdup(currency_id->valuestring),
        invoice_code && !cJSON_IsNull(invoice_code) ? strdup(invoice_code->valuestring) : NULL,
        strdup(debit_account_id->valuestring),
        strdup(credit_account_id->valuestring),
        parent_journal_entry_id && !cJSON_IsNull(parent_journal_entry_id) ? strdup(parent_journal_entry_id->valuestring) : NULL
        );

    return journal_entry_update_dto_local_var;
end:
    return NULL;

}
