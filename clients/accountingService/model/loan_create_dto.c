#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "loan_create_dto.h"



loan_create_dto_t *loan_create_dto_create(
    char *id,
    char *timestamp,
    char *loan_timestamp,
    char *payment_deadline,
    double value,
    double interest_rate,
    int is_compund_interest_rate,
    char *loan_type_id,
    char *currency_id
    ) {
    loan_create_dto_t *loan_create_dto_local_var = malloc(sizeof(loan_create_dto_t));
    if (!loan_create_dto_local_var) {
        return NULL;
    }
    loan_create_dto_local_var->id = id;
    loan_create_dto_local_var->timestamp = timestamp;
    loan_create_dto_local_var->loan_timestamp = loan_timestamp;
    loan_create_dto_local_var->payment_deadline = payment_deadline;
    loan_create_dto_local_var->value = value;
    loan_create_dto_local_var->interest_rate = interest_rate;
    loan_create_dto_local_var->is_compund_interest_rate = is_compund_interest_rate;
    loan_create_dto_local_var->loan_type_id = loan_type_id;
    loan_create_dto_local_var->currency_id = currency_id;

    return loan_create_dto_local_var;
}


void loan_create_dto_free(loan_create_dto_t *loan_create_dto) {
    if(NULL == loan_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (loan_create_dto->id) {
        free(loan_create_dto->id);
        loan_create_dto->id = NULL;
    }
    if (loan_create_dto->timestamp) {
        free(loan_create_dto->timestamp);
        loan_create_dto->timestamp = NULL;
    }
    if (loan_create_dto->loan_timestamp) {
        free(loan_create_dto->loan_timestamp);
        loan_create_dto->loan_timestamp = NULL;
    }
    if (loan_create_dto->payment_deadline) {
        free(loan_create_dto->payment_deadline);
        loan_create_dto->payment_deadline = NULL;
    }
    if (loan_create_dto->loan_type_id) {
        free(loan_create_dto->loan_type_id);
        loan_create_dto->loan_type_id = NULL;
    }
    if (loan_create_dto->currency_id) {
        free(loan_create_dto->currency_id);
        loan_create_dto->currency_id = NULL;
    }
    free(loan_create_dto);
}

cJSON *loan_create_dto_convertToJSON(loan_create_dto_t *loan_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // loan_create_dto->id
    if(loan_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", loan_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // loan_create_dto->timestamp
    if(loan_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", loan_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // loan_create_dto->loan_timestamp
    if(loan_create_dto->loan_timestamp) {
    if(cJSON_AddStringToObject(item, "loanTimestamp", loan_create_dto->loan_timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // loan_create_dto->payment_deadline
    if(loan_create_dto->payment_deadline) {
    if(cJSON_AddStringToObject(item, "paymentDeadline", loan_create_dto->payment_deadline) == NULL) {
    goto fail; //Date-Time
    }
    }


    // loan_create_dto->value
    if(loan_create_dto->value) {
    if(cJSON_AddNumberToObject(item, "value", loan_create_dto->value) == NULL) {
    goto fail; //Numeric
    }
    }


    // loan_create_dto->interest_rate
    if(loan_create_dto->interest_rate) {
    if(cJSON_AddNumberToObject(item, "interestRate", loan_create_dto->interest_rate) == NULL) {
    goto fail; //Numeric
    }
    }


    // loan_create_dto->is_compund_interest_rate
    if(loan_create_dto->is_compund_interest_rate) {
    if(cJSON_AddBoolToObject(item, "isCompundInterestRate", loan_create_dto->is_compund_interest_rate) == NULL) {
    goto fail; //Bool
    }
    }


    // loan_create_dto->loan_type_id
    if(loan_create_dto->loan_type_id) {
    if(cJSON_AddStringToObject(item, "loanTypeId", loan_create_dto->loan_type_id) == NULL) {
    goto fail; //String
    }
    }


    // loan_create_dto->currency_id
    if(loan_create_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", loan_create_dto->currency_id) == NULL) {
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

loan_create_dto_t *loan_create_dto_parseFromJSON(cJSON *loan_create_dtoJSON){

    loan_create_dto_t *loan_create_dto_local_var = NULL;

    // loan_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(loan_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // loan_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(loan_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // loan_create_dto->loan_timestamp
    cJSON *loan_timestamp = cJSON_GetObjectItemCaseSensitive(loan_create_dtoJSON, "loanTimestamp");
    if (loan_timestamp) { 
    if(!cJSON_IsString(loan_timestamp) && !cJSON_IsNull(loan_timestamp))
    {
    goto end; //DateTime
    }
    }

    // loan_create_dto->payment_deadline
    cJSON *payment_deadline = cJSON_GetObjectItemCaseSensitive(loan_create_dtoJSON, "paymentDeadline");
    if (payment_deadline) { 
    if(!cJSON_IsString(payment_deadline) && !cJSON_IsNull(payment_deadline))
    {
    goto end; //DateTime
    }
    }

    // loan_create_dto->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(loan_create_dtoJSON, "value");
    if (value) { 
    if(!cJSON_IsNumber(value))
    {
    goto end; //Numeric
    }
    }

    // loan_create_dto->interest_rate
    cJSON *interest_rate = cJSON_GetObjectItemCaseSensitive(loan_create_dtoJSON, "interestRate");
    if (interest_rate) { 
    if(!cJSON_IsNumber(interest_rate))
    {
    goto end; //Numeric
    }
    }

    // loan_create_dto->is_compund_interest_rate
    cJSON *is_compund_interest_rate = cJSON_GetObjectItemCaseSensitive(loan_create_dtoJSON, "isCompundInterestRate");
    if (is_compund_interest_rate) { 
    if(!cJSON_IsBool(is_compund_interest_rate))
    {
    goto end; //Bool
    }
    }

    // loan_create_dto->loan_type_id
    cJSON *loan_type_id = cJSON_GetObjectItemCaseSensitive(loan_create_dtoJSON, "loanTypeId");
    if (loan_type_id) { 
    if(!cJSON_IsString(loan_type_id) && !cJSON_IsNull(loan_type_id))
    {
    goto end; //String
    }
    }

    // loan_create_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(loan_create_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }


    loan_create_dto_local_var = loan_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        loan_timestamp && !cJSON_IsNull(loan_timestamp) ? strdup(loan_timestamp->valuestring) : NULL,
        payment_deadline && !cJSON_IsNull(payment_deadline) ? strdup(payment_deadline->valuestring) : NULL,
        value ? value->valuedouble : 0,
        interest_rate ? interest_rate->valuedouble : 0,
        is_compund_interest_rate ? is_compund_interest_rate->valueint : 0,
        loan_type_id && !cJSON_IsNull(loan_type_id) ? strdup(loan_type_id->valuestring) : NULL,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL
        );

    return loan_create_dto_local_var;
end:
    return NULL;

}
