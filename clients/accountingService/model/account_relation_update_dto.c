#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "account_relation_update_dto.h"



account_relation_update_dto_t *account_relation_update_dto_create(
    char *account_id,
    char *tenant_id,
    char *enrollment_id
    ) {
    account_relation_update_dto_t *account_relation_update_dto_local_var = malloc(sizeof(account_relation_update_dto_t));
    if (!account_relation_update_dto_local_var) {
        return NULL;
    }
    account_relation_update_dto_local_var->account_id = account_id;
    account_relation_update_dto_local_var->tenant_id = tenant_id;
    account_relation_update_dto_local_var->enrollment_id = enrollment_id;

    return account_relation_update_dto_local_var;
}


void account_relation_update_dto_free(account_relation_update_dto_t *account_relation_update_dto) {
    if(NULL == account_relation_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (account_relation_update_dto->account_id) {
        free(account_relation_update_dto->account_id);
        account_relation_update_dto->account_id = NULL;
    }
    if (account_relation_update_dto->tenant_id) {
        free(account_relation_update_dto->tenant_id);
        account_relation_update_dto->tenant_id = NULL;
    }
    if (account_relation_update_dto->enrollment_id) {
        free(account_relation_update_dto->enrollment_id);
        account_relation_update_dto->enrollment_id = NULL;
    }
    free(account_relation_update_dto);
}

cJSON *account_relation_update_dto_convertToJSON(account_relation_update_dto_t *account_relation_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // account_relation_update_dto->account_id
    if(account_relation_update_dto->account_id) {
    if(cJSON_AddStringToObject(item, "accountId", account_relation_update_dto->account_id) == NULL) {
    goto fail; //String
    }
    }


    // account_relation_update_dto->tenant_id
    if(account_relation_update_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", account_relation_update_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // account_relation_update_dto->enrollment_id
    if(account_relation_update_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", account_relation_update_dto->enrollment_id) == NULL) {
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

account_relation_update_dto_t *account_relation_update_dto_parseFromJSON(cJSON *account_relation_update_dtoJSON){

    account_relation_update_dto_t *account_relation_update_dto_local_var = NULL;

    // account_relation_update_dto->account_id
    cJSON *account_id = cJSON_GetObjectItemCaseSensitive(account_relation_update_dtoJSON, "accountId");
    if (account_id) { 
    if(!cJSON_IsString(account_id) && !cJSON_IsNull(account_id))
    {
    goto end; //String
    }
    }

    // account_relation_update_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(account_relation_update_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // account_relation_update_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(account_relation_update_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    account_relation_update_dto_local_var = account_relation_update_dto_create (
        account_id && !cJSON_IsNull(account_id) ? strdup(account_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return account_relation_update_dto_local_var;
end:
    return NULL;

}
