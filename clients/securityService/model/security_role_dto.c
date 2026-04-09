#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "security_role_dto.h"



security_role_dto_t *security_role_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *tenant_id,
    char *description,
    int is_system_role
    ) {
    security_role_dto_t *security_role_dto_local_var = malloc(sizeof(security_role_dto_t));
    if (!security_role_dto_local_var) {
        return NULL;
    }
    security_role_dto_local_var->id = id;
    security_role_dto_local_var->timestamp = timestamp;
    security_role_dto_local_var->name = name;
    security_role_dto_local_var->tenant_id = tenant_id;
    security_role_dto_local_var->description = description;
    security_role_dto_local_var->is_system_role = is_system_role;

    return security_role_dto_local_var;
}


void security_role_dto_free(security_role_dto_t *security_role_dto) {
    if(NULL == security_role_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (security_role_dto->id) {
        free(security_role_dto->id);
        security_role_dto->id = NULL;
    }
    if (security_role_dto->timestamp) {
        free(security_role_dto->timestamp);
        security_role_dto->timestamp = NULL;
    }
    if (security_role_dto->name) {
        free(security_role_dto->name);
        security_role_dto->name = NULL;
    }
    if (security_role_dto->tenant_id) {
        free(security_role_dto->tenant_id);
        security_role_dto->tenant_id = NULL;
    }
    if (security_role_dto->description) {
        free(security_role_dto->description);
        security_role_dto->description = NULL;
    }
    free(security_role_dto);
}

cJSON *security_role_dto_convertToJSON(security_role_dto_t *security_role_dto) {
    cJSON *item = cJSON_CreateObject();

    // security_role_dto->id
    if(security_role_dto->id) {
    if(cJSON_AddStringToObject(item, "id", security_role_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // security_role_dto->timestamp
    if(security_role_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", security_role_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // security_role_dto->name
    if(security_role_dto->name) {
    if(cJSON_AddStringToObject(item, "name", security_role_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // security_role_dto->tenant_id
    if(security_role_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", security_role_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // security_role_dto->description
    if(security_role_dto->description) {
    if(cJSON_AddStringToObject(item, "description", security_role_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // security_role_dto->is_system_role
    if(security_role_dto->is_system_role) {
    if(cJSON_AddBoolToObject(item, "isSystemRole", security_role_dto->is_system_role) == NULL) {
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

security_role_dto_t *security_role_dto_parseFromJSON(cJSON *security_role_dtoJSON){

    security_role_dto_t *security_role_dto_local_var = NULL;

    // security_role_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(security_role_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // security_role_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(security_role_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // security_role_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(security_role_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // security_role_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(security_role_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // security_role_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(security_role_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // security_role_dto->is_system_role
    cJSON *is_system_role = cJSON_GetObjectItemCaseSensitive(security_role_dtoJSON, "isSystemRole");
    if (is_system_role) { 
    if(!cJSON_IsBool(is_system_role))
    {
    goto end; //Bool
    }
    }


    security_role_dto_local_var = security_role_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        is_system_role ? is_system_role->valueint : 0
        );

    return security_role_dto_local_var;
end:
    return NULL;

}
