#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "trial_balance_row_dto.h"


char* trial_balance_row_dto_normal_balance_ToString(accountingservice_trial_balance_row_dto_NORMALBALANCE_e normal_balance) {
    char* normal_balanceArray[] =  { "NULL", "Debit", "Credit" };
    return normal_balanceArray[normal_balance];
}

accountingservice_trial_balance_row_dto_NORMALBALANCE_e trial_balance_row_dto_normal_balance_FromString(char* normal_balance){
    int stringToReturn = 0;
    char *normal_balanceArray[] =  { "NULL", "Debit", "Credit" };
    size_t sizeofArray = sizeof(normal_balanceArray) / sizeof(normal_balanceArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(normal_balance, normal_balanceArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

trial_balance_row_dto_t *trial_balance_row_dto_create(
    char *account_id,
    char *code,
    char *name,
    accountingservice_trial_balance_row_dto_NORMALBALANCE_e normal_balance,
    double debit,
    double credit
    ) {
    trial_balance_row_dto_t *trial_balance_row_dto_local_var = malloc(sizeof(trial_balance_row_dto_t));
    if (!trial_balance_row_dto_local_var) {
        return NULL;
    }
    trial_balance_row_dto_local_var->account_id = account_id;
    trial_balance_row_dto_local_var->code = code;
    trial_balance_row_dto_local_var->name = name;
    trial_balance_row_dto_local_var->normal_balance = normal_balance;
    trial_balance_row_dto_local_var->debit = debit;
    trial_balance_row_dto_local_var->credit = credit;

    return trial_balance_row_dto_local_var;
}


void trial_balance_row_dto_free(trial_balance_row_dto_t *trial_balance_row_dto) {
    if(NULL == trial_balance_row_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (trial_balance_row_dto->account_id) {
        free(trial_balance_row_dto->account_id);
        trial_balance_row_dto->account_id = NULL;
    }
    if (trial_balance_row_dto->code) {
        free(trial_balance_row_dto->code);
        trial_balance_row_dto->code = NULL;
    }
    if (trial_balance_row_dto->name) {
        free(trial_balance_row_dto->name);
        trial_balance_row_dto->name = NULL;
    }
    free(trial_balance_row_dto);
}

cJSON *trial_balance_row_dto_convertToJSON(trial_balance_row_dto_t *trial_balance_row_dto) {
    cJSON *item = cJSON_CreateObject();

    // trial_balance_row_dto->account_id
    if(trial_balance_row_dto->account_id) {
    if(cJSON_AddStringToObject(item, "accountId", trial_balance_row_dto->account_id) == NULL) {
    goto fail; //String
    }
    }


    // trial_balance_row_dto->code
    if(trial_balance_row_dto->code) {
    if(cJSON_AddStringToObject(item, "code", trial_balance_row_dto->code) == NULL) {
    goto fail; //String
    }
    }


    // trial_balance_row_dto->name
    if(trial_balance_row_dto->name) {
    if(cJSON_AddStringToObject(item, "name", trial_balance_row_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // trial_balance_row_dto->normal_balance
    if(trial_balance_row_dto->normal_balance != accountingservice_trial_balance_row_dto_NORMALBALANCE_NULL) {
    if(cJSON_AddStringToObject(item, "normalBalance", normal_balancetrial_balance_row_dto_ToString(trial_balance_row_dto->normal_balance)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // trial_balance_row_dto->debit
    if(trial_balance_row_dto->debit) {
    if(cJSON_AddNumberToObject(item, "debit", trial_balance_row_dto->debit) == NULL) {
    goto fail; //Numeric
    }
    }


    // trial_balance_row_dto->credit
    if(trial_balance_row_dto->credit) {
    if(cJSON_AddNumberToObject(item, "credit", trial_balance_row_dto->credit) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

trial_balance_row_dto_t *trial_balance_row_dto_parseFromJSON(cJSON *trial_balance_row_dtoJSON){

    trial_balance_row_dto_t *trial_balance_row_dto_local_var = NULL;

    // trial_balance_row_dto->account_id
    cJSON *account_id = cJSON_GetObjectItemCaseSensitive(trial_balance_row_dtoJSON, "accountId");
    if (account_id) { 
    if(!cJSON_IsString(account_id) && !cJSON_IsNull(account_id))
    {
    goto end; //String
    }
    }

    // trial_balance_row_dto->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(trial_balance_row_dtoJSON, "code");
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // trial_balance_row_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(trial_balance_row_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // trial_balance_row_dto->normal_balance
    cJSON *normal_balance = cJSON_GetObjectItemCaseSensitive(trial_balance_row_dtoJSON, "normalBalance");
    accountingservice_trial_balance_row_dto_NORMALBALANCE_e normal_balanceVariable;
    if (normal_balance) { 
    if(!cJSON_IsString(normal_balance))
    {
    goto end; //Enum
    }
    normal_balanceVariable = trial_balance_row_dto_normal_balance_FromString(normal_balance->valuestring);
    }

    // trial_balance_row_dto->debit
    cJSON *debit = cJSON_GetObjectItemCaseSensitive(trial_balance_row_dtoJSON, "debit");
    if (debit) { 
    if(!cJSON_IsNumber(debit))
    {
    goto end; //Numeric
    }
    }

    // trial_balance_row_dto->credit
    cJSON *credit = cJSON_GetObjectItemCaseSensitive(trial_balance_row_dtoJSON, "credit");
    if (credit) { 
    if(!cJSON_IsNumber(credit))
    {
    goto end; //Numeric
    }
    }


    trial_balance_row_dto_local_var = trial_balance_row_dto_create (
        account_id && !cJSON_IsNull(account_id) ? strdup(account_id->valuestring) : NULL,
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        normal_balance ? normal_balanceVariable : accountingservice_trial_balance_row_dto_NORMALBALANCE_NULL,
        debit ? debit->valuedouble : 0,
        credit ? credit->valuedouble : 0
        );

    return trial_balance_row_dto_local_var;
end:
    return NULL;

}
