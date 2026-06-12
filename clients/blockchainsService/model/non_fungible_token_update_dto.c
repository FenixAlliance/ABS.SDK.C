#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "non_fungible_token_update_dto.h"



non_fungible_token_update_dto_t *non_fungible_token_update_dto_create(
    char *title,
    char *description,
    char *summary,
    double price,
    char *currency_id,
    int published,
    int minted,
    char *mint_transaction_hash,
    char *blockchain_block_id
    ) {
    non_fungible_token_update_dto_t *non_fungible_token_update_dto_local_var = malloc(sizeof(non_fungible_token_update_dto_t));
    if (!non_fungible_token_update_dto_local_var) {
        return NULL;
    }
    non_fungible_token_update_dto_local_var->title = title;
    non_fungible_token_update_dto_local_var->description = description;
    non_fungible_token_update_dto_local_var->summary = summary;
    non_fungible_token_update_dto_local_var->price = price;
    non_fungible_token_update_dto_local_var->currency_id = currency_id;
    non_fungible_token_update_dto_local_var->published = published;
    non_fungible_token_update_dto_local_var->minted = minted;
    non_fungible_token_update_dto_local_var->mint_transaction_hash = mint_transaction_hash;
    non_fungible_token_update_dto_local_var->blockchain_block_id = blockchain_block_id;

    return non_fungible_token_update_dto_local_var;
}


void non_fungible_token_update_dto_free(non_fungible_token_update_dto_t *non_fungible_token_update_dto) {
    if(NULL == non_fungible_token_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (non_fungible_token_update_dto->title) {
        free(non_fungible_token_update_dto->title);
        non_fungible_token_update_dto->title = NULL;
    }
    if (non_fungible_token_update_dto->description) {
        free(non_fungible_token_update_dto->description);
        non_fungible_token_update_dto->description = NULL;
    }
    if (non_fungible_token_update_dto->summary) {
        free(non_fungible_token_update_dto->summary);
        non_fungible_token_update_dto->summary = NULL;
    }
    if (non_fungible_token_update_dto->currency_id) {
        free(non_fungible_token_update_dto->currency_id);
        non_fungible_token_update_dto->currency_id = NULL;
    }
    if (non_fungible_token_update_dto->mint_transaction_hash) {
        free(non_fungible_token_update_dto->mint_transaction_hash);
        non_fungible_token_update_dto->mint_transaction_hash = NULL;
    }
    if (non_fungible_token_update_dto->blockchain_block_id) {
        free(non_fungible_token_update_dto->blockchain_block_id);
        non_fungible_token_update_dto->blockchain_block_id = NULL;
    }
    free(non_fungible_token_update_dto);
}

cJSON *non_fungible_token_update_dto_convertToJSON(non_fungible_token_update_dto_t *non_fungible_token_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // non_fungible_token_update_dto->title
    if(non_fungible_token_update_dto->title) {
    if(cJSON_AddStringToObject(item, "title", non_fungible_token_update_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // non_fungible_token_update_dto->description
    if(non_fungible_token_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", non_fungible_token_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // non_fungible_token_update_dto->summary
    if(non_fungible_token_update_dto->summary) {
    if(cJSON_AddStringToObject(item, "summary", non_fungible_token_update_dto->summary) == NULL) {
    goto fail; //String
    }
    }


    // non_fungible_token_update_dto->price
    if(non_fungible_token_update_dto->price) {
    if(cJSON_AddNumberToObject(item, "price", non_fungible_token_update_dto->price) == NULL) {
    goto fail; //Numeric
    }
    }


    // non_fungible_token_update_dto->currency_id
    if(non_fungible_token_update_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", non_fungible_token_update_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // non_fungible_token_update_dto->published
    if(non_fungible_token_update_dto->published) {
    if(cJSON_AddBoolToObject(item, "published", non_fungible_token_update_dto->published) == NULL) {
    goto fail; //Bool
    }
    }


    // non_fungible_token_update_dto->minted
    if(non_fungible_token_update_dto->minted) {
    if(cJSON_AddBoolToObject(item, "minted", non_fungible_token_update_dto->minted) == NULL) {
    goto fail; //Bool
    }
    }


    // non_fungible_token_update_dto->mint_transaction_hash
    if(non_fungible_token_update_dto->mint_transaction_hash) {
    if(cJSON_AddStringToObject(item, "mintTransactionHash", non_fungible_token_update_dto->mint_transaction_hash) == NULL) {
    goto fail; //String
    }
    }


    // non_fungible_token_update_dto->blockchain_block_id
    if(non_fungible_token_update_dto->blockchain_block_id) {
    if(cJSON_AddStringToObject(item, "blockchainBlockId", non_fungible_token_update_dto->blockchain_block_id) == NULL) {
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

non_fungible_token_update_dto_t *non_fungible_token_update_dto_parseFromJSON(cJSON *non_fungible_token_update_dtoJSON){

    non_fungible_token_update_dto_t *non_fungible_token_update_dto_local_var = NULL;

    // non_fungible_token_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(non_fungible_token_update_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // non_fungible_token_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(non_fungible_token_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // non_fungible_token_update_dto->summary
    cJSON *summary = cJSON_GetObjectItemCaseSensitive(non_fungible_token_update_dtoJSON, "summary");
    if (summary) { 
    if(!cJSON_IsString(summary) && !cJSON_IsNull(summary))
    {
    goto end; //String
    }
    }

    // non_fungible_token_update_dto->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(non_fungible_token_update_dtoJSON, "price");
    if (price) { 
    if(!cJSON_IsNumber(price))
    {
    goto end; //Numeric
    }
    }

    // non_fungible_token_update_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(non_fungible_token_update_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // non_fungible_token_update_dto->published
    cJSON *published = cJSON_GetObjectItemCaseSensitive(non_fungible_token_update_dtoJSON, "published");
    if (published) { 
    if(!cJSON_IsBool(published))
    {
    goto end; //Bool
    }
    }

    // non_fungible_token_update_dto->minted
    cJSON *minted = cJSON_GetObjectItemCaseSensitive(non_fungible_token_update_dtoJSON, "minted");
    if (minted) { 
    if(!cJSON_IsBool(minted))
    {
    goto end; //Bool
    }
    }

    // non_fungible_token_update_dto->mint_transaction_hash
    cJSON *mint_transaction_hash = cJSON_GetObjectItemCaseSensitive(non_fungible_token_update_dtoJSON, "mintTransactionHash");
    if (mint_transaction_hash) { 
    if(!cJSON_IsString(mint_transaction_hash) && !cJSON_IsNull(mint_transaction_hash))
    {
    goto end; //String
    }
    }

    // non_fungible_token_update_dto->blockchain_block_id
    cJSON *blockchain_block_id = cJSON_GetObjectItemCaseSensitive(non_fungible_token_update_dtoJSON, "blockchainBlockId");
    if (blockchain_block_id) { 
    if(!cJSON_IsString(blockchain_block_id) && !cJSON_IsNull(blockchain_block_id))
    {
    goto end; //String
    }
    }


    non_fungible_token_update_dto_local_var = non_fungible_token_update_dto_create (
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        summary && !cJSON_IsNull(summary) ? strdup(summary->valuestring) : NULL,
        price ? price->valuedouble : 0,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        published ? published->valueint : 0,
        minted ? minted->valueint : 0,
        mint_transaction_hash && !cJSON_IsNull(mint_transaction_hash) ? strdup(mint_transaction_hash->valuestring) : NULL,
        blockchain_block_id && !cJSON_IsNull(blockchain_block_id) ? strdup(blockchain_block_id->valuestring) : NULL
        );

    return non_fungible_token_update_dto_local_var;
end:
    return NULL;

}
