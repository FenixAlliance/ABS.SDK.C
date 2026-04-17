#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "price_list_create_dto.h"



price_list_create_dto_t *price_list_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *start_date,
    char *end_date,
    char *currency_id,
    char *unit_id,
    char *unit_group_id
    ) {
    price_list_create_dto_t *price_list_create_dto_local_var = malloc(sizeof(price_list_create_dto_t));
    if (!price_list_create_dto_local_var) {
        return NULL;
    }
    price_list_create_dto_local_var->id = id;
    price_list_create_dto_local_var->timestamp = timestamp;
    price_list_create_dto_local_var->name = name;
    price_list_create_dto_local_var->description = description;
    price_list_create_dto_local_var->start_date = start_date;
    price_list_create_dto_local_var->end_date = end_date;
    price_list_create_dto_local_var->currency_id = currency_id;
    price_list_create_dto_local_var->unit_id = unit_id;
    price_list_create_dto_local_var->unit_group_id = unit_group_id;

    return price_list_create_dto_local_var;
}


void price_list_create_dto_free(price_list_create_dto_t *price_list_create_dto) {
    if(NULL == price_list_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (price_list_create_dto->id) {
        free(price_list_create_dto->id);
        price_list_create_dto->id = NULL;
    }
    if (price_list_create_dto->timestamp) {
        free(price_list_create_dto->timestamp);
        price_list_create_dto->timestamp = NULL;
    }
    if (price_list_create_dto->name) {
        free(price_list_create_dto->name);
        price_list_create_dto->name = NULL;
    }
    if (price_list_create_dto->description) {
        free(price_list_create_dto->description);
        price_list_create_dto->description = NULL;
    }
    if (price_list_create_dto->start_date) {
        free(price_list_create_dto->start_date);
        price_list_create_dto->start_date = NULL;
    }
    if (price_list_create_dto->end_date) {
        free(price_list_create_dto->end_date);
        price_list_create_dto->end_date = NULL;
    }
    if (price_list_create_dto->currency_id) {
        free(price_list_create_dto->currency_id);
        price_list_create_dto->currency_id = NULL;
    }
    if (price_list_create_dto->unit_id) {
        free(price_list_create_dto->unit_id);
        price_list_create_dto->unit_id = NULL;
    }
    if (price_list_create_dto->unit_group_id) {
        free(price_list_create_dto->unit_group_id);
        price_list_create_dto->unit_group_id = NULL;
    }
    free(price_list_create_dto);
}

cJSON *price_list_create_dto_convertToJSON(price_list_create_dto_t *price_list_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // price_list_create_dto->id
    if(price_list_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", price_list_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // price_list_create_dto->timestamp
    if(price_list_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", price_list_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // price_list_create_dto->name
    if (!price_list_create_dto->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", price_list_create_dto->name) == NULL) {
    goto fail; //String
    }


    // price_list_create_dto->description
    if(price_list_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", price_list_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // price_list_create_dto->start_date
    if(price_list_create_dto->start_date) {
    if(cJSON_AddStringToObject(item, "startDate", price_list_create_dto->start_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // price_list_create_dto->end_date
    if(price_list_create_dto->end_date) {
    if(cJSON_AddStringToObject(item, "endDate", price_list_create_dto->end_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // price_list_create_dto->currency_id
    if(price_list_create_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", price_list_create_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // price_list_create_dto->unit_id
    if(price_list_create_dto->unit_id) {
    if(cJSON_AddStringToObject(item, "unitId", price_list_create_dto->unit_id) == NULL) {
    goto fail; //String
    }
    }


    // price_list_create_dto->unit_group_id
    if(price_list_create_dto->unit_group_id) {
    if(cJSON_AddStringToObject(item, "unitGroupId", price_list_create_dto->unit_group_id) == NULL) {
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

price_list_create_dto_t *price_list_create_dto_parseFromJSON(cJSON *price_list_create_dtoJSON){

    price_list_create_dto_t *price_list_create_dto_local_var = NULL;

    // price_list_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(price_list_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // price_list_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(price_list_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // price_list_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(price_list_create_dtoJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // price_list_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(price_list_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // price_list_create_dto->start_date
    cJSON *start_date = cJSON_GetObjectItemCaseSensitive(price_list_create_dtoJSON, "startDate");
    if (start_date) { 
    if(!cJSON_IsString(start_date) && !cJSON_IsNull(start_date))
    {
    goto end; //DateTime
    }
    }

    // price_list_create_dto->end_date
    cJSON *end_date = cJSON_GetObjectItemCaseSensitive(price_list_create_dtoJSON, "endDate");
    if (end_date) { 
    if(!cJSON_IsString(end_date) && !cJSON_IsNull(end_date))
    {
    goto end; //DateTime
    }
    }

    // price_list_create_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(price_list_create_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // price_list_create_dto->unit_id
    cJSON *unit_id = cJSON_GetObjectItemCaseSensitive(price_list_create_dtoJSON, "unitId");
    if (unit_id) { 
    if(!cJSON_IsString(unit_id) && !cJSON_IsNull(unit_id))
    {
    goto end; //String
    }
    }

    // price_list_create_dto->unit_group_id
    cJSON *unit_group_id = cJSON_GetObjectItemCaseSensitive(price_list_create_dtoJSON, "unitGroupId");
    if (unit_group_id) { 
    if(!cJSON_IsString(unit_group_id) && !cJSON_IsNull(unit_group_id))
    {
    goto end; //String
    }
    }


    price_list_create_dto_local_var = price_list_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(name->valuestring),
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        start_date && !cJSON_IsNull(start_date) ? strdup(start_date->valuestring) : NULL,
        end_date && !cJSON_IsNull(end_date) ? strdup(end_date->valuestring) : NULL,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        unit_id && !cJSON_IsNull(unit_id) ? strdup(unit_id->valuestring) : NULL,
        unit_group_id && !cJSON_IsNull(unit_group_id) ? strdup(unit_group_id->valuestring) : NULL
        );

    return price_list_create_dto_local_var;
end:
    return NULL;

}
