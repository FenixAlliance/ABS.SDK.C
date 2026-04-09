#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cart_update_request.h"



cart_update_request_t *cart_update_request_create(
    char *currency_id,
    char *country_id
    ) {
    cart_update_request_t *cart_update_request_local_var = malloc(sizeof(cart_update_request_t));
    if (!cart_update_request_local_var) {
        return NULL;
    }
    cart_update_request_local_var->currency_id = currency_id;
    cart_update_request_local_var->country_id = country_id;

    return cart_update_request_local_var;
}


void cart_update_request_free(cart_update_request_t *cart_update_request) {
    if(NULL == cart_update_request){
        return ;
    }
    listEntry_t *listEntry;
    if (cart_update_request->currency_id) {
        free(cart_update_request->currency_id);
        cart_update_request->currency_id = NULL;
    }
    if (cart_update_request->country_id) {
        free(cart_update_request->country_id);
        cart_update_request->country_id = NULL;
    }
    free(cart_update_request);
}

cJSON *cart_update_request_convertToJSON(cart_update_request_t *cart_update_request) {
    cJSON *item = cJSON_CreateObject();

    // cart_update_request->currency_id
    if(cart_update_request->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", cart_update_request->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // cart_update_request->country_id
    if(cart_update_request->country_id) {
    if(cJSON_AddStringToObject(item, "countryId", cart_update_request->country_id) == NULL) {
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

cart_update_request_t *cart_update_request_parseFromJSON(cJSON *cart_update_requestJSON){

    cart_update_request_t *cart_update_request_local_var = NULL;

    // cart_update_request->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(cart_update_requestJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // cart_update_request->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(cart_update_requestJSON, "countryId");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }


    cart_update_request_local_var = cart_update_request_create (
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        country_id && !cJSON_IsNull(country_id) ? strdup(country_id->valuestring) : NULL
        );

    return cart_update_request_local_var;
end:
    return NULL;

}
