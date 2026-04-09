#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "unit_dto.h"



unit_dto_t *unit_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *unit_group_id,
    double base_unit_amount,
    char *base_unit_id,
    char *tenant_id,
    char *enrollment_id
    ) {
    unit_dto_t *unit_dto_local_var = malloc(sizeof(unit_dto_t));
    if (!unit_dto_local_var) {
        return NULL;
    }
    unit_dto_local_var->id = id;
    unit_dto_local_var->timestamp = timestamp;
    unit_dto_local_var->name = name;
    unit_dto_local_var->unit_group_id = unit_group_id;
    unit_dto_local_var->base_unit_amount = base_unit_amount;
    unit_dto_local_var->base_unit_id = base_unit_id;
    unit_dto_local_var->tenant_id = tenant_id;
    unit_dto_local_var->enrollment_id = enrollment_id;

    return unit_dto_local_var;
}


void unit_dto_free(unit_dto_t *unit_dto) {
    if(NULL == unit_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (unit_dto->id) {
        free(unit_dto->id);
        unit_dto->id = NULL;
    }
    if (unit_dto->timestamp) {
        free(unit_dto->timestamp);
        unit_dto->timestamp = NULL;
    }
    if (unit_dto->name) {
        free(unit_dto->name);
        unit_dto->name = NULL;
    }
    if (unit_dto->unit_group_id) {
        free(unit_dto->unit_group_id);
        unit_dto->unit_group_id = NULL;
    }
    if (unit_dto->base_unit_id) {
        free(unit_dto->base_unit_id);
        unit_dto->base_unit_id = NULL;
    }
    if (unit_dto->tenant_id) {
        free(unit_dto->tenant_id);
        unit_dto->tenant_id = NULL;
    }
    if (unit_dto->enrollment_id) {
        free(unit_dto->enrollment_id);
        unit_dto->enrollment_id = NULL;
    }
    free(unit_dto);
}

cJSON *unit_dto_convertToJSON(unit_dto_t *unit_dto) {
    cJSON *item = cJSON_CreateObject();

    // unit_dto->id
    if(unit_dto->id) {
    if(cJSON_AddStringToObject(item, "id", unit_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // unit_dto->timestamp
    if(unit_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", unit_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // unit_dto->name
    if(unit_dto->name) {
    if(cJSON_AddStringToObject(item, "name", unit_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // unit_dto->unit_group_id
    if(unit_dto->unit_group_id) {
    if(cJSON_AddStringToObject(item, "unitGroupId", unit_dto->unit_group_id) == NULL) {
    goto fail; //String
    }
    }


    // unit_dto->base_unit_amount
    if(unit_dto->base_unit_amount) {
    if(cJSON_AddNumberToObject(item, "baseUnitAmount", unit_dto->base_unit_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // unit_dto->base_unit_id
    if(unit_dto->base_unit_id) {
    if(cJSON_AddStringToObject(item, "baseUnitId", unit_dto->base_unit_id) == NULL) {
    goto fail; //String
    }
    }


    // unit_dto->tenant_id
    if(unit_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", unit_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // unit_dto->enrollment_id
    if(unit_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", unit_dto->enrollment_id) == NULL) {
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

unit_dto_t *unit_dto_parseFromJSON(cJSON *unit_dtoJSON){

    unit_dto_t *unit_dto_local_var = NULL;

    // unit_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(unit_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // unit_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(unit_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // unit_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(unit_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // unit_dto->unit_group_id
    cJSON *unit_group_id = cJSON_GetObjectItemCaseSensitive(unit_dtoJSON, "unitGroupId");
    if (unit_group_id) { 
    if(!cJSON_IsString(unit_group_id) && !cJSON_IsNull(unit_group_id))
    {
    goto end; //String
    }
    }

    // unit_dto->base_unit_amount
    cJSON *base_unit_amount = cJSON_GetObjectItemCaseSensitive(unit_dtoJSON, "baseUnitAmount");
    if (base_unit_amount) { 
    if(!cJSON_IsNumber(base_unit_amount))
    {
    goto end; //Numeric
    }
    }

    // unit_dto->base_unit_id
    cJSON *base_unit_id = cJSON_GetObjectItemCaseSensitive(unit_dtoJSON, "baseUnitId");
    if (base_unit_id) { 
    if(!cJSON_IsString(base_unit_id) && !cJSON_IsNull(base_unit_id))
    {
    goto end; //String
    }
    }

    // unit_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(unit_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // unit_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(unit_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    unit_dto_local_var = unit_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        unit_group_id && !cJSON_IsNull(unit_group_id) ? strdup(unit_group_id->valuestring) : NULL,
        base_unit_amount ? base_unit_amount->valuedouble : 0,
        base_unit_id && !cJSON_IsNull(base_unit_id) ? strdup(base_unit_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return unit_dto_local_var;
end:
    return NULL;

}
