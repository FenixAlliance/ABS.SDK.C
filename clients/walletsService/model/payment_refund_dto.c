#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "payment_refund_dto.h"



payment_refund_dto_t *payment_refund_dto_create(
    char *id,
    char *timestamp,
    char *payment_id,
    char *wallet_account_id,
    char *refund_request_id,
    double total_fees
    ) {
    payment_refund_dto_t *payment_refund_dto_local_var = malloc(sizeof(payment_refund_dto_t));
    if (!payment_refund_dto_local_var) {
        return NULL;
    }
    payment_refund_dto_local_var->id = id;
    payment_refund_dto_local_var->timestamp = timestamp;
    payment_refund_dto_local_var->payment_id = payment_id;
    payment_refund_dto_local_var->wallet_account_id = wallet_account_id;
    payment_refund_dto_local_var->refund_request_id = refund_request_id;
    payment_refund_dto_local_var->total_fees = total_fees;

    return payment_refund_dto_local_var;
}


void payment_refund_dto_free(payment_refund_dto_t *payment_refund_dto) {
    if(NULL == payment_refund_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (payment_refund_dto->id) {
        free(payment_refund_dto->id);
        payment_refund_dto->id = NULL;
    }
    if (payment_refund_dto->timestamp) {
        free(payment_refund_dto->timestamp);
        payment_refund_dto->timestamp = NULL;
    }
    if (payment_refund_dto->payment_id) {
        free(payment_refund_dto->payment_id);
        payment_refund_dto->payment_id = NULL;
    }
    if (payment_refund_dto->wallet_account_id) {
        free(payment_refund_dto->wallet_account_id);
        payment_refund_dto->wallet_account_id = NULL;
    }
    if (payment_refund_dto->refund_request_id) {
        free(payment_refund_dto->refund_request_id);
        payment_refund_dto->refund_request_id = NULL;
    }
    free(payment_refund_dto);
}

cJSON *payment_refund_dto_convertToJSON(payment_refund_dto_t *payment_refund_dto) {
    cJSON *item = cJSON_CreateObject();

    // payment_refund_dto->id
    if(payment_refund_dto->id) {
    if(cJSON_AddStringToObject(item, "id", payment_refund_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // payment_refund_dto->timestamp
    if(payment_refund_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", payment_refund_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // payment_refund_dto->payment_id
    if(payment_refund_dto->payment_id) {
    if(cJSON_AddStringToObject(item, "paymentId", payment_refund_dto->payment_id) == NULL) {
    goto fail; //String
    }
    }


    // payment_refund_dto->wallet_account_id
    if(payment_refund_dto->wallet_account_id) {
    if(cJSON_AddStringToObject(item, "walletAccountId", payment_refund_dto->wallet_account_id) == NULL) {
    goto fail; //String
    }
    }


    // payment_refund_dto->refund_request_id
    if(payment_refund_dto->refund_request_id) {
    if(cJSON_AddStringToObject(item, "refundRequestId", payment_refund_dto->refund_request_id) == NULL) {
    goto fail; //String
    }
    }


    // payment_refund_dto->total_fees
    if(payment_refund_dto->total_fees) {
    if(cJSON_AddNumberToObject(item, "totalFees", payment_refund_dto->total_fees) == NULL) {
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

payment_refund_dto_t *payment_refund_dto_parseFromJSON(cJSON *payment_refund_dtoJSON){

    payment_refund_dto_t *payment_refund_dto_local_var = NULL;

    // payment_refund_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(payment_refund_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // payment_refund_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(payment_refund_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // payment_refund_dto->payment_id
    cJSON *payment_id = cJSON_GetObjectItemCaseSensitive(payment_refund_dtoJSON, "paymentId");
    if (payment_id) { 
    if(!cJSON_IsString(payment_id) && !cJSON_IsNull(payment_id))
    {
    goto end; //String
    }
    }

    // payment_refund_dto->wallet_account_id
    cJSON *wallet_account_id = cJSON_GetObjectItemCaseSensitive(payment_refund_dtoJSON, "walletAccountId");
    if (wallet_account_id) { 
    if(!cJSON_IsString(wallet_account_id) && !cJSON_IsNull(wallet_account_id))
    {
    goto end; //String
    }
    }

    // payment_refund_dto->refund_request_id
    cJSON *refund_request_id = cJSON_GetObjectItemCaseSensitive(payment_refund_dtoJSON, "refundRequestId");
    if (refund_request_id) { 
    if(!cJSON_IsString(refund_request_id) && !cJSON_IsNull(refund_request_id))
    {
    goto end; //String
    }
    }

    // payment_refund_dto->total_fees
    cJSON *total_fees = cJSON_GetObjectItemCaseSensitive(payment_refund_dtoJSON, "totalFees");
    if (total_fees) { 
    if(!cJSON_IsNumber(total_fees))
    {
    goto end; //Numeric
    }
    }


    payment_refund_dto_local_var = payment_refund_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        payment_id && !cJSON_IsNull(payment_id) ? strdup(payment_id->valuestring) : NULL,
        wallet_account_id && !cJSON_IsNull(wallet_account_id) ? strdup(wallet_account_id->valuestring) : NULL,
        refund_request_id && !cJSON_IsNull(refund_request_id) ? strdup(refund_request_id->valuestring) : NULL,
        total_fees ? total_fees->valuedouble : 0
        );

    return payment_refund_dto_local_var;
end:
    return NULL;

}
