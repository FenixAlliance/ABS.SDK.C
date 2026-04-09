#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "journal_entry_dto.h"



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
    ) {
    journal_entry_dto_t *journal_entry_dto_local_var = malloc(sizeof(journal_entry_dto_t));
    if (!journal_entry_dto_local_var) {
        return NULL;
    }
    journal_entry_dto_local_var->id = id;
    journal_entry_dto_local_var->timestamp = timestamp;
    journal_entry_dto_local_var->group = group;
    journal_entry_dto_local_var->opening = opening;
    journal_entry_dto_local_var->description = description;
    journal_entry_dto_local_var->date = date;
    journal_entry_dto_local_var->forex_rates_snapshot = forex_rates_snapshot;
    journal_entry_dto_local_var->forex_rate = forex_rate;
    journal_entry_dto_local_var->credit = credit;
    journal_entry_dto_local_var->debit = debit;
    journal_entry_dto_local_var->currency_id = currency_id;
    journal_entry_dto_local_var->tenant_id = tenant_id;
    journal_entry_dto_local_var->enrollment_id = enrollment_id;
    journal_entry_dto_local_var->journal_id = journal_id;
    journal_entry_dto_local_var->journal_name = journal_name;
    journal_entry_dto_local_var->journal_code = journal_code;
    journal_entry_dto_local_var->credit_account_id = credit_account_id;
    journal_entry_dto_local_var->credit_account_name = credit_account_name;
    journal_entry_dto_local_var->debit_account_id = debit_account_id;
    journal_entry_dto_local_var->debit_account_name = debit_account_name;
    journal_entry_dto_local_var->invoice_code = invoice_code;
    journal_entry_dto_local_var->parent_journal_entry_id = parent_journal_entry_id;
    journal_entry_dto_local_var->credit_amount = credit_amount;
    journal_entry_dto_local_var->debit_amount = debit_amount;

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
    if (journal_entry_dto->timestamp) {
        free(journal_entry_dto->timestamp);
        journal_entry_dto->timestamp = NULL;
    }
    if (journal_entry_dto->description) {
        free(journal_entry_dto->description);
        journal_entry_dto->description = NULL;
    }
    if (journal_entry_dto->date) {
        free(journal_entry_dto->date);
        journal_entry_dto->date = NULL;
    }
    if (journal_entry_dto->forex_rates_snapshot) {
        free(journal_entry_dto->forex_rates_snapshot);
        journal_entry_dto->forex_rates_snapshot = NULL;
    }
    if (journal_entry_dto->currency_id) {
        free(journal_entry_dto->currency_id);
        journal_entry_dto->currency_id = NULL;
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
    if (journal_entry_dto->credit_account_id) {
        free(journal_entry_dto->credit_account_id);
        journal_entry_dto->credit_account_id = NULL;
    }
    if (journal_entry_dto->credit_account_name) {
        free(journal_entry_dto->credit_account_name);
        journal_entry_dto->credit_account_name = NULL;
    }
    if (journal_entry_dto->debit_account_id) {
        free(journal_entry_dto->debit_account_id);
        journal_entry_dto->debit_account_id = NULL;
    }
    if (journal_entry_dto->debit_account_name) {
        free(journal_entry_dto->debit_account_name);
        journal_entry_dto->debit_account_name = NULL;
    }
    if (journal_entry_dto->invoice_code) {
        free(journal_entry_dto->invoice_code);
        journal_entry_dto->invoice_code = NULL;
    }
    if (journal_entry_dto->parent_journal_entry_id) {
        free(journal_entry_dto->parent_journal_entry_id);
        journal_entry_dto->parent_journal_entry_id = NULL;
    }
    if (journal_entry_dto->credit_amount) {
        money_free(journal_entry_dto->credit_amount);
        journal_entry_dto->credit_amount = NULL;
    }
    if (journal_entry_dto->debit_amount) {
        money_free(journal_entry_dto->debit_amount);
        journal_entry_dto->debit_amount = NULL;
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


    // journal_entry_dto->timestamp
    if(journal_entry_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", journal_entry_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // journal_entry_dto->group
    if(journal_entry_dto->group) {
    if(cJSON_AddBoolToObject(item, "group", journal_entry_dto->group) == NULL) {
    goto fail; //Bool
    }
    }


    // journal_entry_dto->opening
    if(journal_entry_dto->opening) {
    if(cJSON_AddBoolToObject(item, "opening", journal_entry_dto->opening) == NULL) {
    goto fail; //Bool
    }
    }


    // journal_entry_dto->description
    if(journal_entry_dto->description) {
    if(cJSON_AddStringToObject(item, "description", journal_entry_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // journal_entry_dto->date
    if(journal_entry_dto->date) {
    if(cJSON_AddStringToObject(item, "date", journal_entry_dto->date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // journal_entry_dto->forex_rates_snapshot
    if(journal_entry_dto->forex_rates_snapshot) {
    if(cJSON_AddStringToObject(item, "forexRatesSnapshot", journal_entry_dto->forex_rates_snapshot) == NULL) {
    goto fail; //String
    }
    }


    // journal_entry_dto->forex_rate
    if(journal_entry_dto->forex_rate) {
    if(cJSON_AddNumberToObject(item, "forexRate", journal_entry_dto->forex_rate) == NULL) {
    goto fail; //Numeric
    }
    }


    // journal_entry_dto->credit
    if(journal_entry_dto->credit) {
    if(cJSON_AddNumberToObject(item, "credit", journal_entry_dto->credit) == NULL) {
    goto fail; //Numeric
    }
    }


    // journal_entry_dto->debit
    if(journal_entry_dto->debit) {
    if(cJSON_AddNumberToObject(item, "debit", journal_entry_dto->debit) == NULL) {
    goto fail; //Numeric
    }
    }


    // journal_entry_dto->currency_id
    if(journal_entry_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", journal_entry_dto->currency_id) == NULL) {
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


    // journal_entry_dto->credit_account_id
    if(journal_entry_dto->credit_account_id) {
    if(cJSON_AddStringToObject(item, "creditAccountId", journal_entry_dto->credit_account_id) == NULL) {
    goto fail; //String
    }
    }


    // journal_entry_dto->credit_account_name
    if(journal_entry_dto->credit_account_name) {
    if(cJSON_AddStringToObject(item, "creditAccountName", journal_entry_dto->credit_account_name) == NULL) {
    goto fail; //String
    }
    }


    // journal_entry_dto->debit_account_id
    if(journal_entry_dto->debit_account_id) {
    if(cJSON_AddStringToObject(item, "debitAccountId", journal_entry_dto->debit_account_id) == NULL) {
    goto fail; //String
    }
    }


    // journal_entry_dto->debit_account_name
    if(journal_entry_dto->debit_account_name) {
    if(cJSON_AddStringToObject(item, "debitAccountName", journal_entry_dto->debit_account_name) == NULL) {
    goto fail; //String
    }
    }


    // journal_entry_dto->invoice_code
    if(journal_entry_dto->invoice_code) {
    if(cJSON_AddStringToObject(item, "invoiceCode", journal_entry_dto->invoice_code) == NULL) {
    goto fail; //String
    }
    }


    // journal_entry_dto->parent_journal_entry_id
    if(journal_entry_dto->parent_journal_entry_id) {
    if(cJSON_AddStringToObject(item, "parentJournalEntryId", journal_entry_dto->parent_journal_entry_id) == NULL) {
    goto fail; //String
    }
    }


    // journal_entry_dto->credit_amount
    if(journal_entry_dto->credit_amount) {
    cJSON *credit_amount_local_JSON = money_convertToJSON(journal_entry_dto->credit_amount);
    if(credit_amount_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "creditAmount", credit_amount_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // journal_entry_dto->debit_amount
    if(journal_entry_dto->debit_amount) {
    cJSON *debit_amount_local_JSON = money_convertToJSON(journal_entry_dto->debit_amount);
    if(debit_amount_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "debitAmount", debit_amount_local_JSON);
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

    // define the local variable for journal_entry_dto->credit_amount
    money_t *credit_amount_local_nonprim = NULL;

    // define the local variable for journal_entry_dto->debit_amount
    money_t *debit_amount_local_nonprim = NULL;

    // journal_entry_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(journal_entry_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
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

    // journal_entry_dto->group
    cJSON *group = cJSON_GetObjectItemCaseSensitive(journal_entry_dtoJSON, "group");
    if (group) { 
    if(!cJSON_IsBool(group))
    {
    goto end; //Bool
    }
    }

    // journal_entry_dto->opening
    cJSON *opening = cJSON_GetObjectItemCaseSensitive(journal_entry_dtoJSON, "opening");
    if (opening) { 
    if(!cJSON_IsBool(opening))
    {
    goto end; //Bool
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

    // journal_entry_dto->date
    cJSON *date = cJSON_GetObjectItemCaseSensitive(journal_entry_dtoJSON, "date");
    if (date) { 
    if(!cJSON_IsString(date) && !cJSON_IsNull(date))
    {
    goto end; //DateTime
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

    // journal_entry_dto->forex_rate
    cJSON *forex_rate = cJSON_GetObjectItemCaseSensitive(journal_entry_dtoJSON, "forexRate");
    if (forex_rate) { 
    if(!cJSON_IsNumber(forex_rate))
    {
    goto end; //Numeric
    }
    }

    // journal_entry_dto->credit
    cJSON *credit = cJSON_GetObjectItemCaseSensitive(journal_entry_dtoJSON, "credit");
    if (credit) { 
    if(!cJSON_IsNumber(credit))
    {
    goto end; //Numeric
    }
    }

    // journal_entry_dto->debit
    cJSON *debit = cJSON_GetObjectItemCaseSensitive(journal_entry_dtoJSON, "debit");
    if (debit) { 
    if(!cJSON_IsNumber(debit))
    {
    goto end; //Numeric
    }
    }

    // journal_entry_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(journal_entry_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
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

    // journal_entry_dto->credit_account_id
    cJSON *credit_account_id = cJSON_GetObjectItemCaseSensitive(journal_entry_dtoJSON, "creditAccountId");
    if (credit_account_id) { 
    if(!cJSON_IsString(credit_account_id) && !cJSON_IsNull(credit_account_id))
    {
    goto end; //String
    }
    }

    // journal_entry_dto->credit_account_name
    cJSON *credit_account_name = cJSON_GetObjectItemCaseSensitive(journal_entry_dtoJSON, "creditAccountName");
    if (credit_account_name) { 
    if(!cJSON_IsString(credit_account_name) && !cJSON_IsNull(credit_account_name))
    {
    goto end; //String
    }
    }

    // journal_entry_dto->debit_account_id
    cJSON *debit_account_id = cJSON_GetObjectItemCaseSensitive(journal_entry_dtoJSON, "debitAccountId");
    if (debit_account_id) { 
    if(!cJSON_IsString(debit_account_id) && !cJSON_IsNull(debit_account_id))
    {
    goto end; //String
    }
    }

    // journal_entry_dto->debit_account_name
    cJSON *debit_account_name = cJSON_GetObjectItemCaseSensitive(journal_entry_dtoJSON, "debitAccountName");
    if (debit_account_name) { 
    if(!cJSON_IsString(debit_account_name) && !cJSON_IsNull(debit_account_name))
    {
    goto end; //String
    }
    }

    // journal_entry_dto->invoice_code
    cJSON *invoice_code = cJSON_GetObjectItemCaseSensitive(journal_entry_dtoJSON, "invoiceCode");
    if (invoice_code) { 
    if(!cJSON_IsString(invoice_code) && !cJSON_IsNull(invoice_code))
    {
    goto end; //String
    }
    }

    // journal_entry_dto->parent_journal_entry_id
    cJSON *parent_journal_entry_id = cJSON_GetObjectItemCaseSensitive(journal_entry_dtoJSON, "parentJournalEntryId");
    if (parent_journal_entry_id) { 
    if(!cJSON_IsString(parent_journal_entry_id) && !cJSON_IsNull(parent_journal_entry_id))
    {
    goto end; //String
    }
    }

    // journal_entry_dto->credit_amount
    cJSON *credit_amount = cJSON_GetObjectItemCaseSensitive(journal_entry_dtoJSON, "creditAmount");
    if (credit_amount) { 
    credit_amount_local_nonprim = money_parseFromJSON(credit_amount); //nonprimitive
    }

    // journal_entry_dto->debit_amount
    cJSON *debit_amount = cJSON_GetObjectItemCaseSensitive(journal_entry_dtoJSON, "debitAmount");
    if (debit_amount) { 
    debit_amount_local_nonprim = money_parseFromJSON(debit_amount); //nonprimitive
    }


    journal_entry_dto_local_var = journal_entry_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        group ? group->valueint : 0,
        opening ? opening->valueint : 0,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        date && !cJSON_IsNull(date) ? strdup(date->valuestring) : NULL,
        forex_rates_snapshot && !cJSON_IsNull(forex_rates_snapshot) ? strdup(forex_rates_snapshot->valuestring) : NULL,
        forex_rate ? forex_rate->valuedouble : 0,
        credit ? credit->valuedouble : 0,
        debit ? debit->valuedouble : 0,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        journal_id && !cJSON_IsNull(journal_id) ? strdup(journal_id->valuestring) : NULL,
        journal_name && !cJSON_IsNull(journal_name) ? strdup(journal_name->valuestring) : NULL,
        journal_code && !cJSON_IsNull(journal_code) ? strdup(journal_code->valuestring) : NULL,
        credit_account_id && !cJSON_IsNull(credit_account_id) ? strdup(credit_account_id->valuestring) : NULL,
        credit_account_name && !cJSON_IsNull(credit_account_name) ? strdup(credit_account_name->valuestring) : NULL,
        debit_account_id && !cJSON_IsNull(debit_account_id) ? strdup(debit_account_id->valuestring) : NULL,
        debit_account_name && !cJSON_IsNull(debit_account_name) ? strdup(debit_account_name->valuestring) : NULL,
        invoice_code && !cJSON_IsNull(invoice_code) ? strdup(invoice_code->valuestring) : NULL,
        parent_journal_entry_id && !cJSON_IsNull(parent_journal_entry_id) ? strdup(parent_journal_entry_id->valuestring) : NULL,
        credit_amount ? credit_amount_local_nonprim : NULL,
        debit_amount ? debit_amount_local_nonprim : NULL
        );

    return journal_entry_dto_local_var;
end:
    if (credit_amount_local_nonprim) {
        money_free(credit_amount_local_nonprim);
        credit_amount_local_nonprim = NULL;
    }
    if (debit_amount_local_nonprim) {
        money_free(debit_amount_local_nonprim);
        debit_amount_local_nonprim = NULL;
    }
    return NULL;

}
