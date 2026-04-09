#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tenant_type_update_dto.h"



tenant_type_update_dto_t *tenant_type_update_dto_create(
    char *name,
    char *description
    ) {
    tenant_type_update_dto_t *tenant_type_update_dto_local_var = malloc(sizeof(tenant_type_update_dto_t));
    if (!tenant_type_update_dto_local_var) {
        return NULL;
    }
    tenant_type_update_dto_local_var->name = name;
    tenant_type_update_dto_local_var->description = description;

    return tenant_type_update_dto_local_var;
}


void tenant_type_update_dto_free(tenant_type_update_dto_t *tenant_type_update_dto) {
    if(NULL == tenant_type_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (tenant_type_update_dto->name) {
        free(tenant_type_update_dto->name);
        tenant_type_update_dto->name = NULL;
    }
    if (tenant_type_update_dto->description) {
        free(tenant_type_update_dto->description);
        tenant_type_update_dto->description = NULL;
    }
    free(tenant_type_update_dto);
}

cJSON *tenant_type_update_dto_convertToJSON(tenant_type_update_dto_t *tenant_type_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // tenant_type_update_dto->name
    if(tenant_type_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", tenant_type_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // tenant_type_update_dto->description
    if(tenant_type_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", tenant_type_update_dto->description) == NULL) {
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

tenant_type_update_dto_t *tenant_type_update_dto_parseFromJSON(cJSON *tenant_type_update_dtoJSON){

    tenant_type_update_dto_t *tenant_type_update_dto_local_var = NULL;

    // tenant_type_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(tenant_type_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // tenant_type_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(tenant_type_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    tenant_type_update_dto_local_var = tenant_type_update_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return tenant_type_update_dto_local_var;
end:
    return NULL;

}
