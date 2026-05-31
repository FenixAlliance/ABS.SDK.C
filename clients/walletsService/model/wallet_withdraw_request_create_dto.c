#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "wallet_withdraw_request_create_dto.h"



wallet_withdraw_request_create_dto_t *wallet_withdraw_request_create_dto_create(
    char *id,
    char *timestamp,
    double requested_withdraw_amount,
    char *currency_id,
    char *bank_account_id
    ) {
    wallet_withdraw_request_create_dto_t *wallet_withdraw_request_create_dto_local_var = malloc(sizeof(wallet_withdraw_request_create_dto_t));
    if (!wallet_withdraw_request_create_dto_local_var) {
        return NULL;
    }
    wallet_withdraw_request_create_dto_local_var->id = id;
    wallet_withdraw_request_create_dto_local_var->timestamp = timestamp;
    wallet_withdraw_request_create_dto_local_var->requested_withdraw_amount = requested_withdraw_amount;
    wallet_withdraw_request_create_dto_local_var->currency_id = currency_id;
    wallet_withdraw_request_create_dto_local_var->bank_account_id = bank_account_id;

    return wallet_withdraw_request_create_dto_local_var;
}


void wallet_withdraw_request_create_dto_free(wallet_withdraw_request_create_dto_t *wallet_withdraw_request_create_dto) {
    if(NULL == wallet_withdraw_request_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (wallet_withdraw_request_create_dto->id) {
        free(wallet_withdraw_request_create_dto->id);
        wallet_withdraw_request_create_dto->id = NULL;
    }
    if (wallet_withdraw_request_create_dto->timestamp) {
        free(wallet_withdraw_request_create_dto->timestamp);
        wallet_withdraw_request_create_dto->timestamp = NULL;
    }
    if (wallet_withdraw_request_create_dto->currency_id) {
        free(wallet_withdraw_request_create_dto->currency_id);
        wallet_withdraw_request_create_dto->currency_id = NULL;
    }
    if (wallet_withdraw_request_create_dto->bank_account_id) {
        free(wallet_withdraw_request_create_dto->bank_account_id);
        wallet_withdraw_request_create_dto->bank_account_id = NULL;
    }
    free(wallet_withdraw_request_create_dto);
}

cJSON *wallet_withdraw_request_create_dto_convertToJSON(wallet_withdraw_request_create_dto_t *wallet_withdraw_request_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // wallet_withdraw_request_create_dto->id
    if(wallet_withdraw_request_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", wallet_withdraw_request_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // wallet_withdraw_request_create_dto->timestamp
    if(wallet_withdraw_request_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", wallet_withdraw_request_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // wallet_withdraw_request_create_dto->requested_withdraw_amount
    if(wallet_withdraw_request_create_dto->requested_withdraw_amount) {
    if(cJSON_AddNumberToObject(item, "requestedWithdrawAmount", wallet_withdraw_request_create_dto->requested_withdraw_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // wallet_withdraw_request_create_dto->currency_id
    if(wallet_withdraw_request_create_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", wallet_withdraw_request_create_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // wallet_withdraw_request_create_dto->bank_account_id
    if(wallet_withdraw_request_create_dto->bank_account_id) {
    if(cJSON_AddStringToObject(item, "bankAccountId", wallet_withdraw_request_create_dto->bank_account_id) == NULL) {
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

wallet_withdraw_request_create_dto_t *wallet_withdraw_request_create_dto_parseFromJSON(cJSON *wallet_withdraw_request_create_dtoJSON){

    wallet_withdraw_request_create_dto_t *wallet_withdraw_request_create_dto_local_var = NULL;

    // wallet_withdraw_request_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(wallet_withdraw_request_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // wallet_withdraw_request_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(wallet_withdraw_request_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // wallet_withdraw_request_create_dto->requested_withdraw_amount
    cJSON *requested_withdraw_amount = cJSON_GetObjectItemCaseSensitive(wallet_withdraw_request_create_dtoJSON, "requestedWithdrawAmount");
    if (requested_withdraw_amount) { 
    if(!cJSON_IsNumber(requested_withdraw_amount))
    {
    goto end; //Numeric
    }
    }

    // wallet_withdraw_request_create_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(wallet_withdraw_request_create_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // wallet_withdraw_request_create_dto->bank_account_id
    cJSON *bank_account_id = cJSON_GetObjectItemCaseSensitive(wallet_withdraw_request_create_dtoJSON, "bankAccountId");
    if (bank_account_id) { 
    if(!cJSON_IsString(bank_account_id) && !cJSON_IsNull(bank_account_id))
    {
    goto end; //String
    }
    }


    wallet_withdraw_request_create_dto_local_var = wallet_withdraw_request_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        requested_withdraw_amount ? requested_withdraw_amount->valuedouble : 0,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        bank_account_id && !cJSON_IsNull(bank_account_id) ? strdup(bank_account_id->valuestring) : NULL
        );

    return wallet_withdraw_request_create_dto_local_var;
end:
    return NULL;

}
