#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "asset_category_create_dto.h"



asset_category_create_dto_t *asset_category_create_dto_create(
    char *id,
    char *timestamp,
    char *business_id,
    char *business_profile_record_id,
    char *name,
    char *description
    ) {
    asset_category_create_dto_t *asset_category_create_dto_local_var = malloc(sizeof(asset_category_create_dto_t));
    if (!asset_category_create_dto_local_var) {
        return NULL;
    }
    asset_category_create_dto_local_var->id = id;
    asset_category_create_dto_local_var->timestamp = timestamp;
    asset_category_create_dto_local_var->business_id = business_id;
    asset_category_create_dto_local_var->business_profile_record_id = business_profile_record_id;
    asset_category_create_dto_local_var->name = name;
    asset_category_create_dto_local_var->description = description;

    return asset_category_create_dto_local_var;
}


void asset_category_create_dto_free(asset_category_create_dto_t *asset_category_create_dto) {
    if(NULL == asset_category_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (asset_category_create_dto->id) {
        free(asset_category_create_dto->id);
        asset_category_create_dto->id = NULL;
    }
    if (asset_category_create_dto->timestamp) {
        free(asset_category_create_dto->timestamp);
        asset_category_create_dto->timestamp = NULL;
    }
    if (asset_category_create_dto->business_id) {
        free(asset_category_create_dto->business_id);
        asset_category_create_dto->business_id = NULL;
    }
    if (asset_category_create_dto->business_profile_record_id) {
        free(asset_category_create_dto->business_profile_record_id);
        asset_category_create_dto->business_profile_record_id = NULL;
    }
    if (asset_category_create_dto->name) {
        free(asset_category_create_dto->name);
        asset_category_create_dto->name = NULL;
    }
    if (asset_category_create_dto->description) {
        free(asset_category_create_dto->description);
        asset_category_create_dto->description = NULL;
    }
    free(asset_category_create_dto);
}

cJSON *asset_category_create_dto_convertToJSON(asset_category_create_dto_t *asset_category_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // asset_category_create_dto->id
    if(asset_category_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", asset_category_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // asset_category_create_dto->timestamp
    if(asset_category_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", asset_category_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // asset_category_create_dto->business_id
    if(asset_category_create_dto->business_id) {
    if(cJSON_AddStringToObject(item, "businessId", asset_category_create_dto->business_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_category_create_dto->business_profile_record_id
    if(asset_category_create_dto->business_profile_record_id) {
    if(cJSON_AddStringToObject(item, "businessProfileRecordId", asset_category_create_dto->business_profile_record_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_category_create_dto->name
    if(asset_category_create_dto->name) {
    if(cJSON_AddStringToObject(item, "name", asset_category_create_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // asset_category_create_dto->description
    if(asset_category_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", asset_category_create_dto->description) == NULL) {
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

asset_category_create_dto_t *asset_category_create_dto_parseFromJSON(cJSON *asset_category_create_dtoJSON){

    asset_category_create_dto_t *asset_category_create_dto_local_var = NULL;

    // asset_category_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(asset_category_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // asset_category_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(asset_category_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // asset_category_create_dto->business_id
    cJSON *business_id = cJSON_GetObjectItemCaseSensitive(asset_category_create_dtoJSON, "businessId");
    if (business_id) { 
    if(!cJSON_IsString(business_id) && !cJSON_IsNull(business_id))
    {
    goto end; //String
    }
    }

    // asset_category_create_dto->business_profile_record_id
    cJSON *business_profile_record_id = cJSON_GetObjectItemCaseSensitive(asset_category_create_dtoJSON, "businessProfileRecordId");
    if (business_profile_record_id) { 
    if(!cJSON_IsString(business_profile_record_id) && !cJSON_IsNull(business_profile_record_id))
    {
    goto end; //String
    }
    }

    // asset_category_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(asset_category_create_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // asset_category_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(asset_category_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    asset_category_create_dto_local_var = asset_category_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        business_id && !cJSON_IsNull(business_id) ? strdup(business_id->valuestring) : NULL,
        business_profile_record_id && !cJSON_IsNull(business_profile_record_id) ? strdup(business_profile_record_id->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return asset_category_create_dto_local_var;
end:
    return NULL;

}
