#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "email_group_update_dto.h"



email_group_update_dto_t *email_group_update_dto_create(
    char *name,
    char *description,
    int enabled,
    char *tenant_id,
    char *enrollment_id
    ) {
    email_group_update_dto_t *email_group_update_dto_local_var = malloc(sizeof(email_group_update_dto_t));
    if (!email_group_update_dto_local_var) {
        return NULL;
    }
    email_group_update_dto_local_var->name = name;
    email_group_update_dto_local_var->description = description;
    email_group_update_dto_local_var->enabled = enabled;
    email_group_update_dto_local_var->tenant_id = tenant_id;
    email_group_update_dto_local_var->enrollment_id = enrollment_id;

    return email_group_update_dto_local_var;
}


void email_group_update_dto_free(email_group_update_dto_t *email_group_update_dto) {
    if(NULL == email_group_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (email_group_update_dto->name) {
        free(email_group_update_dto->name);
        email_group_update_dto->name = NULL;
    }
    if (email_group_update_dto->description) {
        free(email_group_update_dto->description);
        email_group_update_dto->description = NULL;
    }
    if (email_group_update_dto->tenant_id) {
        free(email_group_update_dto->tenant_id);
        email_group_update_dto->tenant_id = NULL;
    }
    if (email_group_update_dto->enrollment_id) {
        free(email_group_update_dto->enrollment_id);
        email_group_update_dto->enrollment_id = NULL;
    }
    free(email_group_update_dto);
}

cJSON *email_group_update_dto_convertToJSON(email_group_update_dto_t *email_group_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // email_group_update_dto->name
    if(email_group_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", email_group_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // email_group_update_dto->description
    if(email_group_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", email_group_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // email_group_update_dto->enabled
    if(email_group_update_dto->enabled) {
    if(cJSON_AddBoolToObject(item, "enabled", email_group_update_dto->enabled) == NULL) {
    goto fail; //Bool
    }
    }


    // email_group_update_dto->tenant_id
    if(email_group_update_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", email_group_update_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // email_group_update_dto->enrollment_id
    if(email_group_update_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", email_group_update_dto->enrollment_id) == NULL) {
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

email_group_update_dto_t *email_group_update_dto_parseFromJSON(cJSON *email_group_update_dtoJSON){

    email_group_update_dto_t *email_group_update_dto_local_var = NULL;

    // email_group_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(email_group_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // email_group_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(email_group_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // email_group_update_dto->enabled
    cJSON *enabled = cJSON_GetObjectItemCaseSensitive(email_group_update_dtoJSON, "enabled");
    if (enabled) { 
    if(!cJSON_IsBool(enabled))
    {
    goto end; //Bool
    }
    }

    // email_group_update_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(email_group_update_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // email_group_update_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(email_group_update_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    email_group_update_dto_local_var = email_group_update_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        enabled ? enabled->valueint : 0,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return email_group_update_dto_local_var;
end:
    return NULL;

}
