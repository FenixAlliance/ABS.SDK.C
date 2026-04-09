#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tenant_enrollment_create_dto.h"



tenant_enrollment_create_dto_t *tenant_enrollment_create_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *user_id
    ) {
    tenant_enrollment_create_dto_t *tenant_enrollment_create_dto_local_var = malloc(sizeof(tenant_enrollment_create_dto_t));
    if (!tenant_enrollment_create_dto_local_var) {
        return NULL;
    }
    tenant_enrollment_create_dto_local_var->id = id;
    tenant_enrollment_create_dto_local_var->timestamp = timestamp;
    tenant_enrollment_create_dto_local_var->tenant_id = tenant_id;
    tenant_enrollment_create_dto_local_var->user_id = user_id;

    return tenant_enrollment_create_dto_local_var;
}


void tenant_enrollment_create_dto_free(tenant_enrollment_create_dto_t *tenant_enrollment_create_dto) {
    if(NULL == tenant_enrollment_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (tenant_enrollment_create_dto->id) {
        free(tenant_enrollment_create_dto->id);
        tenant_enrollment_create_dto->id = NULL;
    }
    if (tenant_enrollment_create_dto->timestamp) {
        free(tenant_enrollment_create_dto->timestamp);
        tenant_enrollment_create_dto->timestamp = NULL;
    }
    if (tenant_enrollment_create_dto->tenant_id) {
        free(tenant_enrollment_create_dto->tenant_id);
        tenant_enrollment_create_dto->tenant_id = NULL;
    }
    if (tenant_enrollment_create_dto->user_id) {
        free(tenant_enrollment_create_dto->user_id);
        tenant_enrollment_create_dto->user_id = NULL;
    }
    free(tenant_enrollment_create_dto);
}

cJSON *tenant_enrollment_create_dto_convertToJSON(tenant_enrollment_create_dto_t *tenant_enrollment_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // tenant_enrollment_create_dto->id
    if(tenant_enrollment_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", tenant_enrollment_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_enrollment_create_dto->timestamp
    if(tenant_enrollment_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", tenant_enrollment_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // tenant_enrollment_create_dto->tenant_id
    if(tenant_enrollment_create_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", tenant_enrollment_create_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_enrollment_create_dto->user_id
    if(tenant_enrollment_create_dto->user_id) {
    if(cJSON_AddStringToObject(item, "userId", tenant_enrollment_create_dto->user_id) == NULL) {
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

tenant_enrollment_create_dto_t *tenant_enrollment_create_dto_parseFromJSON(cJSON *tenant_enrollment_create_dtoJSON){

    tenant_enrollment_create_dto_t *tenant_enrollment_create_dto_local_var = NULL;

    // tenant_enrollment_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(tenant_enrollment_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // tenant_enrollment_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(tenant_enrollment_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // tenant_enrollment_create_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(tenant_enrollment_create_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // tenant_enrollment_create_dto->user_id
    cJSON *user_id = cJSON_GetObjectItemCaseSensitive(tenant_enrollment_create_dtoJSON, "userId");
    if (user_id) { 
    if(!cJSON_IsString(user_id) && !cJSON_IsNull(user_id))
    {
    goto end; //String
    }
    }


    tenant_enrollment_create_dto_local_var = tenant_enrollment_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        user_id && !cJSON_IsNull(user_id) ? strdup(user_id->valuestring) : NULL
        );

    return tenant_enrollment_create_dto_local_var;
end:
    return NULL;

}
