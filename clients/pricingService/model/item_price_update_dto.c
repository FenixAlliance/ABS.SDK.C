#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "item_price_update_dto.h"



item_price_update_dto_t *item_price_update_dto_create(
    double price,
    char *item_id,
    char *unit_id,
    double percent,
    char *unit_group_id,
    char *currency_id,
    char *discount_list_id,
    char *rounding_policy_id
    ) {
    item_price_update_dto_t *item_price_update_dto_local_var = malloc(sizeof(item_price_update_dto_t));
    if (!item_price_update_dto_local_var) {
        return NULL;
    }
    item_price_update_dto_local_var->price = price;
    item_price_update_dto_local_var->item_id = item_id;
    item_price_update_dto_local_var->unit_id = unit_id;
    item_price_update_dto_local_var->percent = percent;
    item_price_update_dto_local_var->unit_group_id = unit_group_id;
    item_price_update_dto_local_var->currency_id = currency_id;
    item_price_update_dto_local_var->discount_list_id = discount_list_id;
    item_price_update_dto_local_var->rounding_policy_id = rounding_policy_id;

    return item_price_update_dto_local_var;
}


void item_price_update_dto_free(item_price_update_dto_t *item_price_update_dto) {
    if(NULL == item_price_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (item_price_update_dto->item_id) {
        free(item_price_update_dto->item_id);
        item_price_update_dto->item_id = NULL;
    }
    if (item_price_update_dto->unit_id) {
        free(item_price_update_dto->unit_id);
        item_price_update_dto->unit_id = NULL;
    }
    if (item_price_update_dto->unit_group_id) {
        free(item_price_update_dto->unit_group_id);
        item_price_update_dto->unit_group_id = NULL;
    }
    if (item_price_update_dto->currency_id) {
        free(item_price_update_dto->currency_id);
        item_price_update_dto->currency_id = NULL;
    }
    if (item_price_update_dto->discount_list_id) {
        free(item_price_update_dto->discount_list_id);
        item_price_update_dto->discount_list_id = NULL;
    }
    if (item_price_update_dto->rounding_policy_id) {
        free(item_price_update_dto->rounding_policy_id);
        item_price_update_dto->rounding_policy_id = NULL;
    }
    free(item_price_update_dto);
}

cJSON *item_price_update_dto_convertToJSON(item_price_update_dto_t *item_price_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // item_price_update_dto->price
    if(item_price_update_dto->price) {
    if(cJSON_AddNumberToObject(item, "price", item_price_update_dto->price) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_price_update_dto->item_id
    if(item_price_update_dto->item_id) {
    if(cJSON_AddStringToObject(item, "itemId", item_price_update_dto->item_id) == NULL) {
    goto fail; //String
    }
    }


    // item_price_update_dto->unit_id
    if(item_price_update_dto->unit_id) {
    if(cJSON_AddStringToObject(item, "unitId", item_price_update_dto->unit_id) == NULL) {
    goto fail; //String
    }
    }


    // item_price_update_dto->percent
    if(item_price_update_dto->percent) {
    if(cJSON_AddNumberToObject(item, "percent", item_price_update_dto->percent) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_price_update_dto->unit_group_id
    if(item_price_update_dto->unit_group_id) {
    if(cJSON_AddStringToObject(item, "unitGroupId", item_price_update_dto->unit_group_id) == NULL) {
    goto fail; //String
    }
    }


    // item_price_update_dto->currency_id
    if(item_price_update_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", item_price_update_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // item_price_update_dto->discount_list_id
    if(item_price_update_dto->discount_list_id) {
    if(cJSON_AddStringToObject(item, "discountListId", item_price_update_dto->discount_list_id) == NULL) {
    goto fail; //String
    }
    }


    // item_price_update_dto->rounding_policy_id
    if(item_price_update_dto->rounding_policy_id) {
    if(cJSON_AddStringToObject(item, "roundingPolicyId", item_price_update_dto->rounding_policy_id) == NULL) {
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

item_price_update_dto_t *item_price_update_dto_parseFromJSON(cJSON *item_price_update_dtoJSON){

    item_price_update_dto_t *item_price_update_dto_local_var = NULL;

    // item_price_update_dto->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(item_price_update_dtoJSON, "price");
    if (price) { 
    if(!cJSON_IsNumber(price))
    {
    goto end; //Numeric
    }
    }

    // item_price_update_dto->item_id
    cJSON *item_id = cJSON_GetObjectItemCaseSensitive(item_price_update_dtoJSON, "itemId");
    if (item_id) { 
    if(!cJSON_IsString(item_id) && !cJSON_IsNull(item_id))
    {
    goto end; //String
    }
    }

    // item_price_update_dto->unit_id
    cJSON *unit_id = cJSON_GetObjectItemCaseSensitive(item_price_update_dtoJSON, "unitId");
    if (unit_id) { 
    if(!cJSON_IsString(unit_id) && !cJSON_IsNull(unit_id))
    {
    goto end; //String
    }
    }

    // item_price_update_dto->percent
    cJSON *percent = cJSON_GetObjectItemCaseSensitive(item_price_update_dtoJSON, "percent");
    if (percent) { 
    if(!cJSON_IsNumber(percent))
    {
    goto end; //Numeric
    }
    }

    // item_price_update_dto->unit_group_id
    cJSON *unit_group_id = cJSON_GetObjectItemCaseSensitive(item_price_update_dtoJSON, "unitGroupId");
    if (unit_group_id) { 
    if(!cJSON_IsString(unit_group_id) && !cJSON_IsNull(unit_group_id))
    {
    goto end; //String
    }
    }

    // item_price_update_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(item_price_update_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // item_price_update_dto->discount_list_id
    cJSON *discount_list_id = cJSON_GetObjectItemCaseSensitive(item_price_update_dtoJSON, "discountListId");
    if (discount_list_id) { 
    if(!cJSON_IsString(discount_list_id) && !cJSON_IsNull(discount_list_id))
    {
    goto end; //String
    }
    }

    // item_price_update_dto->rounding_policy_id
    cJSON *rounding_policy_id = cJSON_GetObjectItemCaseSensitive(item_price_update_dtoJSON, "roundingPolicyId");
    if (rounding_policy_id) { 
    if(!cJSON_IsString(rounding_policy_id) && !cJSON_IsNull(rounding_policy_id))
    {
    goto end; //String
    }
    }


    item_price_update_dto_local_var = item_price_update_dto_create (
        price ? price->valuedouble : 0,
        item_id && !cJSON_IsNull(item_id) ? strdup(item_id->valuestring) : NULL,
        unit_id && !cJSON_IsNull(unit_id) ? strdup(unit_id->valuestring) : NULL,
        percent ? percent->valuedouble : 0,
        unit_group_id && !cJSON_IsNull(unit_group_id) ? strdup(unit_group_id->valuestring) : NULL,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        discount_list_id && !cJSON_IsNull(discount_list_id) ? strdup(discount_list_id->valuestring) : NULL,
        rounding_policy_id && !cJSON_IsNull(rounding_policy_id) ? strdup(rounding_policy_id->valuestring) : NULL
        );

    return item_price_update_dto_local_var;
end:
    return NULL;

}
