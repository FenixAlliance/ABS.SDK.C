#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "workstation_dto.h"



workstation_dto_t *workstation_dto_create(
    char *id,
    char *timestamp,
    char *code,
    char *type,
    char *description,
    char *location_id,
    char *tenant_id
    ) {
    workstation_dto_t *workstation_dto_local_var = malloc(sizeof(workstation_dto_t));
    if (!workstation_dto_local_var) {
        return NULL;
    }
    workstation_dto_local_var->id = id;
    workstation_dto_local_var->timestamp = timestamp;
    workstation_dto_local_var->code = code;
    workstation_dto_local_var->type = type;
    workstation_dto_local_var->description = description;
    workstation_dto_local_var->location_id = location_id;
    workstation_dto_local_var->tenant_id = tenant_id;

    return workstation_dto_local_var;
}


void workstation_dto_free(workstation_dto_t *workstation_dto) {
    if(NULL == workstation_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (workstation_dto->id) {
        free(workstation_dto->id);
        workstation_dto->id = NULL;
    }
    if (workstation_dto->timestamp) {
        free(workstation_dto->timestamp);
        workstation_dto->timestamp = NULL;
    }
    if (workstation_dto->code) {
        free(workstation_dto->code);
        workstation_dto->code = NULL;
    }
    if (workstation_dto->type) {
        free(workstation_dto->type);
        workstation_dto->type = NULL;
    }
    if (workstation_dto->description) {
        free(workstation_dto->description);
        workstation_dto->description = NULL;
    }
    if (workstation_dto->location_id) {
        free(workstation_dto->location_id);
        workstation_dto->location_id = NULL;
    }
    if (workstation_dto->tenant_id) {
        free(workstation_dto->tenant_id);
        workstation_dto->tenant_id = NULL;
    }
    free(workstation_dto);
}

cJSON *workstation_dto_convertToJSON(workstation_dto_t *workstation_dto) {
    cJSON *item = cJSON_CreateObject();

    // workstation_dto->id
    if(workstation_dto->id) {
    if(cJSON_AddStringToObject(item, "id", workstation_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // workstation_dto->timestamp
    if(workstation_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", workstation_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // workstation_dto->code
    if(workstation_dto->code) {
    if(cJSON_AddStringToObject(item, "code", workstation_dto->code) == NULL) {
    goto fail; //String
    }
    }


    // workstation_dto->type
    if(workstation_dto->type) {
    if(cJSON_AddStringToObject(item, "type", workstation_dto->type) == NULL) {
    goto fail; //String
    }
    }


    // workstation_dto->description
    if(workstation_dto->description) {
    if(cJSON_AddStringToObject(item, "description", workstation_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // workstation_dto->location_id
    if(workstation_dto->location_id) {
    if(cJSON_AddStringToObject(item, "locationId", workstation_dto->location_id) == NULL) {
    goto fail; //String
    }
    }


    // workstation_dto->tenant_id
    if(workstation_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", workstation_dto->tenant_id) == NULL) {
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

workstation_dto_t *workstation_dto_parseFromJSON(cJSON *workstation_dtoJSON){

    workstation_dto_t *workstation_dto_local_var = NULL;

    // workstation_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(workstation_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // workstation_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(workstation_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // workstation_dto->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(workstation_dtoJSON, "code");
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // workstation_dto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(workstation_dtoJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // workstation_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(workstation_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // workstation_dto->location_id
    cJSON *location_id = cJSON_GetObjectItemCaseSensitive(workstation_dtoJSON, "locationId");
    if (location_id) { 
    if(!cJSON_IsString(location_id) && !cJSON_IsNull(location_id))
    {
    goto end; //String
    }
    }

    // workstation_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(workstation_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }


    workstation_dto_local_var = workstation_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        location_id && !cJSON_IsNull(location_id) ? strdup(location_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL
        );

    return workstation_dto_local_var;
end:
    return NULL;

}
