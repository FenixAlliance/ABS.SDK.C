#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "fiscal_responsibility_update_dto.h"



fiscal_responsibility_update_dto_t *fiscal_responsibility_update_dto_create(
    char *code,
    char *name,
    char *fiscal_authority_id,
    char *tenant_id,
    char *enrollment_id
    ) {
    fiscal_responsibility_update_dto_t *fiscal_responsibility_update_dto_local_var = malloc(sizeof(fiscal_responsibility_update_dto_t));
    if (!fiscal_responsibility_update_dto_local_var) {
        return NULL;
    }
    fiscal_responsibility_update_dto_local_var->code = code;
    fiscal_responsibility_update_dto_local_var->name = name;
    fiscal_responsibility_update_dto_local_var->fiscal_authority_id = fiscal_authority_id;
    fiscal_responsibility_update_dto_local_var->tenant_id = tenant_id;
    fiscal_responsibility_update_dto_local_var->enrollment_id = enrollment_id;

    return fiscal_responsibility_update_dto_local_var;
}


void fiscal_responsibility_update_dto_free(fiscal_responsibility_update_dto_t *fiscal_responsibility_update_dto) {
    if(NULL == fiscal_responsibility_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (fiscal_responsibility_update_dto->code) {
        free(fiscal_responsibility_update_dto->code);
        fiscal_responsibility_update_dto->code = NULL;
    }
    if (fiscal_responsibility_update_dto->name) {
        free(fiscal_responsibility_update_dto->name);
        fiscal_responsibility_update_dto->name = NULL;
    }
    if (fiscal_responsibility_update_dto->fiscal_authority_id) {
        free(fiscal_responsibility_update_dto->fiscal_authority_id);
        fiscal_responsibility_update_dto->fiscal_authority_id = NULL;
    }
    if (fiscal_responsibility_update_dto->tenant_id) {
        free(fiscal_responsibility_update_dto->tenant_id);
        fiscal_responsibility_update_dto->tenant_id = NULL;
    }
    if (fiscal_responsibility_update_dto->enrollment_id) {
        free(fiscal_responsibility_update_dto->enrollment_id);
        fiscal_responsibility_update_dto->enrollment_id = NULL;
    }
    free(fiscal_responsibility_update_dto);
}

cJSON *fiscal_responsibility_update_dto_convertToJSON(fiscal_responsibility_update_dto_t *fiscal_responsibility_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // fiscal_responsibility_update_dto->code
    if(fiscal_responsibility_update_dto->code) {
    if(cJSON_AddStringToObject(item, "code", fiscal_responsibility_update_dto->code) == NULL) {
    goto fail; //String
    }
    }


    // fiscal_responsibility_update_dto->name
    if(fiscal_responsibility_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", fiscal_responsibility_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // fiscal_responsibility_update_dto->fiscal_authority_id
    if(fiscal_responsibility_update_dto->fiscal_authority_id) {
    if(cJSON_AddStringToObject(item, "fiscalAuthorityId", fiscal_responsibility_update_dto->fiscal_authority_id) == NULL) {
    goto fail; //String
    }
    }


    // fiscal_responsibility_update_dto->tenant_id
    if(fiscal_responsibility_update_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", fiscal_responsibility_update_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // fiscal_responsibility_update_dto->enrollment_id
    if(fiscal_responsibility_update_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", fiscal_responsibility_update_dto->enrollment_id) == NULL) {
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

fiscal_responsibility_update_dto_t *fiscal_responsibility_update_dto_parseFromJSON(cJSON *fiscal_responsibility_update_dtoJSON){

    fiscal_responsibility_update_dto_t *fiscal_responsibility_update_dto_local_var = NULL;

    // fiscal_responsibility_update_dto->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(fiscal_responsibility_update_dtoJSON, "code");
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // fiscal_responsibility_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(fiscal_responsibility_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // fiscal_responsibility_update_dto->fiscal_authority_id
    cJSON *fiscal_authority_id = cJSON_GetObjectItemCaseSensitive(fiscal_responsibility_update_dtoJSON, "fiscalAuthorityId");
    if (fiscal_authority_id) { 
    if(!cJSON_IsString(fiscal_authority_id) && !cJSON_IsNull(fiscal_authority_id))
    {
    goto end; //String
    }
    }

    // fiscal_responsibility_update_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(fiscal_responsibility_update_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // fiscal_responsibility_update_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(fiscal_responsibility_update_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    fiscal_responsibility_update_dto_local_var = fiscal_responsibility_update_dto_create (
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        fiscal_authority_id && !cJSON_IsNull(fiscal_authority_id) ? strdup(fiscal_authority_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return fiscal_responsibility_update_dto_local_var;
end:
    return NULL;

}
