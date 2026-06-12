#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "non_fungible_token_dto.h"



non_fungible_token_dto_t *non_fungible_token_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *summary,
    double price,
    char *currency_id,
    int published,
    int minted,
    char *blockchain_id,
    char *blockchain_name,
    char *minted_timestamp,
    char *mint_transaction_hash,
    char *blockchain_block_id,
    char *primary_image_url,
    char *cover_url,
    char *tenant_id,
    char *enrollment_id
    ) {
    non_fungible_token_dto_t *non_fungible_token_dto_local_var = malloc(sizeof(non_fungible_token_dto_t));
    if (!non_fungible_token_dto_local_var) {
        return NULL;
    }
    non_fungible_token_dto_local_var->id = id;
    non_fungible_token_dto_local_var->timestamp = timestamp;
    non_fungible_token_dto_local_var->title = title;
    non_fungible_token_dto_local_var->description = description;
    non_fungible_token_dto_local_var->summary = summary;
    non_fungible_token_dto_local_var->price = price;
    non_fungible_token_dto_local_var->currency_id = currency_id;
    non_fungible_token_dto_local_var->published = published;
    non_fungible_token_dto_local_var->minted = minted;
    non_fungible_token_dto_local_var->blockchain_id = blockchain_id;
    non_fungible_token_dto_local_var->blockchain_name = blockchain_name;
    non_fungible_token_dto_local_var->minted_timestamp = minted_timestamp;
    non_fungible_token_dto_local_var->mint_transaction_hash = mint_transaction_hash;
    non_fungible_token_dto_local_var->blockchain_block_id = blockchain_block_id;
    non_fungible_token_dto_local_var->primary_image_url = primary_image_url;
    non_fungible_token_dto_local_var->cover_url = cover_url;
    non_fungible_token_dto_local_var->tenant_id = tenant_id;
    non_fungible_token_dto_local_var->enrollment_id = enrollment_id;

    return non_fungible_token_dto_local_var;
}


void non_fungible_token_dto_free(non_fungible_token_dto_t *non_fungible_token_dto) {
    if(NULL == non_fungible_token_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (non_fungible_token_dto->id) {
        free(non_fungible_token_dto->id);
        non_fungible_token_dto->id = NULL;
    }
    if (non_fungible_token_dto->timestamp) {
        free(non_fungible_token_dto->timestamp);
        non_fungible_token_dto->timestamp = NULL;
    }
    if (non_fungible_token_dto->title) {
        free(non_fungible_token_dto->title);
        non_fungible_token_dto->title = NULL;
    }
    if (non_fungible_token_dto->description) {
        free(non_fungible_token_dto->description);
        non_fungible_token_dto->description = NULL;
    }
    if (non_fungible_token_dto->summary) {
        free(non_fungible_token_dto->summary);
        non_fungible_token_dto->summary = NULL;
    }
    if (non_fungible_token_dto->currency_id) {
        free(non_fungible_token_dto->currency_id);
        non_fungible_token_dto->currency_id = NULL;
    }
    if (non_fungible_token_dto->blockchain_id) {
        free(non_fungible_token_dto->blockchain_id);
        non_fungible_token_dto->blockchain_id = NULL;
    }
    if (non_fungible_token_dto->blockchain_name) {
        free(non_fungible_token_dto->blockchain_name);
        non_fungible_token_dto->blockchain_name = NULL;
    }
    if (non_fungible_token_dto->minted_timestamp) {
        free(non_fungible_token_dto->minted_timestamp);
        non_fungible_token_dto->minted_timestamp = NULL;
    }
    if (non_fungible_token_dto->mint_transaction_hash) {
        free(non_fungible_token_dto->mint_transaction_hash);
        non_fungible_token_dto->mint_transaction_hash = NULL;
    }
    if (non_fungible_token_dto->blockchain_block_id) {
        free(non_fungible_token_dto->blockchain_block_id);
        non_fungible_token_dto->blockchain_block_id = NULL;
    }
    if (non_fungible_token_dto->primary_image_url) {
        free(non_fungible_token_dto->primary_image_url);
        non_fungible_token_dto->primary_image_url = NULL;
    }
    if (non_fungible_token_dto->cover_url) {
        free(non_fungible_token_dto->cover_url);
        non_fungible_token_dto->cover_url = NULL;
    }
    if (non_fungible_token_dto->tenant_id) {
        free(non_fungible_token_dto->tenant_id);
        non_fungible_token_dto->tenant_id = NULL;
    }
    if (non_fungible_token_dto->enrollment_id) {
        free(non_fungible_token_dto->enrollment_id);
        non_fungible_token_dto->enrollment_id = NULL;
    }
    free(non_fungible_token_dto);
}

cJSON *non_fungible_token_dto_convertToJSON(non_fungible_token_dto_t *non_fungible_token_dto) {
    cJSON *item = cJSON_CreateObject();

    // non_fungible_token_dto->id
    if(non_fungible_token_dto->id) {
    if(cJSON_AddStringToObject(item, "id", non_fungible_token_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // non_fungible_token_dto->timestamp
    if(non_fungible_token_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", non_fungible_token_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // non_fungible_token_dto->title
    if(non_fungible_token_dto->title) {
    if(cJSON_AddStringToObject(item, "title", non_fungible_token_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // non_fungible_token_dto->description
    if(non_fungible_token_dto->description) {
    if(cJSON_AddStringToObject(item, "description", non_fungible_token_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // non_fungible_token_dto->summary
    if(non_fungible_token_dto->summary) {
    if(cJSON_AddStringToObject(item, "summary", non_fungible_token_dto->summary) == NULL) {
    goto fail; //String
    }
    }


    // non_fungible_token_dto->price
    if(non_fungible_token_dto->price) {
    if(cJSON_AddNumberToObject(item, "price", non_fungible_token_dto->price) == NULL) {
    goto fail; //Numeric
    }
    }


    // non_fungible_token_dto->currency_id
    if(non_fungible_token_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", non_fungible_token_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // non_fungible_token_dto->published
    if(non_fungible_token_dto->published) {
    if(cJSON_AddBoolToObject(item, "published", non_fungible_token_dto->published) == NULL) {
    goto fail; //Bool
    }
    }


    // non_fungible_token_dto->minted
    if(non_fungible_token_dto->minted) {
    if(cJSON_AddBoolToObject(item, "minted", non_fungible_token_dto->minted) == NULL) {
    goto fail; //Bool
    }
    }


    // non_fungible_token_dto->blockchain_id
    if(non_fungible_token_dto->blockchain_id) {
    if(cJSON_AddStringToObject(item, "blockchainId", non_fungible_token_dto->blockchain_id) == NULL) {
    goto fail; //String
    }
    }


    // non_fungible_token_dto->blockchain_name
    if(non_fungible_token_dto->blockchain_name) {
    if(cJSON_AddStringToObject(item, "blockchainName", non_fungible_token_dto->blockchain_name) == NULL) {
    goto fail; //String
    }
    }


    // non_fungible_token_dto->minted_timestamp
    if(non_fungible_token_dto->minted_timestamp) {
    if(cJSON_AddStringToObject(item, "mintedTimestamp", non_fungible_token_dto->minted_timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // non_fungible_token_dto->mint_transaction_hash
    if(non_fungible_token_dto->mint_transaction_hash) {
    if(cJSON_AddStringToObject(item, "mintTransactionHash", non_fungible_token_dto->mint_transaction_hash) == NULL) {
    goto fail; //String
    }
    }


    // non_fungible_token_dto->blockchain_block_id
    if(non_fungible_token_dto->blockchain_block_id) {
    if(cJSON_AddStringToObject(item, "blockchainBlockId", non_fungible_token_dto->blockchain_block_id) == NULL) {
    goto fail; //String
    }
    }


    // non_fungible_token_dto->primary_image_url
    if(non_fungible_token_dto->primary_image_url) {
    if(cJSON_AddStringToObject(item, "primaryImageUrl", non_fungible_token_dto->primary_image_url) == NULL) {
    goto fail; //String
    }
    }


    // non_fungible_token_dto->cover_url
    if(non_fungible_token_dto->cover_url) {
    if(cJSON_AddStringToObject(item, "coverUrl", non_fungible_token_dto->cover_url) == NULL) {
    goto fail; //String
    }
    }


    // non_fungible_token_dto->tenant_id
    if(non_fungible_token_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", non_fungible_token_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // non_fungible_token_dto->enrollment_id
    if(non_fungible_token_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", non_fungible_token_dto->enrollment_id) == NULL) {
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

non_fungible_token_dto_t *non_fungible_token_dto_parseFromJSON(cJSON *non_fungible_token_dtoJSON){

    non_fungible_token_dto_t *non_fungible_token_dto_local_var = NULL;

    // non_fungible_token_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(non_fungible_token_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // non_fungible_token_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(non_fungible_token_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // non_fungible_token_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(non_fungible_token_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // non_fungible_token_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(non_fungible_token_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // non_fungible_token_dto->summary
    cJSON *summary = cJSON_GetObjectItemCaseSensitive(non_fungible_token_dtoJSON, "summary");
    if (summary) { 
    if(!cJSON_IsString(summary) && !cJSON_IsNull(summary))
    {
    goto end; //String
    }
    }

    // non_fungible_token_dto->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(non_fungible_token_dtoJSON, "price");
    if (price) { 
    if(!cJSON_IsNumber(price))
    {
    goto end; //Numeric
    }
    }

    // non_fungible_token_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(non_fungible_token_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // non_fungible_token_dto->published
    cJSON *published = cJSON_GetObjectItemCaseSensitive(non_fungible_token_dtoJSON, "published");
    if (published) { 
    if(!cJSON_IsBool(published))
    {
    goto end; //Bool
    }
    }

    // non_fungible_token_dto->minted
    cJSON *minted = cJSON_GetObjectItemCaseSensitive(non_fungible_token_dtoJSON, "minted");
    if (minted) { 
    if(!cJSON_IsBool(minted))
    {
    goto end; //Bool
    }
    }

    // non_fungible_token_dto->blockchain_id
    cJSON *blockchain_id = cJSON_GetObjectItemCaseSensitive(non_fungible_token_dtoJSON, "blockchainId");
    if (blockchain_id) { 
    if(!cJSON_IsString(blockchain_id) && !cJSON_IsNull(blockchain_id))
    {
    goto end; //String
    }
    }

    // non_fungible_token_dto->blockchain_name
    cJSON *blockchain_name = cJSON_GetObjectItemCaseSensitive(non_fungible_token_dtoJSON, "blockchainName");
    if (blockchain_name) { 
    if(!cJSON_IsString(blockchain_name) && !cJSON_IsNull(blockchain_name))
    {
    goto end; //String
    }
    }

    // non_fungible_token_dto->minted_timestamp
    cJSON *minted_timestamp = cJSON_GetObjectItemCaseSensitive(non_fungible_token_dtoJSON, "mintedTimestamp");
    if (minted_timestamp) { 
    if(!cJSON_IsString(minted_timestamp) && !cJSON_IsNull(minted_timestamp))
    {
    goto end; //DateTime
    }
    }

    // non_fungible_token_dto->mint_transaction_hash
    cJSON *mint_transaction_hash = cJSON_GetObjectItemCaseSensitive(non_fungible_token_dtoJSON, "mintTransactionHash");
    if (mint_transaction_hash) { 
    if(!cJSON_IsString(mint_transaction_hash) && !cJSON_IsNull(mint_transaction_hash))
    {
    goto end; //String
    }
    }

    // non_fungible_token_dto->blockchain_block_id
    cJSON *blockchain_block_id = cJSON_GetObjectItemCaseSensitive(non_fungible_token_dtoJSON, "blockchainBlockId");
    if (blockchain_block_id) { 
    if(!cJSON_IsString(blockchain_block_id) && !cJSON_IsNull(blockchain_block_id))
    {
    goto end; //String
    }
    }

    // non_fungible_token_dto->primary_image_url
    cJSON *primary_image_url = cJSON_GetObjectItemCaseSensitive(non_fungible_token_dtoJSON, "primaryImageUrl");
    if (primary_image_url) { 
    if(!cJSON_IsString(primary_image_url) && !cJSON_IsNull(primary_image_url))
    {
    goto end; //String
    }
    }

    // non_fungible_token_dto->cover_url
    cJSON *cover_url = cJSON_GetObjectItemCaseSensitive(non_fungible_token_dtoJSON, "coverUrl");
    if (cover_url) { 
    if(!cJSON_IsString(cover_url) && !cJSON_IsNull(cover_url))
    {
    goto end; //String
    }
    }

    // non_fungible_token_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(non_fungible_token_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // non_fungible_token_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(non_fungible_token_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    non_fungible_token_dto_local_var = non_fungible_token_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        summary && !cJSON_IsNull(summary) ? strdup(summary->valuestring) : NULL,
        price ? price->valuedouble : 0,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        published ? published->valueint : 0,
        minted ? minted->valueint : 0,
        blockchain_id && !cJSON_IsNull(blockchain_id) ? strdup(blockchain_id->valuestring) : NULL,
        blockchain_name && !cJSON_IsNull(blockchain_name) ? strdup(blockchain_name->valuestring) : NULL,
        minted_timestamp && !cJSON_IsNull(minted_timestamp) ? strdup(minted_timestamp->valuestring) : NULL,
        mint_transaction_hash && !cJSON_IsNull(mint_transaction_hash) ? strdup(mint_transaction_hash->valuestring) : NULL,
        blockchain_block_id && !cJSON_IsNull(blockchain_block_id) ? strdup(blockchain_block_id->valuestring) : NULL,
        primary_image_url && !cJSON_IsNull(primary_image_url) ? strdup(primary_image_url->valuestring) : NULL,
        cover_url && !cJSON_IsNull(cover_url) ? strdup(cover_url->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return non_fungible_token_dto_local_var;
end:
    return NULL;

}
