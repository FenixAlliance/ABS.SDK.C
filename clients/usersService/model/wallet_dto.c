#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "wallet_dto.h"



wallet_dto_t *wallet_dto_create(
    char *id,
    char *timestamp,
    double balance,
    double crypto_balance,
    int test_mode,
    int verified,
    char *type,
    char *currency_id,
    double forex_rate,
    double balance_in_usd,
    double main_net_ether_balance,
    char *ethereum_address,
    char *ethereum_public_key,
    char *ethereum_private_key,
    double rolling_reserve_percent
    ) {
    wallet_dto_t *wallet_dto_local_var = malloc(sizeof(wallet_dto_t));
    if (!wallet_dto_local_var) {
        return NULL;
    }
    wallet_dto_local_var->id = id;
    wallet_dto_local_var->timestamp = timestamp;
    wallet_dto_local_var->balance = balance;
    wallet_dto_local_var->crypto_balance = crypto_balance;
    wallet_dto_local_var->test_mode = test_mode;
    wallet_dto_local_var->verified = verified;
    wallet_dto_local_var->type = type;
    wallet_dto_local_var->currency_id = currency_id;
    wallet_dto_local_var->forex_rate = forex_rate;
    wallet_dto_local_var->balance_in_usd = balance_in_usd;
    wallet_dto_local_var->main_net_ether_balance = main_net_ether_balance;
    wallet_dto_local_var->ethereum_address = ethereum_address;
    wallet_dto_local_var->ethereum_public_key = ethereum_public_key;
    wallet_dto_local_var->ethereum_private_key = ethereum_private_key;
    wallet_dto_local_var->rolling_reserve_percent = rolling_reserve_percent;

    return wallet_dto_local_var;
}


void wallet_dto_free(wallet_dto_t *wallet_dto) {
    if(NULL == wallet_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (wallet_dto->id) {
        free(wallet_dto->id);
        wallet_dto->id = NULL;
    }
    if (wallet_dto->timestamp) {
        free(wallet_dto->timestamp);
        wallet_dto->timestamp = NULL;
    }
    if (wallet_dto->type) {
        free(wallet_dto->type);
        wallet_dto->type = NULL;
    }
    if (wallet_dto->currency_id) {
        free(wallet_dto->currency_id);
        wallet_dto->currency_id = NULL;
    }
    if (wallet_dto->ethereum_address) {
        free(wallet_dto->ethereum_address);
        wallet_dto->ethereum_address = NULL;
    }
    if (wallet_dto->ethereum_public_key) {
        free(wallet_dto->ethereum_public_key);
        wallet_dto->ethereum_public_key = NULL;
    }
    if (wallet_dto->ethereum_private_key) {
        free(wallet_dto->ethereum_private_key);
        wallet_dto->ethereum_private_key = NULL;
    }
    free(wallet_dto);
}

cJSON *wallet_dto_convertToJSON(wallet_dto_t *wallet_dto) {
    cJSON *item = cJSON_CreateObject();

    // wallet_dto->id
    if(wallet_dto->id) {
    if(cJSON_AddStringToObject(item, "id", wallet_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // wallet_dto->timestamp
    if(wallet_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", wallet_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // wallet_dto->balance
    if(wallet_dto->balance) {
    if(cJSON_AddNumberToObject(item, "balance", wallet_dto->balance) == NULL) {
    goto fail; //Numeric
    }
    }


    // wallet_dto->crypto_balance
    if(wallet_dto->crypto_balance) {
    if(cJSON_AddNumberToObject(item, "cryptoBalance", wallet_dto->crypto_balance) == NULL) {
    goto fail; //Numeric
    }
    }


    // wallet_dto->test_mode
    if(wallet_dto->test_mode) {
    if(cJSON_AddBoolToObject(item, "testMode", wallet_dto->test_mode) == NULL) {
    goto fail; //Bool
    }
    }


    // wallet_dto->verified
    if(wallet_dto->verified) {
    if(cJSON_AddBoolToObject(item, "verified", wallet_dto->verified) == NULL) {
    goto fail; //Bool
    }
    }


    // wallet_dto->type
    if(wallet_dto->type) {
    if(cJSON_AddStringToObject(item, "type", wallet_dto->type) == NULL) {
    goto fail; //String
    }
    }


    // wallet_dto->currency_id
    if(wallet_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", wallet_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // wallet_dto->forex_rate
    if(wallet_dto->forex_rate) {
    if(cJSON_AddNumberToObject(item, "forexRate", wallet_dto->forex_rate) == NULL) {
    goto fail; //Numeric
    }
    }


    // wallet_dto->balance_in_usd
    if(wallet_dto->balance_in_usd) {
    if(cJSON_AddNumberToObject(item, "balanceInUsd", wallet_dto->balance_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // wallet_dto->main_net_ether_balance
    if(wallet_dto->main_net_ether_balance) {
    if(cJSON_AddNumberToObject(item, "mainNetEtherBalance", wallet_dto->main_net_ether_balance) == NULL) {
    goto fail; //Numeric
    }
    }


    // wallet_dto->ethereum_address
    if(wallet_dto->ethereum_address) {
    if(cJSON_AddStringToObject(item, "ethereumAddress", wallet_dto->ethereum_address) == NULL) {
    goto fail; //String
    }
    }


    // wallet_dto->ethereum_public_key
    if(wallet_dto->ethereum_public_key) {
    if(cJSON_AddStringToObject(item, "ethereumPublicKey", wallet_dto->ethereum_public_key) == NULL) {
    goto fail; //String
    }
    }


    // wallet_dto->ethereum_private_key
    if(wallet_dto->ethereum_private_key) {
    if(cJSON_AddStringToObject(item, "ethereumPrivateKey", wallet_dto->ethereum_private_key) == NULL) {
    goto fail; //String
    }
    }


    // wallet_dto->rolling_reserve_percent
    if(wallet_dto->rolling_reserve_percent) {
    if(cJSON_AddNumberToObject(item, "rollingReservePercent", wallet_dto->rolling_reserve_percent) == NULL) {
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

wallet_dto_t *wallet_dto_parseFromJSON(cJSON *wallet_dtoJSON){

    wallet_dto_t *wallet_dto_local_var = NULL;

    // wallet_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(wallet_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // wallet_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(wallet_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // wallet_dto->balance
    cJSON *balance = cJSON_GetObjectItemCaseSensitive(wallet_dtoJSON, "balance");
    if (balance) { 
    if(!cJSON_IsNumber(balance))
    {
    goto end; //Numeric
    }
    }

    // wallet_dto->crypto_balance
    cJSON *crypto_balance = cJSON_GetObjectItemCaseSensitive(wallet_dtoJSON, "cryptoBalance");
    if (crypto_balance) { 
    if(!cJSON_IsNumber(crypto_balance))
    {
    goto end; //Numeric
    }
    }

    // wallet_dto->test_mode
    cJSON *test_mode = cJSON_GetObjectItemCaseSensitive(wallet_dtoJSON, "testMode");
    if (test_mode) { 
    if(!cJSON_IsBool(test_mode))
    {
    goto end; //Bool
    }
    }

    // wallet_dto->verified
    cJSON *verified = cJSON_GetObjectItemCaseSensitive(wallet_dtoJSON, "verified");
    if (verified) { 
    if(!cJSON_IsBool(verified))
    {
    goto end; //Bool
    }
    }

    // wallet_dto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(wallet_dtoJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // wallet_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(wallet_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // wallet_dto->forex_rate
    cJSON *forex_rate = cJSON_GetObjectItemCaseSensitive(wallet_dtoJSON, "forexRate");
    if (forex_rate) { 
    if(!cJSON_IsNumber(forex_rate))
    {
    goto end; //Numeric
    }
    }

    // wallet_dto->balance_in_usd
    cJSON *balance_in_usd = cJSON_GetObjectItemCaseSensitive(wallet_dtoJSON, "balanceInUsd");
    if (balance_in_usd) { 
    if(!cJSON_IsNumber(balance_in_usd))
    {
    goto end; //Numeric
    }
    }

    // wallet_dto->main_net_ether_balance
    cJSON *main_net_ether_balance = cJSON_GetObjectItemCaseSensitive(wallet_dtoJSON, "mainNetEtherBalance");
    if (main_net_ether_balance) { 
    if(!cJSON_IsNumber(main_net_ether_balance))
    {
    goto end; //Numeric
    }
    }

    // wallet_dto->ethereum_address
    cJSON *ethereum_address = cJSON_GetObjectItemCaseSensitive(wallet_dtoJSON, "ethereumAddress");
    if (ethereum_address) { 
    if(!cJSON_IsString(ethereum_address) && !cJSON_IsNull(ethereum_address))
    {
    goto end; //String
    }
    }

    // wallet_dto->ethereum_public_key
    cJSON *ethereum_public_key = cJSON_GetObjectItemCaseSensitive(wallet_dtoJSON, "ethereumPublicKey");
    if (ethereum_public_key) { 
    if(!cJSON_IsString(ethereum_public_key) && !cJSON_IsNull(ethereum_public_key))
    {
    goto end; //String
    }
    }

    // wallet_dto->ethereum_private_key
    cJSON *ethereum_private_key = cJSON_GetObjectItemCaseSensitive(wallet_dtoJSON, "ethereumPrivateKey");
    if (ethereum_private_key) { 
    if(!cJSON_IsString(ethereum_private_key) && !cJSON_IsNull(ethereum_private_key))
    {
    goto end; //String
    }
    }

    // wallet_dto->rolling_reserve_percent
    cJSON *rolling_reserve_percent = cJSON_GetObjectItemCaseSensitive(wallet_dtoJSON, "rollingReservePercent");
    if (rolling_reserve_percent) { 
    if(!cJSON_IsNumber(rolling_reserve_percent))
    {
    goto end; //Numeric
    }
    }


    wallet_dto_local_var = wallet_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        balance ? balance->valuedouble : 0,
        crypto_balance ? crypto_balance->valuedouble : 0,
        test_mode ? test_mode->valueint : 0,
        verified ? verified->valueint : 0,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        forex_rate ? forex_rate->valuedouble : 0,
        balance_in_usd ? balance_in_usd->valuedouble : 0,
        main_net_ether_balance ? main_net_ether_balance->valuedouble : 0,
        ethereum_address && !cJSON_IsNull(ethereum_address) ? strdup(ethereum_address->valuestring) : NULL,
        ethereum_public_key && !cJSON_IsNull(ethereum_public_key) ? strdup(ethereum_public_key->valuestring) : NULL,
        ethereum_private_key && !cJSON_IsNull(ethereum_private_key) ? strdup(ethereum_private_key->valuestring) : NULL,
        rolling_reserve_percent ? rolling_reserve_percent->valuedouble : 0
        );

    return wallet_dto_local_var;
end:
    return NULL;

}
