#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "blockchain_block_dto.h"



blockchain_block_dto_t *blockchain_block_dto_create(
    char *id,
    char *timestamp,
    int index,
    char *hash,
    char *data,
    long nonce,
    char *previous_hash,
    char *blockchain_id,
    char *wallet_account_id,
    char *tenant_id
    ) {
    blockchain_block_dto_t *blockchain_block_dto_local_var = malloc(sizeof(blockchain_block_dto_t));
    if (!blockchain_block_dto_local_var) {
        return NULL;
    }
    blockchain_block_dto_local_var->id = id;
    blockchain_block_dto_local_var->timestamp = timestamp;
    blockchain_block_dto_local_var->index = index;
    blockchain_block_dto_local_var->hash = hash;
    blockchain_block_dto_local_var->data = data;
    blockchain_block_dto_local_var->nonce = nonce;
    blockchain_block_dto_local_var->previous_hash = previous_hash;
    blockchain_block_dto_local_var->blockchain_id = blockchain_id;
    blockchain_block_dto_local_var->wallet_account_id = wallet_account_id;
    blockchain_block_dto_local_var->tenant_id = tenant_id;

    return blockchain_block_dto_local_var;
}


void blockchain_block_dto_free(blockchain_block_dto_t *blockchain_block_dto) {
    if(NULL == blockchain_block_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (blockchain_block_dto->id) {
        free(blockchain_block_dto->id);
        blockchain_block_dto->id = NULL;
    }
    if (blockchain_block_dto->timestamp) {
        free(blockchain_block_dto->timestamp);
        blockchain_block_dto->timestamp = NULL;
    }
    if (blockchain_block_dto->hash) {
        free(blockchain_block_dto->hash);
        blockchain_block_dto->hash = NULL;
    }
    if (blockchain_block_dto->data) {
        free(blockchain_block_dto->data);
        blockchain_block_dto->data = NULL;
    }
    if (blockchain_block_dto->previous_hash) {
        free(blockchain_block_dto->previous_hash);
        blockchain_block_dto->previous_hash = NULL;
    }
    if (blockchain_block_dto->blockchain_id) {
        free(blockchain_block_dto->blockchain_id);
        blockchain_block_dto->blockchain_id = NULL;
    }
    if (blockchain_block_dto->wallet_account_id) {
        free(blockchain_block_dto->wallet_account_id);
        blockchain_block_dto->wallet_account_id = NULL;
    }
    if (blockchain_block_dto->tenant_id) {
        free(blockchain_block_dto->tenant_id);
        blockchain_block_dto->tenant_id = NULL;
    }
    free(blockchain_block_dto);
}

cJSON *blockchain_block_dto_convertToJSON(blockchain_block_dto_t *blockchain_block_dto) {
    cJSON *item = cJSON_CreateObject();

    // blockchain_block_dto->id
    if(blockchain_block_dto->id) {
    if(cJSON_AddStringToObject(item, "id", blockchain_block_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // blockchain_block_dto->timestamp
    if(blockchain_block_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", blockchain_block_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // blockchain_block_dto->index
    if(blockchain_block_dto->index) {
    if(cJSON_AddNumberToObject(item, "index", blockchain_block_dto->index) == NULL) {
    goto fail; //Numeric
    }
    }


    // blockchain_block_dto->hash
    if(blockchain_block_dto->hash) {
    if(cJSON_AddStringToObject(item, "hash", blockchain_block_dto->hash) == NULL) {
    goto fail; //String
    }
    }


    // blockchain_block_dto->data
    if(blockchain_block_dto->data) {
    if(cJSON_AddStringToObject(item, "data", blockchain_block_dto->data) == NULL) {
    goto fail; //String
    }
    }


    // blockchain_block_dto->nonce
    if(blockchain_block_dto->nonce) {
    if(cJSON_AddNumberToObject(item, "nonce", blockchain_block_dto->nonce) == NULL) {
    goto fail; //Numeric
    }
    }


    // blockchain_block_dto->previous_hash
    if(blockchain_block_dto->previous_hash) {
    if(cJSON_AddStringToObject(item, "previousHash", blockchain_block_dto->previous_hash) == NULL) {
    goto fail; //String
    }
    }


    // blockchain_block_dto->blockchain_id
    if(blockchain_block_dto->blockchain_id) {
    if(cJSON_AddStringToObject(item, "blockchainId", blockchain_block_dto->blockchain_id) == NULL) {
    goto fail; //String
    }
    }


    // blockchain_block_dto->wallet_account_id
    if(blockchain_block_dto->wallet_account_id) {
    if(cJSON_AddStringToObject(item, "walletAccountId", blockchain_block_dto->wallet_account_id) == NULL) {
    goto fail; //String
    }
    }


    // blockchain_block_dto->tenant_id
    if(blockchain_block_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", blockchain_block_dto->tenant_id) == NULL) {
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

blockchain_block_dto_t *blockchain_block_dto_parseFromJSON(cJSON *blockchain_block_dtoJSON){

    blockchain_block_dto_t *blockchain_block_dto_local_var = NULL;

    // blockchain_block_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(blockchain_block_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // blockchain_block_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(blockchain_block_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // blockchain_block_dto->index
    cJSON *index = cJSON_GetObjectItemCaseSensitive(blockchain_block_dtoJSON, "index");
    if (index) { 
    if(!cJSON_IsNumber(index))
    {
    goto end; //Numeric
    }
    }

    // blockchain_block_dto->hash
    cJSON *hash = cJSON_GetObjectItemCaseSensitive(blockchain_block_dtoJSON, "hash");
    if (hash) { 
    if(!cJSON_IsString(hash) && !cJSON_IsNull(hash))
    {
    goto end; //String
    }
    }

    // blockchain_block_dto->data
    cJSON *data = cJSON_GetObjectItemCaseSensitive(blockchain_block_dtoJSON, "data");
    if (data) { 
    if(!cJSON_IsString(data) && !cJSON_IsNull(data))
    {
    goto end; //String
    }
    }

    // blockchain_block_dto->nonce
    cJSON *nonce = cJSON_GetObjectItemCaseSensitive(blockchain_block_dtoJSON, "nonce");
    if (nonce) { 
    if(!cJSON_IsNumber(nonce))
    {
    goto end; //Numeric
    }
    }

    // blockchain_block_dto->previous_hash
    cJSON *previous_hash = cJSON_GetObjectItemCaseSensitive(blockchain_block_dtoJSON, "previousHash");
    if (previous_hash) { 
    if(!cJSON_IsString(previous_hash) && !cJSON_IsNull(previous_hash))
    {
    goto end; //String
    }
    }

    // blockchain_block_dto->blockchain_id
    cJSON *blockchain_id = cJSON_GetObjectItemCaseSensitive(blockchain_block_dtoJSON, "blockchainId");
    if (blockchain_id) { 
    if(!cJSON_IsString(blockchain_id) && !cJSON_IsNull(blockchain_id))
    {
    goto end; //String
    }
    }

    // blockchain_block_dto->wallet_account_id
    cJSON *wallet_account_id = cJSON_GetObjectItemCaseSensitive(blockchain_block_dtoJSON, "walletAccountId");
    if (wallet_account_id) { 
    if(!cJSON_IsString(wallet_account_id) && !cJSON_IsNull(wallet_account_id))
    {
    goto end; //String
    }
    }

    // blockchain_block_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(blockchain_block_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }


    blockchain_block_dto_local_var = blockchain_block_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        index ? index->valuedouble : 0,
        hash && !cJSON_IsNull(hash) ? strdup(hash->valuestring) : NULL,
        data && !cJSON_IsNull(data) ? strdup(data->valuestring) : NULL,
        nonce ? nonce->valuedouble : 0,
        previous_hash && !cJSON_IsNull(previous_hash) ? strdup(previous_hash->valuestring) : NULL,
        blockchain_id && !cJSON_IsNull(blockchain_id) ? strdup(blockchain_id->valuestring) : NULL,
        wallet_account_id && !cJSON_IsNull(wallet_account_id) ? strdup(wallet_account_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL
        );

    return blockchain_block_dto_local_var;
end:
    return NULL;

}
