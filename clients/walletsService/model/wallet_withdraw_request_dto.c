#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "wallet_withdraw_request_dto.h"


char* wallet_withdraw_request_dto_wallet_withdraw_request_status_ToString(walletsservice_wallet_withdraw_request_dto_WALLETWITHDRAWREQUESTSTATUS_e wallet_withdraw_request_status) {
    char* wallet_withdraw_request_statusArray[] =  { "NULL", "Pending", "Processed", "Cancelled", "OnHold", "Denied" };
    return wallet_withdraw_request_statusArray[wallet_withdraw_request_status];
}

walletsservice_wallet_withdraw_request_dto_WALLETWITHDRAWREQUESTSTATUS_e wallet_withdraw_request_dto_wallet_withdraw_request_status_FromString(char* wallet_withdraw_request_status){
    int stringToReturn = 0;
    char *wallet_withdraw_request_statusArray[] =  { "NULL", "Pending", "Processed", "Cancelled", "OnHold", "Denied" };
    size_t sizeofArray = sizeof(wallet_withdraw_request_statusArray) / sizeof(wallet_withdraw_request_statusArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(wallet_withdraw_request_status, wallet_withdraw_request_statusArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

wallet_withdraw_request_dto_t *wallet_withdraw_request_dto_create(
    char *id,
    char *timestamp,
    double requested_withdraw_amount,
    double requested_withdraw_amount_in_usd,
    walletsservice_wallet_withdraw_request_dto_WALLETWITHDRAWREQUESTSTATUS_e wallet_withdraw_request_status,
    char *currency_id,
    char *business_id,
    char *wallet_account_id,
    char *bank_account_id
    ) {
    wallet_withdraw_request_dto_t *wallet_withdraw_request_dto_local_var = malloc(sizeof(wallet_withdraw_request_dto_t));
    if (!wallet_withdraw_request_dto_local_var) {
        return NULL;
    }
    wallet_withdraw_request_dto_local_var->id = id;
    wallet_withdraw_request_dto_local_var->timestamp = timestamp;
    wallet_withdraw_request_dto_local_var->requested_withdraw_amount = requested_withdraw_amount;
    wallet_withdraw_request_dto_local_var->requested_withdraw_amount_in_usd = requested_withdraw_amount_in_usd;
    wallet_withdraw_request_dto_local_var->wallet_withdraw_request_status = wallet_withdraw_request_status;
    wallet_withdraw_request_dto_local_var->currency_id = currency_id;
    wallet_withdraw_request_dto_local_var->business_id = business_id;
    wallet_withdraw_request_dto_local_var->wallet_account_id = wallet_account_id;
    wallet_withdraw_request_dto_local_var->bank_account_id = bank_account_id;

    return wallet_withdraw_request_dto_local_var;
}


void wallet_withdraw_request_dto_free(wallet_withdraw_request_dto_t *wallet_withdraw_request_dto) {
    if(NULL == wallet_withdraw_request_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (wallet_withdraw_request_dto->id) {
        free(wallet_withdraw_request_dto->id);
        wallet_withdraw_request_dto->id = NULL;
    }
    if (wallet_withdraw_request_dto->timestamp) {
        free(wallet_withdraw_request_dto->timestamp);
        wallet_withdraw_request_dto->timestamp = NULL;
    }
    if (wallet_withdraw_request_dto->currency_id) {
        free(wallet_withdraw_request_dto->currency_id);
        wallet_withdraw_request_dto->currency_id = NULL;
    }
    if (wallet_withdraw_request_dto->business_id) {
        free(wallet_withdraw_request_dto->business_id);
        wallet_withdraw_request_dto->business_id = NULL;
    }
    if (wallet_withdraw_request_dto->wallet_account_id) {
        free(wallet_withdraw_request_dto->wallet_account_id);
        wallet_withdraw_request_dto->wallet_account_id = NULL;
    }
    if (wallet_withdraw_request_dto->bank_account_id) {
        free(wallet_withdraw_request_dto->bank_account_id);
        wallet_withdraw_request_dto->bank_account_id = NULL;
    }
    free(wallet_withdraw_request_dto);
}

cJSON *wallet_withdraw_request_dto_convertToJSON(wallet_withdraw_request_dto_t *wallet_withdraw_request_dto) {
    cJSON *item = cJSON_CreateObject();

    // wallet_withdraw_request_dto->id
    if(wallet_withdraw_request_dto->id) {
    if(cJSON_AddStringToObject(item, "id", wallet_withdraw_request_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // wallet_withdraw_request_dto->timestamp
    if(wallet_withdraw_request_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", wallet_withdraw_request_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // wallet_withdraw_request_dto->requested_withdraw_amount
    if(wallet_withdraw_request_dto->requested_withdraw_amount) {
    if(cJSON_AddNumberToObject(item, "requestedWithdrawAmount", wallet_withdraw_request_dto->requested_withdraw_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // wallet_withdraw_request_dto->requested_withdraw_amount_in_usd
    if(wallet_withdraw_request_dto->requested_withdraw_amount_in_usd) {
    if(cJSON_AddNumberToObject(item, "requestedWithdrawAmountInUSD", wallet_withdraw_request_dto->requested_withdraw_amount_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // wallet_withdraw_request_dto->wallet_withdraw_request_status
    if(wallet_withdraw_request_dto->wallet_withdraw_request_status != walletsservice_wallet_withdraw_request_dto_WALLETWITHDRAWREQUESTSTATUS_NULL) {
    if(cJSON_AddStringToObject(item, "walletWithdrawRequestStatus", wallet_withdraw_request_statuswallet_withdraw_request_dto_ToString(wallet_withdraw_request_dto->wallet_withdraw_request_status)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // wallet_withdraw_request_dto->currency_id
    if(wallet_withdraw_request_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", wallet_withdraw_request_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // wallet_withdraw_request_dto->business_id
    if(wallet_withdraw_request_dto->business_id) {
    if(cJSON_AddStringToObject(item, "businessId", wallet_withdraw_request_dto->business_id) == NULL) {
    goto fail; //String
    }
    }


    // wallet_withdraw_request_dto->wallet_account_id
    if(wallet_withdraw_request_dto->wallet_account_id) {
    if(cJSON_AddStringToObject(item, "walletAccountId", wallet_withdraw_request_dto->wallet_account_id) == NULL) {
    goto fail; //String
    }
    }


    // wallet_withdraw_request_dto->bank_account_id
    if(wallet_withdraw_request_dto->bank_account_id) {
    if(cJSON_AddStringToObject(item, "bankAccountId", wallet_withdraw_request_dto->bank_account_id) == NULL) {
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

wallet_withdraw_request_dto_t *wallet_withdraw_request_dto_parseFromJSON(cJSON *wallet_withdraw_request_dtoJSON){

    wallet_withdraw_request_dto_t *wallet_withdraw_request_dto_local_var = NULL;

    // wallet_withdraw_request_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(wallet_withdraw_request_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // wallet_withdraw_request_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(wallet_withdraw_request_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // wallet_withdraw_request_dto->requested_withdraw_amount
    cJSON *requested_withdraw_amount = cJSON_GetObjectItemCaseSensitive(wallet_withdraw_request_dtoJSON, "requestedWithdrawAmount");
    if (requested_withdraw_amount) { 
    if(!cJSON_IsNumber(requested_withdraw_amount))
    {
    goto end; //Numeric
    }
    }

    // wallet_withdraw_request_dto->requested_withdraw_amount_in_usd
    cJSON *requested_withdraw_amount_in_usd = cJSON_GetObjectItemCaseSensitive(wallet_withdraw_request_dtoJSON, "requestedWithdrawAmountInUSD");
    if (requested_withdraw_amount_in_usd) { 
    if(!cJSON_IsNumber(requested_withdraw_amount_in_usd))
    {
    goto end; //Numeric
    }
    }

    // wallet_withdraw_request_dto->wallet_withdraw_request_status
    cJSON *wallet_withdraw_request_status = cJSON_GetObjectItemCaseSensitive(wallet_withdraw_request_dtoJSON, "walletWithdrawRequestStatus");
    walletsservice_wallet_withdraw_request_dto_WALLETWITHDRAWREQUESTSTATUS_e wallet_withdraw_request_statusVariable;
    if (wallet_withdraw_request_status) { 
    if(!cJSON_IsString(wallet_withdraw_request_status))
    {
    goto end; //Enum
    }
    wallet_withdraw_request_statusVariable = wallet_withdraw_request_dto_wallet_withdraw_request_status_FromString(wallet_withdraw_request_status->valuestring);
    }

    // wallet_withdraw_request_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(wallet_withdraw_request_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // wallet_withdraw_request_dto->business_id
    cJSON *business_id = cJSON_GetObjectItemCaseSensitive(wallet_withdraw_request_dtoJSON, "businessId");
    if (business_id) { 
    if(!cJSON_IsString(business_id) && !cJSON_IsNull(business_id))
    {
    goto end; //String
    }
    }

    // wallet_withdraw_request_dto->wallet_account_id
    cJSON *wallet_account_id = cJSON_GetObjectItemCaseSensitive(wallet_withdraw_request_dtoJSON, "walletAccountId");
    if (wallet_account_id) { 
    if(!cJSON_IsString(wallet_account_id) && !cJSON_IsNull(wallet_account_id))
    {
    goto end; //String
    }
    }

    // wallet_withdraw_request_dto->bank_account_id
    cJSON *bank_account_id = cJSON_GetObjectItemCaseSensitive(wallet_withdraw_request_dtoJSON, "bankAccountId");
    if (bank_account_id) { 
    if(!cJSON_IsString(bank_account_id) && !cJSON_IsNull(bank_account_id))
    {
    goto end; //String
    }
    }


    wallet_withdraw_request_dto_local_var = wallet_withdraw_request_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        requested_withdraw_amount ? requested_withdraw_amount->valuedouble : 0,
        requested_withdraw_amount_in_usd ? requested_withdraw_amount_in_usd->valuedouble : 0,
        wallet_withdraw_request_status ? wallet_withdraw_request_statusVariable : walletsservice_wallet_withdraw_request_dto_WALLETWITHDRAWREQUESTSTATUS_NULL,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        business_id && !cJSON_IsNull(business_id) ? strdup(business_id->valuestring) : NULL,
        wallet_account_id && !cJSON_IsNull(wallet_account_id) ? strdup(wallet_account_id->valuestring) : NULL,
        bank_account_id && !cJSON_IsNull(bank_account_id) ? strdup(bank_account_id->valuestring) : NULL
        );

    return wallet_withdraw_request_dto_local_var;
end:
    return NULL;

}
