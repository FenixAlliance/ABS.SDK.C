#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "account_type_update_dto.h"



account_type_update_dto_t *account_type_update_dto_create(
    char *name,
    char *description,
    char *tenant_id,
    char *enrollment_id
    ) {
    account_type_update_dto_t *account_type_update_dto_local_var = malloc(sizeof(account_type_update_dto_t));
    if (!account_type_update_dto_local_var) {
        return NULL;
    }
    account_type_update_dto_local_var->name = name;
    account_type_update_dto_local_var->description = description;
    account_type_update_dto_local_var->tenant_id = tenant_id;
    account_type_update_dto_local_var->enrollment_id = enrollment_id;

    return account_type_update_dto_local_var;
}


void account_type_update_dto_free(account_type_update_dto_t *account_type_update_dto) {
    if(NULL == account_type_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (account_type_update_dto->name) {
        free(account_type_update_dto->name);
        account_type_update_dto->name = NULL;
    }
    if (account_type_update_dto->description) {
        free(account_type_update_dto->description);
        account_type_update_dto->description = NULL;
    }
    if (account_type_update_dto->tenant_id) {
        free(account_type_update_dto->tenant_id);
        account_type_update_dto->tenant_id = NULL;
    }
    if (account_type_update_dto->enrollment_id) {
        free(account_type_update_dto->enrollment_id);
        account_type_update_dto->enrollment_id = NULL;
    }
    free(account_type_update_dto);
}

cJSON *account_type_update_dto_convertToJSON(account_type_update_dto_t *account_type_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // account_type_update_dto->name
    if(account_type_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", account_type_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // account_type_update_dto->description
    if(account_type_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", account_type_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // account_type_update_dto->tenant_id
    if(account_type_update_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", account_type_update_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // account_type_update_dto->enrollment_id
    if(account_type_update_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", account_type_update_dto->enrollment_id) == NULL) {
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

account_type_update_dto_t *account_type_update_dto_parseFromJSON(cJSON *account_type_update_dtoJSON){

    account_type_update_dto_t *account_type_update_dto_local_var = NULL;

    // account_type_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(account_type_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // account_type_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(account_type_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // account_type_update_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(account_type_update_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // account_type_update_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(account_type_update_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    account_type_update_dto_local_var = account_type_update_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return account_type_update_dto_local_var;
end:
    return NULL;

}
