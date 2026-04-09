#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tenant_enrollment_update_dto.h"



tenant_enrollment_update_dto_t *tenant_enrollment_update_dto_create(
    int is_admin,
    int is_disabled
    ) {
    tenant_enrollment_update_dto_t *tenant_enrollment_update_dto_local_var = malloc(sizeof(tenant_enrollment_update_dto_t));
    if (!tenant_enrollment_update_dto_local_var) {
        return NULL;
    }
    tenant_enrollment_update_dto_local_var->is_admin = is_admin;
    tenant_enrollment_update_dto_local_var->is_disabled = is_disabled;

    return tenant_enrollment_update_dto_local_var;
}


void tenant_enrollment_update_dto_free(tenant_enrollment_update_dto_t *tenant_enrollment_update_dto) {
    if(NULL == tenant_enrollment_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    free(tenant_enrollment_update_dto);
}

cJSON *tenant_enrollment_update_dto_convertToJSON(tenant_enrollment_update_dto_t *tenant_enrollment_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // tenant_enrollment_update_dto->is_admin
    if(tenant_enrollment_update_dto->is_admin) {
    if(cJSON_AddBoolToObject(item, "isAdmin", tenant_enrollment_update_dto->is_admin) == NULL) {
    goto fail; //Bool
    }
    }


    // tenant_enrollment_update_dto->is_disabled
    if(tenant_enrollment_update_dto->is_disabled) {
    if(cJSON_AddBoolToObject(item, "isDisabled", tenant_enrollment_update_dto->is_disabled) == NULL) {
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

tenant_enrollment_update_dto_t *tenant_enrollment_update_dto_parseFromJSON(cJSON *tenant_enrollment_update_dtoJSON){

    tenant_enrollment_update_dto_t *tenant_enrollment_update_dto_local_var = NULL;

    // tenant_enrollment_update_dto->is_admin
    cJSON *is_admin = cJSON_GetObjectItemCaseSensitive(tenant_enrollment_update_dtoJSON, "isAdmin");
    if (is_admin) { 
    if(!cJSON_IsBool(is_admin))
    {
    goto end; //Bool
    }
    }

    // tenant_enrollment_update_dto->is_disabled
    cJSON *is_disabled = cJSON_GetObjectItemCaseSensitive(tenant_enrollment_update_dtoJSON, "isDisabled");
    if (is_disabled) { 
    if(!cJSON_IsBool(is_disabled))
    {
    goto end; //Bool
    }
    }


    tenant_enrollment_update_dto_local_var = tenant_enrollment_update_dto_create (
        is_admin ? is_admin->valueint : 0,
        is_disabled ? is_disabled->valueint : 0
        );

    return tenant_enrollment_update_dto_local_var;
end:
    return NULL;

}
