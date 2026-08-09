#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tenant_enrollment_dto.h"



tenant_enrollment_dto_t *tenant_enrollment_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *user_id,
    int is_root,
    int is_owner,
    int is_admin,
    int is_disabled
    ) {
    tenant_enrollment_dto_t *tenant_enrollment_dto_local_var = malloc(sizeof(tenant_enrollment_dto_t));
    if (!tenant_enrollment_dto_local_var) {
        return NULL;
    }
    tenant_enrollment_dto_local_var->id = id;
    tenant_enrollment_dto_local_var->timestamp = timestamp;
    tenant_enrollment_dto_local_var->tenant_id = tenant_id;
    tenant_enrollment_dto_local_var->user_id = user_id;
    tenant_enrollment_dto_local_var->is_root = is_root;
    tenant_enrollment_dto_local_var->is_owner = is_owner;
    tenant_enrollment_dto_local_var->is_admin = is_admin;
    tenant_enrollment_dto_local_var->is_disabled = is_disabled;

    return tenant_enrollment_dto_local_var;
}


void tenant_enrollment_dto_free(tenant_enrollment_dto_t *tenant_enrollment_dto) {
    if(NULL == tenant_enrollment_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (tenant_enrollment_dto->id) {
        free(tenant_enrollment_dto->id);
        tenant_enrollment_dto->id = NULL;
    }
    if (tenant_enrollment_dto->timestamp) {
        free(tenant_enrollment_dto->timestamp);
        tenant_enrollment_dto->timestamp = NULL;
    }
    if (tenant_enrollment_dto->tenant_id) {
        free(tenant_enrollment_dto->tenant_id);
        tenant_enrollment_dto->tenant_id = NULL;
    }
    if (tenant_enrollment_dto->user_id) {
        free(tenant_enrollment_dto->user_id);
        tenant_enrollment_dto->user_id = NULL;
    }
    free(tenant_enrollment_dto);
}

cJSON *tenant_enrollment_dto_convertToJSON(tenant_enrollment_dto_t *tenant_enrollment_dto) {
    cJSON *item = cJSON_CreateObject();

    // tenant_enrollment_dto->id
    if(tenant_enrollment_dto->id) {
    if(cJSON_AddStringToObject(item, "id", tenant_enrollment_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_enrollment_dto->timestamp
    if(tenant_enrollment_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", tenant_enrollment_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // tenant_enrollment_dto->tenant_id
    if(tenant_enrollment_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", tenant_enrollment_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_enrollment_dto->user_id
    if(tenant_enrollment_dto->user_id) {
    if(cJSON_AddStringToObject(item, "userId", tenant_enrollment_dto->user_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_enrollment_dto->is_root
    if(tenant_enrollment_dto->is_root) {
    if(cJSON_AddBoolToObject(item, "isRoot", tenant_enrollment_dto->is_root) == NULL) {
    goto fail; //Bool
    }
    }


    // tenant_enrollment_dto->is_owner
    if(tenant_enrollment_dto->is_owner) {
    if(cJSON_AddBoolToObject(item, "isOwner", tenant_enrollment_dto->is_owner) == NULL) {
    goto fail; //Bool
    }
    }


    // tenant_enrollment_dto->is_admin
    if(tenant_enrollment_dto->is_admin) {
    if(cJSON_AddBoolToObject(item, "isAdmin", tenant_enrollment_dto->is_admin) == NULL) {
    goto fail; //Bool
    }
    }


    // tenant_enrollment_dto->is_disabled
    if(tenant_enrollment_dto->is_disabled) {
    if(cJSON_AddBoolToObject(item, "isDisabled", tenant_enrollment_dto->is_disabled) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

tenant_enrollment_dto_t *tenant_enrollment_dto_parseFromJSON(cJSON *tenant_enrollment_dtoJSON){

    tenant_enrollment_dto_t *tenant_enrollment_dto_local_var = NULL;

    // tenant_enrollment_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(tenant_enrollment_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // tenant_enrollment_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(tenant_enrollment_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // tenant_enrollment_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(tenant_enrollment_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // tenant_enrollment_dto->user_id
    cJSON *user_id = cJSON_GetObjectItemCaseSensitive(tenant_enrollment_dtoJSON, "userId");
    if (user_id) { 
    if(!cJSON_IsString(user_id) && !cJSON_IsNull(user_id))
    {
    goto end; //String
    }
    }

    // tenant_enrollment_dto->is_root
    cJSON *is_root = cJSON_GetObjectItemCaseSensitive(tenant_enrollment_dtoJSON, "isRoot");
    if (is_root) { 
    if(!cJSON_IsBool(is_root))
    {
    goto end; //Bool
    }
    }

    // tenant_enrollment_dto->is_owner
    cJSON *is_owner = cJSON_GetObjectItemCaseSensitive(tenant_enrollment_dtoJSON, "isOwner");
    if (is_owner) { 
    if(!cJSON_IsBool(is_owner))
    {
    goto end; //Bool
    }
    }

    // tenant_enrollment_dto->is_admin
    cJSON *is_admin = cJSON_GetObjectItemCaseSensitive(tenant_enrollment_dtoJSON, "isAdmin");
    if (is_admin) { 
    if(!cJSON_IsBool(is_admin))
    {
    goto end; //Bool
    }
    }

    // tenant_enrollment_dto->is_disabled
    cJSON *is_disabled = cJSON_GetObjectItemCaseSensitive(tenant_enrollment_dtoJSON, "isDisabled");
    if (is_disabled) { 
    if(!cJSON_IsBool(is_disabled))
    {
    goto end; //Bool
    }
    }


    tenant_enrollment_dto_local_var = tenant_enrollment_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        user_id && !cJSON_IsNull(user_id) ? strdup(user_id->valuestring) : NULL,
        is_root ? is_root->valueint : 0,
        is_owner ? is_owner->valueint : 0,
        is_admin ? is_admin->valueint : 0,
        is_disabled ? is_disabled->valueint : 0
        );

    return tenant_enrollment_dto_local_var;
end:
    return NULL;

}
