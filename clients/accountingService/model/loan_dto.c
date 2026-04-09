#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "loan_dto.h"



loan_dto_t *loan_dto_create(
    char *id,
    char *timestamp,
    char *loan_timestamp,
    char *payment_deadline,
    double value,
    double interest_rate,
    int is_compund_interest_rate,
    char *loan_type_id,
    char *currency_id,
    char *tenant_id,
    char *enrollment_id
    ) {
    loan_dto_t *loan_dto_local_var = malloc(sizeof(loan_dto_t));
    if (!loan_dto_local_var) {
        return NULL;
    }
    loan_dto_local_var->id = id;
    loan_dto_local_var->timestamp = timestamp;
    loan_dto_local_var->loan_timestamp = loan_timestamp;
    loan_dto_local_var->payment_deadline = payment_deadline;
    loan_dto_local_var->value = value;
    loan_dto_local_var->interest_rate = interest_rate;
    loan_dto_local_var->is_compund_interest_rate = is_compund_interest_rate;
    loan_dto_local_var->loan_type_id = loan_type_id;
    loan_dto_local_var->currency_id = currency_id;
    loan_dto_local_var->tenant_id = tenant_id;
    loan_dto_local_var->enrollment_id = enrollment_id;

    return loan_dto_local_var;
}


void loan_dto_free(loan_dto_t *loan_dto) {
    if(NULL == loan_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (loan_dto->id) {
        free(loan_dto->id);
        loan_dto->id = NULL;
    }
    if (loan_dto->timestamp) {
        free(loan_dto->timestamp);
        loan_dto->timestamp = NULL;
    }
    if (loan_dto->loan_timestamp) {
        free(loan_dto->loan_timestamp);
        loan_dto->loan_timestamp = NULL;
    }
    if (loan_dto->payment_deadline) {
        free(loan_dto->payment_deadline);
        loan_dto->payment_deadline = NULL;
    }
    if (loan_dto->loan_type_id) {
        free(loan_dto->loan_type_id);
        loan_dto->loan_type_id = NULL;
    }
    if (loan_dto->currency_id) {
        free(loan_dto->currency_id);
        loan_dto->currency_id = NULL;
    }
    if (loan_dto->tenant_id) {
        free(loan_dto->tenant_id);
        loan_dto->tenant_id = NULL;
    }
    if (loan_dto->enrollment_id) {
        free(loan_dto->enrollment_id);
        loan_dto->enrollment_id = NULL;
    }
    free(loan_dto);
}

cJSON *loan_dto_convertToJSON(loan_dto_t *loan_dto) {
    cJSON *item = cJSON_CreateObject();

    // loan_dto->id
    if(loan_dto->id) {
    if(cJSON_AddStringToObject(item, "id", loan_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // loan_dto->timestamp
    if(loan_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", loan_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // loan_dto->loan_timestamp
    if(loan_dto->loan_timestamp) {
    if(cJSON_AddStringToObject(item, "loanTimestamp", loan_dto->loan_timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // loan_dto->payment_deadline
    if(loan_dto->payment_deadline) {
    if(cJSON_AddStringToObject(item, "paymentDeadline", loan_dto->payment_deadline) == NULL) {
    goto fail; //Date-Time
    }
    }


    // loan_dto->value
    if(loan_dto->value) {
    if(cJSON_AddNumberToObject(item, "value", loan_dto->value) == NULL) {
    goto fail; //Numeric
    }
    }


    // loan_dto->interest_rate
    if(loan_dto->interest_rate) {
    if(cJSON_AddNumberToObject(item, "interestRate", loan_dto->interest_rate) == NULL) {
    goto fail; //Numeric
    }
    }


    // loan_dto->is_compund_interest_rate
    if(loan_dto->is_compund_interest_rate) {
    if(cJSON_AddBoolToObject(item, "isCompundInterestRate", loan_dto->is_compund_interest_rate) == NULL) {
    goto fail; //Bool
    }
    }


    // loan_dto->loan_type_id
    if(loan_dto->loan_type_id) {
    if(cJSON_AddStringToObject(item, "loanTypeId", loan_dto->loan_type_id) == NULL) {
    goto fail; //String
    }
    }


    // loan_dto->currency_id
    if(loan_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", loan_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // loan_dto->tenant_id
    if(loan_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", loan_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // loan_dto->enrollment_id
    if(loan_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", loan_dto->enrollment_id) == NULL) {
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

loan_dto_t *loan_dto_parseFromJSON(cJSON *loan_dtoJSON){

    loan_dto_t *loan_dto_local_var = NULL;

    // loan_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(loan_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // loan_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(loan_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // loan_dto->loan_timestamp
    cJSON *loan_timestamp = cJSON_GetObjectItemCaseSensitive(loan_dtoJSON, "loanTimestamp");
    if (loan_timestamp) { 
    if(!cJSON_IsString(loan_timestamp) && !cJSON_IsNull(loan_timestamp))
    {
    goto end; //DateTime
    }
    }

    // loan_dto->payment_deadline
    cJSON *payment_deadline = cJSON_GetObjectItemCaseSensitive(loan_dtoJSON, "paymentDeadline");
    if (payment_deadline) { 
    if(!cJSON_IsString(payment_deadline) && !cJSON_IsNull(payment_deadline))
    {
    goto end; //DateTime
    }
    }

    // loan_dto->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(loan_dtoJSON, "value");
    if (value) { 
    if(!cJSON_IsNumber(value))
    {
    goto end; //Numeric
    }
    }

    // loan_dto->interest_rate
    cJSON *interest_rate = cJSON_GetObjectItemCaseSensitive(loan_dtoJSON, "interestRate");
    if (interest_rate) { 
    if(!cJSON_IsNumber(interest_rate))
    {
    goto end; //Numeric
    }
    }

    // loan_dto->is_compund_interest_rate
    cJSON *is_compund_interest_rate = cJSON_GetObjectItemCaseSensitive(loan_dtoJSON, "isCompundInterestRate");
    if (is_compund_interest_rate) { 
    if(!cJSON_IsBool(is_compund_interest_rate))
    {
    goto end; //Bool
    }
    }

    // loan_dto->loan_type_id
    cJSON *loan_type_id = cJSON_GetObjectItemCaseSensitive(loan_dtoJSON, "loanTypeId");
    if (loan_type_id) { 
    if(!cJSON_IsString(loan_type_id) && !cJSON_IsNull(loan_type_id))
    {
    goto end; //String
    }
    }

    // loan_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(loan_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // loan_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(loan_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // loan_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(loan_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    loan_dto_local_var = loan_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        loan_timestamp && !cJSON_IsNull(loan_timestamp) ? strdup(loan_timestamp->valuestring) : NULL,
        payment_deadline && !cJSON_IsNull(payment_deadline) ? strdup(payment_deadline->valuestring) : NULL,
        value ? value->valuedouble : 0,
        interest_rate ? interest_rate->valuedouble : 0,
        is_compund_interest_rate ? is_compund_interest_rate->valueint : 0,
        loan_type_id && !cJSON_IsNull(loan_type_id) ? strdup(loan_type_id->valuestring) : NULL,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return loan_dto_local_var;
end:
    return NULL;

}
