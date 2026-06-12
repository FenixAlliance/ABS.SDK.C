#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "item_tax_policy_record_update_dto.h"



item_tax_policy_record_update_dto_t *item_tax_policy_record_update_dto_create(
    char *tax_policy_id,
    char *item_price_id,
    char *item_id
    ) {
    item_tax_policy_record_update_dto_t *item_tax_policy_record_update_dto_local_var = malloc(sizeof(item_tax_policy_record_update_dto_t));
    if (!item_tax_policy_record_update_dto_local_var) {
        return NULL;
    }
    item_tax_policy_record_update_dto_local_var->tax_policy_id = tax_policy_id;
    item_tax_policy_record_update_dto_local_var->item_price_id = item_price_id;
    item_tax_policy_record_update_dto_local_var->item_id = item_id;

    return item_tax_policy_record_update_dto_local_var;
}


void item_tax_policy_record_update_dto_free(item_tax_policy_record_update_dto_t *item_tax_policy_record_update_dto) {
    if(NULL == item_tax_policy_record_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (item_tax_policy_record_update_dto->tax_policy_id) {
        free(item_tax_policy_record_update_dto->tax_policy_id);
        item_tax_policy_record_update_dto->tax_policy_id = NULL;
    }
    if (item_tax_policy_record_update_dto->item_price_id) {
        free(item_tax_policy_record_update_dto->item_price_id);
        item_tax_policy_record_update_dto->item_price_id = NULL;
    }
    if (item_tax_policy_record_update_dto->item_id) {
        free(item_tax_policy_record_update_dto->item_id);
        item_tax_policy_record_update_dto->item_id = NULL;
    }
    free(item_tax_policy_record_update_dto);
}

cJSON *item_tax_policy_record_update_dto_convertToJSON(item_tax_policy_record_update_dto_t *item_tax_policy_record_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // item_tax_policy_record_update_dto->tax_policy_id
    if(item_tax_policy_record_update_dto->tax_policy_id) {
    if(cJSON_AddStringToObject(item, "taxPolicyId", item_tax_policy_record_update_dto->tax_policy_id) == NULL) {
    goto fail; //String
    }
    }


    // item_tax_policy_record_update_dto->item_price_id
    if(item_tax_policy_record_update_dto->item_price_id) {
    if(cJSON_AddStringToObject(item, "itemPriceId", item_tax_policy_record_update_dto->item_price_id) == NULL) {
    goto fail; //String
    }
    }


    // item_tax_policy_record_update_dto->item_id
    if(item_tax_policy_record_update_dto->item_id) {
    if(cJSON_AddStringToObject(item, "itemId", item_tax_policy_record_update_dto->item_id) == NULL) {
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

item_tax_policy_record_update_dto_t *item_tax_policy_record_update_dto_parseFromJSON(cJSON *item_tax_policy_record_update_dtoJSON){

    item_tax_policy_record_update_dto_t *item_tax_policy_record_update_dto_local_var = NULL;

    // item_tax_policy_record_update_dto->tax_policy_id
    cJSON *tax_policy_id = cJSON_GetObjectItemCaseSensitive(item_tax_policy_record_update_dtoJSON, "taxPolicyId");
    if (tax_policy_id) { 
    if(!cJSON_IsString(tax_policy_id) && !cJSON_IsNull(tax_policy_id))
    {
    goto end; //String
    }
    }

    // item_tax_policy_record_update_dto->item_price_id
    cJSON *item_price_id = cJSON_GetObjectItemCaseSensitive(item_tax_policy_record_update_dtoJSON, "itemPriceId");
    if (item_price_id) { 
    if(!cJSON_IsString(item_price_id) && !cJSON_IsNull(item_price_id))
    {
    goto end; //String
    }
    }

    // item_tax_policy_record_update_dto->item_id
    cJSON *item_id = cJSON_GetObjectItemCaseSensitive(item_tax_policy_record_update_dtoJSON, "itemId");
    if (item_id) { 
    if(!cJSON_IsString(item_id) && !cJSON_IsNull(item_id))
    {
    goto end; //String
    }
    }


    item_tax_policy_record_update_dto_local_var = item_tax_policy_record_update_dto_create (
        tax_policy_id && !cJSON_IsNull(tax_policy_id) ? strdup(tax_policy_id->valuestring) : NULL,
        item_price_id && !cJSON_IsNull(item_price_id) ? strdup(item_price_id->valuestring) : NULL,
        item_id && !cJSON_IsNull(item_id) ? strdup(item_id->valuestring) : NULL
        );

    return item_tax_policy_record_update_dto_local_var;
end:
    return NULL;

}
