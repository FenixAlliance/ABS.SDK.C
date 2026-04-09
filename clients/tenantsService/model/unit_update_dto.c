#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "unit_update_dto.h"



unit_update_dto_t *unit_update_dto_create(
    char *name,
    double base_unit_amount,
    char *base_unit_id
    ) {
    unit_update_dto_t *unit_update_dto_local_var = malloc(sizeof(unit_update_dto_t));
    if (!unit_update_dto_local_var) {
        return NULL;
    }
    unit_update_dto_local_var->name = name;
    unit_update_dto_local_var->base_unit_amount = base_unit_amount;
    unit_update_dto_local_var->base_unit_id = base_unit_id;

    return unit_update_dto_local_var;
}


void unit_update_dto_free(unit_update_dto_t *unit_update_dto) {
    if(NULL == unit_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (unit_update_dto->name) {
        free(unit_update_dto->name);
        unit_update_dto->name = NULL;
    }
    if (unit_update_dto->base_unit_id) {
        free(unit_update_dto->base_unit_id);
        unit_update_dto->base_unit_id = NULL;
    }
    free(unit_update_dto);
}

cJSON *unit_update_dto_convertToJSON(unit_update_dto_t *unit_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // unit_update_dto->name
    if(unit_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", unit_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // unit_update_dto->base_unit_amount
    if(unit_update_dto->base_unit_amount) {
    if(cJSON_AddNumberToObject(item, "baseUnitAmount", unit_update_dto->base_unit_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // unit_update_dto->base_unit_id
    if(unit_update_dto->base_unit_id) {
    if(cJSON_AddStringToObject(item, "baseUnitId", unit_update_dto->base_unit_id) == NULL) {
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

unit_update_dto_t *unit_update_dto_parseFromJSON(cJSON *unit_update_dtoJSON){

    unit_update_dto_t *unit_update_dto_local_var = NULL;

    // unit_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(unit_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // unit_update_dto->base_unit_amount
    cJSON *base_unit_amount = cJSON_GetObjectItemCaseSensitive(unit_update_dtoJSON, "baseUnitAmount");
    if (base_unit_amount) { 
    if(!cJSON_IsNumber(base_unit_amount))
    {
    goto end; //Numeric
    }
    }

    // unit_update_dto->base_unit_id
    cJSON *base_unit_id = cJSON_GetObjectItemCaseSensitive(unit_update_dtoJSON, "baseUnitId");
    if (base_unit_id) { 
    if(!cJSON_IsString(base_unit_id) && !cJSON_IsNull(base_unit_id))
    {
    goto end; //String
    }
    }


    unit_update_dto_local_var = unit_update_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        base_unit_amount ? base_unit_amount->valuedouble : 0,
        base_unit_id && !cJSON_IsNull(base_unit_id) ? strdup(base_unit_id->valuestring) : NULL
        );

    return unit_update_dto_local_var;
end:
    return NULL;

}
