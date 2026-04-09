#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "deal_unit_flow_dto.h"



deal_unit_flow_dto_t *deal_unit_flow_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *parent_business_process_id,
    char *tenant_id,
    char *tenant_enrollment_id
    ) {
    deal_unit_flow_dto_t *deal_unit_flow_dto_local_var = malloc(sizeof(deal_unit_flow_dto_t));
    if (!deal_unit_flow_dto_local_var) {
        return NULL;
    }
    deal_unit_flow_dto_local_var->id = id;
    deal_unit_flow_dto_local_var->timestamp = timestamp;
    deal_unit_flow_dto_local_var->name = name;
    deal_unit_flow_dto_local_var->description = description;
    deal_unit_flow_dto_local_var->parent_business_process_id = parent_business_process_id;
    deal_unit_flow_dto_local_var->tenant_id = tenant_id;
    deal_unit_flow_dto_local_var->tenant_enrollment_id = tenant_enrollment_id;

    return deal_unit_flow_dto_local_var;
}


void deal_unit_flow_dto_free(deal_unit_flow_dto_t *deal_unit_flow_dto) {
    if(NULL == deal_unit_flow_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (deal_unit_flow_dto->id) {
        free(deal_unit_flow_dto->id);
        deal_unit_flow_dto->id = NULL;
    }
    if (deal_unit_flow_dto->timestamp) {
        free(deal_unit_flow_dto->timestamp);
        deal_unit_flow_dto->timestamp = NULL;
    }
    if (deal_unit_flow_dto->name) {
        free(deal_unit_flow_dto->name);
        deal_unit_flow_dto->name = NULL;
    }
    if (deal_unit_flow_dto->description) {
        free(deal_unit_flow_dto->description);
        deal_unit_flow_dto->description = NULL;
    }
    if (deal_unit_flow_dto->parent_business_process_id) {
        free(deal_unit_flow_dto->parent_business_process_id);
        deal_unit_flow_dto->parent_business_process_id = NULL;
    }
    if (deal_unit_flow_dto->tenant_id) {
        free(deal_unit_flow_dto->tenant_id);
        deal_unit_flow_dto->tenant_id = NULL;
    }
    if (deal_unit_flow_dto->tenant_enrollment_id) {
        free(deal_unit_flow_dto->tenant_enrollment_id);
        deal_unit_flow_dto->tenant_enrollment_id = NULL;
    }
    free(deal_unit_flow_dto);
}

cJSON *deal_unit_flow_dto_convertToJSON(deal_unit_flow_dto_t *deal_unit_flow_dto) {
    cJSON *item = cJSON_CreateObject();

    // deal_unit_flow_dto->id
    if(deal_unit_flow_dto->id) {
    if(cJSON_AddStringToObject(item, "id", deal_unit_flow_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_flow_dto->timestamp
    if(deal_unit_flow_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", deal_unit_flow_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // deal_unit_flow_dto->name
    if(deal_unit_flow_dto->name) {
    if(cJSON_AddStringToObject(item, "name", deal_unit_flow_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_flow_dto->description
    if(deal_unit_flow_dto->description) {
    if(cJSON_AddStringToObject(item, "description", deal_unit_flow_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_flow_dto->parent_business_process_id
    if(deal_unit_flow_dto->parent_business_process_id) {
    if(cJSON_AddStringToObject(item, "parentBusinessProcessId", deal_unit_flow_dto->parent_business_process_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_flow_dto->tenant_id
    if(deal_unit_flow_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", deal_unit_flow_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_flow_dto->tenant_enrollment_id
    if(deal_unit_flow_dto->tenant_enrollment_id) {
    if(cJSON_AddStringToObject(item, "tenantEnrollmentId", deal_unit_flow_dto->tenant_enrollment_id) == NULL) {
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

deal_unit_flow_dto_t *deal_unit_flow_dto_parseFromJSON(cJSON *deal_unit_flow_dtoJSON){

    deal_unit_flow_dto_t *deal_unit_flow_dto_local_var = NULL;

    // deal_unit_flow_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(deal_unit_flow_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // deal_unit_flow_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(deal_unit_flow_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // deal_unit_flow_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(deal_unit_flow_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // deal_unit_flow_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(deal_unit_flow_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // deal_unit_flow_dto->parent_business_process_id
    cJSON *parent_business_process_id = cJSON_GetObjectItemCaseSensitive(deal_unit_flow_dtoJSON, "parentBusinessProcessId");
    if (parent_business_process_id) { 
    if(!cJSON_IsString(parent_business_process_id) && !cJSON_IsNull(parent_business_process_id))
    {
    goto end; //String
    }
    }

    // deal_unit_flow_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(deal_unit_flow_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // deal_unit_flow_dto->tenant_enrollment_id
    cJSON *tenant_enrollment_id = cJSON_GetObjectItemCaseSensitive(deal_unit_flow_dtoJSON, "tenantEnrollmentId");
    if (tenant_enrollment_id) { 
    if(!cJSON_IsString(tenant_enrollment_id) && !cJSON_IsNull(tenant_enrollment_id))
    {
    goto end; //String
    }
    }


    deal_unit_flow_dto_local_var = deal_unit_flow_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        parent_business_process_id && !cJSON_IsNull(parent_business_process_id) ? strdup(parent_business_process_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        tenant_enrollment_id && !cJSON_IsNull(tenant_enrollment_id) ? strdup(tenant_enrollment_id->valuestring) : NULL
        );

    return deal_unit_flow_dto_local_var;
end:
    return NULL;

}
