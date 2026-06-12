#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "non_fungible_token_create_dto.h"



non_fungible_token_create_dto_t *non_fungible_token_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *summary,
    double price,
    char *currency_id,
    char *blockchain_id
    ) {
    non_fungible_token_create_dto_t *non_fungible_token_create_dto_local_var = malloc(sizeof(non_fungible_token_create_dto_t));
    if (!non_fungible_token_create_dto_local_var) {
        return NULL;
    }
    non_fungible_token_create_dto_local_var->id = id;
    non_fungible_token_create_dto_local_var->timestamp = timestamp;
    non_fungible_token_create_dto_local_var->title = title;
    non_fungible_token_create_dto_local_var->description = description;
    non_fungible_token_create_dto_local_var->summary = summary;
    non_fungible_token_create_dto_local_var->price = price;
    non_fungible_token_create_dto_local_var->currency_id = currency_id;
    non_fungible_token_create_dto_local_var->blockchain_id = blockchain_id;

    return non_fungible_token_create_dto_local_var;
}


void non_fungible_token_create_dto_free(non_fungible_token_create_dto_t *non_fungible_token_create_dto) {
    if(NULL == non_fungible_token_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (non_fungible_token_create_dto->id) {
        free(non_fungible_token_create_dto->id);
        non_fungible_token_create_dto->id = NULL;
    }
    if (non_fungible_token_create_dto->timestamp) {
        free(non_fungible_token_create_dto->timestamp);
        non_fungible_token_create_dto->timestamp = NULL;
    }
    if (non_fungible_token_create_dto->title) {
        free(non_fungible_token_create_dto->title);
        non_fungible_token_create_dto->title = NULL;
    }
    if (non_fungible_token_create_dto->description) {
        free(non_fungible_token_create_dto->description);
        non_fungible_token_create_dto->description = NULL;
    }
    if (non_fungible_token_create_dto->summary) {
        free(non_fungible_token_create_dto->summary);
        non_fungible_token_create_dto->summary = NULL;
    }
    if (non_fungible_token_create_dto->currency_id) {
        free(non_fungible_token_create_dto->currency_id);
        non_fungible_token_create_dto->currency_id = NULL;
    }
    if (non_fungible_token_create_dto->blockchain_id) {
        free(non_fungible_token_create_dto->blockchain_id);
        non_fungible_token_create_dto->blockchain_id = NULL;
    }
    free(non_fungible_token_create_dto);
}

cJSON *non_fungible_token_create_dto_convertToJSON(non_fungible_token_create_dto_t *non_fungible_token_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // non_fungible_token_create_dto->id
    if(non_fungible_token_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", non_fungible_token_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // non_fungible_token_create_dto->timestamp
    if(non_fungible_token_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", non_fungible_token_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // non_fungible_token_create_dto->title
    if (!non_fungible_token_create_dto->title) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "title", non_fungible_token_create_dto->title) == NULL) {
    goto fail; //String
    }


    // non_fungible_token_create_dto->description
    if (!non_fungible_token_create_dto->description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "description", non_fungible_token_create_dto->description) == NULL) {
    goto fail; //String
    }


    // non_fungible_token_create_dto->summary
    if(non_fungible_token_create_dto->summary) {
    if(cJSON_AddStringToObject(item, "summary", non_fungible_token_create_dto->summary) == NULL) {
    goto fail; //String
    }
    }


    // non_fungible_token_create_dto->price
    if(non_fungible_token_create_dto->price) {
    if(cJSON_AddNumberToObject(item, "price", non_fungible_token_create_dto->price) == NULL) {
    goto fail; //Numeric
    }
    }


    // non_fungible_token_create_dto->currency_id
    if(non_fungible_token_create_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", non_fungible_token_create_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // non_fungible_token_create_dto->blockchain_id
    if(non_fungible_token_create_dto->blockchain_id) {
    if(cJSON_AddStringToObject(item, "blockchainId", non_fungible_token_create_dto->blockchain_id) == NULL) {
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

non_fungible_token_create_dto_t *non_fungible_token_create_dto_parseFromJSON(cJSON *non_fungible_token_create_dtoJSON){

    non_fungible_token_create_dto_t *non_fungible_token_create_dto_local_var = NULL;

    // non_fungible_token_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(non_fungible_token_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // non_fungible_token_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(non_fungible_token_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // non_fungible_token_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(non_fungible_token_create_dtoJSON, "title");
    if (!title) {
        goto end;
    }

    
    if(!cJSON_IsString(title))
    {
    goto end; //String
    }

    // non_fungible_token_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(non_fungible_token_create_dtoJSON, "description");
    if (!description) {
        goto end;
    }

    
    if(!cJSON_IsString(description))
    {
    goto end; //String
    }

    // non_fungible_token_create_dto->summary
    cJSON *summary = cJSON_GetObjectItemCaseSensitive(non_fungible_token_create_dtoJSON, "summary");
    if (summary) { 
    if(!cJSON_IsString(summary) && !cJSON_IsNull(summary))
    {
    goto end; //String
    }
    }

    // non_fungible_token_create_dto->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(non_fungible_token_create_dtoJSON, "price");
    if (price) { 
    if(!cJSON_IsNumber(price))
    {
    goto end; //Numeric
    }
    }

    // non_fungible_token_create_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(non_fungible_token_create_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // non_fungible_token_create_dto->blockchain_id
    cJSON *blockchain_id = cJSON_GetObjectItemCaseSensitive(non_fungible_token_create_dtoJSON, "blockchainId");
    if (blockchain_id) { 
    if(!cJSON_IsString(blockchain_id) && !cJSON_IsNull(blockchain_id))
    {
    goto end; //String
    }
    }


    non_fungible_token_create_dto_local_var = non_fungible_token_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(title->valuestring),
        strdup(description->valuestring),
        summary && !cJSON_IsNull(summary) ? strdup(summary->valuestring) : NULL,
        price ? price->valuedouble : 0,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        blockchain_id && !cJSON_IsNull(blockchain_id) ? strdup(blockchain_id->valuestring) : NULL
        );

    return non_fungible_token_create_dto_local_var;
end:
    return NULL;

}
