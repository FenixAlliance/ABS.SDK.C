#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "business_relationship_dto.h"



business_relationship_dto_t *business_relationship_dto_create(
    char *id,
    char *timestamp,
    char *parent_tenant_id,
    char *child_tenant_id,
    double ownership_percentage
    ) {
    business_relationship_dto_t *business_relationship_dto_local_var = malloc(sizeof(business_relationship_dto_t));
    if (!business_relationship_dto_local_var) {
        return NULL;
    }
    business_relationship_dto_local_var->id = id;
    business_relationship_dto_local_var->timestamp = timestamp;
    business_relationship_dto_local_var->parent_tenant_id = parent_tenant_id;
    business_relationship_dto_local_var->child_tenant_id = child_tenant_id;
    business_relationship_dto_local_var->ownership_percentage = ownership_percentage;

    return business_relationship_dto_local_var;
}


void business_relationship_dto_free(business_relationship_dto_t *business_relationship_dto) {
    if(NULL == business_relationship_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (business_relationship_dto->id) {
        free(business_relationship_dto->id);
        business_relationship_dto->id = NULL;
    }
    if (business_relationship_dto->timestamp) {
        free(business_relationship_dto->timestamp);
        business_relationship_dto->timestamp = NULL;
    }
    if (business_relationship_dto->parent_tenant_id) {
        free(business_relationship_dto->parent_tenant_id);
        business_relationship_dto->parent_tenant_id = NULL;
    }
    if (business_relationship_dto->child_tenant_id) {
        free(business_relationship_dto->child_tenant_id);
        business_relationship_dto->child_tenant_id = NULL;
    }
    free(business_relationship_dto);
}

cJSON *business_relationship_dto_convertToJSON(business_relationship_dto_t *business_relationship_dto) {
    cJSON *item = cJSON_CreateObject();

    // business_relationship_dto->id
    if(business_relationship_dto->id) {
    if(cJSON_AddStringToObject(item, "id", business_relationship_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // business_relationship_dto->timestamp
    if(business_relationship_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", business_relationship_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // business_relationship_dto->parent_tenant_id
    if(business_relationship_dto->parent_tenant_id) {
    if(cJSON_AddStringToObject(item, "parentTenantId", business_relationship_dto->parent_tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // business_relationship_dto->child_tenant_id
    if(business_relationship_dto->child_tenant_id) {
    if(cJSON_AddStringToObject(item, "childTenantId", business_relationship_dto->child_tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // business_relationship_dto->ownership_percentage
    if(business_relationship_dto->ownership_percentage) {
    if(cJSON_AddNumberToObject(item, "ownershipPercentage", business_relationship_dto->ownership_percentage) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

business_relationship_dto_t *business_relationship_dto_parseFromJSON(cJSON *business_relationship_dtoJSON){

    business_relationship_dto_t *business_relationship_dto_local_var = NULL;

    // business_relationship_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(business_relationship_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // business_relationship_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(business_relationship_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // business_relationship_dto->parent_tenant_id
    cJSON *parent_tenant_id = cJSON_GetObjectItemCaseSensitive(business_relationship_dtoJSON, "parentTenantId");
    if (parent_tenant_id) { 
    if(!cJSON_IsString(parent_tenant_id) && !cJSON_IsNull(parent_tenant_id))
    {
    goto end; //String
    }
    }

    // business_relationship_dto->child_tenant_id
    cJSON *child_tenant_id = cJSON_GetObjectItemCaseSensitive(business_relationship_dtoJSON, "childTenantId");
    if (child_tenant_id) { 
    if(!cJSON_IsString(child_tenant_id) && !cJSON_IsNull(child_tenant_id))
    {
    goto end; //String
    }
    }

    // business_relationship_dto->ownership_percentage
    cJSON *ownership_percentage = cJSON_GetObjectItemCaseSensitive(business_relationship_dtoJSON, "ownershipPercentage");
    if (ownership_percentage) { 
    if(!cJSON_IsNumber(ownership_percentage))
    {
    goto end; //Numeric
    }
    }


    business_relationship_dto_local_var = business_relationship_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        parent_tenant_id && !cJSON_IsNull(parent_tenant_id) ? strdup(parent_tenant_id->valuestring) : NULL,
        child_tenant_id && !cJSON_IsNull(child_tenant_id) ? strdup(child_tenant_id->valuestring) : NULL,
        ownership_percentage ? ownership_percentage->valuedouble : 0
        );

    return business_relationship_dto_local_var;
end:
    return NULL;

}
