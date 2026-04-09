#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "add_product_to_compare_request.h"



add_product_to_compare_request_t *add_product_to_compare_request_create(
    char *id,
    char *cart_id,
    char *item_id
    ) {
    add_product_to_compare_request_t *add_product_to_compare_request_local_var = malloc(sizeof(add_product_to_compare_request_t));
    if (!add_product_to_compare_request_local_var) {
        return NULL;
    }
    add_product_to_compare_request_local_var->id = id;
    add_product_to_compare_request_local_var->cart_id = cart_id;
    add_product_to_compare_request_local_var->item_id = item_id;

    return add_product_to_compare_request_local_var;
}


void add_product_to_compare_request_free(add_product_to_compare_request_t *add_product_to_compare_request) {
    if(NULL == add_product_to_compare_request){
        return ;
    }
    listEntry_t *listEntry;
    if (add_product_to_compare_request->id) {
        free(add_product_to_compare_request->id);
        add_product_to_compare_request->id = NULL;
    }
    if (add_product_to_compare_request->cart_id) {
        free(add_product_to_compare_request->cart_id);
        add_product_to_compare_request->cart_id = NULL;
    }
    if (add_product_to_compare_request->item_id) {
        free(add_product_to_compare_request->item_id);
        add_product_to_compare_request->item_id = NULL;
    }
    free(add_product_to_compare_request);
}

cJSON *add_product_to_compare_request_convertToJSON(add_product_to_compare_request_t *add_product_to_compare_request) {
    cJSON *item = cJSON_CreateObject();

    // add_product_to_compare_request->id
    if(add_product_to_compare_request->id) {
    if(cJSON_AddStringToObject(item, "id", add_product_to_compare_request->id) == NULL) {
    goto fail; //String
    }
    }


    // add_product_to_compare_request->cart_id
    if(add_product_to_compare_request->cart_id) {
    if(cJSON_AddStringToObject(item, "cartId", add_product_to_compare_request->cart_id) == NULL) {
    goto fail; //String
    }
    }


    // add_product_to_compare_request->item_id
    if(add_product_to_compare_request->item_id) {
    if(cJSON_AddStringToObject(item, "itemId", add_product_to_compare_request->item_id) == NULL) {
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

add_product_to_compare_request_t *add_product_to_compare_request_parseFromJSON(cJSON *add_product_to_compare_requestJSON){

    add_product_to_compare_request_t *add_product_to_compare_request_local_var = NULL;

    // add_product_to_compare_request->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(add_product_to_compare_requestJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // add_product_to_compare_request->cart_id
    cJSON *cart_id = cJSON_GetObjectItemCaseSensitive(add_product_to_compare_requestJSON, "cartId");
    if (cart_id) { 
    if(!cJSON_IsString(cart_id) && !cJSON_IsNull(cart_id))
    {
    goto end; //String
    }
    }

    // add_product_to_compare_request->item_id
    cJSON *item_id = cJSON_GetObjectItemCaseSensitive(add_product_to_compare_requestJSON, "itemId");
    if (item_id) { 
    if(!cJSON_IsString(item_id) && !cJSON_IsNull(item_id))
    {
    goto end; //String
    }
    }


    add_product_to_compare_request_local_var = add_product_to_compare_request_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        cart_id && !cJSON_IsNull(cart_id) ? strdup(cart_id->valuestring) : NULL,
        item_id && !cJSON_IsNull(item_id) ? strdup(item_id->valuestring) : NULL
        );

    return add_product_to_compare_request_local_var;
end:
    return NULL;

}
