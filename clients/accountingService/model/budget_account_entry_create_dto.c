#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "budget_account_entry_create_dto.h"



budget_account_entry_create_dto_t *budget_account_entry_create_dto_create(
    char *id,
    char *timestamp,
    char *description,
    double planned_amount,
    char *currency_id,
    char *debit_account_id,
    char *credit_account_id,
    char *budget_id
    ) {
    budget_account_entry_create_dto_t *budget_account_entry_create_dto_local_var = malloc(sizeof(budget_account_entry_create_dto_t));
    if (!budget_account_entry_create_dto_local_var) {
        return NULL;
    }
    budget_account_entry_create_dto_local_var->id = id;
    budget_account_entry_create_dto_local_var->timestamp = timestamp;
    budget_account_entry_create_dto_local_var->description = description;
    budget_account_entry_create_dto_local_var->planned_amount = planned_amount;
    budget_account_entry_create_dto_local_var->currency_id = currency_id;
    budget_account_entry_create_dto_local_var->debit_account_id = debit_account_id;
    budget_account_entry_create_dto_local_var->credit_account_id = credit_account_id;
    budget_account_entry_create_dto_local_var->budget_id = budget_id;

    return budget_account_entry_create_dto_local_var;
}


void budget_account_entry_create_dto_free(budget_account_entry_create_dto_t *budget_account_entry_create_dto) {
    if(NULL == budget_account_entry_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (budget_account_entry_create_dto->id) {
        free(budget_account_entry_create_dto->id);
        budget_account_entry_create_dto->id = NULL;
    }
    if (budget_account_entry_create_dto->timestamp) {
        free(budget_account_entry_create_dto->timestamp);
        budget_account_entry_create_dto->timestamp = NULL;
    }
    if (budget_account_entry_create_dto->description) {
        free(budget_account_entry_create_dto->description);
        budget_account_entry_create_dto->description = NULL;
    }
    if (budget_account_entry_create_dto->currency_id) {
        free(budget_account_entry_create_dto->currency_id);
        budget_account_entry_create_dto->currency_id = NULL;
    }
    if (budget_account_entry_create_dto->debit_account_id) {
        free(budget_account_entry_create_dto->debit_account_id);
        budget_account_entry_create_dto->debit_account_id = NULL;
    }
    if (budget_account_entry_create_dto->credit_account_id) {
        free(budget_account_entry_create_dto->credit_account_id);
        budget_account_entry_create_dto->credit_account_id = NULL;
    }
    if (budget_account_entry_create_dto->budget_id) {
        free(budget_account_entry_create_dto->budget_id);
        budget_account_entry_create_dto->budget_id = NULL;
    }
    free(budget_account_entry_create_dto);
}

cJSON *budget_account_entry_create_dto_convertToJSON(budget_account_entry_create_dto_t *budget_account_entry_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // budget_account_entry_create_dto->id
    if(budget_account_entry_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", budget_account_entry_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // budget_account_entry_create_dto->timestamp
    if(budget_account_entry_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", budget_account_entry_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // budget_account_entry_create_dto->description
    if (!budget_account_entry_create_dto->description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "description", budget_account_entry_create_dto->description) == NULL) {
    goto fail; //String
    }


    // budget_account_entry_create_dto->planned_amount
    if(budget_account_entry_create_dto->planned_amount) {
    if(cJSON_AddNumberToObject(item, "plannedAmount", budget_account_entry_create_dto->planned_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // budget_account_entry_create_dto->currency_id
    if (!budget_account_entry_create_dto->currency_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "currencyId", budget_account_entry_create_dto->currency_id) == NULL) {
    goto fail; //String
    }


    // budget_account_entry_create_dto->debit_account_id
    if (!budget_account_entry_create_dto->debit_account_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "debitAccountId", budget_account_entry_create_dto->debit_account_id) == NULL) {
    goto fail; //String
    }


    // budget_account_entry_create_dto->credit_account_id
    if (!budget_account_entry_create_dto->credit_account_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "creditAccountId", budget_account_entry_create_dto->credit_account_id) == NULL) {
    goto fail; //String
    }


    // budget_account_entry_create_dto->budget_id
    if (!budget_account_entry_create_dto->budget_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "budgetId", budget_account_entry_create_dto->budget_id) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

budget_account_entry_create_dto_t *budget_account_entry_create_dto_parseFromJSON(cJSON *budget_account_entry_create_dtoJSON){

    budget_account_entry_create_dto_t *budget_account_entry_create_dto_local_var = NULL;

    // budget_account_entry_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(budget_account_entry_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // budget_account_entry_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(budget_account_entry_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // budget_account_entry_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(budget_account_entry_create_dtoJSON, "description");
    if (!description) {
        goto end;
    }

    
    if(!cJSON_IsString(description))
    {
    goto end; //String
    }

    // budget_account_entry_create_dto->planned_amount
    cJSON *planned_amount = cJSON_GetObjectItemCaseSensitive(budget_account_entry_create_dtoJSON, "plannedAmount");
    if (planned_amount) { 
    if(!cJSON_IsNumber(planned_amount))
    {
    goto end; //Numeric
    }
    }

    // budget_account_entry_create_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(budget_account_entry_create_dtoJSON, "currencyId");
    if (!currency_id) {
        goto end;
    }

    
    if(!cJSON_IsString(currency_id))
    {
    goto end; //String
    }

    // budget_account_entry_create_dto->debit_account_id
    cJSON *debit_account_id = cJSON_GetObjectItemCaseSensitive(budget_account_entry_create_dtoJSON, "debitAccountId");
    if (!debit_account_id) {
        goto end;
    }

    
    if(!cJSON_IsString(debit_account_id))
    {
    goto end; //String
    }

    // budget_account_entry_create_dto->credit_account_id
    cJSON *credit_account_id = cJSON_GetObjectItemCaseSensitive(budget_account_entry_create_dtoJSON, "creditAccountId");
    if (!credit_account_id) {
        goto end;
    }

    
    if(!cJSON_IsString(credit_account_id))
    {
    goto end; //String
    }

    // budget_account_entry_create_dto->budget_id
    cJSON *budget_id = cJSON_GetObjectItemCaseSensitive(budget_account_entry_create_dtoJSON, "budgetId");
    if (!budget_id) {
        goto end;
    }

    
    if(!cJSON_IsString(budget_id))
    {
    goto end; //String
    }


    budget_account_entry_create_dto_local_var = budget_account_entry_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(description->valuestring),
        planned_amount ? planned_amount->valuedouble : 0,
        strdup(currency_id->valuestring),
        strdup(debit_account_id->valuestring),
        strdup(credit_account_id->valuestring),
        strdup(budget_id->valuestring)
        );

    return budget_account_entry_create_dto_local_var;
end:
    return NULL;

}
