#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "fiscal_regime_dto.h"



fiscal_regime_dto_t *fiscal_regime_dto_create(
    char *id,
    char *timestamp,
    char *code,
    char *name,
    char *fiscal_authority_id,
    char *tenant_id,
    char *enrollment_id
    ) {
    fiscal_regime_dto_t *fiscal_regime_dto_local_var = malloc(sizeof(fiscal_regime_dto_t));
    if (!fiscal_regime_dto_local_var) {
        return NULL;
    }
    fiscal_regime_dto_local_var->id = id;
    fiscal_regime_dto_local_var->timestamp = timestamp;
    fiscal_regime_dto_local_var->code = code;
    fiscal_regime_dto_local_var->name = name;
    fiscal_regime_dto_local_var->fiscal_authority_id = fiscal_authority_id;
    fiscal_regime_dto_local_var->tenant_id = tenant_id;
    fiscal_regime_dto_local_var->enrollment_id = enrollment_id;

    return fiscal_regime_dto_local_var;
}


void fiscal_regime_dto_free(fiscal_regime_dto_t *fiscal_regime_dto) {
    if(NULL == fiscal_regime_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (fiscal_regime_dto->id) {
        free(fiscal_regime_dto->id);
        fiscal_regime_dto->id = NULL;
    }
    if (fiscal_regime_dto->timestamp) {
        free(fiscal_regime_dto->timestamp);
        fiscal_regime_dto->timestamp = NULL;
    }
    if (fiscal_regime_dto->code) {
        free(fiscal_regime_dto->code);
        fiscal_regime_dto->code = NULL;
    }
    if (fiscal_regime_dto->name) {
        free(fiscal_regime_dto->name);
        fiscal_regime_dto->name = NULL;
    }
    if (fiscal_regime_dto->fiscal_authority_id) {
        free(fiscal_regime_dto->fiscal_authority_id);
        fiscal_regime_dto->fiscal_authority_id = NULL;
    }
    if (fiscal_regime_dto->tenant_id) {
        free(fiscal_regime_dto->tenant_id);
        fiscal_regime_dto->tenant_id = NULL;
    }
    if (fiscal_regime_dto->enrollment_id) {
        free(fiscal_regime_dto->enrollment_id);
        fiscal_regime_dto->enrollment_id = NULL;
    }
    free(fiscal_regime_dto);
}

cJSON *fiscal_regime_dto_convertToJSON(fiscal_regime_dto_t *fiscal_regime_dto) {
    cJSON *item = cJSON_CreateObject();

    // fiscal_regime_dto->id
    if(fiscal_regime_dto->id) {
    if(cJSON_AddStringToObject(item, "id", fiscal_regime_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // fiscal_regime_dto->timestamp
    if(fiscal_regime_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", fiscal_regime_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // fiscal_regime_dto->code
    if(fiscal_regime_dto->code) {
    if(cJSON_AddStringToObject(item, "code", fiscal_regime_dto->code) == NULL) {
    goto fail; //String
    }
    }


    // fiscal_regime_dto->name
    if(fiscal_regime_dto->name) {
    if(cJSON_AddStringToObject(item, "name", fiscal_regime_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // fiscal_regime_dto->fiscal_authority_id
    if(fiscal_regime_dto->fiscal_authority_id) {
    if(cJSON_AddStringToObject(item, "fiscalAuthorityId", fiscal_regime_dto->fiscal_authority_id) == NULL) {
    goto fail; //String
    }
    }


    // fiscal_regime_dto->tenant_id
    if(fiscal_regime_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", fiscal_regime_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // fiscal_regime_dto->enrollment_id
    if(fiscal_regime_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", fiscal_regime_dto->enrollment_id) == NULL) {
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

fiscal_regime_dto_t *fiscal_regime_dto_parseFromJSON(cJSON *fiscal_regime_dtoJSON){

    fiscal_regime_dto_t *fiscal_regime_dto_local_var = NULL;

    // fiscal_regime_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(fiscal_regime_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // fiscal_regime_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(fiscal_regime_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // fiscal_regime_dto->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(fiscal_regime_dtoJSON, "code");
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // fiscal_regime_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(fiscal_regime_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // fiscal_regime_dto->fiscal_authority_id
    cJSON *fiscal_authority_id = cJSON_GetObjectItemCaseSensitive(fiscal_regime_dtoJSON, "fiscalAuthorityId");
    if (fiscal_authority_id) { 
    if(!cJSON_IsString(fiscal_authority_id) && !cJSON_IsNull(fiscal_authority_id))
    {
    goto end; //String
    }
    }

    // fiscal_regime_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(fiscal_regime_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // fiscal_regime_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(fiscal_regime_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    fiscal_regime_dto_local_var = fiscal_regime_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        fiscal_authority_id && !cJSON_IsNull(fiscal_authority_id) ? strdup(fiscal_authority_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return fiscal_regime_dto_local_var;
end:
    return NULL;

}
