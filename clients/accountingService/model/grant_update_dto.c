#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "grant_update_dto.h"



grant_update_dto_t *grant_update_dto_create(
    char *tenant_id,
    char *enrollment_id
    ) {
    grant_update_dto_t *grant_update_dto_local_var = malloc(sizeof(grant_update_dto_t));
    if (!grant_update_dto_local_var) {
        return NULL;
    }
    grant_update_dto_local_var->tenant_id = tenant_id;
    grant_update_dto_local_var->enrollment_id = enrollment_id;

    return grant_update_dto_local_var;
}


void grant_update_dto_free(grant_update_dto_t *grant_update_dto) {
    if(NULL == grant_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (grant_update_dto->tenant_id) {
        free(grant_update_dto->tenant_id);
        grant_update_dto->tenant_id = NULL;
    }
    if (grant_update_dto->enrollment_id) {
        free(grant_update_dto->enrollment_id);
        grant_update_dto->enrollment_id = NULL;
    }
    free(grant_update_dto);
}

cJSON *grant_update_dto_convertToJSON(grant_update_dto_t *grant_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // grant_update_dto->tenant_id
    if(grant_update_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", grant_update_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // grant_update_dto->enrollment_id
    if(grant_update_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", grant_update_dto->enrollment_id) == NULL) {
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

grant_update_dto_t *grant_update_dto_parseFromJSON(cJSON *grant_update_dtoJSON){

    grant_update_dto_t *grant_update_dto_local_var = NULL;

    // grant_update_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(grant_update_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // grant_update_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(grant_update_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    grant_update_dto_local_var = grant_update_dto_create (
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return grant_update_dto_local_var;
end:
    return NULL;

}
