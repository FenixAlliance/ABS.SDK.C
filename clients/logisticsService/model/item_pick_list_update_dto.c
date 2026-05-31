#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "item_pick_list_update_dto.h"



item_pick_list_update_dto_t *item_pick_list_update_dto_create(
    char *name,
    char *description,
    char *order_id
    ) {
    item_pick_list_update_dto_t *item_pick_list_update_dto_local_var = malloc(sizeof(item_pick_list_update_dto_t));
    if (!item_pick_list_update_dto_local_var) {
        return NULL;
    }
    item_pick_list_update_dto_local_var->name = name;
    item_pick_list_update_dto_local_var->description = description;
    item_pick_list_update_dto_local_var->order_id = order_id;

    return item_pick_list_update_dto_local_var;
}


void item_pick_list_update_dto_free(item_pick_list_update_dto_t *item_pick_list_update_dto) {
    if(NULL == item_pick_list_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (item_pick_list_update_dto->name) {
        free(item_pick_list_update_dto->name);
        item_pick_list_update_dto->name = NULL;
    }
    if (item_pick_list_update_dto->description) {
        free(item_pick_list_update_dto->description);
        item_pick_list_update_dto->description = NULL;
    }
    if (item_pick_list_update_dto->order_id) {
        free(item_pick_list_update_dto->order_id);
        item_pick_list_update_dto->order_id = NULL;
    }
    free(item_pick_list_update_dto);
}

cJSON *item_pick_list_update_dto_convertToJSON(item_pick_list_update_dto_t *item_pick_list_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // item_pick_list_update_dto->name
    if(item_pick_list_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", item_pick_list_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // item_pick_list_update_dto->description
    if(item_pick_list_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", item_pick_list_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // item_pick_list_update_dto->order_id
    if(item_pick_list_update_dto->order_id) {
    if(cJSON_AddStringToObject(item, "orderId", item_pick_list_update_dto->order_id) == NULL) {
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

item_pick_list_update_dto_t *item_pick_list_update_dto_parseFromJSON(cJSON *item_pick_list_update_dtoJSON){

    item_pick_list_update_dto_t *item_pick_list_update_dto_local_var = NULL;

    // item_pick_list_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(item_pick_list_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // item_pick_list_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(item_pick_list_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // item_pick_list_update_dto->order_id
    cJSON *order_id = cJSON_GetObjectItemCaseSensitive(item_pick_list_update_dtoJSON, "orderId");
    if (order_id) { 
    if(!cJSON_IsString(order_id) && !cJSON_IsNull(order_id))
    {
    goto end; //String
    }
    }


    item_pick_list_update_dto_local_var = item_pick_list_update_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        order_id && !cJSON_IsNull(order_id) ? strdup(order_id->valuestring) : NULL
        );

    return item_pick_list_update_dto_local_var;
end:
    return NULL;

}
