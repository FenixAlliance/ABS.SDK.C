#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "item_cart_record_create_dto.h"



item_cart_record_create_dto_t *item_cart_record_create_dto_create(
    char *id,
    char *timestamp,
    char *cart_id,
    char *product_id,
    double quantity
    ) {
    item_cart_record_create_dto_t *item_cart_record_create_dto_local_var = malloc(sizeof(item_cart_record_create_dto_t));
    if (!item_cart_record_create_dto_local_var) {
        return NULL;
    }
    item_cart_record_create_dto_local_var->id = id;
    item_cart_record_create_dto_local_var->timestamp = timestamp;
    item_cart_record_create_dto_local_var->cart_id = cart_id;
    item_cart_record_create_dto_local_var->product_id = product_id;
    item_cart_record_create_dto_local_var->quantity = quantity;

    return item_cart_record_create_dto_local_var;
}


void item_cart_record_create_dto_free(item_cart_record_create_dto_t *item_cart_record_create_dto) {
    if(NULL == item_cart_record_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (item_cart_record_create_dto->id) {
        free(item_cart_record_create_dto->id);
        item_cart_record_create_dto->id = NULL;
    }
    if (item_cart_record_create_dto->timestamp) {
        free(item_cart_record_create_dto->timestamp);
        item_cart_record_create_dto->timestamp = NULL;
    }
    if (item_cart_record_create_dto->cart_id) {
        free(item_cart_record_create_dto->cart_id);
        item_cart_record_create_dto->cart_id = NULL;
    }
    if (item_cart_record_create_dto->product_id) {
        free(item_cart_record_create_dto->product_id);
        item_cart_record_create_dto->product_id = NULL;
    }
    free(item_cart_record_create_dto);
}

cJSON *item_cart_record_create_dto_convertToJSON(item_cart_record_create_dto_t *item_cart_record_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // item_cart_record_create_dto->id
    if(item_cart_record_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", item_cart_record_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_create_dto->timestamp
    if(item_cart_record_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", item_cart_record_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // item_cart_record_create_dto->cart_id
    if(item_cart_record_create_dto->cart_id) {
    if(cJSON_AddStringToObject(item, "cartId", item_cart_record_create_dto->cart_id) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_create_dto->product_id
    if(item_cart_record_create_dto->product_id) {
    if(cJSON_AddStringToObject(item, "productId", item_cart_record_create_dto->product_id) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_create_dto->quantity
    if(item_cart_record_create_dto->quantity) {
    if(cJSON_AddNumberToObject(item, "quantity", item_cart_record_create_dto->quantity) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

item_cart_record_create_dto_t *item_cart_record_create_dto_parseFromJSON(cJSON *item_cart_record_create_dtoJSON){

    item_cart_record_create_dto_t *item_cart_record_create_dto_local_var = NULL;

    // item_cart_record_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(item_cart_record_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // item_cart_record_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(item_cart_record_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // item_cart_record_create_dto->cart_id
    cJSON *cart_id = cJSON_GetObjectItemCaseSensitive(item_cart_record_create_dtoJSON, "cartId");
    if (cart_id) { 
    if(!cJSON_IsString(cart_id) && !cJSON_IsNull(cart_id))
    {
    goto end; //String
    }
    }

    // item_cart_record_create_dto->product_id
    cJSON *product_id = cJSON_GetObjectItemCaseSensitive(item_cart_record_create_dtoJSON, "productId");
    if (product_id) { 
    if(!cJSON_IsString(product_id) && !cJSON_IsNull(product_id))
    {
    goto end; //String
    }
    }

    // item_cart_record_create_dto->quantity
    cJSON *quantity = cJSON_GetObjectItemCaseSensitive(item_cart_record_create_dtoJSON, "quantity");
    if (quantity) { 
    if(!cJSON_IsNumber(quantity))
    {
    goto end; //Numeric
    }
    }


    item_cart_record_create_dto_local_var = item_cart_record_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        cart_id && !cJSON_IsNull(cart_id) ? strdup(cart_id->valuestring) : NULL,
        product_id && !cJSON_IsNull(product_id) ? strdup(product_id->valuestring) : NULL,
        quantity ? quantity->valuedouble : 0
        );

    return item_cart_record_create_dto_local_var;
end:
    return NULL;

}
