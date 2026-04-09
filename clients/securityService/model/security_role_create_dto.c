#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "security_role_create_dto.h"



security_role_create_dto_t *security_role_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *tenant_id,
    char *description
    ) {
    security_role_create_dto_t *security_role_create_dto_local_var = malloc(sizeof(security_role_create_dto_t));
    if (!security_role_create_dto_local_var) {
        return NULL;
    }
    security_role_create_dto_local_var->id = id;
    security_role_create_dto_local_var->timestamp = timestamp;
    security_role_create_dto_local_var->name = name;
    security_role_create_dto_local_var->tenant_id = tenant_id;
    security_role_create_dto_local_var->description = description;

    return security_role_create_dto_local_var;
}


void security_role_create_dto_free(security_role_create_dto_t *security_role_create_dto) {
    if(NULL == security_role_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (security_role_create_dto->id) {
        free(security_role_create_dto->id);
        security_role_create_dto->id = NULL;
    }
    if (security_role_create_dto->timestamp) {
        free(security_role_create_dto->timestamp);
        security_role_create_dto->timestamp = NULL;
    }
    if (security_role_create_dto->name) {
        free(security_role_create_dto->name);
        security_role_create_dto->name = NULL;
    }
    if (security_role_create_dto->tenant_id) {
        free(security_role_create_dto->tenant_id);
        security_role_create_dto->tenant_id = NULL;
    }
    if (security_role_create_dto->description) {
        free(security_role_create_dto->description);
        security_role_create_dto->description = NULL;
    }
    free(security_role_create_dto);
}

cJSON *security_role_create_dto_convertToJSON(security_role_create_dto_t *security_role_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // security_role_create_dto->id
    if(security_role_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", security_role_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // security_role_create_dto->timestamp
    if(security_role_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", security_role_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // security_role_create_dto->name
    if (!security_role_create_dto->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", security_role_create_dto->name) == NULL) {
    goto fail; //String
    }


    // security_role_create_dto->tenant_id
    if (!security_role_create_dto->tenant_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tenantId", security_role_create_dto->tenant_id) == NULL) {
    goto fail; //String
    }


    // security_role_create_dto->description
    if(security_role_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", security_role_create_dto->description) == NULL) {
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

security_role_create_dto_t *security_role_create_dto_parseFromJSON(cJSON *security_role_create_dtoJSON){

    security_role_create_dto_t *security_role_create_dto_local_var = NULL;

    // security_role_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(security_role_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // security_role_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(security_role_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // security_role_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(security_role_create_dtoJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // security_role_create_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(security_role_create_dtoJSON, "tenantId");
    if (!tenant_id) {
        goto end;
    }

    
    if(!cJSON_IsString(tenant_id))
    {
    goto end; //String
    }

    // security_role_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(security_role_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    security_role_create_dto_local_var = security_role_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(name->valuestring),
        strdup(tenant_id->valuestring),
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return security_role_create_dto_local_var;
end:
    return NULL;

}
