#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "shipping_class_dto.h"



shipping_class_dto_t *shipping_class_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *slug,
    char *tenant_id
    ) {
    shipping_class_dto_t *shipping_class_dto_local_var = malloc(sizeof(shipping_class_dto_t));
    if (!shipping_class_dto_local_var) {
        return NULL;
    }
    shipping_class_dto_local_var->id = id;
    shipping_class_dto_local_var->timestamp = timestamp;
    shipping_class_dto_local_var->name = name;
    shipping_class_dto_local_var->slug = slug;
    shipping_class_dto_local_var->tenant_id = tenant_id;

    return shipping_class_dto_local_var;
}


void shipping_class_dto_free(shipping_class_dto_t *shipping_class_dto) {
    if(NULL == shipping_class_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (shipping_class_dto->id) {
        free(shipping_class_dto->id);
        shipping_class_dto->id = NULL;
    }
    if (shipping_class_dto->timestamp) {
        free(shipping_class_dto->timestamp);
        shipping_class_dto->timestamp = NULL;
    }
    if (shipping_class_dto->name) {
        free(shipping_class_dto->name);
        shipping_class_dto->name = NULL;
    }
    if (shipping_class_dto->slug) {
        free(shipping_class_dto->slug);
        shipping_class_dto->slug = NULL;
    }
    if (shipping_class_dto->tenant_id) {
        free(shipping_class_dto->tenant_id);
        shipping_class_dto->tenant_id = NULL;
    }
    free(shipping_class_dto);
}

cJSON *shipping_class_dto_convertToJSON(shipping_class_dto_t *shipping_class_dto) {
    cJSON *item = cJSON_CreateObject();

    // shipping_class_dto->id
    if(shipping_class_dto->id) {
    if(cJSON_AddStringToObject(item, "id", shipping_class_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // shipping_class_dto->timestamp
    if(shipping_class_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", shipping_class_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // shipping_class_dto->name
    if(shipping_class_dto->name) {
    if(cJSON_AddStringToObject(item, "name", shipping_class_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // shipping_class_dto->slug
    if(shipping_class_dto->slug) {
    if(cJSON_AddStringToObject(item, "slug", shipping_class_dto->slug) == NULL) {
    goto fail; //String
    }
    }


    // shipping_class_dto->tenant_id
    if(shipping_class_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", shipping_class_dto->tenant_id) == NULL) {
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

shipping_class_dto_t *shipping_class_dto_parseFromJSON(cJSON *shipping_class_dtoJSON){

    shipping_class_dto_t *shipping_class_dto_local_var = NULL;

    // shipping_class_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(shipping_class_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // shipping_class_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(shipping_class_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // shipping_class_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(shipping_class_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // shipping_class_dto->slug
    cJSON *slug = cJSON_GetObjectItemCaseSensitive(shipping_class_dtoJSON, "slug");
    if (slug) { 
    if(!cJSON_IsString(slug) && !cJSON_IsNull(slug))
    {
    goto end; //String
    }
    }

    // shipping_class_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(shipping_class_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }


    shipping_class_dto_local_var = shipping_class_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        slug && !cJSON_IsNull(slug) ? strdup(slug->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL
        );

    return shipping_class_dto_local_var;
end:
    return NULL;

}
