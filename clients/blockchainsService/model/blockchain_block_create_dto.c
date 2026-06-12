#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "blockchain_block_create_dto.h"



blockchain_block_create_dto_t *blockchain_block_create_dto_create(
    char *id,
    char *timestamp,
    char *hash,
    char *data,
    long nonce,
    char *previous_hash,
    char *blockchain_id,
    char *wallet_account_id
    ) {
    blockchain_block_create_dto_t *blockchain_block_create_dto_local_var = malloc(sizeof(blockchain_block_create_dto_t));
    if (!blockchain_block_create_dto_local_var) {
        return NULL;
    }
    blockchain_block_create_dto_local_var->id = id;
    blockchain_block_create_dto_local_var->timestamp = timestamp;
    blockchain_block_create_dto_local_var->hash = hash;
    blockchain_block_create_dto_local_var->data = data;
    blockchain_block_create_dto_local_var->nonce = nonce;
    blockchain_block_create_dto_local_var->previous_hash = previous_hash;
    blockchain_block_create_dto_local_var->blockchain_id = blockchain_id;
    blockchain_block_create_dto_local_var->wallet_account_id = wallet_account_id;

    return blockchain_block_create_dto_local_var;
}


void blockchain_block_create_dto_free(blockchain_block_create_dto_t *blockchain_block_create_dto) {
    if(NULL == blockchain_block_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (blockchain_block_create_dto->id) {
        free(blockchain_block_create_dto->id);
        blockchain_block_create_dto->id = NULL;
    }
    if (blockchain_block_create_dto->timestamp) {
        free(blockchain_block_create_dto->timestamp);
        blockchain_block_create_dto->timestamp = NULL;
    }
    if (blockchain_block_create_dto->hash) {
        free(blockchain_block_create_dto->hash);
        blockchain_block_create_dto->hash = NULL;
    }
    if (blockchain_block_create_dto->data) {
        free(blockchain_block_create_dto->data);
        blockchain_block_create_dto->data = NULL;
    }
    if (blockchain_block_create_dto->previous_hash) {
        free(blockchain_block_create_dto->previous_hash);
        blockchain_block_create_dto->previous_hash = NULL;
    }
    if (blockchain_block_create_dto->blockchain_id) {
        free(blockchain_block_create_dto->blockchain_id);
        blockchain_block_create_dto->blockchain_id = NULL;
    }
    if (blockchain_block_create_dto->wallet_account_id) {
        free(blockchain_block_create_dto->wallet_account_id);
        blockchain_block_create_dto->wallet_account_id = NULL;
    }
    free(blockchain_block_create_dto);
}

cJSON *blockchain_block_create_dto_convertToJSON(blockchain_block_create_dto_t *blockchain_block_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // blockchain_block_create_dto->id
    if(blockchain_block_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", blockchain_block_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // blockchain_block_create_dto->timestamp
    if(blockchain_block_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", blockchain_block_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // blockchain_block_create_dto->hash
    if (!blockchain_block_create_dto->hash) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "hash", blockchain_block_create_dto->hash) == NULL) {
    goto fail; //String
    }


    // blockchain_block_create_dto->data
    if(blockchain_block_create_dto->data) {
    if(cJSON_AddStringToObject(item, "data", blockchain_block_create_dto->data) == NULL) {
    goto fail; //String
    }
    }


    // blockchain_block_create_dto->nonce
    if(blockchain_block_create_dto->nonce) {
    if(cJSON_AddNumberToObject(item, "nonce", blockchain_block_create_dto->nonce) == NULL) {
    goto fail; //Numeric
    }
    }


    // blockchain_block_create_dto->previous_hash
    if(blockchain_block_create_dto->previous_hash) {
    if(cJSON_AddStringToObject(item, "previousHash", blockchain_block_create_dto->previous_hash) == NULL) {
    goto fail; //String
    }
    }


    // blockchain_block_create_dto->blockchain_id
    if (!blockchain_block_create_dto->blockchain_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "blockchainId", blockchain_block_create_dto->blockchain_id) == NULL) {
    goto fail; //String
    }


    // blockchain_block_create_dto->wallet_account_id
    if (!blockchain_block_create_dto->wallet_account_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "walletAccountId", blockchain_block_create_dto->wallet_account_id) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

blockchain_block_create_dto_t *blockchain_block_create_dto_parseFromJSON(cJSON *blockchain_block_create_dtoJSON){

    blockchain_block_create_dto_t *blockchain_block_create_dto_local_var = NULL;

    // blockchain_block_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(blockchain_block_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // blockchain_block_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(blockchain_block_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // blockchain_block_create_dto->hash
    cJSON *hash = cJSON_GetObjectItemCaseSensitive(blockchain_block_create_dtoJSON, "hash");
    if (!hash) {
        goto end;
    }

    
    if(!cJSON_IsString(hash))
    {
    goto end; //String
    }

    // blockchain_block_create_dto->data
    cJSON *data = cJSON_GetObjectItemCaseSensitive(blockchain_block_create_dtoJSON, "data");
    if (data) { 
    if(!cJSON_IsString(data) && !cJSON_IsNull(data))
    {
    goto end; //String
    }
    }

    // blockchain_block_create_dto->nonce
    cJSON *nonce = cJSON_GetObjectItemCaseSensitive(blockchain_block_create_dtoJSON, "nonce");
    if (nonce) { 
    if(!cJSON_IsNumber(nonce))
    {
    goto end; //Numeric
    }
    }

    // blockchain_block_create_dto->previous_hash
    cJSON *previous_hash = cJSON_GetObjectItemCaseSensitive(blockchain_block_create_dtoJSON, "previousHash");
    if (previous_hash) { 
    if(!cJSON_IsString(previous_hash) && !cJSON_IsNull(previous_hash))
    {
    goto end; //String
    }
    }

    // blockchain_block_create_dto->blockchain_id
    cJSON *blockchain_id = cJSON_GetObjectItemCaseSensitive(blockchain_block_create_dtoJSON, "blockchainId");
    if (!blockchain_id) {
        goto end;
    }

    
    if(!cJSON_IsString(blockchain_id))
    {
    goto end; //String
    }

    // blockchain_block_create_dto->wallet_account_id
    cJSON *wallet_account_id = cJSON_GetObjectItemCaseSensitive(blockchain_block_create_dtoJSON, "walletAccountId");
    if (!wallet_account_id) {
        goto end;
    }

    
    if(!cJSON_IsString(wallet_account_id))
    {
    goto end; //String
    }


    blockchain_block_create_dto_local_var = blockchain_block_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(hash->valuestring),
        data && !cJSON_IsNull(data) ? strdup(data->valuestring) : NULL,
        nonce ? nonce->valuedouble : 0,
        previous_hash && !cJSON_IsNull(previous_hash) ? strdup(previous_hash->valuestring) : NULL,
        strdup(blockchain_id->valuestring),
        strdup(wallet_account_id->valuestring)
        );

    return blockchain_block_create_dto_local_var;
end:
    return NULL;

}
