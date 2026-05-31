#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "item_pick_list_create_dto.h"



item_pick_list_create_dto_t *item_pick_list_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *order_id
    ) {
    item_pick_list_create_dto_t *item_pick_list_create_dto_local_var = malloc(sizeof(item_pick_list_create_dto_t));
    if (!item_pick_list_create_dto_local_var) {
        return NULL;
    }
    item_pick_list_create_dto_local_var->id = id;
    item_pick_list_create_dto_local_var->timestamp = timestamp;
    item_pick_list_create_dto_local_var->name = name;
    item_pick_list_create_dto_local_var->description = description;
    item_pick_list_create_dto_local_var->order_id = order_id;

    return item_pick_list_create_dto_local_var;
}


void item_pick_list_create_dto_free(item_pick_list_create_dto_t *item_pick_list_create_dto) {
    if(NULL == item_pick_list_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (item_pick_list_create_dto->id) {
        free(item_pick_list_create_dto->id);
        item_pick_list_create_dto->id = NULL;
    }
    if (item_pick_list_create_dto->timestamp) {
        free(item_pick_list_create_dto->timestamp);
        item_pick_list_create_dto->timestamp = NULL;
    }
    if (item_pick_list_create_dto->name) {
        free(item_pick_list_create_dto->name);
        item_pick_list_create_dto->name = NULL;
    }
    if (item_pick_list_create_dto->description) {
        free(item_pick_list_create_dto->description);
        item_pick_list_create_dto->description = NULL;
    }
    if (item_pick_list_create_dto->order_id) {
        free(item_pick_list_create_dto->order_id);
        item_pick_list_create_dto->order_id = NULL;
    }
    free(item_pick_list_create_dto);
}

cJSON *item_pick_list_create_dto_convertToJSON(item_pick_list_create_dto_t *item_pick_list_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // item_pick_list_create_dto->id
    if(item_pick_list_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", item_pick_list_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // item_pick_list_create_dto->timestamp
    if(item_pick_list_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", item_pick_list_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // item_pick_list_create_dto->name
    if (!item_pick_list_create_dto->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", item_pick_list_create_dto->name) == NULL) {
    goto fail; //String
    }


    // item_pick_list_create_dto->description
    if(item_pick_list_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", item_pick_list_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // item_pick_list_create_dto->order_id
    if(item_pick_list_create_dto->order_id) {
    if(cJSON_AddStringToObject(item, "orderId", item_pick_list_create_dto->order_id) == NULL) {
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

item_pick_list_create_dto_t *item_pick_list_create_dto_parseFromJSON(cJSON *item_pick_list_create_dtoJSON){

    item_pick_list_create_dto_t *item_pick_list_create_dto_local_var = NULL;

    // item_pick_list_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(item_pick_list_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // item_pick_list_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(item_pick_list_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // item_pick_list_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(item_pick_list_create_dtoJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // item_pick_list_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(item_pick_list_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // item_pick_list_create_dto->order_id
    cJSON *order_id = cJSON_GetObjectItemCaseSensitive(item_pick_list_create_dtoJSON, "orderId");
    if (order_id) { 
    if(!cJSON_IsString(order_id) && !cJSON_IsNull(order_id))
    {
    goto end; //String
    }
    }


    item_pick_list_create_dto_local_var = item_pick_list_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(name->valuestring),
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        order_id && !cJSON_IsNull(order_id) ? strdup(order_id->valuestring) : NULL
        );

    return item_pick_list_create_dto_local_var;
end:
    return NULL;

}
