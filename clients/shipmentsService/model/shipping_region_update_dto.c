#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "shipping_region_update_dto.h"



shipping_region_update_dto_t *shipping_region_update_dto_create(
    char *name,
    char *postal_codes
    ) {
    shipping_region_update_dto_t *shipping_region_update_dto_local_var = malloc(sizeof(shipping_region_update_dto_t));
    if (!shipping_region_update_dto_local_var) {
        return NULL;
    }
    shipping_region_update_dto_local_var->name = name;
    shipping_region_update_dto_local_var->postal_codes = postal_codes;

    return shipping_region_update_dto_local_var;
}


void shipping_region_update_dto_free(shipping_region_update_dto_t *shipping_region_update_dto) {
    if(NULL == shipping_region_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (shipping_region_update_dto->name) {
        free(shipping_region_update_dto->name);
        shipping_region_update_dto->name = NULL;
    }
    if (shipping_region_update_dto->postal_codes) {
        free(shipping_region_update_dto->postal_codes);
        shipping_region_update_dto->postal_codes = NULL;
    }
    free(shipping_region_update_dto);
}

cJSON *shipping_region_update_dto_convertToJSON(shipping_region_update_dto_t *shipping_region_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // shipping_region_update_dto->name
    if(shipping_region_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", shipping_region_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // shipping_region_update_dto->postal_codes
    if(shipping_region_update_dto->postal_codes) {
    if(cJSON_AddStringToObject(item, "postalCodes", shipping_region_update_dto->postal_codes) == NULL) {
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

shipping_region_update_dto_t *shipping_region_update_dto_parseFromJSON(cJSON *shipping_region_update_dtoJSON){

    shipping_region_update_dto_t *shipping_region_update_dto_local_var = NULL;

    // shipping_region_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(shipping_region_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // shipping_region_update_dto->postal_codes
    cJSON *postal_codes = cJSON_GetObjectItemCaseSensitive(shipping_region_update_dtoJSON, "postalCodes");
    if (postal_codes) { 
    if(!cJSON_IsString(postal_codes) && !cJSON_IsNull(postal_codes))
    {
    goto end; //String
    }
    }


    shipping_region_update_dto_local_var = shipping_region_update_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        postal_codes && !cJSON_IsNull(postal_codes) ? strdup(postal_codes->valuestring) : NULL
        );

    return shipping_region_update_dto_local_var;
end:
    return NULL;

}
