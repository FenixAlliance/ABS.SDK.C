#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "payment_chargeback_dto.h"



payment_chargeback_dto_t *payment_chargeback_dto_create(
    char *id,
    char *timestamp,
    char *request_date,
    char *payment_id,
    char *bank_profile_id,
    char *bank_profile_name,
    double total_fees
    ) {
    payment_chargeback_dto_t *payment_chargeback_dto_local_var = malloc(sizeof(payment_chargeback_dto_t));
    if (!payment_chargeback_dto_local_var) {
        return NULL;
    }
    payment_chargeback_dto_local_var->id = id;
    payment_chargeback_dto_local_var->timestamp = timestamp;
    payment_chargeback_dto_local_var->request_date = request_date;
    payment_chargeback_dto_local_var->payment_id = payment_id;
    payment_chargeback_dto_local_var->bank_profile_id = bank_profile_id;
    payment_chargeback_dto_local_var->bank_profile_name = bank_profile_name;
    payment_chargeback_dto_local_var->total_fees = total_fees;

    return payment_chargeback_dto_local_var;
}


void payment_chargeback_dto_free(payment_chargeback_dto_t *payment_chargeback_dto) {
    if(NULL == payment_chargeback_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (payment_chargeback_dto->id) {
        free(payment_chargeback_dto->id);
        payment_chargeback_dto->id = NULL;
    }
    if (payment_chargeback_dto->timestamp) {
        free(payment_chargeback_dto->timestamp);
        payment_chargeback_dto->timestamp = NULL;
    }
    if (payment_chargeback_dto->request_date) {
        free(payment_chargeback_dto->request_date);
        payment_chargeback_dto->request_date = NULL;
    }
    if (payment_chargeback_dto->payment_id) {
        free(payment_chargeback_dto->payment_id);
        payment_chargeback_dto->payment_id = NULL;
    }
    if (payment_chargeback_dto->bank_profile_id) {
        free(payment_chargeback_dto->bank_profile_id);
        payment_chargeback_dto->bank_profile_id = NULL;
    }
    if (payment_chargeback_dto->bank_profile_name) {
        free(payment_chargeback_dto->bank_profile_name);
        payment_chargeback_dto->bank_profile_name = NULL;
    }
    free(payment_chargeback_dto);
}

cJSON *payment_chargeback_dto_convertToJSON(payment_chargeback_dto_t *payment_chargeback_dto) {
    cJSON *item = cJSON_CreateObject();

    // payment_chargeback_dto->id
    if(payment_chargeback_dto->id) {
    if(cJSON_AddStringToObject(item, "id", payment_chargeback_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // payment_chargeback_dto->timestamp
    if(payment_chargeback_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", payment_chargeback_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // payment_chargeback_dto->request_date
    if(payment_chargeback_dto->request_date) {
    if(cJSON_AddStringToObject(item, "requestDate", payment_chargeback_dto->request_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // payment_chargeback_dto->payment_id
    if(payment_chargeback_dto->payment_id) {
    if(cJSON_AddStringToObject(item, "paymentId", payment_chargeback_dto->payment_id) == NULL) {
    goto fail; //String
    }
    }


    // payment_chargeback_dto->bank_profile_id
    if(payment_chargeback_dto->bank_profile_id) {
    if(cJSON_AddStringToObject(item, "bankProfileId", payment_chargeback_dto->bank_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // payment_chargeback_dto->bank_profile_name
    if(payment_chargeback_dto->bank_profile_name) {
    if(cJSON_AddStringToObject(item, "bankProfileName", payment_chargeback_dto->bank_profile_name) == NULL) {
    goto fail; //String
    }
    }


    // payment_chargeback_dto->total_fees
    if(payment_chargeback_dto->total_fees) {
    if(cJSON_AddNumberToObject(item, "totalFees", payment_chargeback_dto->total_fees) == NULL) {
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

payment_chargeback_dto_t *payment_chargeback_dto_parseFromJSON(cJSON *payment_chargeback_dtoJSON){

    payment_chargeback_dto_t *payment_chargeback_dto_local_var = NULL;

    // payment_chargeback_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(payment_chargeback_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // payment_chargeback_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(payment_chargeback_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // payment_chargeback_dto->request_date
    cJSON *request_date = cJSON_GetObjectItemCaseSensitive(payment_chargeback_dtoJSON, "requestDate");
    if (request_date) { 
    if(!cJSON_IsString(request_date) && !cJSON_IsNull(request_date))
    {
    goto end; //DateTime
    }
    }

    // payment_chargeback_dto->payment_id
    cJSON *payment_id = cJSON_GetObjectItemCaseSensitive(payment_chargeback_dtoJSON, "paymentId");
    if (payment_id) { 
    if(!cJSON_IsString(payment_id) && !cJSON_IsNull(payment_id))
    {
    goto end; //String
    }
    }

    // payment_chargeback_dto->bank_profile_id
    cJSON *bank_profile_id = cJSON_GetObjectItemCaseSensitive(payment_chargeback_dtoJSON, "bankProfileId");
    if (bank_profile_id) { 
    if(!cJSON_IsString(bank_profile_id) && !cJSON_IsNull(bank_profile_id))
    {
    goto end; //String
    }
    }

    // payment_chargeback_dto->bank_profile_name
    cJSON *bank_profile_name = cJSON_GetObjectItemCaseSensitive(payment_chargeback_dtoJSON, "bankProfileName");
    if (bank_profile_name) { 
    if(!cJSON_IsString(bank_profile_name) && !cJSON_IsNull(bank_profile_name))
    {
    goto end; //String
    }
    }

    // payment_chargeback_dto->total_fees
    cJSON *total_fees = cJSON_GetObjectItemCaseSensitive(payment_chargeback_dtoJSON, "totalFees");
    if (total_fees) { 
    if(!cJSON_IsNumber(total_fees))
    {
    goto end; //Numeric
    }
    }


    payment_chargeback_dto_local_var = payment_chargeback_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        request_date && !cJSON_IsNull(request_date) ? strdup(request_date->valuestring) : NULL,
        payment_id && !cJSON_IsNull(payment_id) ? strdup(payment_id->valuestring) : NULL,
        bank_profile_id && !cJSON_IsNull(bank_profile_id) ? strdup(bank_profile_id->valuestring) : NULL,
        bank_profile_name && !cJSON_IsNull(bank_profile_name) ? strdup(bank_profile_name->valuestring) : NULL,
        total_fees ? total_fees->valuedouble : 0
        );

    return payment_chargeback_dto_local_var;
end:
    return NULL;

}
