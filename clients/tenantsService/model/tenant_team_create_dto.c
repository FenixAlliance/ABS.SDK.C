#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tenant_team_create_dto.h"



tenant_team_create_dto_t *tenant_team_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *avatar_url,
    int is_public,
    char *business_unit_id,
    char *organization_profile_id
    ) {
    tenant_team_create_dto_t *tenant_team_create_dto_local_var = malloc(sizeof(tenant_team_create_dto_t));
    if (!tenant_team_create_dto_local_var) {
        return NULL;
    }
    tenant_team_create_dto_local_var->id = id;
    tenant_team_create_dto_local_var->timestamp = timestamp;
    tenant_team_create_dto_local_var->name = name;
    tenant_team_create_dto_local_var->description = description;
    tenant_team_create_dto_local_var->avatar_url = avatar_url;
    tenant_team_create_dto_local_var->is_public = is_public;
    tenant_team_create_dto_local_var->business_unit_id = business_unit_id;
    tenant_team_create_dto_local_var->organization_profile_id = organization_profile_id;

    return tenant_team_create_dto_local_var;
}


void tenant_team_create_dto_free(tenant_team_create_dto_t *tenant_team_create_dto) {
    if(NULL == tenant_team_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (tenant_team_create_dto->id) {
        free(tenant_team_create_dto->id);
        tenant_team_create_dto->id = NULL;
    }
    if (tenant_team_create_dto->timestamp) {
        free(tenant_team_create_dto->timestamp);
        tenant_team_create_dto->timestamp = NULL;
    }
    if (tenant_team_create_dto->name) {
        free(tenant_team_create_dto->name);
        tenant_team_create_dto->name = NULL;
    }
    if (tenant_team_create_dto->description) {
        free(tenant_team_create_dto->description);
        tenant_team_create_dto->description = NULL;
    }
    if (tenant_team_create_dto->avatar_url) {
        free(tenant_team_create_dto->avatar_url);
        tenant_team_create_dto->avatar_url = NULL;
    }
    if (tenant_team_create_dto->business_unit_id) {
        free(tenant_team_create_dto->business_unit_id);
        tenant_team_create_dto->business_unit_id = NULL;
    }
    if (tenant_team_create_dto->organization_profile_id) {
        free(tenant_team_create_dto->organization_profile_id);
        tenant_team_create_dto->organization_profile_id = NULL;
    }
    free(tenant_team_create_dto);
}

cJSON *tenant_team_create_dto_convertToJSON(tenant_team_create_dto_t *tenant_team_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // tenant_team_create_dto->id
    if(tenant_team_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", tenant_team_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_team_create_dto->timestamp
    if(tenant_team_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", tenant_team_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // tenant_team_create_dto->name
    if(tenant_team_create_dto->name) {
    if(cJSON_AddStringToObject(item, "name", tenant_team_create_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // tenant_team_create_dto->description
    if(tenant_team_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", tenant_team_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // tenant_team_create_dto->avatar_url
    if(tenant_team_create_dto->avatar_url) {
    if(cJSON_AddStringToObject(item, "avatarURL", tenant_team_create_dto->avatar_url) == NULL) {
    goto fail; //String
    }
    }


    // tenant_team_create_dto->is_public
    if(tenant_team_create_dto->is_public) {
    if(cJSON_AddBoolToObject(item, "isPublic", tenant_team_create_dto->is_public) == NULL) {
    goto fail; //Bool
    }
    }


    // tenant_team_create_dto->business_unit_id
    if(tenant_team_create_dto->business_unit_id) {
    if(cJSON_AddStringToObject(item, "businessUnitID", tenant_team_create_dto->business_unit_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_team_create_dto->organization_profile_id
    if(tenant_team_create_dto->organization_profile_id) {
    if(cJSON_AddStringToObject(item, "organizationProfileID", tenant_team_create_dto->organization_profile_id) == NULL) {
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

tenant_team_create_dto_t *tenant_team_create_dto_parseFromJSON(cJSON *tenant_team_create_dtoJSON){

    tenant_team_create_dto_t *tenant_team_create_dto_local_var = NULL;

    // tenant_team_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(tenant_team_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // tenant_team_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(tenant_team_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // tenant_team_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(tenant_team_create_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // tenant_team_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(tenant_team_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // tenant_team_create_dto->avatar_url
    cJSON *avatar_url = cJSON_GetObjectItemCaseSensitive(tenant_team_create_dtoJSON, "avatarURL");
    if (avatar_url) { 
    if(!cJSON_IsString(avatar_url) && !cJSON_IsNull(avatar_url))
    {
    goto end; //String
    }
    }

    // tenant_team_create_dto->is_public
    cJSON *is_public = cJSON_GetObjectItemCaseSensitive(tenant_team_create_dtoJSON, "isPublic");
    if (is_public) { 
    if(!cJSON_IsBool(is_public))
    {
    goto end; //Bool
    }
    }

    // tenant_team_create_dto->business_unit_id
    cJSON *business_unit_id = cJSON_GetObjectItemCaseSensitive(tenant_team_create_dtoJSON, "businessUnitID");
    if (business_unit_id) { 
    if(!cJSON_IsString(business_unit_id) && !cJSON_IsNull(business_unit_id))
    {
    goto end; //String
    }
    }

    // tenant_team_create_dto->organization_profile_id
    cJSON *organization_profile_id = cJSON_GetObjectItemCaseSensitive(tenant_team_create_dtoJSON, "organizationProfileID");
    if (organization_profile_id) { 
    if(!cJSON_IsString(organization_profile_id) && !cJSON_IsNull(organization_profile_id))
    {
    goto end; //String
    }
    }


    tenant_team_create_dto_local_var = tenant_team_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        avatar_url && !cJSON_IsNull(avatar_url) ? strdup(avatar_url->valuestring) : NULL,
        is_public ? is_public->valueint : 0,
        business_unit_id && !cJSON_IsNull(business_unit_id) ? strdup(business_unit_id->valuestring) : NULL,
        organization_profile_id && !cJSON_IsNull(organization_profile_id) ? strdup(organization_profile_id->valuestring) : NULL
        );

    return tenant_team_create_dto_local_var;
end:
    return NULL;

}
