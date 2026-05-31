#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "item_pick_list_entry_update_dto.h"



item_pick_list_entry_update_dto_t *item_pick_list_entry_update_dto_create(
    char *item_id,
    char *warehouse_id,
    double quantity,
    char *order_item_record_id
    ) {
    item_pick_list_entry_update_dto_t *item_pick_list_entry_update_dto_local_var = malloc(sizeof(item_pick_list_entry_update_dto_t));
    if (!item_pick_list_entry_update_dto_local_var) {
        return NULL;
    }
    item_pick_list_entry_update_dto_local_var->item_id = item_id;
    item_pick_list_entry_update_dto_local_var->warehouse_id = warehouse_id;
    item_pick_list_entry_update_dto_local_var->quantity = quantity;
    item_pick_list_entry_update_dto_local_var->order_item_record_id = order_item_record_id;

    return item_pick_list_entry_update_dto_local_var;
}


void item_pick_list_entry_update_dto_free(item_pick_list_entry_update_dto_t *item_pick_list_entry_update_dto) {
    if(NULL == item_pick_list_entry_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (item_pick_list_entry_update_dto->item_id) {
        free(item_pick_list_entry_update_dto->item_id);
        item_pick_list_entry_update_dto->item_id = NULL;
    }
    if (item_pick_list_entry_update_dto->warehouse_id) {
        free(item_pick_list_entry_update_dto->warehouse_id);
        item_pick_list_entry_update_dto->warehouse_id = NULL;
    }
    if (item_pick_list_entry_update_dto->order_item_record_id) {
        free(item_pick_list_entry_update_dto->order_item_record_id);
        item_pick_list_entry_update_dto->order_item_record_id = NULL;
    }
    free(item_pick_list_entry_update_dto);
}

cJSON *item_pick_list_entry_update_dto_convertToJSON(item_pick_list_entry_update_dto_t *item_pick_list_entry_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // item_pick_list_entry_update_dto->item_id
    if(item_pick_list_entry_update_dto->item_id) {
    if(cJSON_AddStringToObject(item, "itemId", item_pick_list_entry_update_dto->item_id) == NULL) {
    goto fail; //String
    }
    }


    // item_pick_list_entry_update_dto->warehouse_id
    if(item_pick_list_entry_update_dto->warehouse_id) {
    if(cJSON_AddStringToObject(item, "warehouseId", item_pick_list_entry_update_dto->warehouse_id) == NULL) {
    goto fail; //String
    }
    }


    // item_pick_list_entry_update_dto->quantity
    if(item_pick_list_entry_update_dto->quantity) {
    if(cJSON_AddNumberToObject(item, "quantity", item_pick_list_entry_update_dto->quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_pick_list_entry_update_dto->order_item_record_id
    if(item_pick_list_entry_update_dto->order_item_record_id) {
    if(cJSON_AddStringToObject(item, "orderItemRecordId", item_pick_list_entry_update_dto->order_item_record_id) == NULL) {
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

item_pick_list_entry_update_dto_t *item_pick_list_entry_update_dto_parseFromJSON(cJSON *item_pick_list_entry_update_dtoJSON){

    item_pick_list_entry_update_dto_t *item_pick_list_entry_update_dto_local_var = NULL;

    // item_pick_list_entry_update_dto->item_id
    cJSON *item_id = cJSON_GetObjectItemCaseSensitive(item_pick_list_entry_update_dtoJSON, "itemId");
    if (item_id) { 
    if(!cJSON_IsString(item_id) && !cJSON_IsNull(item_id))
    {
    goto end; //String
    }
    }

    // item_pick_list_entry_update_dto->warehouse_id
    cJSON *warehouse_id = cJSON_GetObjectItemCaseSensitive(item_pick_list_entry_update_dtoJSON, "warehouseId");
    if (warehouse_id) { 
    if(!cJSON_IsString(warehouse_id) && !cJSON_IsNull(warehouse_id))
    {
    goto end; //String
    }
    }

    // item_pick_list_entry_update_dto->quantity
    cJSON *quantity = cJSON_GetObjectItemCaseSensitive(item_pick_list_entry_update_dtoJSON, "quantity");
    if (quantity) { 
    if(!cJSON_IsNumber(quantity))
    {
    goto end; //Numeric
    }
    }

    // item_pick_list_entry_update_dto->order_item_record_id
    cJSON *order_item_record_id = cJSON_GetObjectItemCaseSensitive(item_pick_list_entry_update_dtoJSON, "orderItemRecordId");
    if (order_item_record_id) { 
    if(!cJSON_IsString(order_item_record_id) && !cJSON_IsNull(order_item_record_id))
    {
    goto end; //String
    }
    }


    item_pick_list_entry_update_dto_local_var = item_pick_list_entry_update_dto_create (
        item_id && !cJSON_IsNull(item_id) ? strdup(item_id->valuestring) : NULL,
        warehouse_id && !cJSON_IsNull(warehouse_id) ? strdup(warehouse_id->valuestring) : NULL,
        quantity ? quantity->valuedouble : 0,
        order_item_record_id && !cJSON_IsNull(order_item_record_id) ? strdup(order_item_record_id->valuestring) : NULL
        );

    return item_pick_list_entry_update_dto_local_var;
end:
    return NULL;

}
