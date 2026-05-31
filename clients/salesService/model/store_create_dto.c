#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "store_create_dto.h"



store_create_dto_t *store_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    int e_commerce,
    char *currency_id
    ) {
    store_create_dto_t *store_create_dto_local_var = malloc(sizeof(store_create_dto_t));
    if (!store_create_dto_local_var) {
        return NULL;
    }
    store_create_dto_local_var->id = id;
    store_create_dto_local_var->timestamp = timestamp;
    store_create_dto_local_var->name = name;
    store_create_dto_local_var->e_commerce = e_commerce;
    store_create_dto_local_var->currency_id = currency_id;

    return store_create_dto_local_var;
}


void store_create_dto_free(store_create_dto_t *store_create_dto) {
    if(NULL == store_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (store_create_dto->id) {
        free(store_create_dto->id);
        store_create_dto->id = NULL;
    }
    if (store_create_dto->timestamp) {
        free(store_create_dto->timestamp);
        store_create_dto->timestamp = NULL;
    }
    if (store_create_dto->name) {
        free(store_create_dto->name);
        store_create_dto->name = NULL;
    }
    if (store_create_dto->currency_id) {
        free(store_create_dto->currency_id);
        store_create_dto->currency_id = NULL;
    }
    free(store_create_dto);
}

cJSON *store_create_dto_convertToJSON(store_create_dto_t *store_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // store_create_dto->id
    if(store_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", store_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // store_create_dto->timestamp
    if(store_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", store_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // store_create_dto->name
    if (!store_create_dto->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", store_create_dto->name) == NULL) {
    goto fail; //String
    }


    // store_create_dto->e_commerce
    if(store_create_dto->e_commerce) {
    if(cJSON_AddBoolToObject(item, "eCommerce", store_create_dto->e_commerce) == NULL) {
    goto fail; //Bool
    }
    }


    // store_create_dto->currency_id
    if(store_create_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", store_create_dto->currency_id) == NULL) {
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

store_create_dto_t *store_create_dto_parseFromJSON(cJSON *store_create_dtoJSON){

    store_create_dto_t *store_create_dto_local_var = NULL;

    // store_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(store_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // store_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(store_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // store_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(store_create_dtoJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // store_create_dto->e_commerce
    cJSON *e_commerce = cJSON_GetObjectItemCaseSensitive(store_create_dtoJSON, "eCommerce");
    if (e_commerce) { 
    if(!cJSON_IsBool(e_commerce))
    {
    goto end; //Bool
    }
    }

    // store_create_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(store_create_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }


    store_create_dto_local_var = store_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(name->valuestring),
        e_commerce ? e_commerce->valueint : 0,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL
        );

    return store_create_dto_local_var;
end:
    return NULL;

}
