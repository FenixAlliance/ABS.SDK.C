#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "share_issuance_create_dto.h"



share_issuance_create_dto_t *share_issuance_create_dto_create(
    char *id,
    char *timestamp,
    int unit_price,
    int quantity,
    char *currency_id
    ) {
    share_issuance_create_dto_t *share_issuance_create_dto_local_var = malloc(sizeof(share_issuance_create_dto_t));
    if (!share_issuance_create_dto_local_var) {
        return NULL;
    }
    share_issuance_create_dto_local_var->id = id;
    share_issuance_create_dto_local_var->timestamp = timestamp;
    share_issuance_create_dto_local_var->unit_price = unit_price;
    share_issuance_create_dto_local_var->quantity = quantity;
    share_issuance_create_dto_local_var->currency_id = currency_id;

    return share_issuance_create_dto_local_var;
}


void share_issuance_create_dto_free(share_issuance_create_dto_t *share_issuance_create_dto) {
    if(NULL == share_issuance_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (share_issuance_create_dto->id) {
        free(share_issuance_create_dto->id);
        share_issuance_create_dto->id = NULL;
    }
    if (share_issuance_create_dto->timestamp) {
        free(share_issuance_create_dto->timestamp);
        share_issuance_create_dto->timestamp = NULL;
    }
    if (share_issuance_create_dto->currency_id) {
        free(share_issuance_create_dto->currency_id);
        share_issuance_create_dto->currency_id = NULL;
    }
    free(share_issuance_create_dto);
}

cJSON *share_issuance_create_dto_convertToJSON(share_issuance_create_dto_t *share_issuance_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // share_issuance_create_dto->id
    if(share_issuance_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", share_issuance_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // share_issuance_create_dto->timestamp
    if(share_issuance_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", share_issuance_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // share_issuance_create_dto->unit_price
    if(share_issuance_create_dto->unit_price) {
    if(cJSON_AddNumberToObject(item, "unitPrice", share_issuance_create_dto->unit_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // share_issuance_create_dto->quantity
    if(share_issuance_create_dto->quantity) {
    if(cJSON_AddNumberToObject(item, "quantity", share_issuance_create_dto->quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // share_issuance_create_dto->currency_id
    if(share_issuance_create_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", share_issuance_create_dto->currency_id) == NULL) {
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

share_issuance_create_dto_t *share_issuance_create_dto_parseFromJSON(cJSON *share_issuance_create_dtoJSON){

    share_issuance_create_dto_t *share_issuance_create_dto_local_var = NULL;

    // share_issuance_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(share_issuance_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // share_issuance_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(share_issuance_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // share_issuance_create_dto->unit_price
    cJSON *unit_price = cJSON_GetObjectItemCaseSensitive(share_issuance_create_dtoJSON, "unitPrice");
    if (unit_price) { 
    if(!cJSON_IsNumber(unit_price))
    {
    goto end; //Numeric
    }
    }

    // share_issuance_create_dto->quantity
    cJSON *quantity = cJSON_GetObjectItemCaseSensitive(share_issuance_create_dtoJSON, "quantity");
    if (quantity) { 
    if(!cJSON_IsNumber(quantity))
    {
    goto end; //Numeric
    }
    }

    // share_issuance_create_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(share_issuance_create_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }


    share_issuance_create_dto_local_var = share_issuance_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        unit_price ? unit_price->valuedouble : 0,
        quantity ? quantity->valuedouble : 0,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL
        );

    return share_issuance_create_dto_local_var;
end:
    return NULL;

}
