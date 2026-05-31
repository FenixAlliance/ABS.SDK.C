#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "store_dto.h"



store_dto_t *store_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *enrollment_id,
    char *name,
    int e_commerce,
    char *currency_id
    ) {
    store_dto_t *store_dto_local_var = malloc(sizeof(store_dto_t));
    if (!store_dto_local_var) {
        return NULL;
    }
    store_dto_local_var->id = id;
    store_dto_local_var->timestamp = timestamp;
    store_dto_local_var->tenant_id = tenant_id;
    store_dto_local_var->enrollment_id = enrollment_id;
    store_dto_local_var->name = name;
    store_dto_local_var->e_commerce = e_commerce;
    store_dto_local_var->currency_id = currency_id;

    return store_dto_local_var;
}


void store_dto_free(store_dto_t *store_dto) {
    if(NULL == store_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (store_dto->id) {
        free(store_dto->id);
        store_dto->id = NULL;
    }
    if (store_dto->timestamp) {
        free(store_dto->timestamp);
        store_dto->timestamp = NULL;
    }
    if (store_dto->tenant_id) {
        free(store_dto->tenant_id);
        store_dto->tenant_id = NULL;
    }
    if (store_dto->enrollment_id) {
        free(store_dto->enrollment_id);
        store_dto->enrollment_id = NULL;
    }
    if (store_dto->name) {
        free(store_dto->name);
        store_dto->name = NULL;
    }
    if (store_dto->currency_id) {
        free(store_dto->currency_id);
        store_dto->currency_id = NULL;
    }
    free(store_dto);
}

cJSON *store_dto_convertToJSON(store_dto_t *store_dto) {
    cJSON *item = cJSON_CreateObject();

    // store_dto->id
    if(store_dto->id) {
    if(cJSON_AddStringToObject(item, "id", store_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // store_dto->timestamp
    if(store_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", store_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // store_dto->tenant_id
    if(store_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", store_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // store_dto->enrollment_id
    if(store_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", store_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // store_dto->name
    if(store_dto->name) {
    if(cJSON_AddStringToObject(item, "name", store_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // store_dto->e_commerce
    if(store_dto->e_commerce) {
    if(cJSON_AddBoolToObject(item, "eCommerce", store_dto->e_commerce) == NULL) {
    goto fail; //Bool
    }
    }


    // store_dto->currency_id
    if(store_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", store_dto->currency_id) == NULL) {
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

store_dto_t *store_dto_parseFromJSON(cJSON *store_dtoJSON){

    store_dto_t *store_dto_local_var = NULL;

    // store_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(store_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // store_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(store_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // store_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(store_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // store_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(store_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // store_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(store_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // store_dto->e_commerce
    cJSON *e_commerce = cJSON_GetObjectItemCaseSensitive(store_dtoJSON, "eCommerce");
    if (e_commerce) { 
    if(!cJSON_IsBool(e_commerce))
    {
    goto end; //Bool
    }
    }

    // store_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(store_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }


    store_dto_local_var = store_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        e_commerce ? e_commerce->valueint : 0,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL
        );

    return store_dto_local_var;
end:
    return NULL;

}
