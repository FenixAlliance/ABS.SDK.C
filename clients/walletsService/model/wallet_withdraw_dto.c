#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "wallet_withdraw_dto.h"


char* wallet_withdraw_dto_withdraw_status_ToString(walletsservice_wallet_withdraw_dto_WITHDRAWSTATUS_e withdraw_status) {
    char* withdraw_statusArray[] =  { "NULL", "OnHold", "Retained", "Processing", "OnValidation", "Processed" };
    return withdraw_statusArray[withdraw_status];
}

walletsservice_wallet_withdraw_dto_WITHDRAWSTATUS_e wallet_withdraw_dto_withdraw_status_FromString(char* withdraw_status){
    int stringToReturn = 0;
    char *withdraw_statusArray[] =  { "NULL", "OnHold", "Retained", "Processing", "OnValidation", "Processed" };
    size_t sizeofArray = sizeof(withdraw_statusArray) / sizeof(withdraw_statusArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(withdraw_status, withdraw_statusArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

wallet_withdraw_dto_t *wallet_withdraw_dto_create(
    char *id,
    char *timestamp,
    walletsservice_wallet_withdraw_dto_WITHDRAWSTATUS_e withdraw_status,
    char *wallet_account_id,
    char *wallet_withdraw_request_id,
    double balance_before_withdraw,
    double balance_after_withdraw,
    double withdrawed_amount,
    char *currency_id
    ) {
    wallet_withdraw_dto_t *wallet_withdraw_dto_local_var = malloc(sizeof(wallet_withdraw_dto_t));
    if (!wallet_withdraw_dto_local_var) {
        return NULL;
    }
    wallet_withdraw_dto_local_var->id = id;
    wallet_withdraw_dto_local_var->timestamp = timestamp;
    wallet_withdraw_dto_local_var->withdraw_status = withdraw_status;
    wallet_withdraw_dto_local_var->wallet_account_id = wallet_account_id;
    wallet_withdraw_dto_local_var->wallet_withdraw_request_id = wallet_withdraw_request_id;
    wallet_withdraw_dto_local_var->balance_before_withdraw = balance_before_withdraw;
    wallet_withdraw_dto_local_var->balance_after_withdraw = balance_after_withdraw;
    wallet_withdraw_dto_local_var->withdrawed_amount = withdrawed_amount;
    wallet_withdraw_dto_local_var->currency_id = currency_id;

    return wallet_withdraw_dto_local_var;
}


void wallet_withdraw_dto_free(wallet_withdraw_dto_t *wallet_withdraw_dto) {
    if(NULL == wallet_withdraw_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (wallet_withdraw_dto->id) {
        free(wallet_withdraw_dto->id);
        wallet_withdraw_dto->id = NULL;
    }
    if (wallet_withdraw_dto->timestamp) {
        free(wallet_withdraw_dto->timestamp);
        wallet_withdraw_dto->timestamp = NULL;
    }
    if (wallet_withdraw_dto->wallet_account_id) {
        free(wallet_withdraw_dto->wallet_account_id);
        wallet_withdraw_dto->wallet_account_id = NULL;
    }
    if (wallet_withdraw_dto->wallet_withdraw_request_id) {
        free(wallet_withdraw_dto->wallet_withdraw_request_id);
        wallet_withdraw_dto->wallet_withdraw_request_id = NULL;
    }
    if (wallet_withdraw_dto->currency_id) {
        free(wallet_withdraw_dto->currency_id);
        wallet_withdraw_dto->currency_id = NULL;
    }
    free(wallet_withdraw_dto);
}

cJSON *wallet_withdraw_dto_convertToJSON(wallet_withdraw_dto_t *wallet_withdraw_dto) {
    cJSON *item = cJSON_CreateObject();

    // wallet_withdraw_dto->id
    if(wallet_withdraw_dto->id) {
    if(cJSON_AddStringToObject(item, "id", wallet_withdraw_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // wallet_withdraw_dto->timestamp
    if(wallet_withdraw_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", wallet_withdraw_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // wallet_withdraw_dto->withdraw_status
    if(wallet_withdraw_dto->withdraw_status != walletsservice_wallet_withdraw_dto_WITHDRAWSTATUS_NULL) {
    if(cJSON_AddStringToObject(item, "withdrawStatus", withdraw_statuswallet_withdraw_dto_ToString(wallet_withdraw_dto->withdraw_status)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // wallet_withdraw_dto->wallet_account_id
    if(wallet_withdraw_dto->wallet_account_id) {
    if(cJSON_AddStringToObject(item, "walletAccountId", wallet_withdraw_dto->wallet_account_id) == NULL) {
    goto fail; //String
    }
    }


    // wallet_withdraw_dto->wallet_withdraw_request_id
    if(wallet_withdraw_dto->wallet_withdraw_request_id) {
    if(cJSON_AddStringToObject(item, "walletWithdrawRequestId", wallet_withdraw_dto->wallet_withdraw_request_id) == NULL) {
    goto fail; //String
    }
    }


    // wallet_withdraw_dto->balance_before_withdraw
    if(wallet_withdraw_dto->balance_before_withdraw) {
    if(cJSON_AddNumberToObject(item, "balanceBeforeWithdraw", wallet_withdraw_dto->balance_before_withdraw) == NULL) {
    goto fail; //Numeric
    }
    }


    // wallet_withdraw_dto->balance_after_withdraw
    if(wallet_withdraw_dto->balance_after_withdraw) {
    if(cJSON_AddNumberToObject(item, "balanceAfterWithdraw", wallet_withdraw_dto->balance_after_withdraw) == NULL) {
    goto fail; //Numeric
    }
    }


    // wallet_withdraw_dto->withdrawed_amount
    if(wallet_withdraw_dto->withdrawed_amount) {
    if(cJSON_AddNumberToObject(item, "withdrawedAmount", wallet_withdraw_dto->withdrawed_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // wallet_withdraw_dto->currency_id
    if(wallet_withdraw_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", wallet_withdraw_dto->currency_id) == NULL) {
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

wallet_withdraw_dto_t *wallet_withdraw_dto_parseFromJSON(cJSON *wallet_withdraw_dtoJSON){

    wallet_withdraw_dto_t *wallet_withdraw_dto_local_var = NULL;

    // wallet_withdraw_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(wallet_withdraw_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // wallet_withdraw_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(wallet_withdraw_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // wallet_withdraw_dto->withdraw_status
    cJSON *withdraw_status = cJSON_GetObjectItemCaseSensitive(wallet_withdraw_dtoJSON, "withdrawStatus");
    walletsservice_wallet_withdraw_dto_WITHDRAWSTATUS_e withdraw_statusVariable;
    if (withdraw_status) { 
    if(!cJSON_IsString(withdraw_status))
    {
    goto end; //Enum
    }
    withdraw_statusVariable = wallet_withdraw_dto_withdraw_status_FromString(withdraw_status->valuestring);
    }

    // wallet_withdraw_dto->wallet_account_id
    cJSON *wallet_account_id = cJSON_GetObjectItemCaseSensitive(wallet_withdraw_dtoJSON, "walletAccountId");
    if (wallet_account_id) { 
    if(!cJSON_IsString(wallet_account_id) && !cJSON_IsNull(wallet_account_id))
    {
    goto end; //String
    }
    }

    // wallet_withdraw_dto->wallet_withdraw_request_id
    cJSON *wallet_withdraw_request_id = cJSON_GetObjectItemCaseSensitive(wallet_withdraw_dtoJSON, "walletWithdrawRequestId");
    if (wallet_withdraw_request_id) { 
    if(!cJSON_IsString(wallet_withdraw_request_id) && !cJSON_IsNull(wallet_withdraw_request_id))
    {
    goto end; //String
    }
    }

    // wallet_withdraw_dto->balance_before_withdraw
    cJSON *balance_before_withdraw = cJSON_GetObjectItemCaseSensitive(wallet_withdraw_dtoJSON, "balanceBeforeWithdraw");
    if (balance_before_withdraw) { 
    if(!cJSON_IsNumber(balance_before_withdraw))
    {
    goto end; //Numeric
    }
    }

    // wallet_withdraw_dto->balance_after_withdraw
    cJSON *balance_after_withdraw = cJSON_GetObjectItemCaseSensitive(wallet_withdraw_dtoJSON, "balanceAfterWithdraw");
    if (balance_after_withdraw) { 
    if(!cJSON_IsNumber(balance_after_withdraw))
    {
    goto end; //Numeric
    }
    }

    // wallet_withdraw_dto->withdrawed_amount
    cJSON *withdrawed_amount = cJSON_GetObjectItemCaseSensitive(wallet_withdraw_dtoJSON, "withdrawedAmount");
    if (withdrawed_amount) { 
    if(!cJSON_IsNumber(withdrawed_amount))
    {
    goto end; //Numeric
    }
    }

    // wallet_withdraw_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(wallet_withdraw_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }


    wallet_withdraw_dto_local_var = wallet_withdraw_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        withdraw_status ? withdraw_statusVariable : walletsservice_wallet_withdraw_dto_WITHDRAWSTATUS_NULL,
        wallet_account_id && !cJSON_IsNull(wallet_account_id) ? strdup(wallet_account_id->valuestring) : NULL,
        wallet_withdraw_request_id && !cJSON_IsNull(wallet_withdraw_request_id) ? strdup(wallet_withdraw_request_id->valuestring) : NULL,
        balance_before_withdraw ? balance_before_withdraw->valuedouble : 0,
        balance_after_withdraw ? balance_after_withdraw->valuedouble : 0,
        withdrawed_amount ? withdrawed_amount->valuedouble : 0,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL
        );

    return wallet_withdraw_dto_local_var;
end:
    return NULL;

}
