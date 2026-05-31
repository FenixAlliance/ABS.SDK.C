#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "item_packing_slip_dto.h"



item_packing_slip_dto_t *item_packing_slip_dto_create(
    char *id,
    char *timestamp,
    char *instructions,
    char *delivery_note_id,
    char *tenant_id,
    char *order_id
    ) {
    item_packing_slip_dto_t *item_packing_slip_dto_local_var = malloc(sizeof(item_packing_slip_dto_t));
    if (!item_packing_slip_dto_local_var) {
        return NULL;
    }
    item_packing_slip_dto_local_var->id = id;
    item_packing_slip_dto_local_var->timestamp = timestamp;
    item_packing_slip_dto_local_var->instructions = instructions;
    item_packing_slip_dto_local_var->delivery_note_id = delivery_note_id;
    item_packing_slip_dto_local_var->tenant_id = tenant_id;
    item_packing_slip_dto_local_var->order_id = order_id;

    return item_packing_slip_dto_local_var;
}


void item_packing_slip_dto_free(item_packing_slip_dto_t *item_packing_slip_dto) {
    if(NULL == item_packing_slip_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (item_packing_slip_dto->id) {
        free(item_packing_slip_dto->id);
        item_packing_slip_dto->id = NULL;
    }
    if (item_packing_slip_dto->timestamp) {
        free(item_packing_slip_dto->timestamp);
        item_packing_slip_dto->timestamp = NULL;
    }
    if (item_packing_slip_dto->instructions) {
        free(item_packing_slip_dto->instructions);
        item_packing_slip_dto->instructions = NULL;
    }
    if (item_packing_slip_dto->delivery_note_id) {
        free(item_packing_slip_dto->delivery_note_id);
        item_packing_slip_dto->delivery_note_id = NULL;
    }
    if (item_packing_slip_dto->tenant_id) {
        free(item_packing_slip_dto->tenant_id);
        item_packing_slip_dto->tenant_id = NULL;
    }
    if (item_packing_slip_dto->order_id) {
        free(item_packing_slip_dto->order_id);
        item_packing_slip_dto->order_id = NULL;
    }
    free(item_packing_slip_dto);
}

cJSON *item_packing_slip_dto_convertToJSON(item_packing_slip_dto_t *item_packing_slip_dto) {
    cJSON *item = cJSON_CreateObject();

    // item_packing_slip_dto->id
    if(item_packing_slip_dto->id) {
    if(cJSON_AddStringToObject(item, "id", item_packing_slip_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // item_packing_slip_dto->timestamp
    if(item_packing_slip_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", item_packing_slip_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // item_packing_slip_dto->instructions
    if(item_packing_slip_dto->instructions) {
    if(cJSON_AddStringToObject(item, "instructions", item_packing_slip_dto->instructions) == NULL) {
    goto fail; //String
    }
    }


    // item_packing_slip_dto->delivery_note_id
    if(item_packing_slip_dto->delivery_note_id) {
    if(cJSON_AddStringToObject(item, "deliveryNoteId", item_packing_slip_dto->delivery_note_id) == NULL) {
    goto fail; //String
    }
    }


    // item_packing_slip_dto->tenant_id
    if(item_packing_slip_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", item_packing_slip_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // item_packing_slip_dto->order_id
    if(item_packing_slip_dto->order_id) {
    if(cJSON_AddStringToObject(item, "orderId", item_packing_slip_dto->order_id) == NULL) {
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

item_packing_slip_dto_t *item_packing_slip_dto_parseFromJSON(cJSON *item_packing_slip_dtoJSON){

    item_packing_slip_dto_t *item_packing_slip_dto_local_var = NULL;

    // item_packing_slip_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(item_packing_slip_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // item_packing_slip_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(item_packing_slip_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // item_packing_slip_dto->instructions
    cJSON *instructions = cJSON_GetObjectItemCaseSensitive(item_packing_slip_dtoJSON, "instructions");
    if (instructions) { 
    if(!cJSON_IsString(instructions) && !cJSON_IsNull(instructions))
    {
    goto end; //String
    }
    }

    // item_packing_slip_dto->delivery_note_id
    cJSON *delivery_note_id = cJSON_GetObjectItemCaseSensitive(item_packing_slip_dtoJSON, "deliveryNoteId");
    if (delivery_note_id) { 
    if(!cJSON_IsString(delivery_note_id) && !cJSON_IsNull(delivery_note_id))
    {
    goto end; //String
    }
    }

    // item_packing_slip_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(item_packing_slip_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // item_packing_slip_dto->order_id
    cJSON *order_id = cJSON_GetObjectItemCaseSensitive(item_packing_slip_dtoJSON, "orderId");
    if (order_id) { 
    if(!cJSON_IsString(order_id) && !cJSON_IsNull(order_id))
    {
    goto end; //String
    }
    }


    item_packing_slip_dto_local_var = item_packing_slip_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        instructions && !cJSON_IsNull(instructions) ? strdup(instructions->valuestring) : NULL,
        delivery_note_id && !cJSON_IsNull(delivery_note_id) ? strdup(delivery_note_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        order_id && !cJSON_IsNull(order_id) ? strdup(order_id->valuestring) : NULL
        );

    return item_packing_slip_dto_local_var;
end:
    return NULL;

}
