#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "item_tax_policy_record_dto.h"



item_tax_policy_record_dto_t *item_tax_policy_record_dto_create(
    char *id,
    char *timestamp,
    char *tax_policy_id,
    char *item_price_id,
    char *item_id
    ) {
    item_tax_policy_record_dto_t *item_tax_policy_record_dto_local_var = malloc(sizeof(item_tax_policy_record_dto_t));
    if (!item_tax_policy_record_dto_local_var) {
        return NULL;
    }
    item_tax_policy_record_dto_local_var->id = id;
    item_tax_policy_record_dto_local_var->timestamp = timestamp;
    item_tax_policy_record_dto_local_var->tax_policy_id = tax_policy_id;
    item_tax_policy_record_dto_local_var->item_price_id = item_price_id;
    item_tax_policy_record_dto_local_var->item_id = item_id;

    return item_tax_policy_record_dto_local_var;
}


void item_tax_policy_record_dto_free(item_tax_policy_record_dto_t *item_tax_policy_record_dto) {
    if(NULL == item_tax_policy_record_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (item_tax_policy_record_dto->id) {
        free(item_tax_policy_record_dto->id);
        item_tax_policy_record_dto->id = NULL;
    }
    if (item_tax_policy_record_dto->timestamp) {
        free(item_tax_policy_record_dto->timestamp);
        item_tax_policy_record_dto->timestamp = NULL;
    }
    if (item_tax_policy_record_dto->tax_policy_id) {
        free(item_tax_policy_record_dto->tax_policy_id);
        item_tax_policy_record_dto->tax_policy_id = NULL;
    }
    if (item_tax_policy_record_dto->item_price_id) {
        free(item_tax_policy_record_dto->item_price_id);
        item_tax_policy_record_dto->item_price_id = NULL;
    }
    if (item_tax_policy_record_dto->item_id) {
        free(item_tax_policy_record_dto->item_id);
        item_tax_policy_record_dto->item_id = NULL;
    }
    free(item_tax_policy_record_dto);
}

cJSON *item_tax_policy_record_dto_convertToJSON(item_tax_policy_record_dto_t *item_tax_policy_record_dto) {
    cJSON *item = cJSON_CreateObject();

    // item_tax_policy_record_dto->id
    if(item_tax_policy_record_dto->id) {
    if(cJSON_AddStringToObject(item, "id", item_tax_policy_record_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // item_tax_policy_record_dto->timestamp
    if(item_tax_policy_record_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", item_tax_policy_record_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // item_tax_policy_record_dto->tax_policy_id
    if(item_tax_policy_record_dto->tax_policy_id) {
    if(cJSON_AddStringToObject(item, "taxPolicyId", item_tax_policy_record_dto->tax_policy_id) == NULL) {
    goto fail; //String
    }
    }


    // item_tax_policy_record_dto->item_price_id
    if(item_tax_policy_record_dto->item_price_id) {
    if(cJSON_AddStringToObject(item, "itemPriceId", item_tax_policy_record_dto->item_price_id) == NULL) {
    goto fail; //String
    }
    }


    // item_tax_policy_record_dto->item_id
    if(item_tax_policy_record_dto->item_id) {
    if(cJSON_AddStringToObject(item, "itemId", item_tax_policy_record_dto->item_id) == NULL) {
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

item_tax_policy_record_dto_t *item_tax_policy_record_dto_parseFromJSON(cJSON *item_tax_policy_record_dtoJSON){

    item_tax_policy_record_dto_t *item_tax_policy_record_dto_local_var = NULL;

    // item_tax_policy_record_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(item_tax_policy_record_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // item_tax_policy_record_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(item_tax_policy_record_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // item_tax_policy_record_dto->tax_policy_id
    cJSON *tax_policy_id = cJSON_GetObjectItemCaseSensitive(item_tax_policy_record_dtoJSON, "taxPolicyId");
    if (tax_policy_id) { 
    if(!cJSON_IsString(tax_policy_id) && !cJSON_IsNull(tax_policy_id))
    {
    goto end; //String
    }
    }

    // item_tax_policy_record_dto->item_price_id
    cJSON *item_price_id = cJSON_GetObjectItemCaseSensitive(item_tax_policy_record_dtoJSON, "itemPriceId");
    if (item_price_id) { 
    if(!cJSON_IsString(item_price_id) && !cJSON_IsNull(item_price_id))
    {
    goto end; //String
    }
    }

    // item_tax_policy_record_dto->item_id
    cJSON *item_id = cJSON_GetObjectItemCaseSensitive(item_tax_policy_record_dtoJSON, "itemId");
    if (item_id) { 
    if(!cJSON_IsString(item_id) && !cJSON_IsNull(item_id))
    {
    goto end; //String
    }
    }


    item_tax_policy_record_dto_local_var = item_tax_policy_record_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        tax_policy_id && !cJSON_IsNull(tax_policy_id) ? strdup(tax_policy_id->valuestring) : NULL,
        item_price_id && !cJSON_IsNull(item_price_id) ? strdup(item_price_id->valuestring) : NULL,
        item_id && !cJSON_IsNull(item_id) ? strdup(item_id->valuestring) : NULL
        );

    return item_tax_policy_record_dto_local_var;
end:
    return NULL;

}
