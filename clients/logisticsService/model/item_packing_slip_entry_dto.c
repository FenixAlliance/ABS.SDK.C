#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "item_packing_slip_entry_dto.h"



item_packing_slip_entry_dto_t *item_packing_slip_entry_dto_create(
    char *id,
    char *timestamp,
    char *quantity,
    char *item_id,
    char *item_packing_slip_id,
    char *tenant_id
    ) {
    item_packing_slip_entry_dto_t *item_packing_slip_entry_dto_local_var = malloc(sizeof(item_packing_slip_entry_dto_t));
    if (!item_packing_slip_entry_dto_local_var) {
        return NULL;
    }
    item_packing_slip_entry_dto_local_var->id = id;
    item_packing_slip_entry_dto_local_var->timestamp = timestamp;
    item_packing_slip_entry_dto_local_var->quantity = quantity;
    item_packing_slip_entry_dto_local_var->item_id = item_id;
    item_packing_slip_entry_dto_local_var->item_packing_slip_id = item_packing_slip_id;
    item_packing_slip_entry_dto_local_var->tenant_id = tenant_id;

    return item_packing_slip_entry_dto_local_var;
}


void item_packing_slip_entry_dto_free(item_packing_slip_entry_dto_t *item_packing_slip_entry_dto) {
    if(NULL == item_packing_slip_entry_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (item_packing_slip_entry_dto->id) {
        free(item_packing_slip_entry_dto->id);
        item_packing_slip_entry_dto->id = NULL;
    }
    if (item_packing_slip_entry_dto->timestamp) {
        free(item_packing_slip_entry_dto->timestamp);
        item_packing_slip_entry_dto->timestamp = NULL;
    }
    if (item_packing_slip_entry_dto->quantity) {
        free(item_packing_slip_entry_dto->quantity);
        item_packing_slip_entry_dto->quantity = NULL;
    }
    if (item_packing_slip_entry_dto->item_id) {
        free(item_packing_slip_entry_dto->item_id);
        item_packing_slip_entry_dto->item_id = NULL;
    }
    if (item_packing_slip_entry_dto->item_packing_slip_id) {
        free(item_packing_slip_entry_dto->item_packing_slip_id);
        item_packing_slip_entry_dto->item_packing_slip_id = NULL;
    }
    if (item_packing_slip_entry_dto->tenant_id) {
        free(item_packing_slip_entry_dto->tenant_id);
        item_packing_slip_entry_dto->tenant_id = NULL;
    }
    free(item_packing_slip_entry_dto);
}

cJSON *item_packing_slip_entry_dto_convertToJSON(item_packing_slip_entry_dto_t *item_packing_slip_entry_dto) {
    cJSON *item = cJSON_CreateObject();

    // item_packing_slip_entry_dto->id
    if(item_packing_slip_entry_dto->id) {
    if(cJSON_AddStringToObject(item, "id", item_packing_slip_entry_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // item_packing_slip_entry_dto->timestamp
    if(item_packing_slip_entry_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", item_packing_slip_entry_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // item_packing_slip_entry_dto->quantity
    if(item_packing_slip_entry_dto->quantity) {
    if(cJSON_AddStringToObject(item, "quantity", item_packing_slip_entry_dto->quantity) == NULL) {
    goto fail; //String
    }
    }


    // item_packing_slip_entry_dto->item_id
    if(item_packing_slip_entry_dto->item_id) {
    if(cJSON_AddStringToObject(item, "itemId", item_packing_slip_entry_dto->item_id) == NULL) {
    goto fail; //String
    }
    }


    // item_packing_slip_entry_dto->item_packing_slip_id
    if(item_packing_slip_entry_dto->item_packing_slip_id) {
    if(cJSON_AddStringToObject(item, "itemPackingSlipId", item_packing_slip_entry_dto->item_packing_slip_id) == NULL) {
    goto fail; //String
    }
    }


    // item_packing_slip_entry_dto->tenant_id
    if(item_packing_slip_entry_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", item_packing_slip_entry_dto->tenant_id) == NULL) {
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

item_packing_slip_entry_dto_t *item_packing_slip_entry_dto_parseFromJSON(cJSON *item_packing_slip_entry_dtoJSON){

    item_packing_slip_entry_dto_t *item_packing_slip_entry_dto_local_var = NULL;

    // item_packing_slip_entry_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(item_packing_slip_entry_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // item_packing_slip_entry_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(item_packing_slip_entry_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // item_packing_slip_entry_dto->quantity
    cJSON *quantity = cJSON_GetObjectItemCaseSensitive(item_packing_slip_entry_dtoJSON, "quantity");
    if (quantity) { 
    if(!cJSON_IsString(quantity) && !cJSON_IsNull(quantity))
    {
    goto end; //String
    }
    }

    // item_packing_slip_entry_dto->item_id
    cJSON *item_id = cJSON_GetObjectItemCaseSensitive(item_packing_slip_entry_dtoJSON, "itemId");
    if (item_id) { 
    if(!cJSON_IsString(item_id) && !cJSON_IsNull(item_id))
    {
    goto end; //String
    }
    }

    // item_packing_slip_entry_dto->item_packing_slip_id
    cJSON *item_packing_slip_id = cJSON_GetObjectItemCaseSensitive(item_packing_slip_entry_dtoJSON, "itemPackingSlipId");
    if (item_packing_slip_id) { 
    if(!cJSON_IsString(item_packing_slip_id) && !cJSON_IsNull(item_packing_slip_id))
    {
    goto end; //String
    }
    }

    // item_packing_slip_entry_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(item_packing_slip_entry_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }


    item_packing_slip_entry_dto_local_var = item_packing_slip_entry_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        quantity && !cJSON_IsNull(quantity) ? strdup(quantity->valuestring) : NULL,
        item_id && !cJSON_IsNull(item_id) ? strdup(item_id->valuestring) : NULL,
        item_packing_slip_id && !cJSON_IsNull(item_packing_slip_id) ? strdup(item_packing_slip_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL
        );

    return item_packing_slip_entry_dto_local_var;
end:
    return NULL;

}
