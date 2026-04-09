#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cost_centre_group_dto.h"



cost_centre_group_dto_t *cost_centre_group_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    int disabled,
    char *tenant_id,
    char *parent_cost_centres_group_id
    ) {
    cost_centre_group_dto_t *cost_centre_group_dto_local_var = malloc(sizeof(cost_centre_group_dto_t));
    if (!cost_centre_group_dto_local_var) {
        return NULL;
    }
    cost_centre_group_dto_local_var->id = id;
    cost_centre_group_dto_local_var->timestamp = timestamp;
    cost_centre_group_dto_local_var->name = name;
    cost_centre_group_dto_local_var->description = description;
    cost_centre_group_dto_local_var->disabled = disabled;
    cost_centre_group_dto_local_var->tenant_id = tenant_id;
    cost_centre_group_dto_local_var->parent_cost_centres_group_id = parent_cost_centres_group_id;

    return cost_centre_group_dto_local_var;
}


void cost_centre_group_dto_free(cost_centre_group_dto_t *cost_centre_group_dto) {
    if(NULL == cost_centre_group_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (cost_centre_group_dto->id) {
        free(cost_centre_group_dto->id);
        cost_centre_group_dto->id = NULL;
    }
    if (cost_centre_group_dto->timestamp) {
        free(cost_centre_group_dto->timestamp);
        cost_centre_group_dto->timestamp = NULL;
    }
    if (cost_centre_group_dto->name) {
        free(cost_centre_group_dto->name);
        cost_centre_group_dto->name = NULL;
    }
    if (cost_centre_group_dto->description) {
        free(cost_centre_group_dto->description);
        cost_centre_group_dto->description = NULL;
    }
    if (cost_centre_group_dto->tenant_id) {
        free(cost_centre_group_dto->tenant_id);
        cost_centre_group_dto->tenant_id = NULL;
    }
    if (cost_centre_group_dto->parent_cost_centres_group_id) {
        free(cost_centre_group_dto->parent_cost_centres_group_id);
        cost_centre_group_dto->parent_cost_centres_group_id = NULL;
    }
    free(cost_centre_group_dto);
}

cJSON *cost_centre_group_dto_convertToJSON(cost_centre_group_dto_t *cost_centre_group_dto) {
    cJSON *item = cJSON_CreateObject();

    // cost_centre_group_dto->id
    if(cost_centre_group_dto->id) {
    if(cJSON_AddStringToObject(item, "id", cost_centre_group_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // cost_centre_group_dto->timestamp
    if(cost_centre_group_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", cost_centre_group_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // cost_centre_group_dto->name
    if(cost_centre_group_dto->name) {
    if(cJSON_AddStringToObject(item, "name", cost_centre_group_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // cost_centre_group_dto->description
    if(cost_centre_group_dto->description) {
    if(cJSON_AddStringToObject(item, "description", cost_centre_group_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // cost_centre_group_dto->disabled
    if(cost_centre_group_dto->disabled) {
    if(cJSON_AddBoolToObject(item, "disabled", cost_centre_group_dto->disabled) == NULL) {
    goto fail; //Bool
    }
    }


    // cost_centre_group_dto->tenant_id
    if(cost_centre_group_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", cost_centre_group_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // cost_centre_group_dto->parent_cost_centres_group_id
    if(cost_centre_group_dto->parent_cost_centres_group_id) {
    if(cJSON_AddStringToObject(item, "parentCostCentresGroupId", cost_centre_group_dto->parent_cost_centres_group_id) == NULL) {
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

cost_centre_group_dto_t *cost_centre_group_dto_parseFromJSON(cJSON *cost_centre_group_dtoJSON){

    cost_centre_group_dto_t *cost_centre_group_dto_local_var = NULL;

    // cost_centre_group_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(cost_centre_group_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // cost_centre_group_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(cost_centre_group_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // cost_centre_group_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(cost_centre_group_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // cost_centre_group_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(cost_centre_group_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // cost_centre_group_dto->disabled
    cJSON *disabled = cJSON_GetObjectItemCaseSensitive(cost_centre_group_dtoJSON, "disabled");
    if (disabled) { 
    if(!cJSON_IsBool(disabled))
    {
    goto end; //Bool
    }
    }

    // cost_centre_group_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(cost_centre_group_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // cost_centre_group_dto->parent_cost_centres_group_id
    cJSON *parent_cost_centres_group_id = cJSON_GetObjectItemCaseSensitive(cost_centre_group_dtoJSON, "parentCostCentresGroupId");
    if (parent_cost_centres_group_id) { 
    if(!cJSON_IsString(parent_cost_centres_group_id) && !cJSON_IsNull(parent_cost_centres_group_id))
    {
    goto end; //String
    }
    }


    cost_centre_group_dto_local_var = cost_centre_group_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        disabled ? disabled->valueint : 0,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        parent_cost_centres_group_id && !cJSON_IsNull(parent_cost_centres_group_id) ? strdup(parent_cost_centres_group_id->valuestring) : NULL
        );

    return cost_centre_group_dto_local_var;
end:
    return NULL;

}
