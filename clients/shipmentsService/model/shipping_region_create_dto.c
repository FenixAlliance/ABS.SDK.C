#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "shipping_region_create_dto.h"



shipping_region_create_dto_t *shipping_region_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *postal_codes
    ) {
    shipping_region_create_dto_t *shipping_region_create_dto_local_var = malloc(sizeof(shipping_region_create_dto_t));
    if (!shipping_region_create_dto_local_var) {
        return NULL;
    }
    shipping_region_create_dto_local_var->id = id;
    shipping_region_create_dto_local_var->timestamp = timestamp;
    shipping_region_create_dto_local_var->name = name;
    shipping_region_create_dto_local_var->postal_codes = postal_codes;

    return shipping_region_create_dto_local_var;
}


void shipping_region_create_dto_free(shipping_region_create_dto_t *shipping_region_create_dto) {
    if(NULL == shipping_region_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (shipping_region_create_dto->id) {
        free(shipping_region_create_dto->id);
        shipping_region_create_dto->id = NULL;
    }
    if (shipping_region_create_dto->timestamp) {
        free(shipping_region_create_dto->timestamp);
        shipping_region_create_dto->timestamp = NULL;
    }
    if (shipping_region_create_dto->name) {
        free(shipping_region_create_dto->name);
        shipping_region_create_dto->name = NULL;
    }
    if (shipping_region_create_dto->postal_codes) {
        free(shipping_region_create_dto->postal_codes);
        shipping_region_create_dto->postal_codes = NULL;
    }
    free(shipping_region_create_dto);
}

cJSON *shipping_region_create_dto_convertToJSON(shipping_region_create_dto_t *shipping_region_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // shipping_region_create_dto->id
    if(shipping_region_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", shipping_region_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // shipping_region_create_dto->timestamp
    if(shipping_region_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", shipping_region_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // shipping_region_create_dto->name
    if (!shipping_region_create_dto->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", shipping_region_create_dto->name) == NULL) {
    goto fail; //String
    }


    // shipping_region_create_dto->postal_codes
    if(shipping_region_create_dto->postal_codes) {
    if(cJSON_AddStringToObject(item, "postalCodes", shipping_region_create_dto->postal_codes) == NULL) {
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

shipping_region_create_dto_t *shipping_region_create_dto_parseFromJSON(cJSON *shipping_region_create_dtoJSON){

    shipping_region_create_dto_t *shipping_region_create_dto_local_var = NULL;

    // shipping_region_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(shipping_region_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // shipping_region_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(shipping_region_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // shipping_region_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(shipping_region_create_dtoJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // shipping_region_create_dto->postal_codes
    cJSON *postal_codes = cJSON_GetObjectItemCaseSensitive(shipping_region_create_dtoJSON, "postalCodes");
    if (postal_codes) { 
    if(!cJSON_IsString(postal_codes) && !cJSON_IsNull(postal_codes))
    {
    goto end; //String
    }
    }


    shipping_region_create_dto_local_var = shipping_region_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(name->valuestring),
        postal_codes && !cJSON_IsNull(postal_codes) ? strdup(postal_codes->valuestring) : NULL
        );

    return shipping_region_create_dto_local_var;
end:
    return NULL;

}
