#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "production_plan_dto.h"



production_plan_dto_t *production_plan_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *tenant_id
    ) {
    production_plan_dto_t *production_plan_dto_local_var = malloc(sizeof(production_plan_dto_t));
    if (!production_plan_dto_local_var) {
        return NULL;
    }
    production_plan_dto_local_var->id = id;
    production_plan_dto_local_var->timestamp = timestamp;
    production_plan_dto_local_var->title = title;
    production_plan_dto_local_var->description = description;
    production_plan_dto_local_var->tenant_id = tenant_id;

    return production_plan_dto_local_var;
}


void production_plan_dto_free(production_plan_dto_t *production_plan_dto) {
    if(NULL == production_plan_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (production_plan_dto->id) {
        free(production_plan_dto->id);
        production_plan_dto->id = NULL;
    }
    if (production_plan_dto->timestamp) {
        free(production_plan_dto->timestamp);
        production_plan_dto->timestamp = NULL;
    }
    if (production_plan_dto->title) {
        free(production_plan_dto->title);
        production_plan_dto->title = NULL;
    }
    if (production_plan_dto->description) {
        free(production_plan_dto->description);
        production_plan_dto->description = NULL;
    }
    if (production_plan_dto->tenant_id) {
        free(production_plan_dto->tenant_id);
        production_plan_dto->tenant_id = NULL;
    }
    free(production_plan_dto);
}

cJSON *production_plan_dto_convertToJSON(production_plan_dto_t *production_plan_dto) {
    cJSON *item = cJSON_CreateObject();

    // production_plan_dto->id
    if(production_plan_dto->id) {
    if(cJSON_AddStringToObject(item, "id", production_plan_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // production_plan_dto->timestamp
    if(production_plan_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", production_plan_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // production_plan_dto->title
    if(production_plan_dto->title) {
    if(cJSON_AddStringToObject(item, "title", production_plan_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // production_plan_dto->description
    if(production_plan_dto->description) {
    if(cJSON_AddStringToObject(item, "description", production_plan_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // production_plan_dto->tenant_id
    if(production_plan_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", production_plan_dto->tenant_id) == NULL) {
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

production_plan_dto_t *production_plan_dto_parseFromJSON(cJSON *production_plan_dtoJSON){

    production_plan_dto_t *production_plan_dto_local_var = NULL;

    // production_plan_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(production_plan_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // production_plan_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(production_plan_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // production_plan_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(production_plan_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // production_plan_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(production_plan_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // production_plan_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(production_plan_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }


    production_plan_dto_local_var = production_plan_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL
        );

    return production_plan_dto_local_var;
end:
    return NULL;

}
