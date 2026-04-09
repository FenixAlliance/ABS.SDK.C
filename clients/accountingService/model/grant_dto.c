#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "grant_dto.h"



grant_dto_t *grant_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *enrollment_id
    ) {
    grant_dto_t *grant_dto_local_var = malloc(sizeof(grant_dto_t));
    if (!grant_dto_local_var) {
        return NULL;
    }
    grant_dto_local_var->id = id;
    grant_dto_local_var->timestamp = timestamp;
    grant_dto_local_var->tenant_id = tenant_id;
    grant_dto_local_var->enrollment_id = enrollment_id;

    return grant_dto_local_var;
}


void grant_dto_free(grant_dto_t *grant_dto) {
    if(NULL == grant_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (grant_dto->id) {
        free(grant_dto->id);
        grant_dto->id = NULL;
    }
    if (grant_dto->timestamp) {
        free(grant_dto->timestamp);
        grant_dto->timestamp = NULL;
    }
    if (grant_dto->tenant_id) {
        free(grant_dto->tenant_id);
        grant_dto->tenant_id = NULL;
    }
    if (grant_dto->enrollment_id) {
        free(grant_dto->enrollment_id);
        grant_dto->enrollment_id = NULL;
    }
    free(grant_dto);
}

cJSON *grant_dto_convertToJSON(grant_dto_t *grant_dto) {
    cJSON *item = cJSON_CreateObject();

    // grant_dto->id
    if(grant_dto->id) {
    if(cJSON_AddStringToObject(item, "id", grant_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // grant_dto->timestamp
    if(grant_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", grant_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // grant_dto->tenant_id
    if(grant_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", grant_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // grant_dto->enrollment_id
    if(grant_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", grant_dto->enrollment_id) == NULL) {
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

grant_dto_t *grant_dto_parseFromJSON(cJSON *grant_dtoJSON){

    grant_dto_t *grant_dto_local_var = NULL;

    // grant_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(grant_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // grant_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(grant_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // grant_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(grant_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // grant_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(grant_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    grant_dto_local_var = grant_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return grant_dto_local_var;
end:
    return NULL;

}
