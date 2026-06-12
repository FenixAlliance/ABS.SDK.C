#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "shipping_zone_dto.h"



shipping_zone_dto_t *shipping_zone_dto_create(
    char *id,
    char *timestamp,
    char *name,
    int _default,
    int everywhere,
    char *postal_codes,
    char *country_codes,
    char *tenant_id
    ) {
    shipping_zone_dto_t *shipping_zone_dto_local_var = malloc(sizeof(shipping_zone_dto_t));
    if (!shipping_zone_dto_local_var) {
        return NULL;
    }
    shipping_zone_dto_local_var->id = id;
    shipping_zone_dto_local_var->timestamp = timestamp;
    shipping_zone_dto_local_var->name = name;
    shipping_zone_dto_local_var->_default = _default;
    shipping_zone_dto_local_var->everywhere = everywhere;
    shipping_zone_dto_local_var->postal_codes = postal_codes;
    shipping_zone_dto_local_var->country_codes = country_codes;
    shipping_zone_dto_local_var->tenant_id = tenant_id;

    return shipping_zone_dto_local_var;
}


void shipping_zone_dto_free(shipping_zone_dto_t *shipping_zone_dto) {
    if(NULL == shipping_zone_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (shipping_zone_dto->id) {
        free(shipping_zone_dto->id);
        shipping_zone_dto->id = NULL;
    }
    if (shipping_zone_dto->timestamp) {
        free(shipping_zone_dto->timestamp);
        shipping_zone_dto->timestamp = NULL;
    }
    if (shipping_zone_dto->name) {
        free(shipping_zone_dto->name);
        shipping_zone_dto->name = NULL;
    }
    if (shipping_zone_dto->postal_codes) {
        free(shipping_zone_dto->postal_codes);
        shipping_zone_dto->postal_codes = NULL;
    }
    if (shipping_zone_dto->country_codes) {
        free(shipping_zone_dto->country_codes);
        shipping_zone_dto->country_codes = NULL;
    }
    if (shipping_zone_dto->tenant_id) {
        free(shipping_zone_dto->tenant_id);
        shipping_zone_dto->tenant_id = NULL;
    }
    free(shipping_zone_dto);
}

cJSON *shipping_zone_dto_convertToJSON(shipping_zone_dto_t *shipping_zone_dto) {
    cJSON *item = cJSON_CreateObject();

    // shipping_zone_dto->id
    if(shipping_zone_dto->id) {
    if(cJSON_AddStringToObject(item, "id", shipping_zone_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // shipping_zone_dto->timestamp
    if(shipping_zone_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", shipping_zone_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // shipping_zone_dto->name
    if(shipping_zone_dto->name) {
    if(cJSON_AddStringToObject(item, "name", shipping_zone_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // shipping_zone_dto->_default
    if(shipping_zone_dto->_default) {
    if(cJSON_AddBoolToObject(item, "default", shipping_zone_dto->_default) == NULL) {
    goto fail; //Bool
    }
    }


    // shipping_zone_dto->everywhere
    if(shipping_zone_dto->everywhere) {
    if(cJSON_AddBoolToObject(item, "everywhere", shipping_zone_dto->everywhere) == NULL) {
    goto fail; //Bool
    }
    }


    // shipping_zone_dto->postal_codes
    if(shipping_zone_dto->postal_codes) {
    if(cJSON_AddStringToObject(item, "postalCodes", shipping_zone_dto->postal_codes) == NULL) {
    goto fail; //String
    }
    }


    // shipping_zone_dto->country_codes
    if(shipping_zone_dto->country_codes) {
    if(cJSON_AddStringToObject(item, "countryCodes", shipping_zone_dto->country_codes) == NULL) {
    goto fail; //String
    }
    }


    // shipping_zone_dto->tenant_id
    if(shipping_zone_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", shipping_zone_dto->tenant_id) == NULL) {
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

shipping_zone_dto_t *shipping_zone_dto_parseFromJSON(cJSON *shipping_zone_dtoJSON){

    shipping_zone_dto_t *shipping_zone_dto_local_var = NULL;

    // shipping_zone_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(shipping_zone_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // shipping_zone_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(shipping_zone_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // shipping_zone_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(shipping_zone_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // shipping_zone_dto->_default
    cJSON *_default = cJSON_GetObjectItemCaseSensitive(shipping_zone_dtoJSON, "default");
    if (_default) { 
    if(!cJSON_IsBool(_default))
    {
    goto end; //Bool
    }
    }

    // shipping_zone_dto->everywhere
    cJSON *everywhere = cJSON_GetObjectItemCaseSensitive(shipping_zone_dtoJSON, "everywhere");
    if (everywhere) { 
    if(!cJSON_IsBool(everywhere))
    {
    goto end; //Bool
    }
    }

    // shipping_zone_dto->postal_codes
    cJSON *postal_codes = cJSON_GetObjectItemCaseSensitive(shipping_zone_dtoJSON, "postalCodes");
    if (postal_codes) { 
    if(!cJSON_IsString(postal_codes) && !cJSON_IsNull(postal_codes))
    {
    goto end; //String
    }
    }

    // shipping_zone_dto->country_codes
    cJSON *country_codes = cJSON_GetObjectItemCaseSensitive(shipping_zone_dtoJSON, "countryCodes");
    if (country_codes) { 
    if(!cJSON_IsString(country_codes) && !cJSON_IsNull(country_codes))
    {
    goto end; //String
    }
    }

    // shipping_zone_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(shipping_zone_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }


    shipping_zone_dto_local_var = shipping_zone_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        _default ? _default->valueint : 0,
        everywhere ? everywhere->valueint : 0,
        postal_codes && !cJSON_IsNull(postal_codes) ? strdup(postal_codes->valuestring) : NULL,
        country_codes && !cJSON_IsNull(country_codes) ? strdup(country_codes->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL
        );

    return shipping_zone_dto_local_var;
end:
    return NULL;

}
