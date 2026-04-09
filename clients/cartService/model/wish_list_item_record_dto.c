#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "wish_list_item_record_dto.h"



wish_list_item_record_dto_t *wish_list_item_record_dto_create(
    char *id,
    char *timestamp,
    char *wish_list_id,
    char *product_id
    ) {
    wish_list_item_record_dto_t *wish_list_item_record_dto_local_var = malloc(sizeof(wish_list_item_record_dto_t));
    if (!wish_list_item_record_dto_local_var) {
        return NULL;
    }
    wish_list_item_record_dto_local_var->id = id;
    wish_list_item_record_dto_local_var->timestamp = timestamp;
    wish_list_item_record_dto_local_var->wish_list_id = wish_list_id;
    wish_list_item_record_dto_local_var->product_id = product_id;

    return wish_list_item_record_dto_local_var;
}


void wish_list_item_record_dto_free(wish_list_item_record_dto_t *wish_list_item_record_dto) {
    if(NULL == wish_list_item_record_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (wish_list_item_record_dto->id) {
        free(wish_list_item_record_dto->id);
        wish_list_item_record_dto->id = NULL;
    }
    if (wish_list_item_record_dto->timestamp) {
        free(wish_list_item_record_dto->timestamp);
        wish_list_item_record_dto->timestamp = NULL;
    }
    if (wish_list_item_record_dto->wish_list_id) {
        free(wish_list_item_record_dto->wish_list_id);
        wish_list_item_record_dto->wish_list_id = NULL;
    }
    if (wish_list_item_record_dto->product_id) {
        free(wish_list_item_record_dto->product_id);
        wish_list_item_record_dto->product_id = NULL;
    }
    free(wish_list_item_record_dto);
}

cJSON *wish_list_item_record_dto_convertToJSON(wish_list_item_record_dto_t *wish_list_item_record_dto) {
    cJSON *item = cJSON_CreateObject();

    // wish_list_item_record_dto->id
    if(wish_list_item_record_dto->id) {
    if(cJSON_AddStringToObject(item, "id", wish_list_item_record_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // wish_list_item_record_dto->timestamp
    if(wish_list_item_record_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", wish_list_item_record_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // wish_list_item_record_dto->wish_list_id
    if(wish_list_item_record_dto->wish_list_id) {
    if(cJSON_AddStringToObject(item, "wishListId", wish_list_item_record_dto->wish_list_id) == NULL) {
    goto fail; //String
    }
    }


    // wish_list_item_record_dto->product_id
    if(wish_list_item_record_dto->product_id) {
    if(cJSON_AddStringToObject(item, "productId", wish_list_item_record_dto->product_id) == NULL) {
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

wish_list_item_record_dto_t *wish_list_item_record_dto_parseFromJSON(cJSON *wish_list_item_record_dtoJSON){

    wish_list_item_record_dto_t *wish_list_item_record_dto_local_var = NULL;

    // wish_list_item_record_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(wish_list_item_record_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // wish_list_item_record_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(wish_list_item_record_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // wish_list_item_record_dto->wish_list_id
    cJSON *wish_list_id = cJSON_GetObjectItemCaseSensitive(wish_list_item_record_dtoJSON, "wishListId");
    if (wish_list_id) { 
    if(!cJSON_IsString(wish_list_id) && !cJSON_IsNull(wish_list_id))
    {
    goto end; //String
    }
    }

    // wish_list_item_record_dto->product_id
    cJSON *product_id = cJSON_GetObjectItemCaseSensitive(wish_list_item_record_dtoJSON, "productId");
    if (product_id) { 
    if(!cJSON_IsString(product_id) && !cJSON_IsNull(product_id))
    {
    goto end; //String
    }
    }


    wish_list_item_record_dto_local_var = wish_list_item_record_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        wish_list_id && !cJSON_IsNull(wish_list_id) ? strdup(wish_list_id->valuestring) : NULL,
        product_id && !cJSON_IsNull(product_id) ? strdup(product_id->valuestring) : NULL
        );

    return wish_list_item_record_dto_local_var;
end:
    return NULL;

}
