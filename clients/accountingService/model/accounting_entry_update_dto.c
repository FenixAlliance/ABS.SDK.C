#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "accounting_entry_update_dto.h"


char* accounting_entry_update_dto_direction_ToString(accountingservice_accounting_entry_update_dto_DIRECTION_e direction) {
    char* directionArray[] =  { "NULL", "Debit", "Credit" };
    return directionArray[direction];
}

accountingservice_accounting_entry_update_dto_DIRECTION_e accounting_entry_update_dto_direction_FromString(char* direction){
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

accounting_entry_update_dto_t *accounting_entry_update_dto_create(
    char *journal_entry_id,
    char *account_id,
    accountingservice_accounting_entry_update_dto_DIRECTION_e direction,
    double transaction_amount,
    char *transaction_currency_id,
    char *description
    ) {
    accounting_entry_update_dto_t *accounting_entry_update_dto_local_var = malloc(sizeof(accounting_entry_update_dto_t));
    if (!accounting_entry_update_dto_local_var) {
        return NULL;
    }
    accounting_entry_update_dto_local_var->journal_entry_id = journal_entry_id;
    accounting_entry_update_dto_local_var->account_id = account_id;
    accounting_entry_update_dto_local_var->direction = direction;
    accounting_entry_update_dto_local_var->transaction_amount = transaction_amount;
    accounting_entry_update_dto_local_var->transaction_currency_id = transaction_currency_id;
    accounting_entry_update_dto_local_var->description = description;

    return accounting_entry_update_dto_local_var;
}


void accounting_entry_update_dto_free(accounting_entry_update_dto_t *accounting_entry_update_dto) {
    if(NULL == accounting_entry_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (accounting_entry_update_dto->journal_entry_id) {
        free(accounting_entry_update_dto->journal_entry_id);
        accounting_entry_update_dto->journal_entry_id = NULL;
    }
    if (accounting_entry_update_dto->account_id) {
        free(accounting_entry_update_dto->account_id);
        accounting_entry_update_dto->account_id = NULL;
    }
    if (accounting_entry_update_dto->transaction_currency_id) {
        free(accounting_entry_update_dto->transaction_currency_id);
        accounting_entry_update_dto->transaction_currency_id = NULL;
    }
    if (accounting_entry_update_dto->description) {
        free(accounting_entry_update_dto->description);
        accounting_entry_update_dto->description = NULL;
    }
    free(accounting_entry_update_dto);
}

cJSON *accounting_entry_update_dto_convertToJSON(accounting_entry_update_dto_t *accounting_entry_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // accounting_entry_update_dto->journal_entry_id
    if(accounting_entry_update_dto->journal_entry_id) {
    if(cJSON_AddStringToObject(item, "journalEntryId", accounting_entry_update_dto->journal_entry_id) == NULL) {
    goto fail; //String
    }
    }


    // accounting_entry_update_dto->account_id
    if(accounting_entry_update_dto->account_id) {
    if(cJSON_AddStringToObject(item, "accountId", accounting_entry_update_dto->account_id) == NULL) {
    goto fail; //String
    }
    }


    // accounting_entry_update_dto->direction
    if(accounting_entry_update_dto->direction != accountingservice_accounting_entry_update_dto_DIRECTION_NULL) {
    if(cJSON_AddStringToObject(item, "direction", directionaccounting_entry_update_dto_ToString(accounting_entry_update_dto->direction)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // accounting_entry_update_dto->transaction_amount
    if(accounting_entry_update_dto->transaction_amount) {
    if(cJSON_AddNumberToObject(item, "transactionAmount", accounting_entry_update_dto->transaction_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // accounting_entry_update_dto->transaction_currency_id
    if(accounting_entry_update_dto->transaction_currency_id) {
    if(cJSON_AddStringToObject(item, "transactionCurrencyId", accounting_entry_update_dto->transaction_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // accounting_entry_update_dto->description
    if(accounting_entry_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", accounting_entry_update_dto->description) == NULL) {
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

accounting_entry_update_dto_t *accounting_entry_update_dto_parseFromJSON(cJSON *accounting_entry_update_dtoJSON){

    accounting_entry_update_dto_t *accounting_entry_update_dto_local_var = NULL;

    // accounting_entry_update_dto->journal_entry_id
    cJSON *journal_entry_id = cJSON_GetObjectItemCaseSensitive(accounting_entry_update_dtoJSON, "journalEntryId");
    if (journal_entry_id) { 
    if(!cJSON_IsString(journal_entry_id) && !cJSON_IsNull(journal_entry_id))
    {
    goto end; //String
    }
    }

    // accounting_entry_update_dto->account_id
    cJSON *account_id = cJSON_GetObjectItemCaseSensitive(accounting_entry_update_dtoJSON, "accountId");
    if (account_id) { 
    if(!cJSON_IsString(account_id) && !cJSON_IsNull(account_id))
    {
    goto end; //String
    }
    }

    // accounting_entry_update_dto->direction
    cJSON *direction = cJSON_GetObjectItemCaseSensitive(accounting_entry_update_dtoJSON, "direction");
    accountingservice_accounting_entry_update_dto_DIRECTION_e directionVariable;
    if (direction) { 
    if(!cJSON_IsString(direction))
    {
    goto end; //Enum
    }
    directionVariable = accounting_entry_update_dto_direction_FromString(direction->valuestring);
    }

    // accounting_entry_update_dto->transaction_amount
    cJSON *transaction_amount = cJSON_GetObjectItemCaseSensitive(accounting_entry_update_dtoJSON, "transactionAmount");
    if (transaction_amount) { 
    if(!cJSON_IsNumber(transaction_amount))
    {
    goto end; //Numeric
    }
    }

    // accounting_entry_update_dto->transaction_currency_id
    cJSON *transaction_currency_id = cJSON_GetObjectItemCaseSensitive(accounting_entry_update_dtoJSON, "transactionCurrencyId");
    if (transaction_currency_id) { 
    if(!cJSON_IsString(transaction_currency_id) && !cJSON_IsNull(transaction_currency_id))
    {
    goto end; //String
    }
    }

    // accounting_entry_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(accounting_entry_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    accounting_entry_update_dto_local_var = accounting_entry_update_dto_create (
        journal_entry_id && !cJSON_IsNull(journal_entry_id) ? strdup(journal_entry_id->valuestring) : NULL,
        account_id && !cJSON_IsNull(account_id) ? strdup(account_id->valuestring) : NULL,
        direction ? directionVariable : accountingservice_accounting_entry_update_dto_DIRECTION_NULL,
        transaction_amount ? transaction_amount->valuedouble : 0,
        transaction_currency_id && !cJSON_IsNull(transaction_currency_id) ? strdup(transaction_currency_id->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return accounting_entry_update_dto_local_var;
end:
    return NULL;

}
