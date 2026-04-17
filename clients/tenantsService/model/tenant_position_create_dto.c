#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tenant_position_create_dto.h"



tenant_position_create_dto_t *tenant_position_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description
    ) {
    tenant_position_create_dto_t *tenant_position_create_dto_local_var = malloc(sizeof(tenant_position_create_dto_t));
    if (!tenant_position_create_dto_local_var) {
        return NULL;
    }
    tenant_position_create_dto_local_var->id = id;
    tenant_position_create_dto_local_var->timestamp = timestamp;
    tenant_position_create_dto_local_var->title = title;
    tenant_position_create_dto_local_var->description = description;

    return tenant_position_create_dto_local_var;
}


void tenant_position_create_dto_free(tenant_position_create_dto_t *tenant_position_create_dto) {
    if(NULL == tenant_position_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (tenant_position_create_dto->id) {
        free(tenant_position_create_dto->id);
        tenant_position_create_dto->id = NULL;
    }
    if (tenant_position_create_dto->timestamp) {
        free(tenant_position_create_dto->timestamp);
        tenant_position_create_dto->timestamp = NULL;
    }
    if (tenant_position_create_dto->title) {
        free(tenant_position_create_dto->title);
        tenant_position_create_dto->title = NULL;
    }
    if (tenant_position_create_dto->description) {
        free(tenant_position_create_dto->description);
        tenant_position_create_dto->description = NULL;
    }
    free(tenant_position_create_dto);
}

cJSON *tenant_position_create_dto_convertToJSON(tenant_position_create_dto_t *tenant_position_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // tenant_position_create_dto->id
    if(tenant_position_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", tenant_position_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_position_create_dto->timestamp
    if(tenant_position_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", tenant_position_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // tenant_position_create_dto->title
    if(tenant_position_create_dto->title) {
    if(cJSON_AddStringToObject(item, "title", tenant_position_create_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // tenant_position_create_dto->description
    if(tenant_position_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", tenant_position_create_dto->description) == NULL) {
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

tenant_position_create_dto_t *tenant_position_create_dto_parseFromJSON(cJSON *tenant_position_create_dtoJSON){

    tenant_position_create_dto_t *tenant_position_create_dto_local_var = NULL;

    // tenant_position_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(tenant_position_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // tenant_position_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(tenant_position_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // tenant_position_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(tenant_position_create_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // tenant_position_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(tenant_position_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    tenant_position_create_dto_local_var = tenant_position_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return tenant_position_create_dto_local_var;
end:
    return NULL;

}
