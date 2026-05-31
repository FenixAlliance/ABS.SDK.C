#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "payment_token_update_dto.h"



payment_token_update_dto_t *payment_token_update_dto_create(
    char *mask,
    char *token_type,
    char *card_franchise,
    char *card_expiration_month,
    char *card_expiration_year,
    char *status,
    char *valid_until,
    char *payment_gateway_id
    ) {
    payment_token_update_dto_t *payment_token_update_dto_local_var = malloc(sizeof(payment_token_update_dto_t));
    if (!payment_token_update_dto_local_var) {
        return NULL;
    }
    payment_token_update_dto_local_var->mask = mask;
    payment_token_update_dto_local_var->token_type = token_type;
    payment_token_update_dto_local_var->card_franchise = card_franchise;
    payment_token_update_dto_local_var->card_expiration_month = card_expiration_month;
    payment_token_update_dto_local_var->card_expiration_year = card_expiration_year;
    payment_token_update_dto_local_var->status = status;
    payment_token_update_dto_local_var->valid_until = valid_until;
    payment_token_update_dto_local_var->payment_gateway_id = payment_gateway_id;

    return payment_token_update_dto_local_var;
}


void payment_token_update_dto_free(payment_token_update_dto_t *payment_token_update_dto) {
    if(NULL == payment_token_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (payment_token_update_dto->mask) {
        free(payment_token_update_dto->mask);
        payment_token_update_dto->mask = NULL;
    }
    if (payment_token_update_dto->token_type) {
        free(payment_token_update_dto->token_type);
        payment_token_update_dto->token_type = NULL;
    }
    if (payment_token_update_dto->card_franchise) {
        free(payment_token_update_dto->card_franchise);
        payment_token_update_dto->card_franchise = NULL;
    }
    if (payment_token_update_dto->card_expiration_month) {
        free(payment_token_update_dto->card_expiration_month);
        payment_token_update_dto->card_expiration_month = NULL;
    }
    if (payment_token_update_dto->card_expiration_year) {
        free(payment_token_update_dto->card_expiration_year);
        payment_token_update_dto->card_expiration_year = NULL;
    }
    if (payment_token_update_dto->status) {
        free(payment_token_update_dto->status);
        payment_token_update_dto->status = NULL;
    }
    if (payment_token_update_dto->valid_until) {
        free(payment_token_update_dto->valid_until);
        payment_token_update_dto->valid_until = NULL;
    }
    if (payment_token_update_dto->payment_gateway_id) {
        free(payment_token_update_dto->payment_gateway_id);
        payment_token_update_dto->payment_gateway_id = NULL;
    }
    free(payment_token_update_dto);
}

cJSON *payment_token_update_dto_convertToJSON(payment_token_update_dto_t *payment_token_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // payment_token_update_dto->mask
    if(payment_token_update_dto->mask) {
    if(cJSON_AddStringToObject(item, "mask", payment_token_update_dto->mask) == NULL) {
    goto fail; //String
    }
    }


    // payment_token_update_dto->token_type
    if(payment_token_update_dto->token_type) {
    if(cJSON_AddStringToObject(item, "tokenType", payment_token_update_dto->token_type) == NULL) {
    goto fail; //String
    }
    }


    // payment_token_update_dto->card_franchise
    if(payment_token_update_dto->card_franchise) {
    if(cJSON_AddStringToObject(item, "cardFranchise", payment_token_update_dto->card_franchise) == NULL) {
    goto fail; //String
    }
    }


    // payment_token_update_dto->card_expiration_month
    if(payment_token_update_dto->card_expiration_month) {
    if(cJSON_AddStringToObject(item, "cardExpirationMonth", payment_token_update_dto->card_expiration_month) == NULL) {
    goto fail; //String
    }
    }


    // payment_token_update_dto->card_expiration_year
    if(payment_token_update_dto->card_expiration_year) {
    if(cJSON_AddStringToObject(item, "cardExpirationYear", payment_token_update_dto->card_expiration_year) == NULL) {
    goto fail; //String
    }
    }


    // payment_token_update_dto->status
    if(payment_token_update_dto->status) {
    if(cJSON_AddStringToObject(item, "status", payment_token_update_dto->status) == NULL) {
    goto fail; //String
    }
    }


    // payment_token_update_dto->valid_until
    if(payment_token_update_dto->valid_until) {
    if(cJSON_AddStringToObject(item, "validUntil", payment_token_update_dto->valid_until) == NULL) {
    goto fail; //Date-Time
    }
    }


    // payment_token_update_dto->payment_gateway_id
    if(payment_token_update_dto->payment_gateway_id) {
    if(cJSON_AddStringToObject(item, "paymentGatewayId", payment_token_update_dto->payment_gateway_id) == NULL) {
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

payment_token_update_dto_t *payment_token_update_dto_parseFromJSON(cJSON *payment_token_update_dtoJSON){

    payment_token_update_dto_t *payment_token_update_dto_local_var = NULL;

    // payment_token_update_dto->mask
    cJSON *mask = cJSON_GetObjectItemCaseSensitive(payment_token_update_dtoJSON, "mask");
    if (mask) { 
    if(!cJSON_IsString(mask) && !cJSON_IsNull(mask))
    {
    goto end; //String
    }
    }

    // payment_token_update_dto->token_type
    cJSON *token_type = cJSON_GetObjectItemCaseSensitive(payment_token_update_dtoJSON, "tokenType");
    if (token_type) { 
    if(!cJSON_IsString(token_type) && !cJSON_IsNull(token_type))
    {
    goto end; //String
    }
    }

    // payment_token_update_dto->card_franchise
    cJSON *card_franchise = cJSON_GetObjectItemCaseSensitive(payment_token_update_dtoJSON, "cardFranchise");
    if (card_franchise) { 
    if(!cJSON_IsString(card_franchise) && !cJSON_IsNull(card_franchise))
    {
    goto end; //String
    }
    }

    // payment_token_update_dto->card_expiration_month
    cJSON *card_expiration_month = cJSON_GetObjectItemCaseSensitive(payment_token_update_dtoJSON, "cardExpirationMonth");
    if (card_expiration_month) { 
    if(!cJSON_IsString(card_expiration_month) && !cJSON_IsNull(card_expiration_month))
    {
    goto end; //String
    }
    }

    // payment_token_update_dto->card_expiration_year
    cJSON *card_expiration_year = cJSON_GetObjectItemCaseSensitive(payment_token_update_dtoJSON, "cardExpirationYear");
    if (card_expiration_year) { 
    if(!cJSON_IsString(card_expiration_year) && !cJSON_IsNull(card_expiration_year))
    {
    goto end; //String
    }
    }

    // payment_token_update_dto->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(payment_token_update_dtoJSON, "status");
    if (status) { 
    if(!cJSON_IsString(status) && !cJSON_IsNull(status))
    {
    goto end; //String
    }
    }

    // payment_token_update_dto->valid_until
    cJSON *valid_until = cJSON_GetObjectItemCaseSensitive(payment_token_update_dtoJSON, "validUntil");
    if (valid_until) { 
    if(!cJSON_IsString(valid_until) && !cJSON_IsNull(valid_until))
    {
    goto end; //DateTime
    }
    }

    // payment_token_update_dto->payment_gateway_id
    cJSON *payment_gateway_id = cJSON_GetObjectItemCaseSensitive(payment_token_update_dtoJSON, "paymentGatewayId");
    if (payment_gateway_id) { 
    if(!cJSON_IsString(payment_gateway_id) && !cJSON_IsNull(payment_gateway_id))
    {
    goto end; //String
    }
    }


    payment_token_update_dto_local_var = payment_token_update_dto_create (
        mask && !cJSON_IsNull(mask) ? strdup(mask->valuestring) : NULL,
        token_type && !cJSON_IsNull(token_type) ? strdup(token_type->valuestring) : NULL,
        card_franchise && !cJSON_IsNull(card_franchise) ? strdup(card_franchise->valuestring) : NULL,
        card_expiration_month && !cJSON_IsNull(card_expiration_month) ? strdup(card_expiration_month->valuestring) : NULL,
        card_expiration_year && !cJSON_IsNull(card_expiration_year) ? strdup(card_expiration_year->valuestring) : NULL,
        status && !cJSON_IsNull(status) ? strdup(status->valuestring) : NULL,
        valid_until && !cJSON_IsNull(valid_until) ? strdup(valid_until->valuestring) : NULL,
        payment_gateway_id && !cJSON_IsNull(payment_gateway_id) ? strdup(payment_gateway_id->valuestring) : NULL
        );

    return payment_token_update_dto_local_var;
end:
    return NULL;

}
