#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "shipping_courier_create_dto.h"



shipping_courier_create_dto_t *shipping_courier_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *logo_url,
    char *country_id
    ) {
    shipping_courier_create_dto_t *shipping_courier_create_dto_local_var = malloc(sizeof(shipping_courier_create_dto_t));
    if (!shipping_courier_create_dto_local_var) {
        return NULL;
    }
    shipping_courier_create_dto_local_var->id = id;
    shipping_courier_create_dto_local_var->timestamp = timestamp;
    shipping_courier_create_dto_local_var->name = name;
    shipping_courier_create_dto_local_var->logo_url = logo_url;
    shipping_courier_create_dto_local_var->country_id = country_id;

    return shipping_courier_create_dto_local_var;
}


void shipping_courier_create_dto_free(shipping_courier_create_dto_t *shipping_courier_create_dto) {
    if(NULL == shipping_courier_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (shipping_courier_create_dto->id) {
        free(shipping_courier_create_dto->id);
        shipping_courier_create_dto->id = NULL;
    }
    if (shipping_courier_create_dto->timestamp) {
        free(shipping_courier_create_dto->timestamp);
        shipping_courier_create_dto->timestamp = NULL;
    }
    if (shipping_courier_create_dto->name) {
        free(shipping_courier_create_dto->name);
        shipping_courier_create_dto->name = NULL;
    }
    if (shipping_courier_create_dto->logo_url) {
        free(shipping_courier_create_dto->logo_url);
        shipping_courier_create_dto->logo_url = NULL;
    }
    if (shipping_courier_create_dto->country_id) {
        free(shipping_courier_create_dto->country_id);
        shipping_courier_create_dto->country_id = NULL;
    }
    free(shipping_courier_create_dto);
}

cJSON *shipping_courier_create_dto_convertToJSON(shipping_courier_create_dto_t *shipping_courier_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // shipping_courier_create_dto->id
    if(shipping_courier_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", shipping_courier_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // shipping_courier_create_dto->timestamp
    if(shipping_courier_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", shipping_courier_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // shipping_courier_create_dto->name
    if (!shipping_courier_create_dto->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", shipping_courier_create_dto->name) == NULL) {
    goto fail; //String
    }


    // shipping_courier_create_dto->logo_url
    if(shipping_courier_create_dto->logo_url) {
    if(cJSON_AddStringToObject(item, "logoURL", shipping_courier_create_dto->logo_url) == NULL) {
    goto fail; //String
    }
    }


    // shipping_courier_create_dto->country_id
    if(shipping_courier_create_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryId", shipping_courier_create_dto->country_id) == NULL) {
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

shipping_courier_create_dto_t *shipping_courier_create_dto_parseFromJSON(cJSON *shipping_courier_create_dtoJSON){

    shipping_courier_create_dto_t *shipping_courier_create_dto_local_var = NULL;

    // shipping_courier_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(shipping_courier_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // shipping_courier_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(shipping_courier_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // shipping_courier_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(shipping_courier_create_dtoJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // shipping_courier_create_dto->logo_url
    cJSON *logo_url = cJSON_GetObjectItemCaseSensitive(shipping_courier_create_dtoJSON, "logoURL");
    if (logo_url) { 
    if(!cJSON_IsString(logo_url) && !cJSON_IsNull(logo_url))
    {
    goto end; //String
    }
    }

    // shipping_courier_create_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(shipping_courier_create_dtoJSON, "countryId");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }


    shipping_courier_create_dto_local_var = shipping_courier_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(name->valuestring),
        logo_url && !cJSON_IsNull(logo_url) ? strdup(logo_url->valuestring) : NULL,
        country_id && !cJSON_IsNull(country_id) ? strdup(country_id->valuestring) : NULL
        );

    return shipping_courier_create_dto_local_var;
end:
    return NULL;

}
