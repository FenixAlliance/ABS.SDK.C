#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "item_retain_sample_create_dto.h"



item_retain_sample_create_dto_t *item_retain_sample_create_dto_create(
    char *id,
    char *timestamp,
    char *warehouse_id,
    char *item_id
    ) {
    item_retain_sample_create_dto_t *item_retain_sample_create_dto_local_var = malloc(sizeof(item_retain_sample_create_dto_t));
    if (!item_retain_sample_create_dto_local_var) {
        return NULL;
    }
    item_retain_sample_create_dto_local_var->id = id;
    item_retain_sample_create_dto_local_var->timestamp = timestamp;
    item_retain_sample_create_dto_local_var->warehouse_id = warehouse_id;
    item_retain_sample_create_dto_local_var->item_id = item_id;

    return item_retain_sample_create_dto_local_var;
}


void item_retain_sample_create_dto_free(item_retain_sample_create_dto_t *item_retain_sample_create_dto) {
    if(NULL == item_retain_sample_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (item_retain_sample_create_dto->id) {
        free(item_retain_sample_create_dto->id);
        item_retain_sample_create_dto->id = NULL;
    }
    if (item_retain_sample_create_dto->timestamp) {
        free(item_retain_sample_create_dto->timestamp);
        item_retain_sample_create_dto->timestamp = NULL;
    }
    if (item_retain_sample_create_dto->warehouse_id) {
        free(item_retain_sample_create_dto->warehouse_id);
        item_retain_sample_create_dto->warehouse_id = NULL;
    }
    if (item_retain_sample_create_dto->item_id) {
        free(item_retain_sample_create_dto->item_id);
        item_retain_sample_create_dto->item_id = NULL;
    }
    free(item_retain_sample_create_dto);
}

cJSON *item_retain_sample_create_dto_convertToJSON(item_retain_sample_create_dto_t *item_retain_sample_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // item_retain_sample_create_dto->id
    if(item_retain_sample_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", item_retain_sample_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // item_retain_sample_create_dto->timestamp
    if(item_retain_sample_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", item_retain_sample_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // item_retain_sample_create_dto->warehouse_id
    if (!item_retain_sample_create_dto->warehouse_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "warehouseId", item_retain_sample_create_dto->warehouse_id) == NULL) {
    goto fail; //String
    }


    // item_retain_sample_create_dto->item_id
    if (!item_retain_sample_create_dto->item_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "itemId", item_retain_sample_create_dto->item_id) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

item_retain_sample_create_dto_t *item_retain_sample_create_dto_parseFromJSON(cJSON *item_retain_sample_create_dtoJSON){

    item_retain_sample_create_dto_t *item_retain_sample_create_dto_local_var = NULL;

    // item_retain_sample_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(item_retain_sample_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // item_retain_sample_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(item_retain_sample_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // item_retain_sample_create_dto->warehouse_id
    cJSON *warehouse_id = cJSON_GetObjectItemCaseSensitive(item_retain_sample_create_dtoJSON, "warehouseId");
    if (!warehouse_id) {
        goto end;
    }

    
    if(!cJSON_IsString(warehouse_id))
    {
    goto end; //String
    }

    // item_retain_sample_create_dto->item_id
    cJSON *item_id = cJSON_GetObjectItemCaseSensitive(item_retain_sample_create_dtoJSON, "itemId");
    if (!item_id) {
        goto end;
    }

    
    if(!cJSON_IsString(item_id))
    {
    goto end; //String
    }


    item_retain_sample_create_dto_local_var = item_retain_sample_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(warehouse_id->valuestring),
        strdup(item_id->valuestring)
        );

    return item_retain_sample_create_dto_local_var;
end:
    return NULL;

}
