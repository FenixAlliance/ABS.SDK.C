#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "item_restock_dto.h"



item_restock_dto_t *item_restock_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *tenant_id,
    int entry_count
    ) {
    item_restock_dto_t *item_restock_dto_local_var = malloc(sizeof(item_restock_dto_t));
    if (!item_restock_dto_local_var) {
        return NULL;
    }
    item_restock_dto_local_var->id = id;
    item_restock_dto_local_var->timestamp = timestamp;
    item_restock_dto_local_var->name = name;
    item_restock_dto_local_var->description = description;
    item_restock_dto_local_var->tenant_id = tenant_id;
    item_restock_dto_local_var->entry_count = entry_count;

    return item_restock_dto_local_var;
}


void item_restock_dto_free(item_restock_dto_t *item_restock_dto) {
    if(NULL == item_restock_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (item_restock_dto->id) {
        free(item_restock_dto->id);
        item_restock_dto->id = NULL;
    }
    if (item_restock_dto->timestamp) {
        free(item_restock_dto->timestamp);
        item_restock_dto->timestamp = NULL;
    }
    if (item_restock_dto->name) {
        free(item_restock_dto->name);
        item_restock_dto->name = NULL;
    }
    if (item_restock_dto->description) {
        free(item_restock_dto->description);
        item_restock_dto->description = NULL;
    }
    if (item_restock_dto->tenant_id) {
        free(item_restock_dto->tenant_id);
        item_restock_dto->tenant_id = NULL;
    }
    free(item_restock_dto);
}

cJSON *item_restock_dto_convertToJSON(item_restock_dto_t *item_restock_dto) {
    cJSON *item = cJSON_CreateObject();

    // item_restock_dto->id
    if(item_restock_dto->id) {
    if(cJSON_AddStringToObject(item, "id", item_restock_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // item_restock_dto->timestamp
    if(item_restock_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", item_restock_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // item_restock_dto->name
    if(item_restock_dto->name) {
    if(cJSON_AddStringToObject(item, "name", item_restock_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // item_restock_dto->description
    if(item_restock_dto->description) {
    if(cJSON_AddStringToObject(item, "description", item_restock_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // item_restock_dto->tenant_id
    if(item_restock_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", item_restock_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // item_restock_dto->entry_count
    if(item_restock_dto->entry_count) {
    if(cJSON_AddNumberToObject(item, "entryCount", item_restock_dto->entry_count) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

item_restock_dto_t *item_restock_dto_parseFromJSON(cJSON *item_restock_dtoJSON){

    item_restock_dto_t *item_restock_dto_local_var = NULL;

    // item_restock_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(item_restock_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // item_restock_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(item_restock_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // item_restock_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(item_restock_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // item_restock_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(item_restock_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // item_restock_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(item_restock_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // item_restock_dto->entry_count
    cJSON *entry_count = cJSON_GetObjectItemCaseSensitive(item_restock_dtoJSON, "entryCount");
    if (entry_count) { 
    if(!cJSON_IsNumber(entry_count))
    {
    goto end; //Numeric
    }
    }


    item_restock_dto_local_var = item_restock_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        entry_count ? entry_count->valuedouble : 0
        );

    return item_restock_dto_local_var;
end:
    return NULL;

}
