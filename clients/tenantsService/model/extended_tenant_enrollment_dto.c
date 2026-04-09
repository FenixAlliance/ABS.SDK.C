#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "extended_tenant_enrollment_dto.h"



extended_tenant_enrollment_dto_t *extended_tenant_enrollment_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *user_id,
    int is_root,
    int is_owner,
    int is_admin,
    int is_disabled,
    tenant_dto_t *tenant,
    user_dto_t *user
    ) {
    extended_tenant_enrollment_dto_t *extended_tenant_enrollment_dto_local_var = malloc(sizeof(extended_tenant_enrollment_dto_t));
    if (!extended_tenant_enrollment_dto_local_var) {
        return NULL;
    }
    extended_tenant_enrollment_dto_local_var->id = id;
    extended_tenant_enrollment_dto_local_var->timestamp = timestamp;
    extended_tenant_enrollment_dto_local_var->tenant_id = tenant_id;
    extended_tenant_enrollment_dto_local_var->user_id = user_id;
    extended_tenant_enrollment_dto_local_var->is_root = is_root;
    extended_tenant_enrollment_dto_local_var->is_owner = is_owner;
    extended_tenant_enrollment_dto_local_var->is_admin = is_admin;
    extended_tenant_enrollment_dto_local_var->is_disabled = is_disabled;
    extended_tenant_enrollment_dto_local_var->tenant = tenant;
    extended_tenant_enrollment_dto_local_var->user = user;

    return extended_tenant_enrollment_dto_local_var;
}


void extended_tenant_enrollment_dto_free(extended_tenant_enrollment_dto_t *extended_tenant_enrollment_dto) {
    if(NULL == extended_tenant_enrollment_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (extended_tenant_enrollment_dto->id) {
        free(extended_tenant_enrollment_dto->id);
        extended_tenant_enrollment_dto->id = NULL;
    }
    if (extended_tenant_enrollment_dto->timestamp) {
        free(extended_tenant_enrollment_dto->timestamp);
        extended_tenant_enrollment_dto->timestamp = NULL;
    }
    if (extended_tenant_enrollment_dto->tenant_id) {
        free(extended_tenant_enrollment_dto->tenant_id);
        extended_tenant_enrollment_dto->tenant_id = NULL;
    }
    if (extended_tenant_enrollment_dto->user_id) {
        free(extended_tenant_enrollment_dto->user_id);
        extended_tenant_enrollment_dto->user_id = NULL;
    }
    if (extended_tenant_enrollment_dto->tenant) {
        tenant_dto_free(extended_tenant_enrollment_dto->tenant);
        extended_tenant_enrollment_dto->tenant = NULL;
    }
    if (extended_tenant_enrollment_dto->user) {
        user_dto_free(extended_tenant_enrollment_dto->user);
        extended_tenant_enrollment_dto->user = NULL;
    }
    free(extended_tenant_enrollment_dto);
}

cJSON *extended_tenant_enrollment_dto_convertToJSON(extended_tenant_enrollment_dto_t *extended_tenant_enrollment_dto) {
    cJSON *item = cJSON_CreateObject();

    // extended_tenant_enrollment_dto->id
    if(extended_tenant_enrollment_dto->id) {
    if(cJSON_AddStringToObject(item, "id", extended_tenant_enrollment_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // extended_tenant_enrollment_dto->timestamp
    if(extended_tenant_enrollment_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", extended_tenant_enrollment_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // extended_tenant_enrollment_dto->tenant_id
    if(extended_tenant_enrollment_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", extended_tenant_enrollment_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_tenant_enrollment_dto->user_id
    if(extended_tenant_enrollment_dto->user_id) {
    if(cJSON_AddStringToObject(item, "userId", extended_tenant_enrollment_dto->user_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_tenant_enrollment_dto->is_root
    if(extended_tenant_enrollment_dto->is_root) {
    if(cJSON_AddBoolToObject(item, "isRoot", extended_tenant_enrollment_dto->is_root) == NULL) {
    goto fail; //Bool
    }
    }


    // extended_tenant_enrollment_dto->is_owner
    if(extended_tenant_enrollment_dto->is_owner) {
    if(cJSON_AddBoolToObject(item, "isOwner", extended_tenant_enrollment_dto->is_owner) == NULL) {
    goto fail; //Bool
    }
    }


    // extended_tenant_enrollment_dto->is_admin
    if(extended_tenant_enrollment_dto->is_admin) {
    if(cJSON_AddBoolToObject(item, "isAdmin", extended_tenant_enrollment_dto->is_admin) == NULL) {
    goto fail; //Bool
    }
    }


    // extended_tenant_enrollment_dto->is_disabled
    if(extended_tenant_enrollment_dto->is_disabled) {
    if(cJSON_AddBoolToObject(item, "isDisabled", extended_tenant_enrollment_dto->is_disabled) == NULL) {
    goto fail; //Bool
    }
    }


    // extended_tenant_enrollment_dto->tenant
    if(extended_tenant_enrollment_dto->tenant) {
    cJSON *tenant_local_JSON = tenant_dto_convertToJSON(extended_tenant_enrollment_dto->tenant);
    if(tenant_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "tenant", tenant_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // extended_tenant_enrollment_dto->user
    if(extended_tenant_enrollment_dto->user) {
    cJSON *user_local_JSON = user_dto_convertToJSON(extended_tenant_enrollment_dto->user);
    if(user_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "user", user_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

extended_tenant_enrollment_dto_t *extended_tenant_enrollment_dto_parseFromJSON(cJSON *extended_tenant_enrollment_dtoJSON){

    extended_tenant_enrollment_dto_t *extended_tenant_enrollment_dto_local_var = NULL;

    // define the local variable for extended_tenant_enrollment_dto->tenant
    tenant_dto_t *tenant_local_nonprim = NULL;

    // define the local variable for extended_tenant_enrollment_dto->user
    user_dto_t *user_local_nonprim = NULL;

    // extended_tenant_enrollment_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(extended_tenant_enrollment_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // extended_tenant_enrollment_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(extended_tenant_enrollment_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // extended_tenant_enrollment_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(extended_tenant_enrollment_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // extended_tenant_enrollment_dto->user_id
    cJSON *user_id = cJSON_GetObjectItemCaseSensitive(extended_tenant_enrollment_dtoJSON, "userId");
    if (user_id) { 
    if(!cJSON_IsString(user_id) && !cJSON_IsNull(user_id))
    {
    goto end; //String
    }
    }

    // extended_tenant_enrollment_dto->is_root
    cJSON *is_root = cJSON_GetObjectItemCaseSensitive(extended_tenant_enrollment_dtoJSON, "isRoot");
    if (is_root) { 
    if(!cJSON_IsBool(is_root))
    {
    goto end; //Bool
    }
    }

    // extended_tenant_enrollment_dto->is_owner
    cJSON *is_owner = cJSON_GetObjectItemCaseSensitive(extended_tenant_enrollment_dtoJSON, "isOwner");
    if (is_owner) { 
    if(!cJSON_IsBool(is_owner))
    {
    goto end; //Bool
    }
    }

    // extended_tenant_enrollment_dto->is_admin
    cJSON *is_admin = cJSON_GetObjectItemCaseSensitive(extended_tenant_enrollment_dtoJSON, "isAdmin");
    if (is_admin) { 
    if(!cJSON_IsBool(is_admin))
    {
    goto end; //Bool
    }
    }

    // extended_tenant_enrollment_dto->is_disabled
    cJSON *is_disabled = cJSON_GetObjectItemCaseSensitive(extended_tenant_enrollment_dtoJSON, "isDisabled");
    if (is_disabled) { 
    if(!cJSON_IsBool(is_disabled))
    {
    goto end; //Bool
    }
    }

    // extended_tenant_enrollment_dto->tenant
    cJSON *tenant = cJSON_GetObjectItemCaseSensitive(extended_tenant_enrollment_dtoJSON, "tenant");
    if (tenant) { 
    tenant_local_nonprim = tenant_dto_parseFromJSON(tenant); //nonprimitive
    }

    // extended_tenant_enrollment_dto->user
    cJSON *user = cJSON_GetObjectItemCaseSensitive(extended_tenant_enrollment_dtoJSON, "user");
    if (user) { 
    user_local_nonprim = user_dto_parseFromJSON(user); //nonprimitive
    }


    extended_tenant_enrollment_dto_local_var = extended_tenant_enrollment_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        user_id && !cJSON_IsNull(user_id) ? strdup(user_id->valuestring) : NULL,
        is_root ? is_root->valueint : 0,
        is_owner ? is_owner->valueint : 0,
        is_admin ? is_admin->valueint : 0,
        is_disabled ? is_disabled->valueint : 0,
        tenant ? tenant_local_nonprim : NULL,
        user ? user_local_nonprim : NULL
        );

    return extended_tenant_enrollment_dto_local_var;
end:
    if (tenant_local_nonprim) {
        tenant_dto_free(tenant_local_nonprim);
        tenant_local_nonprim = NULL;
    }
    if (user_local_nonprim) {
        user_dto_free(user_local_nonprim);
        user_local_nonprim = NULL;
    }
    return NULL;

}
