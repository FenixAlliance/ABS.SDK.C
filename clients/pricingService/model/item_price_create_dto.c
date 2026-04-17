#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "item_price_create_dto.h"



item_price_create_dto_t *item_price_create_dto_create(
    char *id,
    char *timestamp,
    char *item_id,
    char *unit_id,
    char *currency_id,
    char *price_list_id,
    char *unit_group_id,
    char *discount_list_id,
    char *rounding_policy_id,
    double price,
    double percent
    ) {
    item_price_create_dto_t *item_price_create_dto_local_var = malloc(sizeof(item_price_create_dto_t));
    if (!item_price_create_dto_local_var) {
        return NULL;
    }
    item_price_create_dto_local_var->id = id;
    item_price_create_dto_local_var->timestamp = timestamp;
    item_price_create_dto_local_var->item_id = item_id;
    item_price_create_dto_local_var->unit_id = unit_id;
    item_price_create_dto_local_var->currency_id = currency_id;
    item_price_create_dto_local_var->price_list_id = price_list_id;
    item_price_create_dto_local_var->unit_group_id = unit_group_id;
    item_price_create_dto_local_var->discount_list_id = discount_list_id;
    item_price_create_dto_local_var->rounding_policy_id = rounding_policy_id;
    item_price_create_dto_local_var->price = price;
    item_price_create_dto_local_var->percent = percent;

    return item_price_create_dto_local_var;
}


void item_price_create_dto_free(item_price_create_dto_t *item_price_create_dto) {
    if(NULL == item_price_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (item_price_create_dto->id) {
        free(item_price_create_dto->id);
        item_price_create_dto->id = NULL;
    }
    if (item_price_create_dto->timestamp) {
        free(item_price_create_dto->timestamp);
        item_price_create_dto->timestamp = NULL;
    }
    if (item_price_create_dto->item_id) {
        free(item_price_create_dto->item_id);
        item_price_create_dto->item_id = NULL;
    }
    if (item_price_create_dto->unit_id) {
        free(item_price_create_dto->unit_id);
        item_price_create_dto->unit_id = NULL;
    }
    if (item_price_create_dto->currency_id) {
        free(item_price_create_dto->currency_id);
        item_price_create_dto->currency_id = NULL;
    }
    if (item_price_create_dto->price_list_id) {
        free(item_price_create_dto->price_list_id);
        item_price_create_dto->price_list_id = NULL;
    }
    if (item_price_create_dto->unit_group_id) {
        free(item_price_create_dto->unit_group_id);
        item_price_create_dto->unit_group_id = NULL;
    }
    if (item_price_create_dto->discount_list_id) {
        free(item_price_create_dto->discount_list_id);
        item_price_create_dto->discount_list_id = NULL;
    }
    if (item_price_create_dto->rounding_policy_id) {
        free(item_price_create_dto->rounding_policy_id);
        item_price_create_dto->rounding_policy_id = NULL;
    }
    free(item_price_create_dto);
}

cJSON *item_price_create_dto_convertToJSON(item_price_create_dto_t *item_price_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // item_price_create_dto->id
    if(item_price_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", item_price_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // item_price_create_dto->timestamp
    if(item_price_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", item_price_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // item_price_create_dto->item_id
    if (!item_price_create_dto->item_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "itemId", item_price_create_dto->item_id) == NULL) {
    goto fail; //String
    }


    // item_price_create_dto->unit_id
    if(item_price_create_dto->unit_id) {
    if(cJSON_AddStringToObject(item, "unitId", item_price_create_dto->unit_id) == NULL) {
    goto fail; //String
    }
    }


    // item_price_create_dto->currency_id
    if(item_price_create_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", item_price_create_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // item_price_create_dto->price_list_id
    if(item_price_create_dto->price_list_id) {
    if(cJSON_AddStringToObject(item, "priceListId", item_price_create_dto->price_list_id) == NULL) {
    goto fail; //String
    }
    }


    // item_price_create_dto->unit_group_id
    if(item_price_create_dto->unit_group_id) {
    if(cJSON_AddStringToObject(item, "unitGroupId", item_price_create_dto->unit_group_id) == NULL) {
    goto fail; //String
    }
    }


    // item_price_create_dto->discount_list_id
    if(item_price_create_dto->discount_list_id) {
    if(cJSON_AddStringToObject(item, "discountListId", item_price_create_dto->discount_list_id) == NULL) {
    goto fail; //String
    }
    }


    // item_price_create_dto->rounding_policy_id
    if(item_price_create_dto->rounding_policy_id) {
    if(cJSON_AddStringToObject(item, "roundingPolicyId", item_price_create_dto->rounding_policy_id) == NULL) {
    goto fail; //String
    }
    }


    // item_price_create_dto->price
    if(item_price_create_dto->price) {
    if(cJSON_AddNumberToObject(item, "price", item_price_create_dto->price) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_price_create_dto->percent
    if(item_price_create_dto->percent) {
    if(cJSON_AddNumberToObject(item, "percent", item_price_create_dto->percent) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

item_price_create_dto_t *item_price_create_dto_parseFromJSON(cJSON *item_price_create_dtoJSON){

    item_price_create_dto_t *item_price_create_dto_local_var = NULL;

    // item_price_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(item_price_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // item_price_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(item_price_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // item_price_create_dto->item_id
    cJSON *item_id = cJSON_GetObjectItemCaseSensitive(item_price_create_dtoJSON, "itemId");
    if (!item_id) {
        goto end;
    }

    
    if(!cJSON_IsString(item_id))
    {
    goto end; //String
    }

    // item_price_create_dto->unit_id
    cJSON *unit_id = cJSON_GetObjectItemCaseSensitive(item_price_create_dtoJSON, "unitId");
    if (unit_id) { 
    if(!cJSON_IsString(unit_id) && !cJSON_IsNull(unit_id))
    {
    goto end; //String
    }
    }

    // item_price_create_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(item_price_create_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // item_price_create_dto->price_list_id
    cJSON *price_list_id = cJSON_GetObjectItemCaseSensitive(item_price_create_dtoJSON, "priceListId");
    if (price_list_id) { 
    if(!cJSON_IsString(price_list_id) && !cJSON_IsNull(price_list_id))
    {
    goto end; //String
    }
    }

    // item_price_create_dto->unit_group_id
    cJSON *unit_group_id = cJSON_GetObjectItemCaseSensitive(item_price_create_dtoJSON, "unitGroupId");
    if (unit_group_id) { 
    if(!cJSON_IsString(unit_group_id) && !cJSON_IsNull(unit_group_id))
    {
    goto end; //String
    }
    }

    // item_price_create_dto->discount_list_id
    cJSON *discount_list_id = cJSON_GetObjectItemCaseSensitive(item_price_create_dtoJSON, "discountListId");
    if (discount_list_id) { 
    if(!cJSON_IsString(discount_list_id) && !cJSON_IsNull(discount_list_id))
    {
    goto end; //String
    }
    }

    // item_price_create_dto->rounding_policy_id
    cJSON *rounding_policy_id = cJSON_GetObjectItemCaseSensitive(item_price_create_dtoJSON, "roundingPolicyId");
    if (rounding_policy_id) { 
    if(!cJSON_IsString(rounding_policy_id) && !cJSON_IsNull(rounding_policy_id))
    {
    goto end; //String
    }
    }

    // item_price_create_dto->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(item_price_create_dtoJSON, "price");
    if (price) { 
    if(!cJSON_IsNumber(price))
    {
    goto end; //Numeric
    }
    }

    // item_price_create_dto->percent
    cJSON *percent = cJSON_GetObjectItemCaseSensitive(item_price_create_dtoJSON, "percent");
    if (percent) { 
    if(!cJSON_IsNumber(percent))
    {
    goto end; //Numeric
    }
    }


    item_price_create_dto_local_var = item_price_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(item_id->valuestring),
        unit_id && !cJSON_IsNull(unit_id) ? strdup(unit_id->valuestring) : NULL,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        price_list_id && !cJSON_IsNull(price_list_id) ? strdup(price_list_id->valuestring) : NULL,
        unit_group_id && !cJSON_IsNull(unit_group_id) ? strdup(unit_group_id->valuestring) : NULL,
        discount_list_id && !cJSON_IsNull(discount_list_id) ? strdup(discount_list_id->valuestring) : NULL,
        rounding_policy_id && !cJSON_IsNull(rounding_policy_id) ? strdup(rounding_policy_id->valuestring) : NULL,
        price ? price->valuedouble : 0,
        percent ? percent->valuedouble : 0
        );

    return item_price_create_dto_local_var;
end:
    return NULL;

}
