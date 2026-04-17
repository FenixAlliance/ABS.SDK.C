#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "receipt_update_dto.h"



receipt_update_dto_t *receipt_update_dto_create(
    char *payment_id,
    double forex_rate,
    double total_amount,
    double total_amount_in_usd,
    int closed,
    char *currency_id,
    char *contact_id,
    char *order_id,
    char *invoice_id
    ) {
    receipt_update_dto_t *receipt_update_dto_local_var = malloc(sizeof(receipt_update_dto_t));
    if (!receipt_update_dto_local_var) {
        return NULL;
    }
    receipt_update_dto_local_var->payment_id = payment_id;
    receipt_update_dto_local_var->forex_rate = forex_rate;
    receipt_update_dto_local_var->total_amount = total_amount;
    receipt_update_dto_local_var->total_amount_in_usd = total_amount_in_usd;
    receipt_update_dto_local_var->closed = closed;
    receipt_update_dto_local_var->currency_id = currency_id;
    receipt_update_dto_local_var->contact_id = contact_id;
    receipt_update_dto_local_var->order_id = order_id;
    receipt_update_dto_local_var->invoice_id = invoice_id;

    return receipt_update_dto_local_var;
}


void receipt_update_dto_free(receipt_update_dto_t *receipt_update_dto) {
    if(NULL == receipt_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (receipt_update_dto->payment_id) {
        free(receipt_update_dto->payment_id);
        receipt_update_dto->payment_id = NULL;
    }
    if (receipt_update_dto->currency_id) {
        free(receipt_update_dto->currency_id);
        receipt_update_dto->currency_id = NULL;
    }
    if (receipt_update_dto->contact_id) {
        free(receipt_update_dto->contact_id);
        receipt_update_dto->contact_id = NULL;
    }
    if (receipt_update_dto->order_id) {
        free(receipt_update_dto->order_id);
        receipt_update_dto->order_id = NULL;
    }
    if (receipt_update_dto->invoice_id) {
        free(receipt_update_dto->invoice_id);
        receipt_update_dto->invoice_id = NULL;
    }
    free(receipt_update_dto);
}

cJSON *receipt_update_dto_convertToJSON(receipt_update_dto_t *receipt_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // receipt_update_dto->payment_id
    if(receipt_update_dto->payment_id) {
    if(cJSON_AddStringToObject(item, "paymentId", receipt_update_dto->payment_id) == NULL) {
    goto fail; //String
    }
    }


    // receipt_update_dto->forex_rate
    if(receipt_update_dto->forex_rate) {
    if(cJSON_AddNumberToObject(item, "forexRate", receipt_update_dto->forex_rate) == NULL) {
    goto fail; //Numeric
    }
    }


    // receipt_update_dto->total_amount
    if(receipt_update_dto->total_amount) {
    if(cJSON_AddNumberToObject(item, "totalAmount", receipt_update_dto->total_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // receipt_update_dto->total_amount_in_usd
    if(receipt_update_dto->total_amount_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalAmountInUsd", receipt_update_dto->total_amount_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // receipt_update_dto->closed
    if(receipt_update_dto->closed) {
    if(cJSON_AddBoolToObject(item, "closed", receipt_update_dto->closed) == NULL) {
    goto fail; //Bool
    }
    }


    // receipt_update_dto->currency_id
    if(receipt_update_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", receipt_update_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // receipt_update_dto->contact_id
    if(receipt_update_dto->contact_id) {
    if(cJSON_AddStringToObject(item, "contactId", receipt_update_dto->contact_id) == NULL) {
    goto fail; //String
    }
    }


    // receipt_update_dto->order_id
    if(receipt_update_dto->order_id) {
    if(cJSON_AddStringToObject(item, "orderId", receipt_update_dto->order_id) == NULL) {
    goto fail; //String
    }
    }


    // receipt_update_dto->invoice_id
    if(receipt_update_dto->invoice_id) {
    if(cJSON_AddStringToObject(item, "invoiceId", receipt_update_dto->invoice_id) == NULL) {
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

receipt_update_dto_t *receipt_update_dto_parseFromJSON(cJSON *receipt_update_dtoJSON){

    receipt_update_dto_t *receipt_update_dto_local_var = NULL;

    // receipt_update_dto->payment_id
    cJSON *payment_id = cJSON_GetObjectItemCaseSensitive(receipt_update_dtoJSON, "paymentId");
    if (payment_id) { 
    if(!cJSON_IsString(payment_id) && !cJSON_IsNull(payment_id))
    {
    goto end; //String
    }
    }

    // receipt_update_dto->forex_rate
    cJSON *forex_rate = cJSON_GetObjectItemCaseSensitive(receipt_update_dtoJSON, "forexRate");
    if (forex_rate) { 
    if(!cJSON_IsNumber(forex_rate))
    {
    goto end; //Numeric
    }
    }

    // receipt_update_dto->total_amount
    cJSON *total_amount = cJSON_GetObjectItemCaseSensitive(receipt_update_dtoJSON, "totalAmount");
    if (total_amount) { 
    if(!cJSON_IsNumber(total_amount))
    {
    goto end; //Numeric
    }
    }

    // receipt_update_dto->total_amount_in_usd
    cJSON *total_amount_in_usd = cJSON_GetObjectItemCaseSensitive(receipt_update_dtoJSON, "totalAmountInUsd");
    if (total_amount_in_usd) { 
    if(!cJSON_IsNumber(total_amount_in_usd))
    {
    goto end; //Numeric
    }
    }

    // receipt_update_dto->closed
    cJSON *closed = cJSON_GetObjectItemCaseSensitive(receipt_update_dtoJSON, "closed");
    if (closed) { 
    if(!cJSON_IsBool(closed))
    {
    goto end; //Bool
    }
    }

    // receipt_update_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(receipt_update_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // receipt_update_dto->contact_id
    cJSON *contact_id = cJSON_GetObjectItemCaseSensitive(receipt_update_dtoJSON, "contactId");
    if (contact_id) { 
    if(!cJSON_IsString(contact_id) && !cJSON_IsNull(contact_id))
    {
    goto end; //String
    }
    }

    // receipt_update_dto->order_id
    cJSON *order_id = cJSON_GetObjectItemCaseSensitive(receipt_update_dtoJSON, "orderId");
    if (order_id) { 
    if(!cJSON_IsString(order_id) && !cJSON_IsNull(order_id))
    {
    goto end; //String
    }
    }

    // receipt_update_dto->invoice_id
    cJSON *invoice_id = cJSON_GetObjectItemCaseSensitive(receipt_update_dtoJSON, "invoiceId");
    if (invoice_id) { 
    if(!cJSON_IsString(invoice_id) && !cJSON_IsNull(invoice_id))
    {
    goto end; //String
    }
    }


    receipt_update_dto_local_var = receipt_update_dto_create (
        payment_id && !cJSON_IsNull(payment_id) ? strdup(payment_id->valuestring) : NULL,
        forex_rate ? forex_rate->valuedouble : 0,
        total_amount ? total_amount->valuedouble : 0,
        total_amount_in_usd ? total_amount_in_usd->valuedouble : 0,
        closed ? closed->valueint : 0,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        contact_id && !cJSON_IsNull(contact_id) ? strdup(contact_id->valuestring) : NULL,
        order_id && !cJSON_IsNull(order_id) ? strdup(order_id->valuestring) : NULL,
        invoice_id && !cJSON_IsNull(invoice_id) ? strdup(invoice_id->valuestring) : NULL
        );

    return receipt_update_dto_local_var;
end:
    return NULL;

}
