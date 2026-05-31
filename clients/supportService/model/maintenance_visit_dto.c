#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "maintenance_visit_dto.h"



maintenance_visit_dto_t *maintenance_visit_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *business_profile_record_id
    ) {
    maintenance_visit_dto_t *maintenance_visit_dto_local_var = malloc(sizeof(maintenance_visit_dto_t));
    if (!maintenance_visit_dto_local_var) {
        return NULL;
    }
    maintenance_visit_dto_local_var->id = id;
    maintenance_visit_dto_local_var->timestamp = timestamp;
    maintenance_visit_dto_local_var->tenant_id = tenant_id;
    maintenance_visit_dto_local_var->business_profile_record_id = business_profile_record_id;

    return maintenance_visit_dto_local_var;
}


void maintenance_visit_dto_free(maintenance_visit_dto_t *maintenance_visit_dto) {
    if(NULL == maintenance_visit_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (maintenance_visit_dto->id) {
        free(maintenance_visit_dto->id);
        maintenance_visit_dto->id = NULL;
    }
    if (maintenance_visit_dto->timestamp) {
        free(maintenance_visit_dto->timestamp);
        maintenance_visit_dto->timestamp = NULL;
    }
    if (maintenance_visit_dto->tenant_id) {
        free(maintenance_visit_dto->tenant_id);
        maintenance_visit_dto->tenant_id = NULL;
    }
    if (maintenance_visit_dto->business_profile_record_id) {
        free(maintenance_visit_dto->business_profile_record_id);
        maintenance_visit_dto->business_profile_record_id = NULL;
    }
    free(maintenance_visit_dto);
}

cJSON *maintenance_visit_dto_convertToJSON(maintenance_visit_dto_t *maintenance_visit_dto) {
    cJSON *item = cJSON_CreateObject();

    // maintenance_visit_dto->id
    if(maintenance_visit_dto->id) {
    if(cJSON_AddStringToObject(item, "id", maintenance_visit_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // maintenance_visit_dto->timestamp
    if(maintenance_visit_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", maintenance_visit_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // maintenance_visit_dto->tenant_id
    if(maintenance_visit_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", maintenance_visit_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // maintenance_visit_dto->business_profile_record_id
    if(maintenance_visit_dto->business_profile_record_id) {
    if(cJSON_AddStringToObject(item, "businessProfileRecordId", maintenance_visit_dto->business_profile_record_id) == NULL) {
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

maintenance_visit_dto_t *maintenance_visit_dto_parseFromJSON(cJSON *maintenance_visit_dtoJSON){

    maintenance_visit_dto_t *maintenance_visit_dto_local_var = NULL;

    // maintenance_visit_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(maintenance_visit_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // maintenance_visit_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(maintenance_visit_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // maintenance_visit_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(maintenance_visit_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // maintenance_visit_dto->business_profile_record_id
    cJSON *business_profile_record_id = cJSON_GetObjectItemCaseSensitive(maintenance_visit_dtoJSON, "businessProfileRecordId");
    if (business_profile_record_id) { 
    if(!cJSON_IsString(business_profile_record_id) && !cJSON_IsNull(business_profile_record_id))
    {
    goto end; //String
    }
    }


    maintenance_visit_dto_local_var = maintenance_visit_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        business_profile_record_id && !cJSON_IsNull(business_profile_record_id) ? strdup(business_profile_record_id->valuestring) : NULL
        );

    return maintenance_visit_dto_local_var;
end:
    return NULL;

}
