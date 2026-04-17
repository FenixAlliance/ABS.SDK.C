#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "share_class_create_dto.h"



share_class_create_dto_t *share_class_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    int value,
    char *description,
    char *forex_rates,
    char *currency_id
    ) {
    share_class_create_dto_t *share_class_create_dto_local_var = malloc(sizeof(share_class_create_dto_t));
    if (!share_class_create_dto_local_var) {
        return NULL;
    }
    share_class_create_dto_local_var->id = id;
    share_class_create_dto_local_var->timestamp = timestamp;
    share_class_create_dto_local_var->name = name;
    share_class_create_dto_local_var->value = value;
    share_class_create_dto_local_var->description = description;
    share_class_create_dto_local_var->forex_rates = forex_rates;
    share_class_create_dto_local_var->currency_id = currency_id;

    return share_class_create_dto_local_var;
}


void share_class_create_dto_free(share_class_create_dto_t *share_class_create_dto) {
    if(NULL == share_class_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (share_class_create_dto->id) {
        free(share_class_create_dto->id);
        share_class_create_dto->id = NULL;
    }
    if (share_class_create_dto->timestamp) {
        free(share_class_create_dto->timestamp);
        share_class_create_dto->timestamp = NULL;
    }
    if (share_class_create_dto->name) {
        free(share_class_create_dto->name);
        share_class_create_dto->name = NULL;
    }
    if (share_class_create_dto->description) {
        free(share_class_create_dto->description);
        share_class_create_dto->description = NULL;
    }
    if (share_class_create_dto->forex_rates) {
        free(share_class_create_dto->forex_rates);
        share_class_create_dto->forex_rates = NULL;
    }
    if (share_class_create_dto->currency_id) {
        free(share_class_create_dto->currency_id);
        share_class_create_dto->currency_id = NULL;
    }
    free(share_class_create_dto);
}

cJSON *share_class_create_dto_convertToJSON(share_class_create_dto_t *share_class_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // share_class_create_dto->id
    if(share_class_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", share_class_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // share_class_create_dto->timestamp
    if(share_class_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", share_class_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // share_class_create_dto->name
    if(share_class_create_dto->name) {
    if(cJSON_AddStringToObject(item, "name", share_class_create_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // share_class_create_dto->value
    if(share_class_create_dto->value) {
    if(cJSON_AddBoolToObject(item, "value", share_class_create_dto->value) == NULL) {
    goto fail; //Bool
    }
    }


    // share_class_create_dto->description
    if(share_class_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", share_class_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // share_class_create_dto->forex_rates
    if(share_class_create_dto->forex_rates) {
    if(cJSON_AddStringToObject(item, "forexRates", share_class_create_dto->forex_rates) == NULL) {
    goto fail; //String
    }
    }


    // share_class_create_dto->currency_id
    if(share_class_create_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", share_class_create_dto->currency_id) == NULL) {
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

share_class_create_dto_t *share_class_create_dto_parseFromJSON(cJSON *share_class_create_dtoJSON){

    share_class_create_dto_t *share_class_create_dto_local_var = NULL;

    // share_class_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(share_class_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // share_class_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(share_class_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // share_class_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(share_class_create_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // share_class_create_dto->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(share_class_create_dtoJSON, "value");
    if (value) { 
    if(!cJSON_IsBool(value))
    {
    goto end; //Bool
    }
    }

    // share_class_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(share_class_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // share_class_create_dto->forex_rates
    cJSON *forex_rates = cJSON_GetObjectItemCaseSensitive(share_class_create_dtoJSON, "forexRates");
    if (forex_rates) { 
    if(!cJSON_IsString(forex_rates) && !cJSON_IsNull(forex_rates))
    {
    goto end; //String
    }
    }

    // share_class_create_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(share_class_create_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }


    share_class_create_dto_local_var = share_class_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        value ? value->valueint : 0,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        forex_rates && !cJSON_IsNull(forex_rates) ? strdup(forex_rates->valuestring) : NULL,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL
        );

    return share_class_create_dto_local_var;
end:
    return NULL;

}
