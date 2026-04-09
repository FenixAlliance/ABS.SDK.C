#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "account_type_create_dto.h"



account_type_create_dto_t *account_type_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *tenant_id,
    char *enrollment_id
    ) {
    account_type_create_dto_t *account_type_create_dto_local_var = malloc(sizeof(account_type_create_dto_t));
    if (!account_type_create_dto_local_var) {
        return NULL;
    }
    account_type_create_dto_local_var->id = id;
    account_type_create_dto_local_var->timestamp = timestamp;
    account_type_create_dto_local_var->name = name;
    account_type_create_dto_local_var->description = description;
    account_type_create_dto_local_var->tenant_id = tenant_id;
    account_type_create_dto_local_var->enrollment_id = enrollment_id;

    return account_type_create_dto_local_var;
}


void account_type_create_dto_free(account_type_create_dto_t *account_type_create_dto) {
    if(NULL == account_type_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (account_type_create_dto->id) {
        free(account_type_create_dto->id);
        account_type_create_dto->id = NULL;
    }
    if (account_type_create_dto->timestamp) {
        free(account_type_create_dto->timestamp);
        account_type_create_dto->timestamp = NULL;
    }
    if (account_type_create_dto->name) {
        free(account_type_create_dto->name);
        account_type_create_dto->name = NULL;
    }
    if (account_type_create_dto->description) {
        free(account_type_create_dto->description);
        account_type_create_dto->description = NULL;
    }
    if (account_type_create_dto->tenant_id) {
        free(account_type_create_dto->tenant_id);
        account_type_create_dto->tenant_id = NULL;
    }
    if (account_type_create_dto->enrollment_id) {
        free(account_type_create_dto->enrollment_id);
        account_type_create_dto->enrollment_id = NULL;
    }
    free(account_type_create_dto);
}

cJSON *account_type_create_dto_convertToJSON(account_type_create_dto_t *account_type_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // account_type_create_dto->id
    if(account_type_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", account_type_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // account_type_create_dto->timestamp
    if(account_type_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", account_type_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // account_type_create_dto->name
    if(account_type_create_dto->name) {
    if(cJSON_AddStringToObject(item, "name", account_type_create_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // account_type_create_dto->description
    if(account_type_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", account_type_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // account_type_create_dto->tenant_id
    if(account_type_create_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", account_type_create_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // account_type_create_dto->enrollment_id
    if(account_type_create_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", account_type_create_dto->enrollment_id) == NULL) {
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

account_type_create_dto_t *account_type_create_dto_parseFromJSON(cJSON *account_type_create_dtoJSON){

    account_type_create_dto_t *account_type_create_dto_local_var = NULL;

    // account_type_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(account_type_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // account_type_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(account_type_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // account_type_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(account_type_create_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // account_type_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(account_type_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // account_type_create_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(account_type_create_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // account_type_create_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(account_type_create_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    account_type_create_dto_local_var = account_type_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return account_type_create_dto_local_var;
end:
    return NULL;

}
