#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "budget_dto.h"



budget_dto_t *budget_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *tenant_id,
    char *fiscal_year_id
    ) {
    budget_dto_t *budget_dto_local_var = malloc(sizeof(budget_dto_t));
    if (!budget_dto_local_var) {
        return NULL;
    }
    budget_dto_local_var->id = id;
    budget_dto_local_var->timestamp = timestamp;
    budget_dto_local_var->name = name;
    budget_dto_local_var->tenant_id = tenant_id;
    budget_dto_local_var->fiscal_year_id = fiscal_year_id;

    return budget_dto_local_var;
}


void budget_dto_free(budget_dto_t *budget_dto) {
    if(NULL == budget_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (budget_dto->id) {
        free(budget_dto->id);
        budget_dto->id = NULL;
    }
    if (budget_dto->timestamp) {
        free(budget_dto->timestamp);
        budget_dto->timestamp = NULL;
    }
    if (budget_dto->name) {
        free(budget_dto->name);
        budget_dto->name = NULL;
    }
    if (budget_dto->tenant_id) {
        free(budget_dto->tenant_id);
        budget_dto->tenant_id = NULL;
    }
    if (budget_dto->fiscal_year_id) {
        free(budget_dto->fiscal_year_id);
        budget_dto->fiscal_year_id = NULL;
    }
    free(budget_dto);
}

cJSON *budget_dto_convertToJSON(budget_dto_t *budget_dto) {
    cJSON *item = cJSON_CreateObject();

    // budget_dto->id
    if(budget_dto->id) {
    if(cJSON_AddStringToObject(item, "id", budget_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // budget_dto->timestamp
    if(budget_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", budget_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // budget_dto->name
    if(budget_dto->name) {
    if(cJSON_AddStringToObject(item, "name", budget_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // budget_dto->tenant_id
    if(budget_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", budget_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // budget_dto->fiscal_year_id
    if(budget_dto->fiscal_year_id) {
    if(cJSON_AddStringToObject(item, "fiscalYearId", budget_dto->fiscal_year_id) == NULL) {
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

budget_dto_t *budget_dto_parseFromJSON(cJSON *budget_dtoJSON){

    budget_dto_t *budget_dto_local_var = NULL;

    // budget_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(budget_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // budget_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(budget_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // budget_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(budget_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // budget_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(budget_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // budget_dto->fiscal_year_id
    cJSON *fiscal_year_id = cJSON_GetObjectItemCaseSensitive(budget_dtoJSON, "fiscalYearId");
    if (fiscal_year_id) { 
    if(!cJSON_IsString(fiscal_year_id) && !cJSON_IsNull(fiscal_year_id))
    {
    goto end; //String
    }
    }


    budget_dto_local_var = budget_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        fiscal_year_id && !cJSON_IsNull(fiscal_year_id) ? strdup(fiscal_year_id->valuestring) : NULL
        );

    return budget_dto_local_var;
end:
    return NULL;

}
