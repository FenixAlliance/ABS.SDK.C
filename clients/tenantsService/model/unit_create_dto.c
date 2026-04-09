#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "unit_create_dto.h"



unit_create_dto_t *unit_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    double base_unit_amount,
    char *base_unit_id
    ) {
    unit_create_dto_t *unit_create_dto_local_var = malloc(sizeof(unit_create_dto_t));
    if (!unit_create_dto_local_var) {
        return NULL;
    }
    unit_create_dto_local_var->id = id;
    unit_create_dto_local_var->timestamp = timestamp;
    unit_create_dto_local_var->name = name;
    unit_create_dto_local_var->base_unit_amount = base_unit_amount;
    unit_create_dto_local_var->base_unit_id = base_unit_id;

    return unit_create_dto_local_var;
}


void unit_create_dto_free(unit_create_dto_t *unit_create_dto) {
    if(NULL == unit_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (unit_create_dto->id) {
        free(unit_create_dto->id);
        unit_create_dto->id = NULL;
    }
    if (unit_create_dto->timestamp) {
        free(unit_create_dto->timestamp);
        unit_create_dto->timestamp = NULL;
    }
    if (unit_create_dto->name) {
        free(unit_create_dto->name);
        unit_create_dto->name = NULL;
    }
    if (unit_create_dto->base_unit_id) {
        free(unit_create_dto->base_unit_id);
        unit_create_dto->base_unit_id = NULL;
    }
    free(unit_create_dto);
}

cJSON *unit_create_dto_convertToJSON(unit_create_dto_t *unit_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // unit_create_dto->id
    if(unit_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", unit_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // unit_create_dto->timestamp
    if(unit_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", unit_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // unit_create_dto->name
    if (!unit_create_dto->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", unit_create_dto->name) == NULL) {
    goto fail; //String
    }


    // unit_create_dto->base_unit_amount
    if(unit_create_dto->base_unit_amount) {
    if(cJSON_AddNumberToObject(item, "baseUnitAmount", unit_create_dto->base_unit_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // unit_create_dto->base_unit_id
    if(unit_create_dto->base_unit_id) {
    if(cJSON_AddStringToObject(item, "baseUnitId", unit_create_dto->base_unit_id) == NULL) {
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

unit_create_dto_t *unit_create_dto_parseFromJSON(cJSON *unit_create_dtoJSON){

    unit_create_dto_t *unit_create_dto_local_var = NULL;

    // unit_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(unit_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // unit_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(unit_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // unit_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(unit_create_dtoJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // unit_create_dto->base_unit_amount
    cJSON *base_unit_amount = cJSON_GetObjectItemCaseSensitive(unit_create_dtoJSON, "baseUnitAmount");
    if (base_unit_amount) { 
    if(!cJSON_IsNumber(base_unit_amount))
    {
    goto end; //Numeric
    }
    }

    // unit_create_dto->base_unit_id
    cJSON *base_unit_id = cJSON_GetObjectItemCaseSensitive(unit_create_dtoJSON, "baseUnitId");
    if (base_unit_id) { 
    if(!cJSON_IsString(base_unit_id) && !cJSON_IsNull(base_unit_id))
    {
    goto end; //String
    }
    }


    unit_create_dto_local_var = unit_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(name->valuestring),
        base_unit_amount ? base_unit_amount->valuedouble : 0,
        base_unit_id && !cJSON_IsNull(base_unit_id) ? strdup(base_unit_id->valuestring) : NULL
        );

    return unit_create_dto_local_var;
end:
    return NULL;

}
