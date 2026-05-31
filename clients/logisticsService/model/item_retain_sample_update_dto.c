#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "item_retain_sample_update_dto.h"



item_retain_sample_update_dto_t *item_retain_sample_update_dto_create(
    char *warehouse_id,
    char *item_id
    ) {
    item_retain_sample_update_dto_t *item_retain_sample_update_dto_local_var = malloc(sizeof(item_retain_sample_update_dto_t));
    if (!item_retain_sample_update_dto_local_var) {
        return NULL;
    }
    item_retain_sample_update_dto_local_var->warehouse_id = warehouse_id;
    item_retain_sample_update_dto_local_var->item_id = item_id;

    return item_retain_sample_update_dto_local_var;
}


void item_retain_sample_update_dto_free(item_retain_sample_update_dto_t *item_retain_sample_update_dto) {
    if(NULL == item_retain_sample_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (item_retain_sample_update_dto->warehouse_id) {
        free(item_retain_sample_update_dto->warehouse_id);
        item_retain_sample_update_dto->warehouse_id = NULL;
    }
    if (item_retain_sample_update_dto->item_id) {
        free(item_retain_sample_update_dto->item_id);
        item_retain_sample_update_dto->item_id = NULL;
    }
    free(item_retain_sample_update_dto);
}

cJSON *item_retain_sample_update_dto_convertToJSON(item_retain_sample_update_dto_t *item_retain_sample_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // item_retain_sample_update_dto->warehouse_id
    if(item_retain_sample_update_dto->warehouse_id) {
    if(cJSON_AddStringToObject(item, "warehouseId", item_retain_sample_update_dto->warehouse_id) == NULL) {
    goto fail; //String
    }
    }


    // item_retain_sample_update_dto->item_id
    if(item_retain_sample_update_dto->item_id) {
    if(cJSON_AddStringToObject(item, "itemId", item_retain_sample_update_dto->item_id) == NULL) {
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

item_retain_sample_update_dto_t *item_retain_sample_update_dto_parseFromJSON(cJSON *item_retain_sample_update_dtoJSON){

    item_retain_sample_update_dto_t *item_retain_sample_update_dto_local_var = NULL;

    // item_retain_sample_update_dto->warehouse_id
    cJSON *warehouse_id = cJSON_GetObjectItemCaseSensitive(item_retain_sample_update_dtoJSON, "warehouseId");
    if (warehouse_id) { 
    if(!cJSON_IsString(warehouse_id) && !cJSON_IsNull(warehouse_id))
    {
    goto end; //String
    }
    }

    // item_retain_sample_update_dto->item_id
    cJSON *item_id = cJSON_GetObjectItemCaseSensitive(item_retain_sample_update_dtoJSON, "itemId");
    if (item_id) { 
    if(!cJSON_IsString(item_id) && !cJSON_IsNull(item_id))
    {
    goto end; //String
    }
    }


    item_retain_sample_update_dto_local_var = item_retain_sample_update_dto_create (
        warehouse_id && !cJSON_IsNull(warehouse_id) ? strdup(warehouse_id->valuestring) : NULL,
        item_id && !cJSON_IsNull(item_id) ? strdup(item_id->valuestring) : NULL
        );

    return item_retain_sample_update_dto_local_var;
end:
    return NULL;

}
