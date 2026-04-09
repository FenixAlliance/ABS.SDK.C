#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "fiscal_responsibility_record_update_dto.h"



fiscal_responsibility_record_update_dto_t *fiscal_responsibility_record_update_dto_create(
    char *fiscal_responsibility_id,
    char *billing_profile_id,
    char *tenant_id,
    char *enrollment_id
    ) {
    fiscal_responsibility_record_update_dto_t *fiscal_responsibility_record_update_dto_local_var = malloc(sizeof(fiscal_responsibility_record_update_dto_t));
    if (!fiscal_responsibility_record_update_dto_local_var) {
        return NULL;
    }
    fiscal_responsibility_record_update_dto_local_var->fiscal_responsibility_id = fiscal_responsibility_id;
    fiscal_responsibility_record_update_dto_local_var->billing_profile_id = billing_profile_id;
    fiscal_responsibility_record_update_dto_local_var->tenant_id = tenant_id;
    fiscal_responsibility_record_update_dto_local_var->enrollment_id = enrollment_id;

    return fiscal_responsibility_record_update_dto_local_var;
}


void fiscal_responsibility_record_update_dto_free(fiscal_responsibility_record_update_dto_t *fiscal_responsibility_record_update_dto) {
    if(NULL == fiscal_responsibility_record_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (fiscal_responsibility_record_update_dto->fiscal_responsibility_id) {
        free(fiscal_responsibility_record_update_dto->fiscal_responsibility_id);
        fiscal_responsibility_record_update_dto->fiscal_responsibility_id = NULL;
    }
    if (fiscal_responsibility_record_update_dto->billing_profile_id) {
        free(fiscal_responsibility_record_update_dto->billing_profile_id);
        fiscal_responsibility_record_update_dto->billing_profile_id = NULL;
    }
    if (fiscal_responsibility_record_update_dto->tenant_id) {
        free(fiscal_responsibility_record_update_dto->tenant_id);
        fiscal_responsibility_record_update_dto->tenant_id = NULL;
    }
    if (fiscal_responsibility_record_update_dto->enrollment_id) {
        free(fiscal_responsibility_record_update_dto->enrollment_id);
        fiscal_responsibility_record_update_dto->enrollment_id = NULL;
    }
    free(fiscal_responsibility_record_update_dto);
}

cJSON *fiscal_responsibility_record_update_dto_convertToJSON(fiscal_responsibility_record_update_dto_t *fiscal_responsibility_record_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // fiscal_responsibility_record_update_dto->fiscal_responsibility_id
    if(fiscal_responsibility_record_update_dto->fiscal_responsibility_id) {
    if(cJSON_AddStringToObject(item, "fiscalResponsibilityId", fiscal_responsibility_record_update_dto->fiscal_responsibility_id) == NULL) {
    goto fail; //String
    }
    }


    // fiscal_responsibility_record_update_dto->billing_profile_id
    if(fiscal_responsibility_record_update_dto->billing_profile_id) {
    if(cJSON_AddStringToObject(item, "billingProfileId", fiscal_responsibility_record_update_dto->billing_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // fiscal_responsibility_record_update_dto->tenant_id
    if(fiscal_responsibility_record_update_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", fiscal_responsibility_record_update_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // fiscal_responsibility_record_update_dto->enrollment_id
    if(fiscal_responsibility_record_update_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", fiscal_responsibility_record_update_dto->enrollment_id) == NULL) {
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

fiscal_responsibility_record_update_dto_t *fiscal_responsibility_record_update_dto_parseFromJSON(cJSON *fiscal_responsibility_record_update_dtoJSON){

    fiscal_responsibility_record_update_dto_t *fiscal_responsibility_record_update_dto_local_var = NULL;

    // fiscal_responsibility_record_update_dto->fiscal_responsibility_id
    cJSON *fiscal_responsibility_id = cJSON_GetObjectItemCaseSensitive(fiscal_responsibility_record_update_dtoJSON, "fiscalResponsibilityId");
    if (fiscal_responsibility_id) { 
    if(!cJSON_IsString(fiscal_responsibility_id) && !cJSON_IsNull(fiscal_responsibility_id))
    {
    goto end; //String
    }
    }

    // fiscal_responsibility_record_update_dto->billing_profile_id
    cJSON *billing_profile_id = cJSON_GetObjectItemCaseSensitive(fiscal_responsibility_record_update_dtoJSON, "billingProfileId");
    if (billing_profile_id) { 
    if(!cJSON_IsString(billing_profile_id) && !cJSON_IsNull(billing_profile_id))
    {
    goto end; //String
    }
    }

    // fiscal_responsibility_record_update_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(fiscal_responsibility_record_update_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // fiscal_responsibility_record_update_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(fiscal_responsibility_record_update_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    fiscal_responsibility_record_update_dto_local_var = fiscal_responsibility_record_update_dto_create (
        fiscal_responsibility_id && !cJSON_IsNull(fiscal_responsibility_id) ? strdup(fiscal_responsibility_id->valuestring) : NULL,
        billing_profile_id && !cJSON_IsNull(billing_profile_id) ? strdup(billing_profile_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return fiscal_responsibility_record_update_dto_local_var;
end:
    return NULL;

}
