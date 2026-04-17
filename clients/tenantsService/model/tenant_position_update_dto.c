#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tenant_position_update_dto.h"



tenant_position_update_dto_t *tenant_position_update_dto_create(
    char *title,
    char *description,
    char *type
    ) {
    tenant_position_update_dto_t *tenant_position_update_dto_local_var = malloc(sizeof(tenant_position_update_dto_t));
    if (!tenant_position_update_dto_local_var) {
        return NULL;
    }
    tenant_position_update_dto_local_var->title = title;
    tenant_position_update_dto_local_var->description = description;
    tenant_position_update_dto_local_var->type = type;

    return tenant_position_update_dto_local_var;
}


void tenant_position_update_dto_free(tenant_position_update_dto_t *tenant_position_update_dto) {
    if(NULL == tenant_position_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (tenant_position_update_dto->title) {
        free(tenant_position_update_dto->title);
        tenant_position_update_dto->title = NULL;
    }
    if (tenant_position_update_dto->description) {
        free(tenant_position_update_dto->description);
        tenant_position_update_dto->description = NULL;
    }
    if (tenant_position_update_dto->type) {
        free(tenant_position_update_dto->type);
        tenant_position_update_dto->type = NULL;
    }
    free(tenant_position_update_dto);
}

cJSON *tenant_position_update_dto_convertToJSON(tenant_position_update_dto_t *tenant_position_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // tenant_position_update_dto->title
    if(tenant_position_update_dto->title) {
    if(cJSON_AddStringToObject(item, "title", tenant_position_update_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // tenant_position_update_dto->description
    if(tenant_position_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", tenant_position_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // tenant_position_update_dto->type
    if(tenant_position_update_dto->type) {
    if(cJSON_AddStringToObject(item, "type", tenant_position_update_dto->type) == NULL) {
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

tenant_position_update_dto_t *tenant_position_update_dto_parseFromJSON(cJSON *tenant_position_update_dtoJSON){

    tenant_position_update_dto_t *tenant_position_update_dto_local_var = NULL;

    // tenant_position_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(tenant_position_update_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // tenant_position_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(tenant_position_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // tenant_position_update_dto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(tenant_position_update_dtoJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }


    tenant_position_update_dto_local_var = tenant_position_update_dto_create (
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL
        );

    return tenant_position_update_dto_local_var;
end:
    return NULL;

}
