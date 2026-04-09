#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "update_product_primary_image_async_request.h"



update_product_primary_image_async_request_t *update_product_primary_image_async_request_create(
    binary_t* data
    ) {
    update_product_primary_image_async_request_t *update_product_primary_image_async_request_local_var = malloc(sizeof(update_product_primary_image_async_request_t));
    if (!update_product_primary_image_async_request_local_var) {
        return NULL;
    }
    update_product_primary_image_async_request_local_var->data = data;

    return update_product_primary_image_async_request_local_var;
}


void update_product_primary_image_async_request_free(update_product_primary_image_async_request_t *update_product_primary_image_async_request) {
    if(NULL == update_product_primary_image_async_request){
        return ;
    }
    listEntry_t *listEntry;
    if (update_product_primary_image_async_request->data) {
        free(update_product_primary_image_async_request->data->data);
        update_product_primary_image_async_request->data = NULL;
    }
    free(update_product_primary_image_async_request);
}

cJSON *update_product_primary_image_async_request_convertToJSON(update_product_primary_image_async_request_t *update_product_primary_image_async_request) {
    cJSON *item = cJSON_CreateObject();

    // update_product_primary_image_async_request->data
    if(update_product_primary_image_async_request->data) {
    char* encoded_str_data = base64encode(update_product_primary_image_async_request->data->data,update_product_primary_image_async_request->data->len);
    if(cJSON_AddStringToObject(item, "data", encoded_str_data) == NULL) {
    goto fail; //Binary
    }
    free (encoded_str_data);
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

update_product_primary_image_async_request_t *update_product_primary_image_async_request_parseFromJSON(cJSON *update_product_primary_image_async_requestJSON){

    update_product_primary_image_async_request_t *update_product_primary_image_async_request_local_var = NULL;

    // update_product_primary_image_async_request->data
    cJSON *data = cJSON_GetObjectItemCaseSensitive(update_product_primary_image_async_requestJSON, "data");
    binary_t* decoded_str_data = malloc(sizeof(struct binary_t));
    if (data) { 
    if(!cJSON_IsString(data))
    {
    goto end; //Binary
    }
    decoded_str_data->data = base64decode(data->valuestring, strlen(data->valuestring), &decoded_str_data->len);
    if (!decoded_str_data->data) {
        goto end;
    }
    }


    update_product_primary_image_async_request_local_var = update_product_primary_image_async_request_create (
        data ? decoded_str_data : NULL
        );

    return update_product_primary_image_async_request_local_var;
end:
    return NULL;

}
