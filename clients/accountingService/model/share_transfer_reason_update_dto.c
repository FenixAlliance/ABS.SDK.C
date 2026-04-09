#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "share_transfer_reason_update_dto.h"



share_transfer_reason_update_dto_t *share_transfer_reason_update_dto_create(
    char *name,
    char *description,
    char *enrollment_id,
    char *tenant_id
    ) {
    share_transfer_reason_update_dto_t *share_transfer_reason_update_dto_local_var = malloc(sizeof(share_transfer_reason_update_dto_t));
    if (!share_transfer_reason_update_dto_local_var) {
        return NULL;
    }
    share_transfer_reason_update_dto_local_var->name = name;
    share_transfer_reason_update_dto_local_var->description = description;
    share_transfer_reason_update_dto_local_var->enrollment_id = enrollment_id;
    share_transfer_reason_update_dto_local_var->tenant_id = tenant_id;

    return share_transfer_reason_update_dto_local_var;
}


void share_transfer_reason_update_dto_free(share_transfer_reason_update_dto_t *share_transfer_reason_update_dto) {
    if(NULL == share_transfer_reason_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (share_transfer_reason_update_dto->name) {
        free(share_transfer_reason_update_dto->name);
        share_transfer_reason_update_dto->name = NULL;
    }
    if (share_transfer_reason_update_dto->description) {
        free(share_transfer_reason_update_dto->description);
        share_transfer_reason_update_dto->description = NULL;
    }
    if (share_transfer_reason_update_dto->enrollment_id) {
        free(share_transfer_reason_update_dto->enrollment_id);
        share_transfer_reason_update_dto->enrollment_id = NULL;
    }
    if (share_transfer_reason_update_dto->tenant_id) {
        free(share_transfer_reason_update_dto->tenant_id);
        share_transfer_reason_update_dto->tenant_id = NULL;
    }
    free(share_transfer_reason_update_dto);
}

cJSON *share_transfer_reason_update_dto_convertToJSON(share_transfer_reason_update_dto_t *share_transfer_reason_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // share_transfer_reason_update_dto->name
    if(share_transfer_reason_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", share_transfer_reason_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // share_transfer_reason_update_dto->description
    if(share_transfer_reason_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", share_transfer_reason_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // share_transfer_reason_update_dto->enrollment_id
    if(share_transfer_reason_update_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", share_transfer_reason_update_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // share_transfer_reason_update_dto->tenant_id
    if(share_transfer_reason_update_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", share_transfer_reason_update_dto->tenant_id) == NULL) {
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

share_transfer_reason_update_dto_t *share_transfer_reason_update_dto_parseFromJSON(cJSON *share_transfer_reason_update_dtoJSON){

    share_transfer_reason_update_dto_t *share_transfer_reason_update_dto_local_var = NULL;

    // share_transfer_reason_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(share_transfer_reason_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // share_transfer_reason_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(share_transfer_reason_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // share_transfer_reason_update_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(share_transfer_reason_update_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // share_transfer_reason_update_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(share_transfer_reason_update_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }


    share_transfer_reason_update_dto_local_var = share_transfer_reason_update_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL
        );

    return share_transfer_reason_update_dto_local_var;
end:
    return NULL;

}
