#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "payment_response.h"


char* payment_response_payment_status_ToString(globeservice_payment_response_PAYMENTSTATUS_e payment_status) {
    char* payment_statusArray[] =  { "NULL", "Unset", "Accepted", "Rejected", "OnHold", "Failed", "Reversed", "Retained", "Initialized", "Expired", "Abandoned", "Cancelled", "AcceptedRetained" };
    return payment_statusArray[payment_status];
}

globeservice_payment_response_PAYMENTSTATUS_e payment_response_payment_status_FromString(char* payment_status){
    int stringToReturn = 0;
    char *payment_statusArray[] =  { "NULL", "Unset", "Accepted", "Rejected", "OnHold", "Failed", "Reversed", "Retained", "Initialized", "Expired", "Abandoned", "Cancelled", "AcceptedRetained" };
    size_t sizeofArray = sizeof(payment_statusArray) / sizeof(payment_statusArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(payment_status, payment_statusArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

payment_response_t *payment_response_create(
    int test,
    char *ip,
    char *bank,
    char *status,
    any_type_t *errors,
    char *response,
    char *auth_code,
    char *payment_id,
    char *franchise,
    char *signature,
    globeservice_payment_response_PAYMENTSTATUS_e payment_status
    ) {
    payment_response_t *payment_response_local_var = malloc(sizeof(payment_response_t));
    if (!payment_response_local_var) {
        return NULL;
    }
    payment_response_local_var->test = test;
    payment_response_local_var->ip = ip;
    payment_response_local_var->bank = bank;
    payment_response_local_var->status = status;
    payment_response_local_var->errors = errors;
    payment_response_local_var->response = response;
    payment_response_local_var->auth_code = auth_code;
    payment_response_local_var->payment_id = payment_id;
    payment_response_local_var->franchise = franchise;
    payment_response_local_var->signature = signature;
    payment_response_local_var->payment_status = payment_status;

    return payment_response_local_var;
}


void payment_response_free(payment_response_t *payment_response) {
    if(NULL == payment_response){
        return ;
    }
    listEntry_t *listEntry;
    if (payment_response->ip) {
        free(payment_response->ip);
        payment_response->ip = NULL;
    }
    if (payment_response->bank) {
        free(payment_response->bank);
        payment_response->bank = NULL;
    }
    if (payment_response->status) {
        free(payment_response->status);
        payment_response->status = NULL;
    }
    if (payment_response->errors) {
        _free(payment_response->errors);
        payment_response->errors = NULL;
    }
    if (payment_response->response) {
        free(payment_response->response);
        payment_response->response = NULL;
    }
    if (payment_response->auth_code) {
        free(payment_response->auth_code);
        payment_response->auth_code = NULL;
    }
    if (payment_response->payment_id) {
        free(payment_response->payment_id);
        payment_response->payment_id = NULL;
    }
    if (payment_response->franchise) {
        free(payment_response->franchise);
        payment_response->franchise = NULL;
    }
    if (payment_response->signature) {
        free(payment_response->signature);
        payment_response->signature = NULL;
    }
    free(payment_response);
}

cJSON *payment_response_convertToJSON(payment_response_t *payment_response) {
    cJSON *item = cJSON_CreateObject();

    // payment_response->test
    if(payment_response->test) {
    if(cJSON_AddBoolToObject(item, "test", payment_response->test) == NULL) {
    goto fail; //Bool
    }
    }


    // payment_response->ip
    if(payment_response->ip) {
    if(cJSON_AddStringToObject(item, "ip", payment_response->ip) == NULL) {
    goto fail; //String
    }
    }


    // payment_response->bank
    if(payment_response->bank) {
    if(cJSON_AddStringToObject(item, "bank", payment_response->bank) == NULL) {
    goto fail; //String
    }
    }


    // payment_response->status
    if(payment_response->status) {
    if(cJSON_AddStringToObject(item, "status", payment_response->status) == NULL) {
    goto fail; //String
    }
    }


    // payment_response->errors
    if(payment_response->errors) {
    cJSON *errors_local_JSON = _convertToJSON(payment_response->errors);
    if(errors_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "errors", errors_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // payment_response->response
    if(payment_response->response) {
    if(cJSON_AddStringToObject(item, "response", payment_response->response) == NULL) {
    goto fail; //String
    }
    }


    // payment_response->auth_code
    if(payment_response->auth_code) {
    if(cJSON_AddStringToObject(item, "authCode", payment_response->auth_code) == NULL) {
    goto fail; //String
    }
    }


    // payment_response->payment_id
    if(payment_response->payment_id) {
    if(cJSON_AddStringToObject(item, "paymentID", payment_response->payment_id) == NULL) {
    goto fail; //String
    }
    }


    // payment_response->franchise
    if(payment_response->franchise) {
    if(cJSON_AddStringToObject(item, "franchise", payment_response->franchise) == NULL) {
    goto fail; //String
    }
    }


    // payment_response->signature
    if(payment_response->signature) {
    if(cJSON_AddStringToObject(item, "signature", payment_response->signature) == NULL) {
    goto fail; //String
    }
    }


    // payment_response->payment_status
    if(payment_response->payment_status != globeservice_payment_response_PAYMENTSTATUS_NULL) {
    if(cJSON_AddStringToObject(item, "paymentStatus", payment_statuspayment_response_ToString(payment_response->payment_status)) == NULL)
    {
    goto fail; //Enum
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

payment_response_t *payment_response_parseFromJSON(cJSON *payment_responseJSON){

    payment_response_t *payment_response_local_var = NULL;

    // define the local variable for payment_response->errors
    _t *errors_local_nonprim = NULL;

    // payment_response->test
    cJSON *test = cJSON_GetObjectItemCaseSensitive(payment_responseJSON, "test");
    if (test) { 
    if(!cJSON_IsBool(test))
    {
    goto end; //Bool
    }
    }

    // payment_response->ip
    cJSON *ip = cJSON_GetObjectItemCaseSensitive(payment_responseJSON, "ip");
    if (ip) { 
    if(!cJSON_IsString(ip) && !cJSON_IsNull(ip))
    {
    goto end; //String
    }
    }

    // payment_response->bank
    cJSON *bank = cJSON_GetObjectItemCaseSensitive(payment_responseJSON, "bank");
    if (bank) { 
    if(!cJSON_IsString(bank) && !cJSON_IsNull(bank))
    {
    goto end; //String
    }
    }

    // payment_response->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(payment_responseJSON, "status");
    if (status) { 
    if(!cJSON_IsString(status) && !cJSON_IsNull(status))
    {
    goto end; //String
    }
    }

    // payment_response->errors
    cJSON *errors = cJSON_GetObjectItemCaseSensitive(payment_responseJSON, "errors");
    if (errors) { 
    errors_local_nonprim = _parseFromJSON(errors); //custom
    }

    // payment_response->response
    cJSON *response = cJSON_GetObjectItemCaseSensitive(payment_responseJSON, "response");
    if (response) { 
    if(!cJSON_IsString(response) && !cJSON_IsNull(response))
    {
    goto end; //String
    }
    }

    // payment_response->auth_code
    cJSON *auth_code = cJSON_GetObjectItemCaseSensitive(payment_responseJSON, "authCode");
    if (auth_code) { 
    if(!cJSON_IsString(auth_code) && !cJSON_IsNull(auth_code))
    {
    goto end; //String
    }
    }

    // payment_response->payment_id
    cJSON *payment_id = cJSON_GetObjectItemCaseSensitive(payment_responseJSON, "paymentID");
    if (payment_id) { 
    if(!cJSON_IsString(payment_id) && !cJSON_IsNull(payment_id))
    {
    goto end; //String
    }
    }

    // payment_response->franchise
    cJSON *franchise = cJSON_GetObjectItemCaseSensitive(payment_responseJSON, "franchise");
    if (franchise) { 
    if(!cJSON_IsString(franchise) && !cJSON_IsNull(franchise))
    {
    goto end; //String
    }
    }

    // payment_response->signature
    cJSON *signature = cJSON_GetObjectItemCaseSensitive(payment_responseJSON, "signature");
    if (signature) { 
    if(!cJSON_IsString(signature) && !cJSON_IsNull(signature))
    {
    goto end; //String
    }
    }

    // payment_response->payment_status
    cJSON *payment_status = cJSON_GetObjectItemCaseSensitive(payment_responseJSON, "paymentStatus");
    globeservice_payment_response_PAYMENTSTATUS_e payment_statusVariable;
    if (payment_status) { 
    if(!cJSON_IsString(payment_status))
    {
    goto end; //Enum
    }
    payment_statusVariable = payment_response_payment_status_FromString(payment_status->valuestring);
    }


    payment_response_local_var = payment_response_create (
        test ? test->valueint : 0,
        ip && !cJSON_IsNull(ip) ? strdup(ip->valuestring) : NULL,
        bank && !cJSON_IsNull(bank) ? strdup(bank->valuestring) : NULL,
        status && !cJSON_IsNull(status) ? strdup(status->valuestring) : NULL,
        errors ? errors_local_nonprim : NULL,
        response && !cJSON_IsNull(response) ? strdup(response->valuestring) : NULL,
        auth_code && !cJSON_IsNull(auth_code) ? strdup(auth_code->valuestring) : NULL,
        payment_id && !cJSON_IsNull(payment_id) ? strdup(payment_id->valuestring) : NULL,
        franchise && !cJSON_IsNull(franchise) ? strdup(franchise->valuestring) : NULL,
        signature && !cJSON_IsNull(signature) ? strdup(signature->valuestring) : NULL,
        payment_status ? payment_statusVariable : globeservice_payment_response_PAYMENTSTATUS_NULL
        );

    return payment_response_local_var;
end:
    if (errors_local_nonprim) {
        _free(errors_local_nonprim);
        errors_local_nonprim = NULL;
    }
    return NULL;

}
