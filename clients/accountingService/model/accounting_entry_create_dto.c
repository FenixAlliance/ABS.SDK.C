#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "accounting_entry_create_dto.h"


char* accounting_entry_create_dto_direction_ToString(accountingservice_accounting_entry_create_dto_DIRECTION_e direction) {
    char* directionArray[] =  { "NULL", "Debit", "Credit" };
    return directionArray[direction];
}

accountingservice_accounting_entry_create_dto_DIRECTION_e accounting_entry_create_dto_direction_FromString(char* direction){
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

accounting_entry_create_dto_t *accounting_entry_create_dto_create(
    char *id,
    char *timestamp,
    char *journal_entry_id,
    char *account_id,
    accountingservice_accounting_entry_create_dto_DIRECTION_e direction,
    double transaction_amount,
    char *transaction_currency_id,
    char *description
    ) {
    accounting_entry_create_dto_t *accounting_entry_create_dto_local_var = malloc(sizeof(accounting_entry_create_dto_t));
    if (!accounting_entry_create_dto_local_var) {
        return NULL;
    }
    accounting_entry_create_dto_local_var->id = id;
    accounting_entry_create_dto_local_var->timestamp = timestamp;
    accounting_entry_create_dto_local_var->journal_entry_id = journal_entry_id;
    accounting_entry_create_dto_local_var->account_id = account_id;
    accounting_entry_create_dto_local_var->direction = direction;
    accounting_entry_create_dto_local_var->transaction_amount = transaction_amount;
    accounting_entry_create_dto_local_var->transaction_currency_id = transaction_currency_id;
    accounting_entry_create_dto_local_var->description = description;

    return accounting_entry_create_dto_local_var;
}


void accounting_entry_create_dto_free(accounting_entry_create_dto_t *accounting_entry_create_dto) {
    if(NULL == accounting_entry_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (accounting_entry_create_dto->id) {
        free(accounting_entry_create_dto->id);
        accounting_entry_create_dto->id = NULL;
    }
    if (accounting_entry_create_dto->timestamp) {
        free(accounting_entry_create_dto->timestamp);
        accounting_entry_create_dto->timestamp = NULL;
    }
    if (accounting_entry_create_dto->journal_entry_id) {
        free(accounting_entry_create_dto->journal_entry_id);
        accounting_entry_create_dto->journal_entry_id = NULL;
    }
    if (accounting_entry_create_dto->account_id) {
        free(accounting_entry_create_dto->account_id);
        accounting_entry_create_dto->account_id = NULL;
    }
    if (accounting_entry_create_dto->transaction_currency_id) {
        free(accounting_entry_create_dto->transaction_currency_id);
        accounting_entry_create_dto->transaction_currency_id = NULL;
    }
    if (accounting_entry_create_dto->description) {
        free(accounting_entry_create_dto->description);
        accounting_entry_create_dto->description = NULL;
    }
    free(accounting_entry_create_dto);
}

cJSON *accounting_entry_create_dto_convertToJSON(accounting_entry_create_dto_t *accounting_entry_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // accounting_entry_create_dto->id
    if(accounting_entry_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", accounting_entry_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // accounting_entry_create_dto->timestamp
    if(accounting_entry_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", accounting_entry_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // accounting_entry_create_dto->journal_entry_id
    if (!accounting_entry_create_dto->journal_entry_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "journalEntryId", accounting_entry_create_dto->journal_entry_id) == NULL) {
    goto fail; //String
    }


    // accounting_entry_create_dto->account_id
    if (!accounting_entry_create_dto->account_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "accountId", accounting_entry_create_dto->account_id) == NULL) {
    goto fail; //String
    }


    // accounting_entry_create_dto->direction
    if (accountingservice_accounting_entry_create_dto_DIRECTION_NULL == accounting_entry_create_dto->direction) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "direction", directionaccounting_entry_create_dto_ToString(accounting_entry_create_dto->direction)) == NULL)
    {
    goto fail; //Enum
    }


    // accounting_entry_create_dto->transaction_amount
    if(accounting_entry_create_dto->transaction_amount) {
    if(cJSON_AddNumberToObject(item, "transactionAmount", accounting_entry_create_dto->transaction_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // accounting_entry_create_dto->transaction_currency_id
    if (!accounting_entry_create_dto->transaction_currency_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "transactionCurrencyId", accounting_entry_create_dto->transaction_currency_id) == NULL) {
    goto fail; //String
    }


    // accounting_entry_create_dto->description
    if (!accounting_entry_create_dto->description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "description", accounting_entry_create_dto->description) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

accounting_entry_create_dto_t *accounting_entry_create_dto_parseFromJSON(cJSON *accounting_entry_create_dtoJSON){

    accounting_entry_create_dto_t *accounting_entry_create_dto_local_var = NULL;

    // accounting_entry_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(accounting_entry_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // accounting_entry_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(accounting_entry_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // accounting_entry_create_dto->journal_entry_id
    cJSON *journal_entry_id = cJSON_GetObjectItemCaseSensitive(accounting_entry_create_dtoJSON, "journalEntryId");
    if (!journal_entry_id) {
        goto end;
    }

    
    if(!cJSON_IsString(journal_entry_id))
    {
    goto end; //String
    }

    // accounting_entry_create_dto->account_id
    cJSON *account_id = cJSON_GetObjectItemCaseSensitive(accounting_entry_create_dtoJSON, "accountId");
    if (!account_id) {
        goto end;
    }

    
    if(!cJSON_IsString(account_id))
    {
    goto end; //String
    }

    // accounting_entry_create_dto->direction
    cJSON *direction = cJSON_GetObjectItemCaseSensitive(accounting_entry_create_dtoJSON, "direction");
    if (!direction) {
        goto end;
    }

    accountingservice_accounting_entry_create_dto_DIRECTION_e directionVariable;
    
    if(!cJSON_IsString(direction))
    {
    goto end; //Enum
    }
    directionVariable = accounting_entry_create_dto_direction_FromString(direction->valuestring);

    // accounting_entry_create_dto->transaction_amount
    cJSON *transaction_amount = cJSON_GetObjectItemCaseSensitive(accounting_entry_create_dtoJSON, "transactionAmount");
    if (transaction_amount) { 
    if(!cJSON_IsNumber(transaction_amount))
    {
    goto end; //Numeric
    }
    }

    // accounting_entry_create_dto->transaction_currency_id
    cJSON *transaction_currency_id = cJSON_GetObjectItemCaseSensitive(accounting_entry_create_dtoJSON, "transactionCurrencyId");
    if (!transaction_currency_id) {
        goto end;
    }

    
    if(!cJSON_IsString(transaction_currency_id))
    {
    goto end; //String
    }

    // accounting_entry_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(accounting_entry_create_dtoJSON, "description");
    if (!description) {
        goto end;
    }

    
    if(!cJSON_IsString(description))
    {
    goto end; //String
    }


    accounting_entry_create_dto_local_var = accounting_entry_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(journal_entry_id->valuestring),
        strdup(account_id->valuestring),
        directionVariable,
        transaction_amount ? transaction_amount->valuedouble : 0,
        strdup(transaction_currency_id->valuestring),
        strdup(description->valuestring)
        );

    return accounting_entry_create_dto_local_var;
end:
    return NULL;

}
