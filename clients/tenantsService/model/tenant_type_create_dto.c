#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tenant_type_create_dto.h"



tenant_type_create_dto_t *tenant_type_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description
    ) {
    tenant_type_create_dto_t *tenant_type_create_dto_local_var = malloc(sizeof(tenant_type_create_dto_t));
    if (!tenant_type_create_dto_local_var) {
        return NULL;
    }
    tenant_type_create_dto_local_var->id = id;
    tenant_type_create_dto_local_var->timestamp = timestamp;
    tenant_type_create_dto_local_var->name = name;
    tenant_type_create_dto_local_var->description = description;

    return tenant_type_create_dto_local_var;
}


void tenant_type_create_dto_free(tenant_type_create_dto_t *tenant_type_create_dto) {
    if(NULL == tenant_type_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (tenant_type_create_dto->id) {
        free(tenant_type_create_dto->id);
        tenant_type_create_dto->id = NULL;
    }
    if (tenant_type_create_dto->timestamp) {
        free(tenant_type_create_dto->timestamp);
        tenant_type_create_dto->timestamp = NULL;
    }
    if (tenant_type_create_dto->name) {
        free(tenant_type_create_dto->name);
        tenant_type_create_dto->name = NULL;
    }
    if (tenant_type_create_dto->description) {
        free(tenant_type_create_dto->description);
        tenant_type_create_dto->description = NULL;
    }
    free(tenant_type_create_dto);
}

cJSON *tenant_type_create_dto_convertToJSON(tenant_type_create_dto_t *tenant_type_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // tenant_type_create_dto->id
    if(tenant_type_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", tenant_type_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_type_create_dto->timestamp
    if(tenant_type_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", tenant_type_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // tenant_type_create_dto->name
    if(tenant_type_create_dto->name) {
    if(cJSON_AddStringToObject(item, "name", tenant_type_create_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // tenant_type_create_dto->description
    if(tenant_type_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", tenant_type_create_dto->description) == NULL) {
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

tenant_type_create_dto_t *tenant_type_create_dto_parseFromJSON(cJSON *tenant_type_create_dtoJSON){

    tenant_type_create_dto_t *tenant_type_create_dto_local_var = NULL;

    // tenant_type_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(tenant_type_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // tenant_type_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(tenant_type_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // tenant_type_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(tenant_type_create_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // tenant_type_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(tenant_type_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    tenant_type_create_dto_local_var = tenant_type_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return tenant_type_create_dto_local_var;
end:
    return NULL;

}
