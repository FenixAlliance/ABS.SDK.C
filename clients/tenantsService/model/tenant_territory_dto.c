#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tenant_territory_dto.h"



tenant_territory_dto_t *tenant_territory_dto_create(
    char *id,
    char *timestamp,
    char *business_id,
    char *business_profile_record_id,
    char *name,
    char *description,
    char *parent_territory_id
    ) {
    tenant_territory_dto_t *tenant_territory_dto_local_var = malloc(sizeof(tenant_territory_dto_t));
    if (!tenant_territory_dto_local_var) {
        return NULL;
    }
    tenant_territory_dto_local_var->id = id;
    tenant_territory_dto_local_var->timestamp = timestamp;
    tenant_territory_dto_local_var->business_id = business_id;
    tenant_territory_dto_local_var->business_profile_record_id = business_profile_record_id;
    tenant_territory_dto_local_var->name = name;
    tenant_territory_dto_local_var->description = description;
    tenant_territory_dto_local_var->parent_territory_id = parent_territory_id;

    return tenant_territory_dto_local_var;
}


void tenant_territory_dto_free(tenant_territory_dto_t *tenant_territory_dto) {
    if(NULL == tenant_territory_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (tenant_territory_dto->id) {
        free(tenant_territory_dto->id);
        tenant_territory_dto->id = NULL;
    }
    if (tenant_territory_dto->timestamp) {
        free(tenant_territory_dto->timestamp);
        tenant_territory_dto->timestamp = NULL;
    }
    if (tenant_territory_dto->business_id) {
        free(tenant_territory_dto->business_id);
        tenant_territory_dto->business_id = NULL;
    }
    if (tenant_territory_dto->business_profile_record_id) {
        free(tenant_territory_dto->business_profile_record_id);
        tenant_territory_dto->business_profile_record_id = NULL;
    }
    if (tenant_territory_dto->name) {
        free(tenant_territory_dto->name);
        tenant_territory_dto->name = NULL;
    }
    if (tenant_territory_dto->description) {
        free(tenant_territory_dto->description);
        tenant_territory_dto->description = NULL;
    }
    if (tenant_territory_dto->parent_territory_id) {
        free(tenant_territory_dto->parent_territory_id);
        tenant_territory_dto->parent_territory_id = NULL;
    }
    free(tenant_territory_dto);
}

cJSON *tenant_territory_dto_convertToJSON(tenant_territory_dto_t *tenant_territory_dto) {
    cJSON *item = cJSON_CreateObject();

    // tenant_territory_dto->id
    if(tenant_territory_dto->id) {
    if(cJSON_AddStringToObject(item, "id", tenant_territory_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_territory_dto->timestamp
    if(tenant_territory_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", tenant_territory_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // tenant_territory_dto->business_id
    if(tenant_territory_dto->business_id) {
    if(cJSON_AddStringToObject(item, "businessID", tenant_territory_dto->business_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_territory_dto->business_profile_record_id
    if(tenant_territory_dto->business_profile_record_id) {
    if(cJSON_AddStringToObject(item, "businessProfileRecordID", tenant_territory_dto->business_profile_record_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_territory_dto->name
    if(tenant_territory_dto->name) {
    if(cJSON_AddStringToObject(item, "name", tenant_territory_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // tenant_territory_dto->description
    if(tenant_territory_dto->description) {
    if(cJSON_AddStringToObject(item, "description", tenant_territory_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // tenant_territory_dto->parent_territory_id
    if(tenant_territory_dto->parent_territory_id) {
    if(cJSON_AddStringToObject(item, "parentTerritoryID", tenant_territory_dto->parent_territory_id) == NULL) {
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

tenant_territory_dto_t *tenant_territory_dto_parseFromJSON(cJSON *tenant_territory_dtoJSON){

    tenant_territory_dto_t *tenant_territory_dto_local_var = NULL;

    // tenant_territory_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(tenant_territory_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // tenant_territory_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(tenant_territory_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // tenant_territory_dto->business_id
    cJSON *business_id = cJSON_GetObjectItemCaseSensitive(tenant_territory_dtoJSON, "businessID");
    if (business_id) { 
    if(!cJSON_IsString(business_id) && !cJSON_IsNull(business_id))
    {
    goto end; //String
    }
    }

    // tenant_territory_dto->business_profile_record_id
    cJSON *business_profile_record_id = cJSON_GetObjectItemCaseSensitive(tenant_territory_dtoJSON, "businessProfileRecordID");
    if (business_profile_record_id) { 
    if(!cJSON_IsString(business_profile_record_id) && !cJSON_IsNull(business_profile_record_id))
    {
    goto end; //String
    }
    }

    // tenant_territory_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(tenant_territory_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // tenant_territory_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(tenant_territory_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // tenant_territory_dto->parent_territory_id
    cJSON *parent_territory_id = cJSON_GetObjectItemCaseSensitive(tenant_territory_dtoJSON, "parentTerritoryID");
    if (parent_territory_id) { 
    if(!cJSON_IsString(parent_territory_id) && !cJSON_IsNull(parent_territory_id))
    {
    goto end; //String
    }
    }


    tenant_territory_dto_local_var = tenant_territory_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        business_id && !cJSON_IsNull(business_id) ? strdup(business_id->valuestring) : NULL,
        business_profile_record_id && !cJSON_IsNull(business_profile_record_id) ? strdup(business_profile_record_id->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        parent_territory_id && !cJSON_IsNull(parent_territory_id) ? strdup(parent_territory_id->valuestring) : NULL
        );

    return tenant_territory_dto_local_var;
end:
    return NULL;

}
