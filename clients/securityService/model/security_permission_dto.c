#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "security_permission_dto.h"



security_permission_dto_t *security_permission_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *tenant_id,
    char *description,
    int is_system_permission
    ) {
    security_permission_dto_t *security_permission_dto_local_var = malloc(sizeof(security_permission_dto_t));
    if (!security_permission_dto_local_var) {
        return NULL;
    }
    security_permission_dto_local_var->id = id;
    security_permission_dto_local_var->timestamp = timestamp;
    security_permission_dto_local_var->name = name;
    security_permission_dto_local_var->tenant_id = tenant_id;
    security_permission_dto_local_var->description = description;
    security_permission_dto_local_var->is_system_permission = is_system_permission;

    return security_permission_dto_local_var;
}


void security_permission_dto_free(security_permission_dto_t *security_permission_dto) {
    if(NULL == security_permission_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (security_permission_dto->id) {
        free(security_permission_dto->id);
        security_permission_dto->id = NULL;
    }
    if (security_permission_dto->timestamp) {
        free(security_permission_dto->timestamp);
        security_permission_dto->timestamp = NULL;
    }
    if (security_permission_dto->name) {
        free(security_permission_dto->name);
        security_permission_dto->name = NULL;
    }
    if (security_permission_dto->tenant_id) {
        free(security_permission_dto->tenant_id);
        security_permission_dto->tenant_id = NULL;
    }
    if (security_permission_dto->description) {
        free(security_permission_dto->description);
        security_permission_dto->description = NULL;
    }
    free(security_permission_dto);
}

cJSON *security_permission_dto_convertToJSON(security_permission_dto_t *security_permission_dto) {
    cJSON *item = cJSON_CreateObject();

    // security_permission_dto->id
    if(security_permission_dto->id) {
    if(cJSON_AddStringToObject(item, "id", security_permission_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // security_permission_dto->timestamp
    if(security_permission_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", security_permission_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // security_permission_dto->name
    if(security_permission_dto->name) {
    if(cJSON_AddStringToObject(item, "name", security_permission_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // security_permission_dto->tenant_id
    if(security_permission_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", security_permission_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // security_permission_dto->description
    if(security_permission_dto->description) {
    if(cJSON_AddStringToObject(item, "description", security_permission_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // security_permission_dto->is_system_permission
    if(security_permission_dto->is_system_permission) {
    if(cJSON_AddBoolToObject(item, "isSystemPermission", security_permission_dto->is_system_permission) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

security_permission_dto_t *security_permission_dto_parseFromJSON(cJSON *security_permission_dtoJSON){

    security_permission_dto_t *security_permission_dto_local_var = NULL;

    // security_permission_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(security_permission_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // security_permission_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(security_permission_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // security_permission_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(security_permission_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // security_permission_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(security_permission_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // security_permission_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(security_permission_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // security_permission_dto->is_system_permission
    cJSON *is_system_permission = cJSON_GetObjectItemCaseSensitive(security_permission_dtoJSON, "isSystemPermission");
    if (is_system_permission) { 
    if(!cJSON_IsBool(is_system_permission))
    {
    goto end; //Bool
    }
    }


    security_permission_dto_local_var = security_permission_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        is_system_permission ? is_system_permission->valueint : 0
        );

    return security_permission_dto_local_var;
end:
    return NULL;

}
