#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "budget_account_entry_dto.h"



budget_account_entry_dto_t *budget_account_entry_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *enrollment_id,
    char *description,
    double planned_amount,
    char *currency_id,
    char *debit_account_id,
    char *credit_account_id,
    char *budget_id,
    char *date,
    money_t *planned_amount_money
    ) {
    budget_account_entry_dto_t *budget_account_entry_dto_local_var = malloc(sizeof(budget_account_entry_dto_t));
    if (!budget_account_entry_dto_local_var) {
        return NULL;
    }
    budget_account_entry_dto_local_var->id = id;
    budget_account_entry_dto_local_var->timestamp = timestamp;
    budget_account_entry_dto_local_var->tenant_id = tenant_id;
    budget_account_entry_dto_local_var->enrollment_id = enrollment_id;
    budget_account_entry_dto_local_var->description = description;
    budget_account_entry_dto_local_var->planned_amount = planned_amount;
    budget_account_entry_dto_local_var->currency_id = currency_id;
    budget_account_entry_dto_local_var->debit_account_id = debit_account_id;
    budget_account_entry_dto_local_var->credit_account_id = credit_account_id;
    budget_account_entry_dto_local_var->budget_id = budget_id;
    budget_account_entry_dto_local_var->date = date;
    budget_account_entry_dto_local_var->planned_amount_money = planned_amount_money;

    return budget_account_entry_dto_local_var;
}


void budget_account_entry_dto_free(budget_account_entry_dto_t *budget_account_entry_dto) {
    if(NULL == budget_account_entry_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (budget_account_entry_dto->id) {
        free(budget_account_entry_dto->id);
        budget_account_entry_dto->id = NULL;
    }
    if (budget_account_entry_dto->timestamp) {
        free(budget_account_entry_dto->timestamp);
        budget_account_entry_dto->timestamp = NULL;
    }
    if (budget_account_entry_dto->tenant_id) {
        free(budget_account_entry_dto->tenant_id);
        budget_account_entry_dto->tenant_id = NULL;
    }
    if (budget_account_entry_dto->enrollment_id) {
        free(budget_account_entry_dto->enrollment_id);
        budget_account_entry_dto->enrollment_id = NULL;
    }
    if (budget_account_entry_dto->description) {
        free(budget_account_entry_dto->description);
        budget_account_entry_dto->description = NULL;
    }
    if (budget_account_entry_dto->currency_id) {
        free(budget_account_entry_dto->currency_id);
        budget_account_entry_dto->currency_id = NULL;
    }
    if (budget_account_entry_dto->debit_account_id) {
        free(budget_account_entry_dto->debit_account_id);
        budget_account_entry_dto->debit_account_id = NULL;
    }
    if (budget_account_entry_dto->credit_account_id) {
        free(budget_account_entry_dto->credit_account_id);
        budget_account_entry_dto->credit_account_id = NULL;
    }
    if (budget_account_entry_dto->budget_id) {
        free(budget_account_entry_dto->budget_id);
        budget_account_entry_dto->budget_id = NULL;
    }
    if (budget_account_entry_dto->date) {
        free(budget_account_entry_dto->date);
        budget_account_entry_dto->date = NULL;
    }
    if (budget_account_entry_dto->planned_amount_money) {
        money_free(budget_account_entry_dto->planned_amount_money);
        budget_account_entry_dto->planned_amount_money = NULL;
    }
    free(budget_account_entry_dto);
}

cJSON *budget_account_entry_dto_convertToJSON(budget_account_entry_dto_t *budget_account_entry_dto) {
    cJSON *item = cJSON_CreateObject();

    // budget_account_entry_dto->id
    if(budget_account_entry_dto->id) {
    if(cJSON_AddStringToObject(item, "id", budget_account_entry_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // budget_account_entry_dto->timestamp
    if(budget_account_entry_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", budget_account_entry_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // budget_account_entry_dto->tenant_id
    if(budget_account_entry_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", budget_account_entry_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // budget_account_entry_dto->enrollment_id
    if(budget_account_entry_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", budget_account_entry_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // budget_account_entry_dto->description
    if(budget_account_entry_dto->description) {
    if(cJSON_AddStringToObject(item, "description", budget_account_entry_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // budget_account_entry_dto->planned_amount
    if(budget_account_entry_dto->planned_amount) {
    if(cJSON_AddNumberToObject(item, "plannedAmount", budget_account_entry_dto->planned_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // budget_account_entry_dto->currency_id
    if(budget_account_entry_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", budget_account_entry_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // budget_account_entry_dto->debit_account_id
    if(budget_account_entry_dto->debit_account_id) {
    if(cJSON_AddStringToObject(item, "debitAccountId", budget_account_entry_dto->debit_account_id) == NULL) {
    goto fail; //String
    }
    }


    // budget_account_entry_dto->credit_account_id
    if(budget_account_entry_dto->credit_account_id) {
    if(cJSON_AddStringToObject(item, "creditAccountId", budget_account_entry_dto->credit_account_id) == NULL) {
    goto fail; //String
    }
    }


    // budget_account_entry_dto->budget_id
    if(budget_account_entry_dto->budget_id) {
    if(cJSON_AddStringToObject(item, "budgetId", budget_account_entry_dto->budget_id) == NULL) {
    goto fail; //String
    }
    }


    // budget_account_entry_dto->date
    if(budget_account_entry_dto->date) {
    if(cJSON_AddStringToObject(item, "date", budget_account_entry_dto->date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // budget_account_entry_dto->planned_amount_money
    if(budget_account_entry_dto->planned_amount_money) {
    cJSON *planned_amount_money_local_JSON = money_convertToJSON(budget_account_entry_dto->planned_amount_money);
    if(planned_amount_money_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "plannedAmountMoney", planned_amount_money_local_JSON);
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

budget_account_entry_dto_t *budget_account_entry_dto_parseFromJSON(cJSON *budget_account_entry_dtoJSON){

    budget_account_entry_dto_t *budget_account_entry_dto_local_var = NULL;

    // define the local variable for budget_account_entry_dto->planned_amount_money
    money_t *planned_amount_money_local_nonprim = NULL;

    // budget_account_entry_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(budget_account_entry_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // budget_account_entry_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(budget_account_entry_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // budget_account_entry_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(budget_account_entry_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // budget_account_entry_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(budget_account_entry_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // budget_account_entry_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(budget_account_entry_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // budget_account_entry_dto->planned_amount
    cJSON *planned_amount = cJSON_GetObjectItemCaseSensitive(budget_account_entry_dtoJSON, "plannedAmount");
    if (planned_amount) { 
    if(!cJSON_IsNumber(planned_amount))
    {
    goto end; //Numeric
    }
    }

    // budget_account_entry_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(budget_account_entry_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // budget_account_entry_dto->debit_account_id
    cJSON *debit_account_id = cJSON_GetObjectItemCaseSensitive(budget_account_entry_dtoJSON, "debitAccountId");
    if (debit_account_id) { 
    if(!cJSON_IsString(debit_account_id) && !cJSON_IsNull(debit_account_id))
    {
    goto end; //String
    }
    }

    // budget_account_entry_dto->credit_account_id
    cJSON *credit_account_id = cJSON_GetObjectItemCaseSensitive(budget_account_entry_dtoJSON, "creditAccountId");
    if (credit_account_id) { 
    if(!cJSON_IsString(credit_account_id) && !cJSON_IsNull(credit_account_id))
    {
    goto end; //String
    }
    }

    // budget_account_entry_dto->budget_id
    cJSON *budget_id = cJSON_GetObjectItemCaseSensitive(budget_account_entry_dtoJSON, "budgetId");
    if (budget_id) { 
    if(!cJSON_IsString(budget_id) && !cJSON_IsNull(budget_id))
    {
    goto end; //String
    }
    }

    // budget_account_entry_dto->date
    cJSON *date = cJSON_GetObjectItemCaseSensitive(budget_account_entry_dtoJSON, "date");
    if (date) { 
    if(!cJSON_IsString(date) && !cJSON_IsNull(date))
    {
    goto end; //DateTime
    }
    }

    // budget_account_entry_dto->planned_amount_money
    cJSON *planned_amount_money = cJSON_GetObjectItemCaseSensitive(budget_account_entry_dtoJSON, "plannedAmountMoney");
    if (planned_amount_money) { 
    planned_amount_money_local_nonprim = money_parseFromJSON(planned_amount_money); //nonprimitive
    }


    budget_account_entry_dto_local_var = budget_account_entry_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        planned_amount ? planned_amount->valuedouble : 0,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        debit_account_id && !cJSON_IsNull(debit_account_id) ? strdup(debit_account_id->valuestring) : NULL,
        credit_account_id && !cJSON_IsNull(credit_account_id) ? strdup(credit_account_id->valuestring) : NULL,
        budget_id && !cJSON_IsNull(budget_id) ? strdup(budget_id->valuestring) : NULL,
        date && !cJSON_IsNull(date) ? strdup(date->valuestring) : NULL,
        planned_amount_money ? planned_amount_money_local_nonprim : NULL
        );

    return budget_account_entry_dto_local_var;
end:
    if (planned_amount_money_local_nonprim) {
        money_free(planned_amount_money_local_nonprim);
        planned_amount_money_local_nonprim = NULL;
    }
    return NULL;

}
