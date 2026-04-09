#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "country_switch_request.h"



country_switch_request_t *country_switch_request_create(
    char *cart_id,
    char *country_id
    ) {
    country_switch_request_t *country_switch_request_local_var = malloc(sizeof(country_switch_request_t));
    if (!country_switch_request_local_var) {
        return NULL;
    }
    country_switch_request_local_var->cart_id = cart_id;
    country_switch_request_local_var->country_id = country_id;

    return country_switch_request_local_var;
}


void country_switch_request_free(country_switch_request_t *country_switch_request) {
    if(NULL == country_switch_request){
        return ;
    }
    listEntry_t *listEntry;
    if (country_switch_request->cart_id) {
        free(country_switch_request->cart_id);
        country_switch_request->cart_id = NULL;
    }
    if (country_switch_request->country_id) {
        free(country_switch_request->country_id);
        country_switch_request->country_id = NULL;
    }
    free(country_switch_request);
}

cJSON *country_switch_request_convertToJSON(country_switch_request_t *country_switch_request) {
    cJSON *item = cJSON_CreateObject();

    // country_switch_request->cart_id
    if(country_switch_request->cart_id) {
    if(cJSON_AddStringToObject(item, "cartId", country_switch_request->cart_id) == NULL) {
    goto fail; //String
    }
    }


    // country_switch_request->country_id
    if(country_switch_request->country_id) {
    if(cJSON_AddStringToObject(item, "countryId", country_switch_request->country_id) == NULL) {
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

country_switch_request_t *country_switch_request_parseFromJSON(cJSON *country_switch_requestJSON){

    country_switch_request_t *country_switch_request_local_var = NULL;

    // country_switch_request->cart_id
    cJSON *cart_id = cJSON_GetObjectItemCaseSensitive(country_switch_requestJSON, "cartId");
    if (cart_id) { 
    if(!cJSON_IsString(cart_id) && !cJSON_IsNull(cart_id))
    {
    goto end; //String
    }
    }

    // country_switch_request->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(country_switch_requestJSON, "countryId");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }


    country_switch_request_local_var = country_switch_request_create (
        cart_id && !cJSON_IsNull(cart_id) ? strdup(cart_id->valuestring) : NULL,
        country_id && !cJSON_IsNull(country_id) ? strdup(country_id->valuestring) : NULL
        );

    return country_switch_request_local_var;
end:
    return NULL;

}
