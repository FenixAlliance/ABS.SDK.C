#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "shipping_zone_update_dto.h"



shipping_zone_update_dto_t *shipping_zone_update_dto_create(
    char *name,
    int _default,
    int everywhere,
    char *postal_codes,
    char *country_codes
    ) {
    shipping_zone_update_dto_t *shipping_zone_update_dto_local_var = malloc(sizeof(shipping_zone_update_dto_t));
    if (!shipping_zone_update_dto_local_var) {
        return NULL;
    }
    shipping_zone_update_dto_local_var->name = name;
    shipping_zone_update_dto_local_var->_default = _default;
    shipping_zone_update_dto_local_var->everywhere = everywhere;
    shipping_zone_update_dto_local_var->postal_codes = postal_codes;
    shipping_zone_update_dto_local_var->country_codes = country_codes;

    return shipping_zone_update_dto_local_var;
}


void shipping_zone_update_dto_free(shipping_zone_update_dto_t *shipping_zone_update_dto) {
    if(NULL == shipping_zone_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (shipping_zone_update_dto->name) {
        free(shipping_zone_update_dto->name);
        shipping_zone_update_dto->name = NULL;
    }
    if (shipping_zone_update_dto->postal_codes) {
        free(shipping_zone_update_dto->postal_codes);
        shipping_zone_update_dto->postal_codes = NULL;
    }
    if (shipping_zone_update_dto->country_codes) {
        free(shipping_zone_update_dto->country_codes);
        shipping_zone_update_dto->country_codes = NULL;
    }
    free(shipping_zone_update_dto);
}

cJSON *shipping_zone_update_dto_convertToJSON(shipping_zone_update_dto_t *shipping_zone_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // shipping_zone_update_dto->name
    if(shipping_zone_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", shipping_zone_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // shipping_zone_update_dto->_default
    if(shipping_zone_update_dto->_default) {
    if(cJSON_AddBoolToObject(item, "default", shipping_zone_update_dto->_default) == NULL) {
    goto fail; //Bool
    }
    }


    // shipping_zone_update_dto->everywhere
    if(shipping_zone_update_dto->everywhere) {
    if(cJSON_AddBoolToObject(item, "everywhere", shipping_zone_update_dto->everywhere) == NULL) {
    goto fail; //Bool
    }
    }


    // shipping_zone_update_dto->postal_codes
    if(shipping_zone_update_dto->postal_codes) {
    if(cJSON_AddStringToObject(item, "postalCodes", shipping_zone_update_dto->postal_codes) == NULL) {
    goto fail; //String
    }
    }


    // shipping_zone_update_dto->country_codes
    if(shipping_zone_update_dto->country_codes) {
    if(cJSON_AddStringToObject(item, "countryCodes", shipping_zone_update_dto->country_codes) == NULL) {
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

shipping_zone_update_dto_t *shipping_zone_update_dto_parseFromJSON(cJSON *shipping_zone_update_dtoJSON){

    shipping_zone_update_dto_t *shipping_zone_update_dto_local_var = NULL;

    // shipping_zone_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(shipping_zone_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // shipping_zone_update_dto->_default
    cJSON *_default = cJSON_GetObjectItemCaseSensitive(shipping_zone_update_dtoJSON, "default");
    if (_default) { 
    if(!cJSON_IsBool(_default))
    {
    goto end; //Bool
    }
    }

    // shipping_zone_update_dto->everywhere
    cJSON *everywhere = cJSON_GetObjectItemCaseSensitive(shipping_zone_update_dtoJSON, "everywhere");
    if (everywhere) { 
    if(!cJSON_IsBool(everywhere))
    {
    goto end; //Bool
    }
    }

    // shipping_zone_update_dto->postal_codes
    cJSON *postal_codes = cJSON_GetObjectItemCaseSensitive(shipping_zone_update_dtoJSON, "postalCodes");
    if (postal_codes) { 
    if(!cJSON_IsString(postal_codes) && !cJSON_IsNull(postal_codes))
    {
    goto end; //String
    }
    }

    // shipping_zone_update_dto->country_codes
    cJSON *country_codes = cJSON_GetObjectItemCaseSensitive(shipping_zone_update_dtoJSON, "countryCodes");
    if (country_codes) { 
    if(!cJSON_IsString(country_codes) && !cJSON_IsNull(country_codes))
    {
    goto end; //String
    }
    }


    shipping_zone_update_dto_local_var = shipping_zone_update_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        _default ? _default->valueint : 0,
        everywhere ? everywhere->valueint : 0,
        postal_codes && !cJSON_IsNull(postal_codes) ? strdup(postal_codes->valuestring) : NULL,
        country_codes && !cJSON_IsNull(country_codes) ? strdup(country_codes->valuestring) : NULL
        );

    return shipping_zone_update_dto_local_var;
end:
    return NULL;

}
