#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "discount_list_update_dto.h"



discount_list_update_dto_t *discount_list_update_dto_create(
    char *name,
    char *currency_id
    ) {
    discount_list_update_dto_t *discount_list_update_dto_local_var = malloc(sizeof(discount_list_update_dto_t));
    if (!discount_list_update_dto_local_var) {
        return NULL;
    }
    discount_list_update_dto_local_var->name = name;
    discount_list_update_dto_local_var->currency_id = currency_id;

    return discount_list_update_dto_local_var;
}


void discount_list_update_dto_free(discount_list_update_dto_t *discount_list_update_dto) {
    if(NULL == discount_list_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (discount_list_update_dto->name) {
        free(discount_list_update_dto->name);
        discount_list_update_dto->name = NULL;
    }
    if (discount_list_update_dto->currency_id) {
        free(discount_list_update_dto->currency_id);
        discount_list_update_dto->currency_id = NULL;
    }
    free(discount_list_update_dto);
}

cJSON *discount_list_update_dto_convertToJSON(discount_list_update_dto_t *discount_list_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // discount_list_update_dto->name
    if(discount_list_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", discount_list_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // discount_list_update_dto->currency_id
    if(discount_list_update_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", discount_list_update_dto->currency_id) == NULL) {
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

discount_list_update_dto_t *discount_list_update_dto_parseFromJSON(cJSON *discount_list_update_dtoJSON){

    discount_list_update_dto_t *discount_list_update_dto_local_var = NULL;

    // discount_list_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(discount_list_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // discount_list_update_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(discount_list_update_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }


    discount_list_update_dto_local_var = discount_list_update_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL
        );

    return discount_list_update_dto_local_var;
end:
    return NULL;

}
