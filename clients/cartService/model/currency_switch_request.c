#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "currency_switch_request.h"



currency_switch_request_t *currency_switch_request_create(
    char *cart_id,
    char *currency_id
    ) {
    currency_switch_request_t *currency_switch_request_local_var = malloc(sizeof(currency_switch_request_t));
    if (!currency_switch_request_local_var) {
        return NULL;
    }
    currency_switch_request_local_var->cart_id = cart_id;
    currency_switch_request_local_var->currency_id = currency_id;

    return currency_switch_request_local_var;
}


void currency_switch_request_free(currency_switch_request_t *currency_switch_request) {
    if(NULL == currency_switch_request){
        return ;
    }
    listEntry_t *listEntry;
    if (currency_switch_request->cart_id) {
        free(currency_switch_request->cart_id);
        currency_switch_request->cart_id = NULL;
    }
    if (currency_switch_request->currency_id) {
        free(currency_switch_request->currency_id);
        currency_switch_request->currency_id = NULL;
    }
    free(currency_switch_request);
}

cJSON *currency_switch_request_convertToJSON(currency_switch_request_t *currency_switch_request) {
    cJSON *item = cJSON_CreateObject();

    // currency_switch_request->cart_id
    if(currency_switch_request->cart_id) {
    if(cJSON_AddStringToObject(item, "cartID", currency_switch_request->cart_id) == NULL) {
    goto fail; //String
    }
    }


    // currency_switch_request->currency_id
    if(currency_switch_request->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyID", currency_switch_request->currency_id) == NULL) {
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

currency_switch_request_t *currency_switch_request_parseFromJSON(cJSON *currency_switch_requestJSON){

    currency_switch_request_t *currency_switch_request_local_var = NULL;

    // currency_switch_request->cart_id
    cJSON *cart_id = cJSON_GetObjectItemCaseSensitive(currency_switch_requestJSON, "cartID");
    if (cart_id) { 
    if(!cJSON_IsString(cart_id) && !cJSON_IsNull(cart_id))
    {
    goto end; //String
    }
    }

    // currency_switch_request->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(currency_switch_requestJSON, "currencyID");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }


    currency_switch_request_local_var = currency_switch_request_create (
        cart_id && !cJSON_IsNull(cart_id) ? strdup(cart_id->valuestring) : NULL,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL
        );

    return currency_switch_request_local_var;
end:
    return NULL;

}
