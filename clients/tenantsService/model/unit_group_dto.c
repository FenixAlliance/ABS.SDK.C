#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "unit_group_dto.h"



unit_group_dto_t *unit_group_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *tenant_id,
    char *enrollment_id,
    int unit_count
    ) {
    unit_group_dto_t *unit_group_dto_local_var = malloc(sizeof(unit_group_dto_t));
    if (!unit_group_dto_local_var) {
        return NULL;
    }
    unit_group_dto_local_var->id = id;
    unit_group_dto_local_var->timestamp = timestamp;
    unit_group_dto_local_var->name = name;
    unit_group_dto_local_var->description = description;
    unit_group_dto_local_var->tenant_id = tenant_id;
    unit_group_dto_local_var->enrollment_id = enrollment_id;
    unit_group_dto_local_var->unit_count = unit_count;

    return unit_group_dto_local_var;
}


void unit_group_dto_free(unit_group_dto_t *unit_group_dto) {
    if(NULL == unit_group_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (unit_group_dto->id) {
        free(unit_group_dto->id);
        unit_group_dto->id = NULL;
    }
    if (unit_group_dto->timestamp) {
        free(unit_group_dto->timestamp);
        unit_group_dto->timestamp = NULL;
    }
    if (unit_group_dto->name) {
        free(unit_group_dto->name);
        unit_group_dto->name = NULL;
    }
    if (unit_group_dto->description) {
        free(unit_group_dto->description);
        unit_group_dto->description = NULL;
    }
    if (unit_group_dto->tenant_id) {
        free(unit_group_dto->tenant_id);
        unit_group_dto->tenant_id = NULL;
    }
    if (unit_group_dto->enrollment_id) {
        free(unit_group_dto->enrollment_id);
        unit_group_dto->enrollment_id = NULL;
    }
    free(unit_group_dto);
}

cJSON *unit_group_dto_convertToJSON(unit_group_dto_t *unit_group_dto) {
    cJSON *item = cJSON_CreateObject();

    // unit_group_dto->id
    if(unit_group_dto->id) {
    if(cJSON_AddStringToObject(item, "id", unit_group_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // unit_group_dto->timestamp
    if(unit_group_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", unit_group_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // unit_group_dto->name
    if(unit_group_dto->name) {
    if(cJSON_AddStringToObject(item, "name", unit_group_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // unit_group_dto->description
    if(unit_group_dto->description) {
    if(cJSON_AddStringToObject(item, "description", unit_group_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // unit_group_dto->tenant_id
    if(unit_group_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", unit_group_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // unit_group_dto->enrollment_id
    if(unit_group_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", unit_group_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // unit_group_dto->unit_count
    if(unit_group_dto->unit_count) {
    if(cJSON_AddNumberToObject(item, "unitCount", unit_group_dto->unit_count) == NULL) {
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

unit_group_dto_t *unit_group_dto_parseFromJSON(cJSON *unit_group_dtoJSON){

    unit_group_dto_t *unit_group_dto_local_var = NULL;

    // unit_group_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(unit_group_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // unit_group_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(unit_group_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // unit_group_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(unit_group_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // unit_group_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(unit_group_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // unit_group_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(unit_group_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // unit_group_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(unit_group_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // unit_group_dto->unit_count
    cJSON *unit_count = cJSON_GetObjectItemCaseSensitive(unit_group_dtoJSON, "unitCount");
    if (unit_count) { 
    if(!cJSON_IsNumber(unit_count))
    {
    goto end; //Numeric
    }
    }


    unit_group_dto_local_var = unit_group_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        unit_count ? unit_count->valuedouble : 0
        );

    return unit_group_dto_local_var;
end:
    return NULL;

}
