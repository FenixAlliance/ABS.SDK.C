#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "simple_tenant_enrollment_dto.h"



simple_tenant_enrollment_dto_t *simple_tenant_enrollment_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *user_id
    ) {
    simple_tenant_enrollment_dto_t *simple_tenant_enrollment_dto_local_var = malloc(sizeof(simple_tenant_enrollment_dto_t));
    if (!simple_tenant_enrollment_dto_local_var) {
        return NULL;
    }
    simple_tenant_enrollment_dto_local_var->id = id;
    simple_tenant_enrollment_dto_local_var->timestamp = timestamp;
    simple_tenant_enrollment_dto_local_var->tenant_id = tenant_id;
    simple_tenant_enrollment_dto_local_var->user_id = user_id;

    return simple_tenant_enrollment_dto_local_var;
}


void simple_tenant_enrollment_dto_free(simple_tenant_enrollment_dto_t *simple_tenant_enrollment_dto) {
    if(NULL == simple_tenant_enrollment_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (simple_tenant_enrollment_dto->id) {
        free(simple_tenant_enrollment_dto->id);
        simple_tenant_enrollment_dto->id = NULL;
    }
    if (simple_tenant_enrollment_dto->timestamp) {
        free(simple_tenant_enrollment_dto->timestamp);
        simple_tenant_enrollment_dto->timestamp = NULL;
    }
    if (simple_tenant_enrollment_dto->tenant_id) {
        free(simple_tenant_enrollment_dto->tenant_id);
        simple_tenant_enrollment_dto->tenant_id = NULL;
    }
    if (simple_tenant_enrollment_dto->user_id) {
        free(simple_tenant_enrollment_dto->user_id);
        simple_tenant_enrollment_dto->user_id = NULL;
    }
    free(simple_tenant_enrollment_dto);
}

cJSON *simple_tenant_enrollment_dto_convertToJSON(simple_tenant_enrollment_dto_t *simple_tenant_enrollment_dto) {
    cJSON *item = cJSON_CreateObject();

    // simple_tenant_enrollment_dto->id
    if(simple_tenant_enrollment_dto->id) {
    if(cJSON_AddStringToObject(item, "id", simple_tenant_enrollment_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // simple_tenant_enrollment_dto->timestamp
    if(simple_tenant_enrollment_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", simple_tenant_enrollment_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // simple_tenant_enrollment_dto->tenant_id
    if(simple_tenant_enrollment_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", simple_tenant_enrollment_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // simple_tenant_enrollment_dto->user_id
    if(simple_tenant_enrollment_dto->user_id) {
    if(cJSON_AddStringToObject(item, "userId", simple_tenant_enrollment_dto->user_id) == NULL) {
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

simple_tenant_enrollment_dto_t *simple_tenant_enrollment_dto_parseFromJSON(cJSON *simple_tenant_enrollment_dtoJSON){

    simple_tenant_enrollment_dto_t *simple_tenant_enrollment_dto_local_var = NULL;

    // simple_tenant_enrollment_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(simple_tenant_enrollment_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // simple_tenant_enrollment_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(simple_tenant_enrollment_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // simple_tenant_enrollment_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(simple_tenant_enrollment_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // simple_tenant_enrollment_dto->user_id
    cJSON *user_id = cJSON_GetObjectItemCaseSensitive(simple_tenant_enrollment_dtoJSON, "userId");
    if (user_id) { 
    if(!cJSON_IsString(user_id) && !cJSON_IsNull(user_id))
    {
    goto end; //String
    }
    }


    simple_tenant_enrollment_dto_local_var = simple_tenant_enrollment_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        user_id && !cJSON_IsNull(user_id) ? strdup(user_id->valuestring) : NULL
        );

    return simple_tenant_enrollment_dto_local_var;
end:
    return NULL;

}
