#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "store_update_dto.h"



store_update_dto_t *store_update_dto_create(
    char *name,
    int e_commerce,
    char *currency_id
    ) {
    store_update_dto_t *store_update_dto_local_var = malloc(sizeof(store_update_dto_t));
    if (!store_update_dto_local_var) {
        return NULL;
    }
    store_update_dto_local_var->name = name;
    store_update_dto_local_var->e_commerce = e_commerce;
    store_update_dto_local_var->currency_id = currency_id;

    return store_update_dto_local_var;
}


void store_update_dto_free(store_update_dto_t *store_update_dto) {
    if(NULL == store_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (store_update_dto->name) {
        free(store_update_dto->name);
        store_update_dto->name = NULL;
    }
    if (store_update_dto->currency_id) {
        free(store_update_dto->currency_id);
        store_update_dto->currency_id = NULL;
    }
    free(store_update_dto);
}

cJSON *store_update_dto_convertToJSON(store_update_dto_t *store_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // store_update_dto->name
    if(store_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", store_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // store_update_dto->e_commerce
    if(store_update_dto->e_commerce) {
    if(cJSON_AddBoolToObject(item, "eCommerce", store_update_dto->e_commerce) == NULL) {
    goto fail; //Bool
    }
    }


    // store_update_dto->currency_id
    if(store_update_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", store_update_dto->currency_id) == NULL) {
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

store_update_dto_t *store_update_dto_parseFromJSON(cJSON *store_update_dtoJSON){

    store_update_dto_t *store_update_dto_local_var = NULL;

    // store_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(store_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // store_update_dto->e_commerce
    cJSON *e_commerce = cJSON_GetObjectItemCaseSensitive(store_update_dtoJSON, "eCommerce");
    if (e_commerce) { 
    if(!cJSON_IsBool(e_commerce))
    {
    goto end; //Bool
    }
    }

    // store_update_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(store_update_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }


    store_update_dto_local_var = store_update_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        e_commerce ? e_commerce->valueint : 0,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL
        );

    return store_update_dto_local_var;
end:
    return NULL;

}
