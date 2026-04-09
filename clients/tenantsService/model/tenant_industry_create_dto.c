#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tenant_industry_create_dto.h"



tenant_industry_create_dto_t *tenant_industry_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *parent_business_industry_id,
    char *business_profile_record_id
    ) {
    tenant_industry_create_dto_t *tenant_industry_create_dto_local_var = malloc(sizeof(tenant_industry_create_dto_t));
    if (!tenant_industry_create_dto_local_var) {
        return NULL;
    }
    tenant_industry_create_dto_local_var->id = id;
    tenant_industry_create_dto_local_var->timestamp = timestamp;
    tenant_industry_create_dto_local_var->name = name;
    tenant_industry_create_dto_local_var->parent_business_industry_id = parent_business_industry_id;
    tenant_industry_create_dto_local_var->business_profile_record_id = business_profile_record_id;

    return tenant_industry_create_dto_local_var;
}


void tenant_industry_create_dto_free(tenant_industry_create_dto_t *tenant_industry_create_dto) {
    if(NULL == tenant_industry_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (tenant_industry_create_dto->id) {
        free(tenant_industry_create_dto->id);
        tenant_industry_create_dto->id = NULL;
    }
    if (tenant_industry_create_dto->timestamp) {
        free(tenant_industry_create_dto->timestamp);
        tenant_industry_create_dto->timestamp = NULL;
    }
    if (tenant_industry_create_dto->name) {
        free(tenant_industry_create_dto->name);
        tenant_industry_create_dto->name = NULL;
    }
    if (tenant_industry_create_dto->parent_business_industry_id) {
        free(tenant_industry_create_dto->parent_business_industry_id);
        tenant_industry_create_dto->parent_business_industry_id = NULL;
    }
    if (tenant_industry_create_dto->business_profile_record_id) {
        free(tenant_industry_create_dto->business_profile_record_id);
        tenant_industry_create_dto->business_profile_record_id = NULL;
    }
    free(tenant_industry_create_dto);
}

cJSON *tenant_industry_create_dto_convertToJSON(tenant_industry_create_dto_t *tenant_industry_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // tenant_industry_create_dto->id
    if(tenant_industry_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", tenant_industry_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_industry_create_dto->timestamp
    if(tenant_industry_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", tenant_industry_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // tenant_industry_create_dto->name
    if(tenant_industry_create_dto->name) {
    if(cJSON_AddStringToObject(item, "name", tenant_industry_create_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // tenant_industry_create_dto->parent_business_industry_id
    if(tenant_industry_create_dto->parent_business_industry_id) {
    if(cJSON_AddStringToObject(item, "parentBusinessIndustryID", tenant_industry_create_dto->parent_business_industry_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_industry_create_dto->business_profile_record_id
    if(tenant_industry_create_dto->business_profile_record_id) {
    if(cJSON_AddStringToObject(item, "businessProfileRecordID", tenant_industry_create_dto->business_profile_record_id) == NULL) {
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

tenant_industry_create_dto_t *tenant_industry_create_dto_parseFromJSON(cJSON *tenant_industry_create_dtoJSON){

    tenant_industry_create_dto_t *tenant_industry_create_dto_local_var = NULL;

    // tenant_industry_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(tenant_industry_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // tenant_industry_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(tenant_industry_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // tenant_industry_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(tenant_industry_create_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // tenant_industry_create_dto->parent_business_industry_id
    cJSON *parent_business_industry_id = cJSON_GetObjectItemCaseSensitive(tenant_industry_create_dtoJSON, "parentBusinessIndustryID");
    if (parent_business_industry_id) { 
    if(!cJSON_IsString(parent_business_industry_id) && !cJSON_IsNull(parent_business_industry_id))
    {
    goto end; //String
    }
    }

    // tenant_industry_create_dto->business_profile_record_id
    cJSON *business_profile_record_id = cJSON_GetObjectItemCaseSensitive(tenant_industry_create_dtoJSON, "businessProfileRecordID");
    if (business_profile_record_id) { 
    if(!cJSON_IsString(business_profile_record_id) && !cJSON_IsNull(business_profile_record_id))
    {
    goto end; //String
    }
    }


    tenant_industry_create_dto_local_var = tenant_industry_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        parent_business_industry_id && !cJSON_IsNull(parent_business_industry_id) ? strdup(parent_business_industry_id->valuestring) : NULL,
        business_profile_record_id && !cJSON_IsNull(business_profile_record_id) ? strdup(business_profile_record_id->valuestring) : NULL
        );

    return tenant_industry_create_dto_local_var;
end:
    return NULL;

}
