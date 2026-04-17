#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cost_centre_budget_create_dto.h"



cost_centre_budget_create_dto_t *cost_centre_budget_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *fiscal_year_id,
    char *cost_centre_id
    ) {
    cost_centre_budget_create_dto_t *cost_centre_budget_create_dto_local_var = malloc(sizeof(cost_centre_budget_create_dto_t));
    if (!cost_centre_budget_create_dto_local_var) {
        return NULL;
    }
    cost_centre_budget_create_dto_local_var->id = id;
    cost_centre_budget_create_dto_local_var->timestamp = timestamp;
    cost_centre_budget_create_dto_local_var->name = name;
    cost_centre_budget_create_dto_local_var->fiscal_year_id = fiscal_year_id;
    cost_centre_budget_create_dto_local_var->cost_centre_id = cost_centre_id;

    return cost_centre_budget_create_dto_local_var;
}


void cost_centre_budget_create_dto_free(cost_centre_budget_create_dto_t *cost_centre_budget_create_dto) {
    if(NULL == cost_centre_budget_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (cost_centre_budget_create_dto->id) {
        free(cost_centre_budget_create_dto->id);
        cost_centre_budget_create_dto->id = NULL;
    }
    if (cost_centre_budget_create_dto->timestamp) {
        free(cost_centre_budget_create_dto->timestamp);
        cost_centre_budget_create_dto->timestamp = NULL;
    }
    if (cost_centre_budget_create_dto->name) {
        free(cost_centre_budget_create_dto->name);
        cost_centre_budget_create_dto->name = NULL;
    }
    if (cost_centre_budget_create_dto->fiscal_year_id) {
        free(cost_centre_budget_create_dto->fiscal_year_id);
        cost_centre_budget_create_dto->fiscal_year_id = NULL;
    }
    if (cost_centre_budget_create_dto->cost_centre_id) {
        free(cost_centre_budget_create_dto->cost_centre_id);
        cost_centre_budget_create_dto->cost_centre_id = NULL;
    }
    free(cost_centre_budget_create_dto);
}

cJSON *cost_centre_budget_create_dto_convertToJSON(cost_centre_budget_create_dto_t *cost_centre_budget_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // cost_centre_budget_create_dto->id
    if(cost_centre_budget_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", cost_centre_budget_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // cost_centre_budget_create_dto->timestamp
    if(cost_centre_budget_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", cost_centre_budget_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // cost_centre_budget_create_dto->name
    if(cost_centre_budget_create_dto->name) {
    if(cJSON_AddStringToObject(item, "name", cost_centre_budget_create_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // cost_centre_budget_create_dto->fiscal_year_id
    if(cost_centre_budget_create_dto->fiscal_year_id) {
    if(cJSON_AddStringToObject(item, "fiscalYearId", cost_centre_budget_create_dto->fiscal_year_id) == NULL) {
    goto fail; //String
    }
    }


    // cost_centre_budget_create_dto->cost_centre_id
    if(cost_centre_budget_create_dto->cost_centre_id) {
    if(cJSON_AddStringToObject(item, "costCentreId", cost_centre_budget_create_dto->cost_centre_id) == NULL) {
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

cost_centre_budget_create_dto_t *cost_centre_budget_create_dto_parseFromJSON(cJSON *cost_centre_budget_create_dtoJSON){

    cost_centre_budget_create_dto_t *cost_centre_budget_create_dto_local_var = NULL;

    // cost_centre_budget_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(cost_centre_budget_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // cost_centre_budget_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(cost_centre_budget_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // cost_centre_budget_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(cost_centre_budget_create_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // cost_centre_budget_create_dto->fiscal_year_id
    cJSON *fiscal_year_id = cJSON_GetObjectItemCaseSensitive(cost_centre_budget_create_dtoJSON, "fiscalYearId");
    if (fiscal_year_id) { 
    if(!cJSON_IsString(fiscal_year_id) && !cJSON_IsNull(fiscal_year_id))
    {
    goto end; //String
    }
    }

    // cost_centre_budget_create_dto->cost_centre_id
    cJSON *cost_centre_id = cJSON_GetObjectItemCaseSensitive(cost_centre_budget_create_dtoJSON, "costCentreId");
    if (cost_centre_id) { 
    if(!cJSON_IsString(cost_centre_id) && !cJSON_IsNull(cost_centre_id))
    {
    goto end; //String
    }
    }


    cost_centre_budget_create_dto_local_var = cost_centre_budget_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        fiscal_year_id && !cJSON_IsNull(fiscal_year_id) ? strdup(fiscal_year_id->valuestring) : NULL,
        cost_centre_id && !cJSON_IsNull(cost_centre_id) ? strdup(cost_centre_id->valuestring) : NULL
        );

    return cost_centre_budget_create_dto_local_var;
end:
    return NULL;

}
