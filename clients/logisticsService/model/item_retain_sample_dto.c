#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "item_retain_sample_dto.h"



item_retain_sample_dto_t *item_retain_sample_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *warehouse_id,
    char *item_id
    ) {
    item_retain_sample_dto_t *item_retain_sample_dto_local_var = malloc(sizeof(item_retain_sample_dto_t));
    if (!item_retain_sample_dto_local_var) {
        return NULL;
    }
    item_retain_sample_dto_local_var->id = id;
    item_retain_sample_dto_local_var->timestamp = timestamp;
    item_retain_sample_dto_local_var->tenant_id = tenant_id;
    item_retain_sample_dto_local_var->warehouse_id = warehouse_id;
    item_retain_sample_dto_local_var->item_id = item_id;

    return item_retain_sample_dto_local_var;
}


void item_retain_sample_dto_free(item_retain_sample_dto_t *item_retain_sample_dto) {
    if(NULL == item_retain_sample_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (item_retain_sample_dto->id) {
        free(item_retain_sample_dto->id);
        item_retain_sample_dto->id = NULL;
    }
    if (item_retain_sample_dto->timestamp) {
        free(item_retain_sample_dto->timestamp);
        item_retain_sample_dto->timestamp = NULL;
    }
    if (item_retain_sample_dto->tenant_id) {
        free(item_retain_sample_dto->tenant_id);
        item_retain_sample_dto->tenant_id = NULL;
    }
    if (item_retain_sample_dto->warehouse_id) {
        free(item_retain_sample_dto->warehouse_id);
        item_retain_sample_dto->warehouse_id = NULL;
    }
    if (item_retain_sample_dto->item_id) {
        free(item_retain_sample_dto->item_id);
        item_retain_sample_dto->item_id = NULL;
    }
    free(item_retain_sample_dto);
}

cJSON *item_retain_sample_dto_convertToJSON(item_retain_sample_dto_t *item_retain_sample_dto) {
    cJSON *item = cJSON_CreateObject();

    // item_retain_sample_dto->id
    if(item_retain_sample_dto->id) {
    if(cJSON_AddStringToObject(item, "id", item_retain_sample_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // item_retain_sample_dto->timestamp
    if(item_retain_sample_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", item_retain_sample_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // item_retain_sample_dto->tenant_id
    if(item_retain_sample_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", item_retain_sample_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // item_retain_sample_dto->warehouse_id
    if(item_retain_sample_dto->warehouse_id) {
    if(cJSON_AddStringToObject(item, "warehouseId", item_retain_sample_dto->warehouse_id) == NULL) {
    goto fail; //String
    }
    }


    // item_retain_sample_dto->item_id
    if(item_retain_sample_dto->item_id) {
    if(cJSON_AddStringToObject(item, "itemId", item_retain_sample_dto->item_id) == NULL) {
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

item_retain_sample_dto_t *item_retain_sample_dto_parseFromJSON(cJSON *item_retain_sample_dtoJSON){

    item_retain_sample_dto_t *item_retain_sample_dto_local_var = NULL;

    // item_retain_sample_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(item_retain_sample_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // item_retain_sample_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(item_retain_sample_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // item_retain_sample_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(item_retain_sample_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // item_retain_sample_dto->warehouse_id
    cJSON *warehouse_id = cJSON_GetObjectItemCaseSensitive(item_retain_sample_dtoJSON, "warehouseId");
    if (warehouse_id) { 
    if(!cJSON_IsString(warehouse_id) && !cJSON_IsNull(warehouse_id))
    {
    goto end; //String
    }
    }

    // item_retain_sample_dto->item_id
    cJSON *item_id = cJSON_GetObjectItemCaseSensitive(item_retain_sample_dtoJSON, "itemId");
    if (item_id) { 
    if(!cJSON_IsString(item_id) && !cJSON_IsNull(item_id))
    {
    goto end; //String
    }
    }


    item_retain_sample_dto_local_var = item_retain_sample_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        warehouse_id && !cJSON_IsNull(warehouse_id) ? strdup(warehouse_id->valuestring) : NULL,
        item_id && !cJSON_IsNull(item_id) ? strdup(item_id->valuestring) : NULL
        );

    return item_retain_sample_dto_local_var;
end:
    return NULL;

}
