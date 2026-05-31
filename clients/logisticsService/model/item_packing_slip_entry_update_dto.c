#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "item_packing_slip_entry_update_dto.h"



item_packing_slip_entry_update_dto_t *item_packing_slip_entry_update_dto_create(
    char *item_id,
    char *quantity
    ) {
    item_packing_slip_entry_update_dto_t *item_packing_slip_entry_update_dto_local_var = malloc(sizeof(item_packing_slip_entry_update_dto_t));
    if (!item_packing_slip_entry_update_dto_local_var) {
        return NULL;
    }
    item_packing_slip_entry_update_dto_local_var->item_id = item_id;
    item_packing_slip_entry_update_dto_local_var->quantity = quantity;

    return item_packing_slip_entry_update_dto_local_var;
}


void item_packing_slip_entry_update_dto_free(item_packing_slip_entry_update_dto_t *item_packing_slip_entry_update_dto) {
    if(NULL == item_packing_slip_entry_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (item_packing_slip_entry_update_dto->item_id) {
        free(item_packing_slip_entry_update_dto->item_id);
        item_packing_slip_entry_update_dto->item_id = NULL;
    }
    if (item_packing_slip_entry_update_dto->quantity) {
        free(item_packing_slip_entry_update_dto->quantity);
        item_packing_slip_entry_update_dto->quantity = NULL;
    }
    free(item_packing_slip_entry_update_dto);
}

cJSON *item_packing_slip_entry_update_dto_convertToJSON(item_packing_slip_entry_update_dto_t *item_packing_slip_entry_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // item_packing_slip_entry_update_dto->item_id
    if(item_packing_slip_entry_update_dto->item_id) {
    if(cJSON_AddStringToObject(item, "itemId", item_packing_slip_entry_update_dto->item_id) == NULL) {
    goto fail; //String
    }
    }


    // item_packing_slip_entry_update_dto->quantity
    if(item_packing_slip_entry_update_dto->quantity) {
    if(cJSON_AddStringToObject(item, "quantity", item_packing_slip_entry_update_dto->quantity) == NULL) {
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

item_packing_slip_entry_update_dto_t *item_packing_slip_entry_update_dto_parseFromJSON(cJSON *item_packing_slip_entry_update_dtoJSON){

    item_packing_slip_entry_update_dto_t *item_packing_slip_entry_update_dto_local_var = NULL;

    // item_packing_slip_entry_update_dto->item_id
    cJSON *item_id = cJSON_GetObjectItemCaseSensitive(item_packing_slip_entry_update_dtoJSON, "itemId");
    if (item_id) { 
    if(!cJSON_IsString(item_id) && !cJSON_IsNull(item_id))
    {
    goto end; //String
    }
    }

    // item_packing_slip_entry_update_dto->quantity
    cJSON *quantity = cJSON_GetObjectItemCaseSensitive(item_packing_slip_entry_update_dtoJSON, "quantity");
    if (quantity) { 
    if(!cJSON_IsString(quantity) && !cJSON_IsNull(quantity))
    {
    goto end; //String
    }
    }


    item_packing_slip_entry_update_dto_local_var = item_packing_slip_entry_update_dto_create (
        item_id && !cJSON_IsNull(item_id) ? strdup(item_id->valuestring) : NULL,
        quantity && !cJSON_IsNull(quantity) ? strdup(quantity->valuestring) : NULL
        );

    return item_packing_slip_entry_update_dto_local_var;
end:
    return NULL;

}
