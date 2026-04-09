#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "accounting_entry_dto.h"


char* accounting_entry_dto_accounting_entry_type_ToString(accountingservice_accounting_entry_dto_ACCOUNTINGENTRYTYPE_e accounting_entry_type) {
    char* accounting_entry_typeArray[] =  { "NULL", "None", "Debit", "Credit" };
    return accounting_entry_typeArray[accounting_entry_type];
}

accountingservice_accounting_entry_dto_ACCOUNTINGENTRYTYPE_e accounting_entry_dto_accounting_entry_type_FromString(char* accounting_entry_type){
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

accounting_entry_dto_t *accounting_entry_dto_create(
    char *id,
    char *timestamp,
    double debit,
    double credit,
    char *description,
    double forex_rate,
    char *account_id,
    char *tenant_id,
    char *date,
    char *enrollment_id,
    char *currency_id,
    char *debit_account_id,
    char *credit_account_id,
    char *journal_entry_id,
    char *debit_account_name,
    char *credit_account_name,
    accountingservice_accounting_entry_dto_ACCOUNTINGENTRYTYPE_e accounting_entry_type,
    money_t *debit_amount,
    money_t *credit_amount
    ) {
    accounting_entry_dto_t *accounting_entry_dto_local_var = malloc(sizeof(accounting_entry_dto_t));
    if (!accounting_entry_dto_local_var) {
        return NULL;
    }
    accounting_entry_dto_local_var->id = id;
    accounting_entry_dto_local_var->timestamp = timestamp;
    accounting_entry_dto_local_var->debit = debit;
    accounting_entry_dto_local_var->credit = credit;
    accounting_entry_dto_local_var->description = description;
    accounting_entry_dto_local_var->forex_rate = forex_rate;
    accounting_entry_dto_local_var->account_id = account_id;
    accounting_entry_dto_local_var->tenant_id = tenant_id;
    accounting_entry_dto_local_var->date = date;
    accounting_entry_dto_local_var->enrollment_id = enrollment_id;
    accounting_entry_dto_local_var->currency_id = currency_id;
    accounting_entry_dto_local_var->debit_account_id = debit_account_id;
    accounting_entry_dto_local_var->credit_account_id = credit_account_id;
    accounting_entry_dto_local_var->journal_entry_id = journal_entry_id;
    accounting_entry_dto_local_var->debit_account_name = debit_account_name;
    accounting_entry_dto_local_var->credit_account_name = credit_account_name;
    accounting_entry_dto_local_var->accounting_entry_type = accounting_entry_type;
    accounting_entry_dto_local_var->debit_amount = debit_amount;
    accounting_entry_dto_local_var->credit_amount = credit_amount;

    return accounting_entry_dto_local_var;
}


void accounting_entry_dto_free(accounting_entry_dto_t *accounting_entry_dto) {
    if(NULL == accounting_entry_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (accounting_entry_dto->id) {
        free(accounting_entry_dto->id);
        accounting_entry_dto->id = NULL;
    }
    if (accounting_entry_dto->timestamp) {
        free(accounting_entry_dto->timestamp);
        accounting_entry_dto->timestamp = NULL;
    }
    if (accounting_entry_dto->description) {
        free(accounting_entry_dto->description);
        accounting_entry_dto->description = NULL;
    }
    if (accounting_entry_dto->account_id) {
        free(accounting_entry_dto->account_id);
        accounting_entry_dto->account_id = NULL;
    }
    if (accounting_entry_dto->tenant_id) {
        free(accounting_entry_dto->tenant_id);
        accounting_entry_dto->tenant_id = NULL;
    }
    if (accounting_entry_dto->date) {
        free(accounting_entry_dto->date);
        accounting_entry_dto->date = NULL;
    }
    if (accounting_entry_dto->enrollment_id) {
        free(accounting_entry_dto->enrollment_id);
        accounting_entry_dto->enrollment_id = NULL;
    }
    if (accounting_entry_dto->currency_id) {
        free(accounting_entry_dto->currency_id);
        accounting_entry_dto->currency_id = NULL;
    }
    if (accounting_entry_dto->debit_account_id) {
        free(accounting_entry_dto->debit_account_id);
        accounting_entry_dto->debit_account_id = NULL;
    }
    if (accounting_entry_dto->credit_account_id) {
        free(accounting_entry_dto->credit_account_id);
        accounting_entry_dto->credit_account_id = NULL;
    }
    if (accounting_entry_dto->journal_entry_id) {
        free(accounting_entry_dto->journal_entry_id);
        accounting_entry_dto->journal_entry_id = NULL;
    }
    if (accounting_entry_dto->debit_account_name) {
        free(accounting_entry_dto->debit_account_name);
        accounting_entry_dto->debit_account_name = NULL;
    }
    if (accounting_entry_dto->credit_account_name) {
        free(accounting_entry_dto->credit_account_name);
        accounting_entry_dto->credit_account_name = NULL;
    }
    if (accounting_entry_dto->debit_amount) {
        money_free(accounting_entry_dto->debit_amount);
        accounting_entry_dto->debit_amount = NULL;
    }
    if (accounting_entry_dto->credit_amount) {
        money_free(accounting_entry_dto->credit_amount);
        accounting_entry_dto->credit_amount = NULL;
    }
    free(accounting_entry_dto);
}

cJSON *accounting_entry_dto_convertToJSON(accounting_entry_dto_t *accounting_entry_dto) {
    cJSON *item = cJSON_CreateObject();

    // accounting_entry_dto->id
    if(accounting_entry_dto->id) {
    if(cJSON_AddStringToObject(item, "id", accounting_entry_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // accounting_entry_dto->timestamp
    if(accounting_entry_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", accounting_entry_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // accounting_entry_dto->debit
    if(accounting_entry_dto->debit) {
    if(cJSON_AddNumberToObject(item, "debit", accounting_entry_dto->debit) == NULL) {
    goto fail; //Numeric
    }
    }


    // accounting_entry_dto->credit
    if(accounting_entry_dto->credit) {
    if(cJSON_AddNumberToObject(item, "credit", accounting_entry_dto->credit) == NULL) {
    goto fail; //Numeric
    }
    }


    // accounting_entry_dto->description
    if(accounting_entry_dto->description) {
    if(cJSON_AddStringToObject(item, "description", accounting_entry_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // accounting_entry_dto->forex_rate
    if(accounting_entry_dto->forex_rate) {
    if(cJSON_AddNumberToObject(item, "forexRate", accounting_entry_dto->forex_rate) == NULL) {
    goto fail; //Numeric
    }
    }


    // accounting_entry_dto->account_id
    if(accounting_entry_dto->account_id) {
    if(cJSON_AddStringToObject(item, "accountId", accounting_entry_dto->account_id) == NULL) {
    goto fail; //String
    }
    }


    // accounting_entry_dto->tenant_id
    if(accounting_entry_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", accounting_entry_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // accounting_entry_dto->date
    if(accounting_entry_dto->date) {
    if(cJSON_AddStringToObject(item, "date", accounting_entry_dto->date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // accounting_entry_dto->enrollment_id
    if(accounting_entry_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", accounting_entry_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // accounting_entry_dto->currency_id
    if(accounting_entry_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", accounting_entry_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // accounting_entry_dto->debit_account_id
    if(accounting_entry_dto->debit_account_id) {
    if(cJSON_AddStringToObject(item, "debitAccountId", accounting_entry_dto->debit_account_id) == NULL) {
    goto fail; //String
    }
    }


    // accounting_entry_dto->credit_account_id
    if(accounting_entry_dto->credit_account_id) {
    if(cJSON_AddStringToObject(item, "creditAccountId", accounting_entry_dto->credit_account_id) == NULL) {
    goto fail; //String
    }
    }


    // accounting_entry_dto->journal_entry_id
    if(accounting_entry_dto->journal_entry_id) {
    if(cJSON_AddStringToObject(item, "journalEntryId", accounting_entry_dto->journal_entry_id) == NULL) {
    goto fail; //String
    }
    }


    // accounting_entry_dto->debit_account_name
    if(accounting_entry_dto->debit_account_name) {
    if(cJSON_AddStringToObject(item, "debitAccountName", accounting_entry_dto->debit_account_name) == NULL) {
    goto fail; //String
    }
    }


    // accounting_entry_dto->credit_account_name
    if(accounting_entry_dto->credit_account_name) {
    if(cJSON_AddStringToObject(item, "creditAccountName", accounting_entry_dto->credit_account_name) == NULL) {
    goto fail; //String
    }
    }


    // accounting_entry_dto->accounting_entry_type
    if(accounting_entry_dto->accounting_entry_type != accountingservice_accounting_entry_dto_ACCOUNTINGENTRYTYPE_NULL) {
    if(cJSON_AddStringToObject(item, "accountingEntryType", accounting_entry_typeaccounting_entry_dto_ToString(accounting_entry_dto->accounting_entry_type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // accounting_entry_dto->debit_amount
    if(accounting_entry_dto->debit_amount) {
    cJSON *debit_amount_local_JSON = money_convertToJSON(accounting_entry_dto->debit_amount);
    if(debit_amount_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "debitAmount", debit_amount_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // accounting_entry_dto->credit_amount
    if(accounting_entry_dto->credit_amount) {
    cJSON *credit_amount_local_JSON = money_convertToJSON(accounting_entry_dto->credit_amount);
    if(credit_amount_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "creditAmount", credit_amount_local_JSON);
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

accounting_entry_dto_t *accounting_entry_dto_parseFromJSON(cJSON *accounting_entry_dtoJSON){

    accounting_entry_dto_t *accounting_entry_dto_local_var = NULL;

    // define the local variable for accounting_entry_dto->debit_amount
    money_t *debit_amount_local_nonprim = NULL;

    // define the local variable for accounting_entry_dto->credit_amount
    money_t *credit_amount_local_nonprim = NULL;

    // accounting_entry_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(accounting_entry_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // accounting_entry_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(accounting_entry_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // accounting_entry_dto->debit
    cJSON *debit = cJSON_GetObjectItemCaseSensitive(accounting_entry_dtoJSON, "debit");
    if (debit) { 
    if(!cJSON_IsNumber(debit))
    {
    goto end; //Numeric
    }
    }

    // accounting_entry_dto->credit
    cJSON *credit = cJSON_GetObjectItemCaseSensitive(accounting_entry_dtoJSON, "credit");
    if (credit) { 
    if(!cJSON_IsNumber(credit))
    {
    goto end; //Numeric
    }
    }

    // accounting_entry_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(accounting_entry_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // accounting_entry_dto->forex_rate
    cJSON *forex_rate = cJSON_GetObjectItemCaseSensitive(accounting_entry_dtoJSON, "forexRate");
    if (forex_rate) { 
    if(!cJSON_IsNumber(forex_rate))
    {
    goto end; //Numeric
    }
    }

    // accounting_entry_dto->account_id
    cJSON *account_id = cJSON_GetObjectItemCaseSensitive(accounting_entry_dtoJSON, "accountId");
    if (account_id) { 
    if(!cJSON_IsString(account_id) && !cJSON_IsNull(account_id))
    {
    goto end; //String
    }
    }

    // accounting_entry_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(accounting_entry_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // accounting_entry_dto->date
    cJSON *date = cJSON_GetObjectItemCaseSensitive(accounting_entry_dtoJSON, "date");
    if (date) { 
    if(!cJSON_IsString(date) && !cJSON_IsNull(date))
    {
    goto end; //DateTime
    }
    }

    // accounting_entry_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(accounting_entry_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // accounting_entry_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(accounting_entry_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // accounting_entry_dto->debit_account_id
    cJSON *debit_account_id = cJSON_GetObjectItemCaseSensitive(accounting_entry_dtoJSON, "debitAccountId");
    if (debit_account_id) { 
    if(!cJSON_IsString(debit_account_id) && !cJSON_IsNull(debit_account_id))
    {
    goto end; //String
    }
    }

    // accounting_entry_dto->credit_account_id
    cJSON *credit_account_id = cJSON_GetObjectItemCaseSensitive(accounting_entry_dtoJSON, "creditAccountId");
    if (credit_account_id) { 
    if(!cJSON_IsString(credit_account_id) && !cJSON_IsNull(credit_account_id))
    {
    goto end; //String
    }
    }

    // accounting_entry_dto->journal_entry_id
    cJSON *journal_entry_id = cJSON_GetObjectItemCaseSensitive(accounting_entry_dtoJSON, "journalEntryId");
    if (journal_entry_id) { 
    if(!cJSON_IsString(journal_entry_id) && !cJSON_IsNull(journal_entry_id))
    {
    goto end; //String
    }
    }

    // accounting_entry_dto->debit_account_name
    cJSON *debit_account_name = cJSON_GetObjectItemCaseSensitive(accounting_entry_dtoJSON, "debitAccountName");
    if (debit_account_name) { 
    if(!cJSON_IsString(debit_account_name) && !cJSON_IsNull(debit_account_name))
    {
    goto end; //String
    }
    }

    // accounting_entry_dto->credit_account_name
    cJSON *credit_account_name = cJSON_GetObjectItemCaseSensitive(accounting_entry_dtoJSON, "creditAccountName");
    if (credit_account_name) { 
    if(!cJSON_IsString(credit_account_name) && !cJSON_IsNull(credit_account_name))
    {
    goto end; //String
    }
    }

    // accounting_entry_dto->accounting_entry_type
    cJSON *accounting_entry_type = cJSON_GetObjectItemCaseSensitive(accounting_entry_dtoJSON, "accountingEntryType");
    accountingservice_accounting_entry_dto_ACCOUNTINGENTRYTYPE_e accounting_entry_typeVariable;
    if (accounting_entry_type) { 
    if(!cJSON_IsString(accounting_entry_type))
    {
    goto end; //Enum
    }
    accounting_entry_typeVariable = accounting_entry_dto_accounting_entry_type_FromString(accounting_entry_type->valuestring);
    }

    // accounting_entry_dto->debit_amount
    cJSON *debit_amount = cJSON_GetObjectItemCaseSensitive(accounting_entry_dtoJSON, "debitAmount");
    if (debit_amount) { 
    debit_amount_local_nonprim = money_parseFromJSON(debit_amount); //nonprimitive
    }

    // accounting_entry_dto->credit_amount
    cJSON *credit_amount = cJSON_GetObjectItemCaseSensitive(accounting_entry_dtoJSON, "creditAmount");
    if (credit_amount) { 
    credit_amount_local_nonprim = money_parseFromJSON(credit_amount); //nonprimitive
    }


    accounting_entry_dto_local_var = accounting_entry_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        debit ? debit->valuedouble : 0,
        credit ? credit->valuedouble : 0,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        forex_rate ? forex_rate->valuedouble : 0,
        account_id && !cJSON_IsNull(account_id) ? strdup(account_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        date && !cJSON_IsNull(date) ? strdup(date->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        debit_account_id && !cJSON_IsNull(debit_account_id) ? strdup(debit_account_id->valuestring) : NULL,
        credit_account_id && !cJSON_IsNull(credit_account_id) ? strdup(credit_account_id->valuestring) : NULL,
        journal_entry_id && !cJSON_IsNull(journal_entry_id) ? strdup(journal_entry_id->valuestring) : NULL,
        debit_account_name && !cJSON_IsNull(debit_account_name) ? strdup(debit_account_name->valuestring) : NULL,
        credit_account_name && !cJSON_IsNull(credit_account_name) ? strdup(credit_account_name->valuestring) : NULL,
        accounting_entry_type ? accounting_entry_typeVariable : accountingservice_accounting_entry_dto_ACCOUNTINGENTRYTYPE_NULL,
        debit_amount ? debit_amount_local_nonprim : NULL,
        credit_amount ? credit_amount_local_nonprim : NULL
        );

    return accounting_entry_dto_local_var;
end:
    if (debit_amount_local_nonprim) {
        money_free(debit_amount_local_nonprim);
        debit_amount_local_nonprim = NULL;
    }
    if (credit_amount_local_nonprim) {
        money_free(credit_amount_local_nonprim);
        credit_amount_local_nonprim = NULL;
    }
    return NULL;

}
