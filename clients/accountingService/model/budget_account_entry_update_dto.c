#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "budget_account_entry_update_dto.h"


char* budget_account_entry_update_dto_accounting_entry_type_ToString(accountingservice_budget_account_entry_update_dto_ACCOUNTINGENTRYTYPE_e accounting_entry_type) {
    char* accounting_entry_typeArray[] =  { "NULL", "None", "Debit", "Credit" };
    return accounting_entry_typeArray[accounting_entry_type];
}

accountingservice_budget_account_entry_update_dto_ACCOUNTINGENTRYTYPE_e budget_account_entry_update_dto_accounting_entry_type_FromString(char* accounting_entry_type){
    int stringToReturn = 0;
    char *accounting_entry_typeArray[] =  { "NULL", "None", "Debit", "Credit" };
    size_t sizeofArray = sizeof(accounting_entry_typeArray) / sizeof(accounting_entry_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(accounting_entry_type, accounting_entry_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

budget_account_entry_update_dto_t *budget_account_entry_update_dto_create(
    char *tenant_id,
    char *enrollment_id,
    char *description,
    double amount,
    char *date,
    char *currency_id,
    char *debit_account_id,
    char *credit_account_id,
    char *journal_entry_id,
    accountingservice_budget_account_entry_update_dto_ACCOUNTINGENTRYTYPE_e accounting_entry_type,
    char *budget_id
    ) {
    budget_account_entry_update_dto_t *budget_account_entry_update_dto_local_var = malloc(sizeof(budget_account_entry_update_dto_t));
    if (!budget_account_entry_update_dto_local_var) {
        return NULL;
    }
    budget_account_entry_update_dto_local_var->tenant_id = tenant_id;
    budget_account_entry_update_dto_local_var->enrollment_id = enrollment_id;
    budget_account_entry_update_dto_local_var->description = description;
    budget_account_entry_update_dto_local_var->amount = amount;
    budget_account_entry_update_dto_local_var->date = date;
    budget_account_entry_update_dto_local_var->currency_id = currency_id;
    budget_account_entry_update_dto_local_var->debit_account_id = debit_account_id;
    budget_account_entry_update_dto_local_var->credit_account_id = credit_account_id;
    budget_account_entry_update_dto_local_var->journal_entry_id = journal_entry_id;
    budget_account_entry_update_dto_local_var->accounting_entry_type = accounting_entry_type;
    budget_account_entry_update_dto_local_var->budget_id = budget_id;

    return budget_account_entry_update_dto_local_var;
}


void budget_account_entry_update_dto_free(budget_account_entry_update_dto_t *budget_account_entry_update_dto) {
    if(NULL == budget_account_entry_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (budget_account_entry_update_dto->tenant_id) {
        free(budget_account_entry_update_dto->tenant_id);
        budget_account_entry_update_dto->tenant_id = NULL;
    }
    if (budget_account_entry_update_dto->enrollment_id) {
        free(budget_account_entry_update_dto->enrollment_id);
        budget_account_entry_update_dto->enrollment_id = NULL;
    }
    if (budget_account_entry_update_dto->description) {
        free(budget_account_entry_update_dto->description);
        budget_account_entry_update_dto->description = NULL;
    }
    if (budget_account_entry_update_dto->date) {
        free(budget_account_entry_update_dto->date);
        budget_account_entry_update_dto->date = NULL;
    }
    if (budget_account_entry_update_dto->currency_id) {
        free(budget_account_entry_update_dto->currency_id);
        budget_account_entry_update_dto->currency_id = NULL;
    }
    if (budget_account_entry_update_dto->debit_account_id) {
        free(budget_account_entry_update_dto->debit_account_id);
        budget_account_entry_update_dto->debit_account_id = NULL;
    }
    if (budget_account_entry_update_dto->credit_account_id) {
        free(budget_account_entry_update_dto->credit_account_id);
        budget_account_entry_update_dto->credit_account_id = NULL;
    }
    if (budget_account_entry_update_dto->journal_entry_id) {
        free(budget_account_entry_update_dto->journal_entry_id);
        budget_account_entry_update_dto->journal_entry_id = NULL;
    }
    if (budget_account_entry_update_dto->budget_id) {
        free(budget_account_entry_update_dto->budget_id);
        budget_account_entry_update_dto->budget_id = NULL;
    }
    free(budget_account_entry_update_dto);
}

cJSON *budget_account_entry_update_dto_convertToJSON(budget_account_entry_update_dto_t *budget_account_entry_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // budget_account_entry_update_dto->tenant_id
    if(budget_account_entry_update_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", budget_account_entry_update_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // budget_account_entry_update_dto->enrollment_id
    if(budget_account_entry_update_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", budget_account_entry_update_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // budget_account_entry_update_dto->description
    if(budget_account_entry_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", budget_account_entry_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // budget_account_entry_update_dto->amount
    if(budget_account_entry_update_dto->amount) {
    if(cJSON_AddNumberToObject(item, "amount", budget_account_entry_update_dto->amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // budget_account_entry_update_dto->date
    if(budget_account_entry_update_dto->date) {
    if(cJSON_AddStringToObject(item, "date", budget_account_entry_update_dto->date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // budget_account_entry_update_dto->currency_id
    if(budget_account_entry_update_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", budget_account_entry_update_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // budget_account_entry_update_dto->debit_account_id
    if(budget_account_entry_update_dto->debit_account_id) {
    if(cJSON_AddStringToObject(item, "debitAccountId", budget_account_entry_update_dto->debit_account_id) == NULL) {
    goto fail; //String
    }
    }


    // budget_account_entry_update_dto->credit_account_id
    if(budget_account_entry_update_dto->credit_account_id) {
    if(cJSON_AddStringToObject(item, "creditAccountId", budget_account_entry_update_dto->credit_account_id) == NULL) {
    goto fail; //String
    }
    }


    // budget_account_entry_update_dto->journal_entry_id
    if(budget_account_entry_update_dto->journal_entry_id) {
    if(cJSON_AddStringToObject(item, "journalEntryId", budget_account_entry_update_dto->journal_entry_id) == NULL) {
    goto fail; //String
    }
    }


    // budget_account_entry_update_dto->accounting_entry_type
    if(budget_account_entry_update_dto->accounting_entry_type != accountingservice_budget_account_entry_update_dto_ACCOUNTINGENTRYTYPE_NULL) {
    if(cJSON_AddStringToObject(item, "accountingEntryType", accounting_entry_typebudget_account_entry_update_dto_ToString(budget_account_entry_update_dto->accounting_entry_type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // budget_account_entry_update_dto->budget_id
    if(budget_account_entry_update_dto->budget_id) {
    if(cJSON_AddStringToObject(item, "budgetId", budget_account_entry_update_dto->budget_id) == NULL) {
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

budget_account_entry_update_dto_t *budget_account_entry_update_dto_parseFromJSON(cJSON *budget_account_entry_update_dtoJSON){

    budget_account_entry_update_dto_t *budget_account_entry_update_dto_local_var = NULL;

    // budget_account_entry_update_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(budget_account_entry_update_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // budget_account_entry_update_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(budget_account_entry_update_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // budget_account_entry_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(budget_account_entry_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // budget_account_entry_update_dto->amount
    cJSON *amount = cJSON_GetObjectItemCaseSensitive(budget_account_entry_update_dtoJSON, "amount");
    if (amount) { 
    if(!cJSON_IsNumber(amount))
    {
    goto end; //Numeric
    }
    }

    // budget_account_entry_update_dto->date
    cJSON *date = cJSON_GetObjectItemCaseSensitive(budget_account_entry_update_dtoJSON, "date");
    if (date) { 
    if(!cJSON_IsString(date) && !cJSON_IsNull(date))
    {
    goto end; //DateTime
    }
    }

    // budget_account_entry_update_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(budget_account_entry_update_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // budget_account_entry_update_dto->debit_account_id
    cJSON *debit_account_id = cJSON_GetObjectItemCaseSensitive(budget_account_entry_update_dtoJSON, "debitAccountId");
    if (debit_account_id) { 
    if(!cJSON_IsString(debit_account_id) && !cJSON_IsNull(debit_account_id))
    {
    goto end; //String
    }
    }

    // budget_account_entry_update_dto->credit_account_id
    cJSON *credit_account_id = cJSON_GetObjectItemCaseSensitive(budget_account_entry_update_dtoJSON, "creditAccountId");
    if (credit_account_id) { 
    if(!cJSON_IsString(credit_account_id) && !cJSON_IsNull(credit_account_id))
    {
    goto end; //String
    }
    }

    // budget_account_entry_update_dto->journal_entry_id
    cJSON *journal_entry_id = cJSON_GetObjectItemCaseSensitive(budget_account_entry_update_dtoJSON, "journalEntryId");
    if (journal_entry_id) { 
    if(!cJSON_IsString(journal_entry_id) && !cJSON_IsNull(journal_entry_id))
    {
    goto end; //String
    }
    }

    // budget_account_entry_update_dto->accounting_entry_type
    cJSON *accounting_entry_type = cJSON_GetObjectItemCaseSensitive(budget_account_entry_update_dtoJSON, "accountingEntryType");
    accountingservice_budget_account_entry_update_dto_ACCOUNTINGENTRYTYPE_e accounting_entry_typeVariable;
    if (accounting_entry_type) { 
    if(!cJSON_IsString(accounting_entry_type))
    {
    goto end; //Enum
    }
    accounting_entry_typeVariable = budget_account_entry_update_dto_accounting_entry_type_FromString(accounting_entry_type->valuestring);
    }

    // budget_account_entry_update_dto->budget_id
    cJSON *budget_id = cJSON_GetObjectItemCaseSensitive(budget_account_entry_update_dtoJSON, "budgetId");
    if (budget_id) { 
    if(!cJSON_IsString(budget_id) && !cJSON_IsNull(budget_id))
    {
    goto end; //String
    }
    }


    budget_account_entry_update_dto_local_var = budget_account_entry_update_dto_create (
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        amount ? amount->valuedouble : 0,
        date && !cJSON_IsNull(date) ? strdup(date->valuestring) : NULL,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        debit_account_id && !cJSON_IsNull(debit_account_id) ? strdup(debit_account_id->valuestring) : NULL,
        credit_account_id && !cJSON_IsNull(credit_account_id) ? strdup(credit_account_id->valuestring) : NULL,
        journal_entry_id && !cJSON_IsNull(journal_entry_id) ? strdup(journal_entry_id->valuestring) : NULL,
        accounting_entry_type ? accounting_entry_typeVariable : accountingservice_budget_account_entry_update_dto_ACCOUNTINGENTRYTYPE_NULL,
        budget_id && !cJSON_IsNull(budget_id) ? strdup(budget_id->valuestring) : NULL
        );

    return budget_account_entry_update_dto_local_var;
end:
    return NULL;

}
