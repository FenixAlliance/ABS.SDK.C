#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "item_pick_list_dto.h"



item_pick_list_dto_t *item_pick_list_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *order_id,
    char *tenant_id
    ) {
    item_pick_list_dto_t *item_pick_list_dto_local_var = malloc(sizeof(item_pick_list_dto_t));
    if (!item_pick_list_dto_local_var) {
        return NULL;
    }
    item_pick_list_dto_local_var->id = id;
    item_pick_list_dto_local_var->timestamp = timestamp;
    item_pick_list_dto_local_var->name = name;
    item_pick_list_dto_local_var->description = description;
    item_pick_list_dto_local_var->order_id = order_id;
    item_pick_list_dto_local_var->tenant_id = tenant_id;

    return item_pick_list_dto_local_var;
}


void item_pick_list_dto_free(item_pick_list_dto_t *item_pick_list_dto) {
    if(NULL == item_pick_list_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (item_pick_list_dto->id) {
        free(item_pick_list_dto->id);
        item_pick_list_dto->id = NULL;
    }
    if (item_pick_list_dto->timestamp) {
        free(item_pick_list_dto->timestamp);
        item_pick_list_dto->timestamp = NULL;
    }
    if (item_pick_list_dto->name) {
        free(item_pick_list_dto->name);
        item_pick_list_dto->name = NULL;
    }
    if (item_pick_list_dto->description) {
        free(item_pick_list_dto->description);
        item_pick_list_dto->description = NULL;
    }
    if (item_pick_list_dto->order_id) {
        free(item_pick_list_dto->order_id);
        item_pick_list_dto->order_id = NULL;
    }
    if (item_pick_list_dto->tenant_id) {
        free(item_pick_list_dto->tenant_id);
        item_pick_list_dto->tenant_id = NULL;
    }
    free(item_pick_list_dto);
}

cJSON *item_pick_list_dto_convertToJSON(item_pick_list_dto_t *item_pick_list_dto) {
    cJSON *item = cJSON_CreateObject();

    // item_pick_list_dto->id
    if(item_pick_list_dto->id) {
    if(cJSON_AddStringToObject(item, "id", item_pick_list_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // item_pick_list_dto->timestamp
    if(item_pick_list_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", item_pick_list_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // item_pick_list_dto->name
    if(item_pick_list_dto->name) {
    if(cJSON_AddStringToObject(item, "name", item_pick_list_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // item_pick_list_dto->description
    if(item_pick_list_dto->description) {
    if(cJSON_AddStringToObject(item, "description", item_pick_list_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // item_pick_list_dto->order_id
    if(item_pick_list_dto->order_id) {
    if(cJSON_AddStringToObject(item, "orderId", item_pick_list_dto->order_id) == NULL) {
    goto fail; //String
    }
    }


    // item_pick_list_dto->tenant_id
    if(item_pick_list_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", item_pick_list_dto->tenant_id) == NULL) {
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

item_pick_list_dto_t *item_pick_list_dto_parseFromJSON(cJSON *item_pick_list_dtoJSON){

    item_pick_list_dto_t *item_pick_list_dto_local_var = NULL;

    // item_pick_list_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(item_pick_list_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // item_pick_list_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(item_pick_list_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // item_pick_list_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(item_pick_list_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // item_pick_list_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(item_pick_list_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // item_pick_list_dto->order_id
    cJSON *order_id = cJSON_GetObjectItemCaseSensitive(item_pick_list_dtoJSON, "orderId");
    if (order_id) { 
    if(!cJSON_IsString(order_id) && !cJSON_IsNull(order_id))
    {
    goto end; //String
    }
    }

    // item_pick_list_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(item_pick_list_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }


    item_pick_list_dto_local_var = item_pick_list_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        order_id && !cJSON_IsNull(order_id) ? strdup(order_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL
        );

    return item_pick_list_dto_local_var;
end:
    return NULL;

}
