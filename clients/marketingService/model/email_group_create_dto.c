#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "email_group_create_dto.h"



email_group_create_dto_t *email_group_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    int enabled,
    char *tenant_id,
    char *enrollment_id
    ) {
    email_group_create_dto_t *email_group_create_dto_local_var = malloc(sizeof(email_group_create_dto_t));
    if (!email_group_create_dto_local_var) {
        return NULL;
    }
    email_group_create_dto_local_var->id = id;
    email_group_create_dto_local_var->timestamp = timestamp;
    email_group_create_dto_local_var->name = name;
    email_group_create_dto_local_var->description = description;
    email_group_create_dto_local_var->enabled = enabled;
    email_group_create_dto_local_var->tenant_id = tenant_id;
    email_group_create_dto_local_var->enrollment_id = enrollment_id;

    return email_group_create_dto_local_var;
}


void email_group_create_dto_free(email_group_create_dto_t *email_group_create_dto) {
    if(NULL == email_group_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (email_group_create_dto->id) {
        free(email_group_create_dto->id);
        email_group_create_dto->id = NULL;
    }
    if (email_group_create_dto->timestamp) {
        free(email_group_create_dto->timestamp);
        email_group_create_dto->timestamp = NULL;
    }
    if (email_group_create_dto->name) {
        free(email_group_create_dto->name);
        email_group_create_dto->name = NULL;
    }
    if (email_group_create_dto->description) {
        free(email_group_create_dto->description);
        email_group_create_dto->description = NULL;
    }
    if (email_group_create_dto->tenant_id) {
        free(email_group_create_dto->tenant_id);
        email_group_create_dto->tenant_id = NULL;
    }
    if (email_group_create_dto->enrollment_id) {
        free(email_group_create_dto->enrollment_id);
        email_group_create_dto->enrollment_id = NULL;
    }
    free(email_group_create_dto);
}

cJSON *email_group_create_dto_convertToJSON(email_group_create_dto_t *email_group_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // email_group_create_dto->id
    if(email_group_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", email_group_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // email_group_create_dto->timestamp
    if(email_group_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", email_group_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // email_group_create_dto->name
    if(email_group_create_dto->name) {
    if(cJSON_AddStringToObject(item, "name", email_group_create_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // email_group_create_dto->description
    if(email_group_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", email_group_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // email_group_create_dto->enabled
    if(email_group_create_dto->enabled) {
    if(cJSON_AddBoolToObject(item, "enabled", email_group_create_dto->enabled) == NULL) {
    goto fail; //Bool
    }
    }


    // email_group_create_dto->tenant_id
    if(email_group_create_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", email_group_create_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // email_group_create_dto->enrollment_id
    if(email_group_create_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", email_group_create_dto->enrollment_id) == NULL) {
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

email_group_create_dto_t *email_group_create_dto_parseFromJSON(cJSON *email_group_create_dtoJSON){

    email_group_create_dto_t *email_group_create_dto_local_var = NULL;

    // email_group_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(email_group_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // email_group_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(email_group_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // email_group_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(email_group_create_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // email_group_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(email_group_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // email_group_create_dto->enabled
    cJSON *enabled = cJSON_GetObjectItemCaseSensitive(email_group_create_dtoJSON, "enabled");
    if (enabled) { 
    if(!cJSON_IsBool(enabled))
    {
    goto end; //Bool
    }
    }

    // email_group_create_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(email_group_create_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // email_group_create_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(email_group_create_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    email_group_create_dto_local_var = email_group_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        enabled ? enabled->valueint : 0,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return email_group_create_dto_local_var;
end:
    return NULL;

}
