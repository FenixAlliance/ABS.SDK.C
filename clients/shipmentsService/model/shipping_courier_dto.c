#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "shipping_courier_dto.h"



shipping_courier_dto_t *shipping_courier_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *logo_url,
    char *country_id,
    char *tenant_id,
    char *enrollment_id
    ) {
    shipping_courier_dto_t *shipping_courier_dto_local_var = malloc(sizeof(shipping_courier_dto_t));
    if (!shipping_courier_dto_local_var) {
        return NULL;
    }
    shipping_courier_dto_local_var->id = id;
    shipping_courier_dto_local_var->timestamp = timestamp;
    shipping_courier_dto_local_var->name = name;
    shipping_courier_dto_local_var->logo_url = logo_url;
    shipping_courier_dto_local_var->country_id = country_id;
    shipping_courier_dto_local_var->tenant_id = tenant_id;
    shipping_courier_dto_local_var->enrollment_id = enrollment_id;

    return shipping_courier_dto_local_var;
}


void shipping_courier_dto_free(shipping_courier_dto_t *shipping_courier_dto) {
    if(NULL == shipping_courier_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (shipping_courier_dto->id) {
        free(shipping_courier_dto->id);
        shipping_courier_dto->id = NULL;
    }
    if (shipping_courier_dto->timestamp) {
        free(shipping_courier_dto->timestamp);
        shipping_courier_dto->timestamp = NULL;
    }
    if (shipping_courier_dto->name) {
        free(shipping_courier_dto->name);
        shipping_courier_dto->name = NULL;
    }
    if (shipping_courier_dto->logo_url) {
        free(shipping_courier_dto->logo_url);
        shipping_courier_dto->logo_url = NULL;
    }
    if (shipping_courier_dto->country_id) {
        free(shipping_courier_dto->country_id);
        shipping_courier_dto->country_id = NULL;
    }
    if (shipping_courier_dto->tenant_id) {
        free(shipping_courier_dto->tenant_id);
        shipping_courier_dto->tenant_id = NULL;
    }
    if (shipping_courier_dto->enrollment_id) {
        free(shipping_courier_dto->enrollment_id);
        shipping_courier_dto->enrollment_id = NULL;
    }
    free(shipping_courier_dto);
}

cJSON *shipping_courier_dto_convertToJSON(shipping_courier_dto_t *shipping_courier_dto) {
    cJSON *item = cJSON_CreateObject();

    // shipping_courier_dto->id
    if(shipping_courier_dto->id) {
    if(cJSON_AddStringToObject(item, "id", shipping_courier_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // shipping_courier_dto->timestamp
    if(shipping_courier_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", shipping_courier_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // shipping_courier_dto->name
    if(shipping_courier_dto->name) {
    if(cJSON_AddStringToObject(item, "name", shipping_courier_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // shipping_courier_dto->logo_url
    if(shipping_courier_dto->logo_url) {
    if(cJSON_AddStringToObject(item, "logoURL", shipping_courier_dto->logo_url) == NULL) {
    goto fail; //String
    }
    }


    // shipping_courier_dto->country_id
    if(shipping_courier_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryId", shipping_courier_dto->country_id) == NULL) {
    goto fail; //String
    }
    }


    // shipping_courier_dto->tenant_id
    if(shipping_courier_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", shipping_courier_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // shipping_courier_dto->enrollment_id
    if(shipping_courier_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", shipping_courier_dto->enrollment_id) == NULL) {
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

shipping_courier_dto_t *shipping_courier_dto_parseFromJSON(cJSON *shipping_courier_dtoJSON){

    shipping_courier_dto_t *shipping_courier_dto_local_var = NULL;

    // shipping_courier_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(shipping_courier_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // shipping_courier_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(shipping_courier_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // shipping_courier_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(shipping_courier_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // shipping_courier_dto->logo_url
    cJSON *logo_url = cJSON_GetObjectItemCaseSensitive(shipping_courier_dtoJSON, "logoURL");
    if (logo_url) { 
    if(!cJSON_IsString(logo_url) && !cJSON_IsNull(logo_url))
    {
    goto end; //String
    }
    }

    // shipping_courier_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(shipping_courier_dtoJSON, "countryId");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }

    // shipping_courier_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(shipping_courier_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // shipping_courier_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(shipping_courier_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    shipping_courier_dto_local_var = shipping_courier_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        logo_url && !cJSON_IsNull(logo_url) ? strdup(logo_url->valuestring) : NULL,
        country_id && !cJSON_IsNull(country_id) ? strdup(country_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return shipping_courier_dto_local_var;
end:
    return NULL;

}
