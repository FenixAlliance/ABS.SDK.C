#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "e_payco_integration_options.h"



e_payco_integration_options_t *e_payco_integration_options_create(
    int enable,
    char *customer_id,
    char *customer_key,
    char *api_key,
    char *api_secret
    ) {
    e_payco_integration_options_t *e_payco_integration_options_local_var = malloc(sizeof(e_payco_integration_options_t));
    if (!e_payco_integration_options_local_var) {
        return NULL;
    }
    e_payco_integration_options_local_var->enable = enable;
    e_payco_integration_options_local_var->customer_id = customer_id;
    e_payco_integration_options_local_var->customer_key = customer_key;
    e_payco_integration_options_local_var->api_key = api_key;
    e_payco_integration_options_local_var->api_secret = api_secret;

    return e_payco_integration_options_local_var;
}


void e_payco_integration_options_free(e_payco_integration_options_t *e_payco_integration_options) {
    if(NULL == e_payco_integration_options){
        return ;
    }
    listEntry_t *listEntry;
    if (e_payco_integration_options->customer_id) {
        free(e_payco_integration_options->customer_id);
        e_payco_integration_options->customer_id = NULL;
    }
    if (e_payco_integration_options->customer_key) {
        free(e_payco_integration_options->customer_key);
        e_payco_integration_options->customer_key = NULL;
    }
    if (e_payco_integration_options->api_key) {
        free(e_payco_integration_options->api_key);
        e_payco_integration_options->api_key = NULL;
    }
    if (e_payco_integration_options->api_secret) {
        free(e_payco_integration_options->api_secret);
        e_payco_integration_options->api_secret = NULL;
    }
    free(e_payco_integration_options);
}

cJSON *e_payco_integration_options_convertToJSON(e_payco_integration_options_t *e_payco_integration_options) {
    cJSON *item = cJSON_CreateObject();

    // e_payco_integration_options->enable
    if(e_payco_integration_options->enable) {
    if(cJSON_AddBoolToObject(item, "enable", e_payco_integration_options->enable) == NULL) {
    goto fail; //Bool
    }
    }


    // e_payco_integration_options->customer_id
    if(e_payco_integration_options->customer_id) {
    if(cJSON_AddStringToObject(item, "customerID", e_payco_integration_options->customer_id) == NULL) {
    goto fail; //String
    }
    }


    // e_payco_integration_options->customer_key
    if(e_payco_integration_options->customer_key) {
    if(cJSON_AddStringToObject(item, "customerKey", e_payco_integration_options->customer_key) == NULL) {
    goto fail; //String
    }
    }


    // e_payco_integration_options->api_key
    if(e_payco_integration_options->api_key) {
    if(cJSON_AddStringToObject(item, "apiKey", e_payco_integration_options->api_key) == NULL) {
    goto fail; //String
    }
    }


    // e_payco_integration_options->api_secret
    if(e_payco_integration_options->api_secret) {
    if(cJSON_AddStringToObject(item, "apiSecret", e_payco_integration_options->api_secret) == NULL) {
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

e_payco_integration_options_t *e_payco_integration_options_parseFromJSON(cJSON *e_payco_integration_optionsJSON){

    e_payco_integration_options_t *e_payco_integration_options_local_var = NULL;

    // e_payco_integration_options->enable
    cJSON *enable = cJSON_GetObjectItemCaseSensitive(e_payco_integration_optionsJSON, "enable");
    if (enable) { 
    if(!cJSON_IsBool(enable))
    {
    goto end; //Bool
    }
    }

    // e_payco_integration_options->customer_id
    cJSON *customer_id = cJSON_GetObjectItemCaseSensitive(e_payco_integration_optionsJSON, "customerID");
    if (customer_id) { 
    if(!cJSON_IsString(customer_id) && !cJSON_IsNull(customer_id))
    {
    goto end; //String
    }
    }

    // e_payco_integration_options->customer_key
    cJSON *customer_key = cJSON_GetObjectItemCaseSensitive(e_payco_integration_optionsJSON, "customerKey");
    if (customer_key) { 
    if(!cJSON_IsString(customer_key) && !cJSON_IsNull(customer_key))
    {
    goto end; //String
    }
    }

    // e_payco_integration_options->api_key
    cJSON *api_key = cJSON_GetObjectItemCaseSensitive(e_payco_integration_optionsJSON, "apiKey");
    if (api_key) { 
    if(!cJSON_IsString(api_key) && !cJSON_IsNull(api_key))
    {
    goto end; //String
    }
    }

    // e_payco_integration_options->api_secret
    cJSON *api_secret = cJSON_GetObjectItemCaseSensitive(e_payco_integration_optionsJSON, "apiSecret");
    if (api_secret) { 
    if(!cJSON_IsString(api_secret) && !cJSON_IsNull(api_secret))
    {
    goto end; //String
    }
    }


    e_payco_integration_options_local_var = e_payco_integration_options_create (
        enable ? enable->valueint : 0,
        customer_id && !cJSON_IsNull(customer_id) ? strdup(customer_id->valuestring) : NULL,
        customer_key && !cJSON_IsNull(customer_key) ? strdup(customer_key->valuestring) : NULL,
        api_key && !cJSON_IsNull(api_key) ? strdup(api_key->valuestring) : NULL,
        api_secret && !cJSON_IsNull(api_secret) ? strdup(api_secret->valuestring) : NULL
        );

    return e_payco_integration_options_local_var;
end:
    return NULL;

}
