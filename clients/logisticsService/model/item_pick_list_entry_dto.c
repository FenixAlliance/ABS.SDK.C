#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "item_pick_list_entry_dto.h"



item_pick_list_entry_dto_t *item_pick_list_entry_dto_create(
    char *id,
    char *timestamp,
    double quantity,
    char *item_id,
    char *warehouse_id,
    char *item_pick_list_id,
    char *order_item_record_id,
    char *tenant_id
    ) {
    item_pick_list_entry_dto_t *item_pick_list_entry_dto_local_var = malloc(sizeof(item_pick_list_entry_dto_t));
    if (!item_pick_list_entry_dto_local_var) {
        return NULL;
    }
    item_pick_list_entry_dto_local_var->id = id;
    item_pick_list_entry_dto_local_var->timestamp = timestamp;
    item_pick_list_entry_dto_local_var->quantity = quantity;
    item_pick_list_entry_dto_local_var->item_id = item_id;
    item_pick_list_entry_dto_local_var->warehouse_id = warehouse_id;
    item_pick_list_entry_dto_local_var->item_pick_list_id = item_pick_list_id;
    item_pick_list_entry_dto_local_var->order_item_record_id = order_item_record_id;
    item_pick_list_entry_dto_local_var->tenant_id = tenant_id;

    return item_pick_list_entry_dto_local_var;
}


void item_pick_list_entry_dto_free(item_pick_list_entry_dto_t *item_pick_list_entry_dto) {
    if(NULL == item_pick_list_entry_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (item_pick_list_entry_dto->id) {
        free(item_pick_list_entry_dto->id);
        item_pick_list_entry_dto->id = NULL;
    }
    if (item_pick_list_entry_dto->timestamp) {
        free(item_pick_list_entry_dto->timestamp);
        item_pick_list_entry_dto->timestamp = NULL;
    }
    if (item_pick_list_entry_dto->item_id) {
        free(item_pick_list_entry_dto->item_id);
        item_pick_list_entry_dto->item_id = NULL;
    }
    if (item_pick_list_entry_dto->warehouse_id) {
        free(item_pick_list_entry_dto->warehouse_id);
        item_pick_list_entry_dto->warehouse_id = NULL;
    }
    if (item_pick_list_entry_dto->item_pick_list_id) {
        free(item_pick_list_entry_dto->item_pick_list_id);
        item_pick_list_entry_dto->item_pick_list_id = NULL;
    }
    if (item_pick_list_entry_dto->order_item_record_id) {
        free(item_pick_list_entry_dto->order_item_record_id);
        item_pick_list_entry_dto->order_item_record_id = NULL;
    }
    if (item_pick_list_entry_dto->tenant_id) {
        free(item_pick_list_entry_dto->tenant_id);
        item_pick_list_entry_dto->tenant_id = NULL;
    }
    free(item_pick_list_entry_dto);
}

cJSON *item_pick_list_entry_dto_convertToJSON(item_pick_list_entry_dto_t *item_pick_list_entry_dto) {
    cJSON *item = cJSON_CreateObject();

    // item_pick_list_entry_dto->id
    if(item_pick_list_entry_dto->id) {
    if(cJSON_AddStringToObject(item, "id", item_pick_list_entry_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // item_pick_list_entry_dto->timestamp
    if(item_pick_list_entry_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", item_pick_list_entry_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // item_pick_list_entry_dto->quantity
    if(item_pick_list_entry_dto->quantity) {
    if(cJSON_AddNumberToObject(item, "quantity", item_pick_list_entry_dto->quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_pick_list_entry_dto->item_id
    if(item_pick_list_entry_dto->item_id) {
    if(cJSON_AddStringToObject(item, "itemId", item_pick_list_entry_dto->item_id) == NULL) {
    goto fail; //String
    }
    }


    // item_pick_list_entry_dto->warehouse_id
    if(item_pick_list_entry_dto->warehouse_id) {
    if(cJSON_AddStringToObject(item, "warehouseId", item_pick_list_entry_dto->warehouse_id) == NULL) {
    goto fail; //String
    }
    }


    // item_pick_list_entry_dto->item_pick_list_id
    if(item_pick_list_entry_dto->item_pick_list_id) {
    if(cJSON_AddStringToObject(item, "itemPickListId", item_pick_list_entry_dto->item_pick_list_id) == NULL) {
    goto fail; //String
    }
    }


    // item_pick_list_entry_dto->order_item_record_id
    if(item_pick_list_entry_dto->order_item_record_id) {
    if(cJSON_AddStringToObject(item, "orderItemRecordId", item_pick_list_entry_dto->order_item_record_id) == NULL) {
    goto fail; //String
    }
    }


    // item_pick_list_entry_dto->tenant_id
    if(item_pick_list_entry_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", item_pick_list_entry_dto->tenant_id) == NULL) {
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

item_pick_list_entry_dto_t *item_pick_list_entry_dto_parseFromJSON(cJSON *item_pick_list_entry_dtoJSON){

    item_pick_list_entry_dto_t *item_pick_list_entry_dto_local_var = NULL;

    // item_pick_list_entry_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(item_pick_list_entry_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // item_pick_list_entry_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(item_pick_list_entry_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // item_pick_list_entry_dto->quantity
    cJSON *quantity = cJSON_GetObjectItemCaseSensitive(item_pick_list_entry_dtoJSON, "quantity");
    if (quantity) { 
    if(!cJSON_IsNumber(quantity))
    {
    goto end; //Numeric
    }
    }

    // item_pick_list_entry_dto->item_id
    cJSON *item_id = cJSON_GetObjectItemCaseSensitive(item_pick_list_entry_dtoJSON, "itemId");
    if (item_id) { 
    if(!cJSON_IsString(item_id) && !cJSON_IsNull(item_id))
    {
    goto end; //String
    }
    }

    // item_pick_list_entry_dto->warehouse_id
    cJSON *warehouse_id = cJSON_GetObjectItemCaseSensitive(item_pick_list_entry_dtoJSON, "warehouseId");
    if (warehouse_id) { 
    if(!cJSON_IsString(warehouse_id) && !cJSON_IsNull(warehouse_id))
    {
    goto end; //String
    }
    }

    // item_pick_list_entry_dto->item_pick_list_id
    cJSON *item_pick_list_id = cJSON_GetObjectItemCaseSensitive(item_pick_list_entry_dtoJSON, "itemPickListId");
    if (item_pick_list_id) { 
    if(!cJSON_IsString(item_pick_list_id) && !cJSON_IsNull(item_pick_list_id))
    {
    goto end; //String
    }
    }

    // item_pick_list_entry_dto->order_item_record_id
    cJSON *order_item_record_id = cJSON_GetObjectItemCaseSensitive(item_pick_list_entry_dtoJSON, "orderItemRecordId");
    if (order_item_record_id) { 
    if(!cJSON_IsString(order_item_record_id) && !cJSON_IsNull(order_item_record_id))
    {
    goto end; //String
    }
    }

    // item_pick_list_entry_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(item_pick_list_entry_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }


    item_pick_list_entry_dto_local_var = item_pick_list_entry_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        quantity ? quantity->valuedouble : 0,
        item_id && !cJSON_IsNull(item_id) ? strdup(item_id->valuestring) : NULL,
        warehouse_id && !cJSON_IsNull(warehouse_id) ? strdup(warehouse_id->valuestring) : NULL,
        item_pick_list_id && !cJSON_IsNull(item_pick_list_id) ? strdup(item_pick_list_id->valuestring) : NULL,
        order_item_record_id && !cJSON_IsNull(order_item_record_id) ? strdup(order_item_record_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL
        );

    return item_pick_list_entry_dto_local_var;
end:
    return NULL;

}
