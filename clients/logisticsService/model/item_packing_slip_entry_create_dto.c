#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "item_packing_slip_entry_create_dto.h"



item_packing_slip_entry_create_dto_t *item_packing_slip_entry_create_dto_create(
    char *id,
    char *timestamp,
    char *item_id,
    char *item_packing_slip_id,
    char *quantity
    ) {
    item_packing_slip_entry_create_dto_t *item_packing_slip_entry_create_dto_local_var = malloc(sizeof(item_packing_slip_entry_create_dto_t));
    if (!item_packing_slip_entry_create_dto_local_var) {
        return NULL;
    }
    item_packing_slip_entry_create_dto_local_var->id = id;
    item_packing_slip_entry_create_dto_local_var->timestamp = timestamp;
    item_packing_slip_entry_create_dto_local_var->item_id = item_id;
    item_packing_slip_entry_create_dto_local_var->item_packing_slip_id = item_packing_slip_id;
    item_packing_slip_entry_create_dto_local_var->quantity = quantity;

    return item_packing_slip_entry_create_dto_local_var;
}


void item_packing_slip_entry_create_dto_free(item_packing_slip_entry_create_dto_t *item_packing_slip_entry_create_dto) {
    if(NULL == item_packing_slip_entry_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (item_packing_slip_entry_create_dto->id) {
        free(item_packing_slip_entry_create_dto->id);
        item_packing_slip_entry_create_dto->id = NULL;
    }
    if (item_packing_slip_entry_create_dto->timestamp) {
        free(item_packing_slip_entry_create_dto->timestamp);
        item_packing_slip_entry_create_dto->timestamp = NULL;
    }
    if (item_packing_slip_entry_create_dto->item_id) {
        free(item_packing_slip_entry_create_dto->item_id);
        item_packing_slip_entry_create_dto->item_id = NULL;
    }
    if (item_packing_slip_entry_create_dto->item_packing_slip_id) {
        free(item_packing_slip_entry_create_dto->item_packing_slip_id);
        item_packing_slip_entry_create_dto->item_packing_slip_id = NULL;
    }
    if (item_packing_slip_entry_create_dto->quantity) {
        free(item_packing_slip_entry_create_dto->quantity);
        item_packing_slip_entry_create_dto->quantity = NULL;
    }
    free(item_packing_slip_entry_create_dto);
}

cJSON *item_packing_slip_entry_create_dto_convertToJSON(item_packing_slip_entry_create_dto_t *item_packing_slip_entry_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // item_packing_slip_entry_create_dto->id
    if(item_packing_slip_entry_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", item_packing_slip_entry_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // item_packing_slip_entry_create_dto->timestamp
    if(item_packing_slip_entry_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", item_packing_slip_entry_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // item_packing_slip_entry_create_dto->item_id
    if (!item_packing_slip_entry_create_dto->item_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "itemId", item_packing_slip_entry_create_dto->item_id) == NULL) {
    goto fail; //String
    }


    // item_packing_slip_entry_create_dto->item_packing_slip_id
    if (!item_packing_slip_entry_create_dto->item_packing_slip_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "itemPackingSlipId", item_packing_slip_entry_create_dto->item_packing_slip_id) == NULL) {
    goto fail; //String
    }


    // item_packing_slip_entry_create_dto->quantity
    if (!item_packing_slip_entry_create_dto->quantity) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "quantity", item_packing_slip_entry_create_dto->quantity) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

item_packing_slip_entry_create_dto_t *item_packing_slip_entry_create_dto_parseFromJSON(cJSON *item_packing_slip_entry_create_dtoJSON){

    item_packing_slip_entry_create_dto_t *item_packing_slip_entry_create_dto_local_var = NULL;

    // item_packing_slip_entry_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(item_packing_slip_entry_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // item_packing_slip_entry_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(item_packing_slip_entry_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // item_packing_slip_entry_create_dto->item_id
    cJSON *item_id = cJSON_GetObjectItemCaseSensitive(item_packing_slip_entry_create_dtoJSON, "itemId");
    if (!item_id) {
        goto end;
    }

    
    if(!cJSON_IsString(item_id))
    {
    goto end; //String
    }

    // item_packing_slip_entry_create_dto->item_packing_slip_id
    cJSON *item_packing_slip_id = cJSON_GetObjectItemCaseSensitive(item_packing_slip_entry_create_dtoJSON, "itemPackingSlipId");
    if (!item_packing_slip_id) {
        goto end;
    }

    
    if(!cJSON_IsString(item_packing_slip_id))
    {
    goto end; //String
    }

    // item_packing_slip_entry_create_dto->quantity
    cJSON *quantity = cJSON_GetObjectItemCaseSensitive(item_packing_slip_entry_create_dtoJSON, "quantity");
    if (!quantity) {
        goto end;
    }

    
    if(!cJSON_IsString(quantity))
    {
    goto end; //String
    }


    item_packing_slip_entry_create_dto_local_var = item_packing_slip_entry_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(item_id->valuestring),
        strdup(item_packing_slip_id->valuestring),
        strdup(quantity->valuestring)
        );

    return item_packing_slip_entry_create_dto_local_var;
end:
    return NULL;

}
