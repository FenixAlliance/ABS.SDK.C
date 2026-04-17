#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "accounting_entry_create_dto.h"


char* accounting_entry_create_dto_accounting_entry_type_ToString(accountingservice_accounting_entry_create_dto_ACCOUNTINGENTRYTYPE_e accounting_entry_type) {
    char* accounting_entry_typeArray[] =  { "NULL", "None", "Debit", "Credit" };
    return accounting_entry_typeArray[accounting_entry_type];
}

accountingservice_accounting_entry_create_dto_ACCOUNTINGENTRYTYPE_e accounting_entry_create_dto_accounting_entry_type_FromString(char* accounting_entry_type){
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

accounting_entry_create_dto_t *accounting_entry_create_dto_create(
    char *id,
    char *timestamp,
    char *description,
    char *date,
    double amount,
    char *currency_id,
    char *debit_account_id,
    char *credit_account_id,
    char *journal_entry_id,
    accountingservice_accounting_entry_create_dto_ACCOUNTINGENTRYTYPE_e accounting_entry_type
    ) {
    accounting_entry_create_dto_t *accounting_entry_create_dto_local_var = malloc(sizeof(accounting_entry_create_dto_t));
    if (!accounting_entry_create_dto_local_var) {
        return NULL;
    }
    accounting_entry_create_dto_local_var->id = id;
    accounting_entry_create_dto_local_var->timestamp = timestamp;
    accounting_entry_create_dto_local_var->description = description;
    accounting_entry_create_dto_local_var->date = date;
    accounting_entry_create_dto_local_var->amount = amount;
    accounting_entry_create_dto_local_var->currency_id = currency_id;
    accounting_entry_create_dto_local_var->debit_account_id = debit_account_id;
    accounting_entry_create_dto_local_var->credit_account_id = credit_account_id;
    accounting_entry_create_dto_local_var->journal_entry_id = journal_entry_id;
    accounting_entry_create_dto_local_var->accounting_entry_type = accounting_entry_type;

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
    if (accounting_entry_create_dto->description) {
        free(accounting_entry_create_dto->description);
        accounting_entry_create_dto->description = NULL;
    }
    if (accounting_entry_create_dto->date) {
        free(accounting_entry_create_dto->date);
        accounting_entry_create_dto->date = NULL;
    }
    if (accounting_entry_create_dto->currency_id) {
        free(accounting_entry_create_dto->currency_id);
        accounting_entry_create_dto->currency_id = NULL;
    }
    if (accounting_entry_create_dto->debit_account_id) {
        free(accounting_entry_create_dto->debit_account_id);
        accounting_entry_create_dto->debit_account_id = NULL;
    }
    if (accounting_entry_create_dto->credit_account_id) {
        free(accounting_entry_create_dto->credit_account_id);
        accounting_entry_create_dto->credit_account_id = NULL;
    }
    if (accounting_entry_create_dto->journal_entry_id) {
        free(accounting_entry_create_dto->journal_entry_id);
        accounting_entry_create_dto->journal_entry_id = NULL;
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


    // accounting_entry_create_dto->description
    if (!accounting_entry_create_dto->description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "description", accounting_entry_create_dto->description) == NULL) {
    goto fail; //String
    }


    // accounting_entry_create_dto->date
    if(accounting_entry_create_dto->date) {
    if(cJSON_AddStringToObject(item, "date", accounting_entry_create_dto->date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // accounting_entry_create_dto->amount
    if(accounting_entry_create_dto->amount) {
    if(cJSON_AddNumberToObject(item, "amount", accounting_entry_create_dto->amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // accounting_entry_create_dto->currency_id
    if (!accounting_entry_create_dto->currency_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "currencyId", accounting_entry_create_dto->currency_id) == NULL) {
    goto fail; //String
    }


    // accounting_entry_create_dto->debit_account_id
    if(accounting_entry_create_dto->debit_account_id) {
    if(cJSON_AddStringToObject(item, "debitAccountId", accounting_entry_create_dto->debit_account_id) == NULL) {
    goto fail; //String
    }
    }


    // accounting_entry_create_dto->credit_account_id
    if(accounting_entry_create_dto->credit_account_id) {
    if(cJSON_AddStringToObject(item, "creditAccountId", accounting_entry_create_dto->credit_account_id) == NULL) {
    goto fail; //String
    }
    }


    // accounting_entry_create_dto->journal_entry_id
    if(accounting_entry_create_dto->journal_entry_id) {
    if(cJSON_AddStringToObject(item, "journalEntryId", accounting_entry_create_dto->journal_entry_id) == NULL) {
    goto fail; //String
    }
    }


    // accounting_entry_create_dto->accounting_entry_type
    if(accounting_entry_create_dto->accounting_entry_type != accountingservice_accounting_entry_create_dto_ACCOUNTINGENTRYTYPE_NULL) {
    if(cJSON_AddStringToObject(item, "accountingEntryType", accounting_entry_typeaccounting_entry_create_dto_ToString(accounting_entry_create_dto->accounting_entry_type)) == NULL)
    {
    goto fail; //Enum
    }
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

    // accounting_entry_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(accounting_entry_create_dtoJSON, "description");
    if (!description) {
        goto end;
    }

    
    if(!cJSON_IsString(description))
    {
    goto end; //String
    }

    // accounting_entry_create_dto->date
    cJSON *date = cJSON_GetObjectItemCaseSensitive(accounting_entry_create_dtoJSON, "date");
    if (date) { 
    if(!cJSON_IsString(date) && !cJSON_IsNull(date))
    {
    goto end; //DateTime
    }
    }

    // accounting_entry_create_dto->amount
    cJSON *amount = cJSON_GetObjectItemCaseSensitive(accounting_entry_create_dtoJSON, "amount");
    if (amount) { 
    if(!cJSON_IsNumber(amount))
    {
    goto end; //Numeric
    }
    }

    // accounting_entry_create_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(accounting_entry_create_dtoJSON, "currencyId");
    if (!currency_id) {
        goto end;
    }

    
    if(!cJSON_IsString(currency_id))
    {
    goto end; //String
    }

    // accounting_entry_create_dto->debit_account_id
    cJSON *debit_account_id = cJSON_GetObjectItemCaseSensitive(accounting_entry_create_dtoJSON, "debitAccountId");
    if (debit_account_id) { 
    if(!cJSON_IsString(debit_account_id) && !cJSON_IsNull(debit_account_id))
    {
    goto end; //String
    }
    }

    // accounting_entry_create_dto->credit_account_id
    cJSON *credit_account_id = cJSON_GetObjectItemCaseSensitive(accounting_entry_create_dtoJSON, "creditAccountId");
    if (credit_account_id) { 
    if(!cJSON_IsString(credit_account_id) && !cJSON_IsNull(credit_account_id))
    {
    goto end; //String
    }
    }

    // accounting_entry_create_dto->journal_entry_id
    cJSON *journal_entry_id = cJSON_GetObjectItemCaseSensitive(accounting_entry_create_dtoJSON, "journalEntryId");
    if (journal_entry_id) { 
    if(!cJSON_IsString(journal_entry_id) && !cJSON_IsNull(journal_entry_id))
    {
    goto end; //String
    }
    }

    // accounting_entry_create_dto->accounting_entry_type
    cJSON *accounting_entry_type = cJSON_GetObjectItemCaseSensitive(accounting_entry_create_dtoJSON, "accountingEntryType");
    accountingservice_accounting_entry_create_dto_ACCOUNTINGENTRYTYPE_e accounting_entry_typeVariable;
    if (accounting_entry_type) { 
    if(!cJSON_IsString(accounting_entry_type))
    {
    goto end; //Enum
    }
    accounting_entry_typeVariable = accounting_entry_create_dto_accounting_entry_type_FromString(accounting_entry_type->valuestring);
    }


    accounting_entry_create_dto_local_var = accounting_entry_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(description->valuestring),
        date && !cJSON_IsNull(date) ? strdup(date->valuestring) : NULL,
        amount ? amount->valuedouble : 0,
        strdup(currency_id->valuestring),
        debit_account_id && !cJSON_IsNull(debit_account_id) ? strdup(debit_account_id->valuestring) : NULL,
        credit_account_id && !cJSON_IsNull(credit_account_id) ? strdup(credit_account_id->valuestring) : NULL,
        journal_entry_id && !cJSON_IsNull(journal_entry_id) ? strdup(journal_entry_id->valuestring) : NULL,
        accounting_entry_type ? accounting_entry_typeVariable : accountingservice_accounting_entry_create_dto_ACCOUNTINGENTRYTYPE_NULL
        );

    return accounting_entry_create_dto_local_var;
end:
    return NULL;

}
