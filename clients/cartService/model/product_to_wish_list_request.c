#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_to_wish_list_request.h"



product_to_wish_list_request_t *product_to_wish_list_request_create(
    char *wish_list_id,
    char *item_id
    ) {
    product_to_wish_list_request_t *product_to_wish_list_request_local_var = malloc(sizeof(product_to_wish_list_request_t));
    if (!product_to_wish_list_request_local_var) {
        return NULL;
    }
    product_to_wish_list_request_local_var->wish_list_id = wish_list_id;
    product_to_wish_list_request_local_var->item_id = item_id;

    return product_to_wish_list_request_local_var;
}


void product_to_wish_list_request_free(product_to_wish_list_request_t *product_to_wish_list_request) {
    if(NULL == product_to_wish_list_request){
        return ;
    }
    listEntry_t *listEntry;
    if (product_to_wish_list_request->wish_list_id) {
        free(product_to_wish_list_request->wish_list_id);
        product_to_wish_list_request->wish_list_id = NULL;
    }
    if (product_to_wish_list_request->item_id) {
        free(product_to_wish_list_request->item_id);
        product_to_wish_list_request->item_id = NULL;
    }
    free(product_to_wish_list_request);
}

cJSON *product_to_wish_list_request_convertToJSON(product_to_wish_list_request_t *product_to_wish_list_request) {
    cJSON *item = cJSON_CreateObject();

    // product_to_wish_list_request->wish_list_id
    if(product_to_wish_list_request->wish_list_id) {
    if(cJSON_AddStringToObject(item, "wishListId", product_to_wish_list_request->wish_list_id) == NULL) {
    goto fail; //String
    }
    }


    // product_to_wish_list_request->item_id
    if(product_to_wish_list_request->item_id) {
    if(cJSON_AddStringToObject(item, "itemId", product_to_wish_list_request->item_id) == NULL) {
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

product_to_wish_list_request_t *product_to_wish_list_request_parseFromJSON(cJSON *product_to_wish_list_requestJSON){

    product_to_wish_list_request_t *product_to_wish_list_request_local_var = NULL;

    // product_to_wish_list_request->wish_list_id
    cJSON *wish_list_id = cJSON_GetObjectItemCaseSensitive(product_to_wish_list_requestJSON, "wishListId");
    if (wish_list_id) { 
    if(!cJSON_IsString(wish_list_id) && !cJSON_IsNull(wish_list_id))
    {
    goto end; //String
    }
    }

    // product_to_wish_list_request->item_id
    cJSON *item_id = cJSON_GetObjectItemCaseSensitive(product_to_wish_list_requestJSON, "itemId");
    if (item_id) { 
    if(!cJSON_IsString(item_id) && !cJSON_IsNull(item_id))
    {
    goto end; //String
    }
    }


    product_to_wish_list_request_local_var = product_to_wish_list_request_create (
        wish_list_id && !cJSON_IsNull(wish_list_id) ? strdup(wish_list_id->valuestring) : NULL,
        item_id && !cJSON_IsNull(item_id) ? strdup(item_id->valuestring) : NULL
        );

    return product_to_wish_list_request_local_var;
end:
    return NULL;

}
