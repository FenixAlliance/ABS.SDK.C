#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "accounting_entry_dto.h"


char* accounting_entry_dto_direction_ToString(accountingservice_accounting_entry_dto_DIRECTION_e direction) {
    char* directionArray[] =  { "NULL", "Debit", "Credit" };
    return directionArray[direction];
}

accountingservice_accounting_entry_dto_DIRECTION_e accounting_entry_dto_direction_FromString(char* direction){
    int stringToReturn = 0;
    char *directionArray[] =  { "NULL", "Debit", "Credit" };
    size_t sizeofArray = sizeof(directionArray) / sizeof(directionArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(direction, directionArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

accounting_entry_dto_t *accounting_entry_dto_create(
    char *id,
    char *tenant_id,
    char *enrollment_id,
    char *journal_entry_id,
    char *account_id,
    char *account_name,
    accountingservice_accounting_entry_dto_DIRECTION_e direction,
    char *description,
    double transaction_amount,
    char *transaction_currency_id,
    double functional_amount,
    char *functional_currency_id,
    double account_amount,
    char *account_currency_id,
    double reporting_amount_in_usd,
    double forex_rate,
    char *forex_rates_snapshot,
    char *cost_centre_id,
    char *project_id,
    char *timestamp,
    double debit,
    double credit,
    money_t *amount,
    money_t *amount_in_usd
    ) {
    accounting_entry_dto_t *accounting_entry_dto_local_var = malloc(sizeof(accounting_entry_dto_t));
    if (!accounting_entry_dto_local_var) {
        return NULL;
    }
    accounting_entry_dto_local_var->id = id;
    accounting_entry_dto_local_var->tenant_id = tenant_id;
    accounting_entry_dto_local_var->enrollment_id = enrollment_id;
    accounting_entry_dto_local_var->journal_entry_id = journal_entry_id;
    accounting_entry_dto_local_var->account_id = account_id;
    accounting_entry_dto_local_var->account_name = account_name;
    accounting_entry_dto_local_var->direction = direction;
    accounting_entry_dto_local_var->description = description;
    accounting_entry_dto_local_var->transaction_amount = transaction_amount;
    accounting_entry_dto_local_var->transaction_currency_id = transaction_currency_id;
    accounting_entry_dto_local_var->functional_amount = functional_amount;
    accounting_entry_dto_local_var->functional_currency_id = functional_currency_id;
    accounting_entry_dto_local_var->account_amount = account_amount;
    accounting_entry_dto_local_var->account_currency_id = account_currency_id;
    accounting_entry_dto_local_var->reporting_amount_in_usd = reporting_amount_in_usd;
    accounting_entry_dto_local_var->forex_rate = forex_rate;
    accounting_entry_dto_local_var->forex_rates_snapshot = forex_rates_snapshot;
    accounting_entry_dto_local_var->cost_centre_id = cost_centre_id;
    accounting_entry_dto_local_var->project_id = project_id;
    accounting_entry_dto_local_var->timestamp = timestamp;
    accounting_entry_dto_local_var->debit = debit;
    accounting_entry_dto_local_var->credit = credit;
    accounting_entry_dto_local_var->amount = amount;
    accounting_entry_dto_local_var->amount_in_usd = amount_in_usd;

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
    if (accounting_entry_dto->tenant_id) {
        free(accounting_entry_dto->tenant_id);
        accounting_entry_dto->tenant_id = NULL;
    }
    if (accounting_entry_dto->enrollment_id) {
        free(accounting_entry_dto->enrollment_id);
        accounting_entry_dto->enrollment_id = NULL;
    }
    if (accounting_entry_dto->journal_entry_id) {
        free(accounting_entry_dto->journal_entry_id);
        accounting_entry_dto->journal_entry_id = NULL;
    }
    if (accounting_entry_dto->account_id) {
        free(accounting_entry_dto->account_id);
        accounting_entry_dto->account_id = NULL;
    }
    if (accounting_entry_dto->account_name) {
        free(accounting_entry_dto->account_name);
        accounting_entry_dto->account_name = NULL;
    }
    if (accounting_entry_dto->description) {
        free(accounting_entry_dto->description);
        accounting_entry_dto->description = NULL;
    }
    if (accounting_entry_dto->transaction_currency_id) {
        free(accounting_entry_dto->transaction_currency_id);
        accounting_entry_dto->transaction_currency_id = NULL;
    }
    if (accounting_entry_dto->functional_currency_id) {
        free(accounting_entry_dto->functional_currency_id);
        accounting_entry_dto->functional_currency_id = NULL;
    }
    if (accounting_entry_dto->account_currency_id) {
        free(accounting_entry_dto->account_currency_id);
        accounting_entry_dto->account_currency_id = NULL;
    }
    if (accounting_entry_dto->forex_rates_snapshot) {
        free(accounting_entry_dto->forex_rates_snapshot);
        accounting_entry_dto->forex_rates_snapshot = NULL;
    }
    if (accounting_entry_dto->cost_centre_id) {
        free(accounting_entry_dto->cost_centre_id);
        accounting_entry_dto->cost_centre_id = NULL;
    }
    if (accounting_entry_dto->project_id) {
        free(accounting_entry_dto->project_id);
        accounting_entry_dto->project_id = NULL;
    }
    if (accounting_entry_dto->timestamp) {
        free(accounting_entry_dto->timestamp);
        accounting_entry_dto->timestamp = NULL;
    }
    if (accounting_entry_dto->amount) {
        money_free(accounting_entry_dto->amount);
        accounting_entry_dto->amount = NULL;
    }
    if (accounting_entry_dto->amount_in_usd) {
        money_free(accounting_entry_dto->amount_in_usd);
        accounting_entry_dto->amount_in_usd = NULL;
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


    // accounting_entry_dto->tenant_id
    if(accounting_entry_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", accounting_entry_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // accounting_entry_dto->enrollment_id
    if(accounting_entry_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", accounting_entry_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // accounting_entry_dto->journal_entry_id
    if(accounting_entry_dto->journal_entry_id) {
    if(cJSON_AddStringToObject(item, "journalEntryId", accounting_entry_dto->journal_entry_id) == NULL) {
    goto fail; //String
    }
    }


    // accounting_entry_dto->account_id
    if(accounting_entry_dto->account_id) {
    if(cJSON_AddStringToObject(item, "accountId", accounting_entry_dto->account_id) == NULL) {
    goto fail; //String
    }
    }


    // accounting_entry_dto->account_name
    if(accounting_entry_dto->account_name) {
    if(cJSON_AddStringToObject(item, "accountName", accounting_entry_dto->account_name) == NULL) {
    goto fail; //String
    }
    }


    // accounting_entry_dto->direction
    if(accounting_entry_dto->direction != accountingservice_accounting_entry_dto_DIRECTION_NULL) {
    if(cJSON_AddStringToObject(item, "direction", directionaccounting_entry_dto_ToString(accounting_entry_dto->direction)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // accounting_entry_dto->description
    if(accounting_entry_dto->description) {
    if(cJSON_AddStringToObject(item, "description", accounting_entry_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // accounting_entry_dto->transaction_amount
    if(accounting_entry_dto->transaction_amount) {
    if(cJSON_AddNumberToObject(item, "transactionAmount", accounting_entry_dto->transaction_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // accounting_entry_dto->transaction_currency_id
    if(accounting_entry_dto->transaction_currency_id) {
    if(cJSON_AddStringToObject(item, "transactionCurrencyId", accounting_entry_dto->transaction_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // accounting_entry_dto->functional_amount
    if(accounting_entry_dto->functional_amount) {
    if(cJSON_AddNumberToObject(item, "functionalAmount", accounting_entry_dto->functional_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // accounting_entry_dto->functional_currency_id
    if(accounting_entry_dto->functional_currency_id) {
    if(cJSON_AddStringToObject(item, "functionalCurrencyId", accounting_entry_dto->functional_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // accounting_entry_dto->account_amount
    if(accounting_entry_dto->account_amount) {
    if(cJSON_AddNumberToObject(item, "accountAmount", accounting_entry_dto->account_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // accounting_entry_dto->account_currency_id
    if(accounting_entry_dto->account_currency_id) {
    if(cJSON_AddStringToObject(item, "accountCurrencyId", accounting_entry_dto->account_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // accounting_entry_dto->reporting_amount_in_usd
    if(accounting_entry_dto->reporting_amount_in_usd) {
    if(cJSON_AddNumberToObject(item, "reportingAmountInUsd", accounting_entry_dto->reporting_amount_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // accounting_entry_dto->forex_rate
    if(accounting_entry_dto->forex_rate) {
    if(cJSON_AddNumberToObject(item, "forexRate", accounting_entry_dto->forex_rate) == NULL) {
    goto fail; //Numeric
    }
    }


    // accounting_entry_dto->forex_rates_snapshot
    if(accounting_entry_dto->forex_rates_snapshot) {
    if(cJSON_AddStringToObject(item, "forexRatesSnapshot", accounting_entry_dto->forex_rates_snapshot) == NULL) {
    goto fail; //String
    }
    }


    // accounting_entry_dto->cost_centre_id
    if(accounting_entry_dto->cost_centre_id) {
    if(cJSON_AddStringToObject(item, "costCentreId", accounting_entry_dto->cost_centre_id) == NULL) {
    goto fail; //String
    }
    }


    // accounting_entry_dto->project_id
    if(accounting_entry_dto->project_id) {
    if(cJSON_AddStringToObject(item, "projectId", accounting_entry_dto->project_id) == NULL) {
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


    // accounting_entry_dto->amount
    if(accounting_entry_dto->amount) {
    cJSON *amount_local_JSON = money_convertToJSON(accounting_entry_dto->amount);
    if(amount_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "amount", amount_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // accounting_entry_dto->amount_in_usd
    if(accounting_entry_dto->amount_in_usd) {
    cJSON *amount_in_usd_local_JSON = money_convertToJSON(accounting_entry_dto->amount_in_usd);
    if(amount_in_usd_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "amountInUsd", amount_in_usd_local_JSON);
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

    // define the local variable for accounting_entry_dto->amount
    money_t *amount_local_nonprim = NULL;

    // define the local variable for accounting_entry_dto->amount_in_usd
    money_t *amount_in_usd_local_nonprim = NULL;

    // accounting_entry_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(accounting_entry_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
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

    // accounting_entry_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(accounting_entry_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
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

    // accounting_entry_dto->account_id
    cJSON *account_id = cJSON_GetObjectItemCaseSensitive(accounting_entry_dtoJSON, "accountId");
    if (account_id) { 
    if(!cJSON_IsString(account_id) && !cJSON_IsNull(account_id))
    {
    goto end; //String
    }
    }

    // accounting_entry_dto->account_name
    cJSON *account_name = cJSON_GetObjectItemCaseSensitive(accounting_entry_dtoJSON, "accountName");
    if (account_name) { 
    if(!cJSON_IsString(account_name) && !cJSON_IsNull(account_name))
    {
    goto end; //String
    }
    }

    // accounting_entry_dto->direction
    cJSON *direction = cJSON_GetObjectItemCaseSensitive(accounting_entry_dtoJSON, "direction");
    accountingservice_accounting_entry_dto_DIRECTION_e directionVariable;
    if (direction) { 
    if(!cJSON_IsString(direction))
    {
    goto end; //Enum
    }
    directionVariable = accounting_entry_dto_direction_FromString(direction->valuestring);
    }

    // accounting_entry_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(accounting_entry_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // accounting_entry_dto->transaction_amount
    cJSON *transaction_amount = cJSON_GetObjectItemCaseSensitive(accounting_entry_dtoJSON, "transactionAmount");
    if (transaction_amount) { 
    if(!cJSON_IsNumber(transaction_amount))
    {
    goto end; //Numeric
    }
    }

    // accounting_entry_dto->transaction_currency_id
    cJSON *transaction_currency_id = cJSON_GetObjectItemCaseSensitive(accounting_entry_dtoJSON, "transactionCurrencyId");
    if (transaction_currency_id) { 
    if(!cJSON_IsString(transaction_currency_id) && !cJSON_IsNull(transaction_currency_id))
    {
    goto end; //String
    }
    }

    // accounting_entry_dto->functional_amount
    cJSON *functional_amount = cJSON_GetObjectItemCaseSensitive(accounting_entry_dtoJSON, "functionalAmount");
    if (functional_amount) { 
    if(!cJSON_IsNumber(functional_amount))
    {
    goto end; //Numeric
    }
    }

    // accounting_entry_dto->functional_currency_id
    cJSON *functional_currency_id = cJSON_GetObjectItemCaseSensitive(accounting_entry_dtoJSON, "functionalCurrencyId");
    if (functional_currency_id) { 
    if(!cJSON_IsString(functional_currency_id) && !cJSON_IsNull(functional_currency_id))
    {
    goto end; //String
    }
    }

    // accounting_entry_dto->account_amount
    cJSON *account_amount = cJSON_GetObjectItemCaseSensitive(accounting_entry_dtoJSON, "accountAmount");
    if (account_amount) { 
    if(!cJSON_IsNumber(account_amount))
    {
    goto end; //Numeric
    }
    }

    // accounting_entry_dto->account_currency_id
    cJSON *account_currency_id = cJSON_GetObjectItemCaseSensitive(accounting_entry_dtoJSON, "accountCurrencyId");
    if (account_currency_id) { 
    if(!cJSON_IsString(account_currency_id) && !cJSON_IsNull(account_currency_id))
    {
    goto end; //String
    }
    }

    // accounting_entry_dto->reporting_amount_in_usd
    cJSON *reporting_amount_in_usd = cJSON_GetObjectItemCaseSensitive(accounting_entry_dtoJSON, "reportingAmountInUsd");
    if (reporting_amount_in_usd) { 
    if(!cJSON_IsNumber(reporting_amount_in_usd))
    {
    goto end; //Numeric
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

    // accounting_entry_dto->forex_rates_snapshot
    cJSON *forex_rates_snapshot = cJSON_GetObjectItemCaseSensitive(accounting_entry_dtoJSON, "forexRatesSnapshot");
    if (forex_rates_snapshot) { 
    if(!cJSON_IsString(forex_rates_snapshot) && !cJSON_IsNull(forex_rates_snapshot))
    {
    goto end; //String
    }
    }

    // accounting_entry_dto->cost_centre_id
    cJSON *cost_centre_id = cJSON_GetObjectItemCaseSensitive(accounting_entry_dtoJSON, "costCentreId");
    if (cost_centre_id) { 
    if(!cJSON_IsString(cost_centre_id) && !cJSON_IsNull(cost_centre_id))
    {
    goto end; //String
    }
    }

    // accounting_entry_dto->project_id
    cJSON *project_id = cJSON_GetObjectItemCaseSensitive(accounting_entry_dtoJSON, "projectId");
    if (project_id) { 
    if(!cJSON_IsString(project_id) && !cJSON_IsNull(project_id))
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

    // accounting_entry_dto->amount
    cJSON *amount = cJSON_GetObjectItemCaseSensitive(accounting_entry_dtoJSON, "amount");
    if (amount) { 
    amount_local_nonprim = money_parseFromJSON(amount); //nonprimitive
    }

    // accounting_entry_dto->amount_in_usd
    cJSON *amount_in_usd = cJSON_GetObjectItemCaseSensitive(accounting_entry_dtoJSON, "amountInUsd");
    if (amount_in_usd) { 
    amount_in_usd_local_nonprim = money_parseFromJSON(amount_in_usd); //nonprimitive
    }


    accounting_entry_dto_local_var = accounting_entry_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        journal_entry_id && !cJSON_IsNull(journal_entry_id) ? strdup(journal_entry_id->valuestring) : NULL,
        account_id && !cJSON_IsNull(account_id) ? strdup(account_id->valuestring) : NULL,
        account_name && !cJSON_IsNull(account_name) ? strdup(account_name->valuestring) : NULL,
        direction ? directionVariable : accountingservice_accounting_entry_dto_DIRECTION_NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        transaction_amount ? transaction_amount->valuedouble : 0,
        transaction_currency_id && !cJSON_IsNull(transaction_currency_id) ? strdup(transaction_currency_id->valuestring) : NULL,
        functional_amount ? functional_amount->valuedouble : 0,
        functional_currency_id && !cJSON_IsNull(functional_currency_id) ? strdup(functional_currency_id->valuestring) : NULL,
        account_amount ? account_amount->valuedouble : 0,
        account_currency_id && !cJSON_IsNull(account_currency_id) ? strdup(account_currency_id->valuestring) : NULL,
        reporting_amount_in_usd ? reporting_amount_in_usd->valuedouble : 0,
        forex_rate ? forex_rate->valuedouble : 0,
        forex_rates_snapshot && !cJSON_IsNull(forex_rates_snapshot) ? strdup(forex_rates_snapshot->valuestring) : NULL,
        cost_centre_id && !cJSON_IsNull(cost_centre_id) ? strdup(cost_centre_id->valuestring) : NULL,
        project_id && !cJSON_IsNull(project_id) ? strdup(project_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        debit ? debit->valuedouble : 0,
        credit ? credit->valuedouble : 0,
        amount ? amount_local_nonprim : NULL,
        amount_in_usd ? amount_in_usd_local_nonprim : NULL
        );

    return accounting_entry_dto_local_var;
end:
    if (amount_local_nonprim) {
        money_free(amount_local_nonprim);
        amount_local_nonprim = NULL;
    }
    if (amount_in_usd_local_nonprim) {
        money_free(amount_in_usd_local_nonprim);
        amount_in_usd_local_nonprim = NULL;
    }
    return NULL;

}
