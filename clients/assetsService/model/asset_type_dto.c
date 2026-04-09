#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "asset_type_dto.h"



asset_type_dto_t *asset_type_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *business_name,
    char *enrollment_id,
    char *name,
    char *description,
    int asset_count
    ) {
    asset_type_dto_t *asset_type_dto_local_var = malloc(sizeof(asset_type_dto_t));
    if (!asset_type_dto_local_var) {
        return NULL;
    }
    asset_type_dto_local_var->id = id;
    asset_type_dto_local_var->timestamp = timestamp;
    asset_type_dto_local_var->tenant_id = tenant_id;
    asset_type_dto_local_var->business_name = business_name;
    asset_type_dto_local_var->enrollment_id = enrollment_id;
    asset_type_dto_local_var->name = name;
    asset_type_dto_local_var->description = description;
    asset_type_dto_local_var->asset_count = asset_count;

    return asset_type_dto_local_var;
}


void asset_type_dto_free(asset_type_dto_t *asset_type_dto) {
    if(NULL == asset_type_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (asset_type_dto->id) {
        free(asset_type_dto->id);
        asset_type_dto->id = NULL;
    }
    if (asset_type_dto->timestamp) {
        free(asset_type_dto->timestamp);
        asset_type_dto->timestamp = NULL;
    }
    if (asset_type_dto->tenant_id) {
        free(asset_type_dto->tenant_id);
        asset_type_dto->tenant_id = NULL;
    }
    if (asset_type_dto->business_name) {
        free(asset_type_dto->business_name);
        asset_type_dto->business_name = NULL;
    }
    if (asset_type_dto->enrollment_id) {
        free(asset_type_dto->enrollment_id);
        asset_type_dto->enrollment_id = NULL;
    }
    if (asset_type_dto->name) {
        free(asset_type_dto->name);
        asset_type_dto->name = NULL;
    }
    if (asset_type_dto->description) {
        free(asset_type_dto->description);
        asset_type_dto->description = NULL;
    }
    free(asset_type_dto);
}

cJSON *asset_type_dto_convertToJSON(asset_type_dto_t *asset_type_dto) {
    cJSON *item = cJSON_CreateObject();

    // asset_type_dto->id
    if(asset_type_dto->id) {
    if(cJSON_AddStringToObject(item, "id", asset_type_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // asset_type_dto->timestamp
    if(asset_type_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", asset_type_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // asset_type_dto->tenant_id
    if(asset_type_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", asset_type_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_type_dto->business_name
    if(asset_type_dto->business_name) {
    if(cJSON_AddStringToObject(item, "businessName", asset_type_dto->business_name) == NULL) {
    goto fail; //String
    }
    }


    // asset_type_dto->enrollment_id
    if(asset_type_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", asset_type_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_type_dto->name
    if(asset_type_dto->name) {
    if(cJSON_AddStringToObject(item, "name", asset_type_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // asset_type_dto->description
    if(asset_type_dto->description) {
    if(cJSON_AddStringToObject(item, "description", asset_type_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // asset_type_dto->asset_count
    if(asset_type_dto->asset_count) {
    if(cJSON_AddNumberToObject(item, "assetCount", asset_type_dto->asset_count) == NULL) {
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

asset_type_dto_t *asset_type_dto_parseFromJSON(cJSON *asset_type_dtoJSON){

    asset_type_dto_t *asset_type_dto_local_var = NULL;

    // asset_type_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(asset_type_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // asset_type_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(asset_type_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // asset_type_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(asset_type_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // asset_type_dto->business_name
    cJSON *business_name = cJSON_GetObjectItemCaseSensitive(asset_type_dtoJSON, "businessName");
    if (business_name) { 
    if(!cJSON_IsString(business_name) && !cJSON_IsNull(business_name))
    {
    goto end; //String
    }
    }

    // asset_type_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(asset_type_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // asset_type_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(asset_type_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // asset_type_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(asset_type_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // asset_type_dto->asset_count
    cJSON *asset_count = cJSON_GetObjectItemCaseSensitive(asset_type_dtoJSON, "assetCount");
    if (asset_count) { 
    if(!cJSON_IsNumber(asset_count))
    {
    goto end; //Numeric
    }
    }


    asset_type_dto_local_var = asset_type_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        business_name && !cJSON_IsNull(business_name) ? strdup(business_name->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        asset_count ? asset_count->valuedouble : 0
        );

    return asset_type_dto_local_var;
end:
    return NULL;

}
