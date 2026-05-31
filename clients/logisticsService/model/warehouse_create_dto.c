#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "warehouse_create_dto.h"



warehouse_create_dto_t *warehouse_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *address1,
    char *address2,
    char *address3,
    char *postal_code,
    char *phone,
    char *country_id,
    char *state_id,
    char *city_id,
    int is_group,
    char *shipwire_warehouse_id,
    char *parent_warehouse_id
    ) {
    warehouse_create_dto_t *warehouse_create_dto_local_var = malloc(sizeof(warehouse_create_dto_t));
    if (!warehouse_create_dto_local_var) {
        return NULL;
    }
    warehouse_create_dto_local_var->id = id;
    warehouse_create_dto_local_var->timestamp = timestamp;
    warehouse_create_dto_local_var->title = title;
    warehouse_create_dto_local_var->address1 = address1;
    warehouse_create_dto_local_var->address2 = address2;
    warehouse_create_dto_local_var->address3 = address3;
    warehouse_create_dto_local_var->postal_code = postal_code;
    warehouse_create_dto_local_var->phone = phone;
    warehouse_create_dto_local_var->country_id = country_id;
    warehouse_create_dto_local_var->state_id = state_id;
    warehouse_create_dto_local_var->city_id = city_id;
    warehouse_create_dto_local_var->is_group = is_group;
    warehouse_create_dto_local_var->shipwire_warehouse_id = shipwire_warehouse_id;
    warehouse_create_dto_local_var->parent_warehouse_id = parent_warehouse_id;

    return warehouse_create_dto_local_var;
}


void warehouse_create_dto_free(warehouse_create_dto_t *warehouse_create_dto) {
    if(NULL == warehouse_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (warehouse_create_dto->id) {
        free(warehouse_create_dto->id);
        warehouse_create_dto->id = NULL;
    }
    if (warehouse_create_dto->timestamp) {
        free(warehouse_create_dto->timestamp);
        warehouse_create_dto->timestamp = NULL;
    }
    if (warehouse_create_dto->title) {
        free(warehouse_create_dto->title);
        warehouse_create_dto->title = NULL;
    }
    if (warehouse_create_dto->address1) {
        free(warehouse_create_dto->address1);
        warehouse_create_dto->address1 = NULL;
    }
    if (warehouse_create_dto->address2) {
        free(warehouse_create_dto->address2);
        warehouse_create_dto->address2 = NULL;
    }
    if (warehouse_create_dto->address3) {
        free(warehouse_create_dto->address3);
        warehouse_create_dto->address3 = NULL;
    }
    if (warehouse_create_dto->postal_code) {
        free(warehouse_create_dto->postal_code);
        warehouse_create_dto->postal_code = NULL;
    }
    if (warehouse_create_dto->phone) {
        free(warehouse_create_dto->phone);
        warehouse_create_dto->phone = NULL;
    }
    if (warehouse_create_dto->country_id) {
        free(warehouse_create_dto->country_id);
        warehouse_create_dto->country_id = NULL;
    }
    if (warehouse_create_dto->state_id) {
        free(warehouse_create_dto->state_id);
        warehouse_create_dto->state_id = NULL;
    }
    if (warehouse_create_dto->city_id) {
        free(warehouse_create_dto->city_id);
        warehouse_create_dto->city_id = NULL;
    }
    if (warehouse_create_dto->shipwire_warehouse_id) {
        free(warehouse_create_dto->shipwire_warehouse_id);
        warehouse_create_dto->shipwire_warehouse_id = NULL;
    }
    if (warehouse_create_dto->parent_warehouse_id) {
        free(warehouse_create_dto->parent_warehouse_id);
        warehouse_create_dto->parent_warehouse_id = NULL;
    }
    free(warehouse_create_dto);
}

cJSON *warehouse_create_dto_convertToJSON(warehouse_create_dto_t *warehouse_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // warehouse_create_dto->id
    if(warehouse_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", warehouse_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // warehouse_create_dto->timestamp
    if(warehouse_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", warehouse_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // warehouse_create_dto->title
    if (!warehouse_create_dto->title) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "title", warehouse_create_dto->title) == NULL) {
    goto fail; //String
    }


    // warehouse_create_dto->address1
    if (!warehouse_create_dto->address1) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "address1", warehouse_create_dto->address1) == NULL) {
    goto fail; //String
    }


    // warehouse_create_dto->address2
    if(warehouse_create_dto->address2) {
    if(cJSON_AddStringToObject(item, "address2", warehouse_create_dto->address2) == NULL) {
    goto fail; //String
    }
    }


    // warehouse_create_dto->address3
    if(warehouse_create_dto->address3) {
    if(cJSON_AddStringToObject(item, "address3", warehouse_create_dto->address3) == NULL) {
    goto fail; //String
    }
    }


    // warehouse_create_dto->postal_code
    if(warehouse_create_dto->postal_code) {
    if(cJSON_AddStringToObject(item, "postalCode", warehouse_create_dto->postal_code) == NULL) {
    goto fail; //String
    }
    }


    // warehouse_create_dto->phone
    if(warehouse_create_dto->phone) {
    if(cJSON_AddStringToObject(item, "phone", warehouse_create_dto->phone) == NULL) {
    goto fail; //String
    }
    }


    // warehouse_create_dto->country_id
    if(warehouse_create_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryId", warehouse_create_dto->country_id) == NULL) {
    goto fail; //String
    }
    }


    // warehouse_create_dto->state_id
    if(warehouse_create_dto->state_id) {
    if(cJSON_AddStringToObject(item, "stateId", warehouse_create_dto->state_id) == NULL) {
    goto fail; //String
    }
    }


    // warehouse_create_dto->city_id
    if(warehouse_create_dto->city_id) {
    if(cJSON_AddStringToObject(item, "cityId", warehouse_create_dto->city_id) == NULL) {
    goto fail; //String
    }
    }


    // warehouse_create_dto->is_group
    if(warehouse_create_dto->is_group) {
    if(cJSON_AddBoolToObject(item, "isGroup", warehouse_create_dto->is_group) == NULL) {
    goto fail; //Bool
    }
    }


    // warehouse_create_dto->shipwire_warehouse_id
    if(warehouse_create_dto->shipwire_warehouse_id) {
    if(cJSON_AddStringToObject(item, "shipwireWarehouseId", warehouse_create_dto->shipwire_warehouse_id) == NULL) {
    goto fail; //String
    }
    }


    // warehouse_create_dto->parent_warehouse_id
    if(warehouse_create_dto->parent_warehouse_id) {
    if(cJSON_AddStringToObject(item, "parentWarehouseId", warehouse_create_dto->parent_warehouse_id) == NULL) {
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

warehouse_create_dto_t *warehouse_create_dto_parseFromJSON(cJSON *warehouse_create_dtoJSON){

    warehouse_create_dto_t *warehouse_create_dto_local_var = NULL;

    // warehouse_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(warehouse_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // warehouse_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(warehouse_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // warehouse_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(warehouse_create_dtoJSON, "title");
    if (!title) {
        goto end;
    }

    
    if(!cJSON_IsString(title))
    {
    goto end; //String
    }

    // warehouse_create_dto->address1
    cJSON *address1 = cJSON_GetObjectItemCaseSensitive(warehouse_create_dtoJSON, "address1");
    if (!address1) {
        goto end;
    }

    
    if(!cJSON_IsString(address1))
    {
    goto end; //String
    }

    // warehouse_create_dto->address2
    cJSON *address2 = cJSON_GetObjectItemCaseSensitive(warehouse_create_dtoJSON, "address2");
    if (address2) { 
    if(!cJSON_IsString(address2) && !cJSON_IsNull(address2))
    {
    goto end; //String
    }
    }

    // warehouse_create_dto->address3
    cJSON *address3 = cJSON_GetObjectItemCaseSensitive(warehouse_create_dtoJSON, "address3");
    if (address3) { 
    if(!cJSON_IsString(address3) && !cJSON_IsNull(address3))
    {
    goto end; //String
    }
    }

    // warehouse_create_dto->postal_code
    cJSON *postal_code = cJSON_GetObjectItemCaseSensitive(warehouse_create_dtoJSON, "postalCode");
    if (postal_code) { 
    if(!cJSON_IsString(postal_code) && !cJSON_IsNull(postal_code))
    {
    goto end; //String
    }
    }

    // warehouse_create_dto->phone
    cJSON *phone = cJSON_GetObjectItemCaseSensitive(warehouse_create_dtoJSON, "phone");
    if (phone) { 
    if(!cJSON_IsString(phone) && !cJSON_IsNull(phone))
    {
    goto end; //String
    }
    }

    // warehouse_create_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(warehouse_create_dtoJSON, "countryId");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }

    // warehouse_create_dto->state_id
    cJSON *state_id = cJSON_GetObjectItemCaseSensitive(warehouse_create_dtoJSON, "stateId");
    if (state_id) { 
    if(!cJSON_IsString(state_id) && !cJSON_IsNull(state_id))
    {
    goto end; //String
    }
    }

    // warehouse_create_dto->city_id
    cJSON *city_id = cJSON_GetObjectItemCaseSensitive(warehouse_create_dtoJSON, "cityId");
    if (city_id) { 
    if(!cJSON_IsString(city_id) && !cJSON_IsNull(city_id))
    {
    goto end; //String
    }
    }

    // warehouse_create_dto->is_group
    cJSON *is_group = cJSON_GetObjectItemCaseSensitive(warehouse_create_dtoJSON, "isGroup");
    if (is_group) { 
    if(!cJSON_IsBool(is_group))
    {
    goto end; //Bool
    }
    }

    // warehouse_create_dto->shipwire_warehouse_id
    cJSON *shipwire_warehouse_id = cJSON_GetObjectItemCaseSensitive(warehouse_create_dtoJSON, "shipwireWarehouseId");
    if (shipwire_warehouse_id) { 
    if(!cJSON_IsString(shipwire_warehouse_id) && !cJSON_IsNull(shipwire_warehouse_id))
    {
    goto end; //String
    }
    }

    // warehouse_create_dto->parent_warehouse_id
    cJSON *parent_warehouse_id = cJSON_GetObjectItemCaseSensitive(warehouse_create_dtoJSON, "parentWarehouseId");
    if (parent_warehouse_id) { 
    if(!cJSON_IsString(parent_warehouse_id) && !cJSON_IsNull(parent_warehouse_id))
    {
    goto end; //String
    }
    }


    warehouse_create_dto_local_var = warehouse_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(title->valuestring),
        strdup(address1->valuestring),
        address2 && !cJSON_IsNull(address2) ? strdup(address2->valuestring) : NULL,
        address3 && !cJSON_IsNull(address3) ? strdup(address3->valuestring) : NULL,
        postal_code && !cJSON_IsNull(postal_code) ? strdup(postal_code->valuestring) : NULL,
        phone && !cJSON_IsNull(phone) ? strdup(phone->valuestring) : NULL,
        country_id && !cJSON_IsNull(country_id) ? strdup(country_id->valuestring) : NULL,
        state_id && !cJSON_IsNull(state_id) ? strdup(state_id->valuestring) : NULL,
        city_id && !cJSON_IsNull(city_id) ? strdup(city_id->valuestring) : NULL,
        is_group ? is_group->valueint : 0,
        shipwire_warehouse_id && !cJSON_IsNull(shipwire_warehouse_id) ? strdup(shipwire_warehouse_id->valuestring) : NULL,
        parent_warehouse_id && !cJSON_IsNull(parent_warehouse_id) ? strdup(parent_warehouse_id->valuestring) : NULL
        );

    return warehouse_create_dto_local_var;
end:
    return NULL;

}
