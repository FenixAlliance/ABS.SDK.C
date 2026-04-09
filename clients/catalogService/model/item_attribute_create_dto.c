#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "item_attribute_create_dto.h"



item_attribute_create_dto_t *item_attribute_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *business_id
    ) {
    item_attribute_create_dto_t *item_attribute_create_dto_local_var = malloc(sizeof(item_attribute_create_dto_t));
    if (!item_attribute_create_dto_local_var) {
        return NULL;
    }
    item_attribute_create_dto_local_var->id = id;
    item_attribute_create_dto_local_var->timestamp = timestamp;
    item_attribute_create_dto_local_var->name = name;
    item_attribute_create_dto_local_var->description = description;
    item_attribute_create_dto_local_var->business_id = business_id;

    return item_attribute_create_dto_local_var;
}


void item_attribute_create_dto_free(item_attribute_create_dto_t *item_attribute_create_dto) {
    if(NULL == item_attribute_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (item_attribute_create_dto->id) {
        free(item_attribute_create_dto->id);
        item_attribute_create_dto->id = NULL;
    }
    if (item_attribute_create_dto->timestamp) {
        free(item_attribute_create_dto->timestamp);
        item_attribute_create_dto->timestamp = NULL;
    }
    if (item_attribute_create_dto->name) {
        free(item_attribute_create_dto->name);
        item_attribute_create_dto->name = NULL;
    }
    if (item_attribute_create_dto->description) {
        free(item_attribute_create_dto->description);
        item_attribute_create_dto->description = NULL;
    }
    if (item_attribute_create_dto->business_id) {
        free(item_attribute_create_dto->business_id);
        item_attribute_create_dto->business_id = NULL;
    }
    free(item_attribute_create_dto);
}

cJSON *item_attribute_create_dto_convertToJSON(item_attribute_create_dto_t *item_attribute_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // item_attribute_create_dto->id
    if(item_attribute_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", item_attribute_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // item_attribute_create_dto->timestamp
    if(item_attribute_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", item_attribute_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // item_attribute_create_dto->name
    if (!item_attribute_create_dto->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", item_attribute_create_dto->name) == NULL) {
    goto fail; //String
    }


    // item_attribute_create_dto->description
    if(item_attribute_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", item_attribute_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // item_attribute_create_dto->business_id
    if (!item_attribute_create_dto->business_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "businessID", item_attribute_create_dto->business_id) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

item_attribute_create_dto_t *item_attribute_create_dto_parseFromJSON(cJSON *item_attribute_create_dtoJSON){

    item_attribute_create_dto_t *item_attribute_create_dto_local_var = NULL;

    // item_attribute_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(item_attribute_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // item_attribute_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(item_attribute_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // item_attribute_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(item_attribute_create_dtoJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // item_attribute_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(item_attribute_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // item_attribute_create_dto->business_id
    cJSON *business_id = cJSON_GetObjectItemCaseSensitive(item_attribute_create_dtoJSON, "businessID");
    if (!business_id) {
        goto end;
    }

    
    if(!cJSON_IsString(business_id))
    {
    goto end; //String
    }


    item_attribute_create_dto_local_var = item_attribute_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(name->valuestring),
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        strdup(business_id->valuestring)
        );

    return item_attribute_create_dto_local_var;
end:
    return NULL;

}
