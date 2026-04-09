#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tenant_department_dto.h"



tenant_department_dto_t *tenant_department_dto_create(
    char *id,
    char *timestamp,
    char *business_id,
    char *business_profile_record_id,
    char *name,
    char *description,
    int disabled,
    char *organization_profile_id,
    char *parent_department_id
    ) {
    tenant_department_dto_t *tenant_department_dto_local_var = malloc(sizeof(tenant_department_dto_t));
    if (!tenant_department_dto_local_var) {
        return NULL;
    }
    tenant_department_dto_local_var->id = id;
    tenant_department_dto_local_var->timestamp = timestamp;
    tenant_department_dto_local_var->business_id = business_id;
    tenant_department_dto_local_var->business_profile_record_id = business_profile_record_id;
    tenant_department_dto_local_var->name = name;
    tenant_department_dto_local_var->description = description;
    tenant_department_dto_local_var->disabled = disabled;
    tenant_department_dto_local_var->organization_profile_id = organization_profile_id;
    tenant_department_dto_local_var->parent_department_id = parent_department_id;

    return tenant_department_dto_local_var;
}


void tenant_department_dto_free(tenant_department_dto_t *tenant_department_dto) {
    if(NULL == tenant_department_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (tenant_department_dto->id) {
        free(tenant_department_dto->id);
        tenant_department_dto->id = NULL;
    }
    if (tenant_department_dto->timestamp) {
        free(tenant_department_dto->timestamp);
        tenant_department_dto->timestamp = NULL;
    }
    if (tenant_department_dto->business_id) {
        free(tenant_department_dto->business_id);
        tenant_department_dto->business_id = NULL;
    }
    if (tenant_department_dto->business_profile_record_id) {
        free(tenant_department_dto->business_profile_record_id);
        tenant_department_dto->business_profile_record_id = NULL;
    }
    if (tenant_department_dto->name) {
        free(tenant_department_dto->name);
        tenant_department_dto->name = NULL;
    }
    if (tenant_department_dto->description) {
        free(tenant_department_dto->description);
        tenant_department_dto->description = NULL;
    }
    if (tenant_department_dto->organization_profile_id) {
        free(tenant_department_dto->organization_profile_id);
        tenant_department_dto->organization_profile_id = NULL;
    }
    if (tenant_department_dto->parent_department_id) {
        free(tenant_department_dto->parent_department_id);
        tenant_department_dto->parent_department_id = NULL;
    }
    free(tenant_department_dto);
}

cJSON *tenant_department_dto_convertToJSON(tenant_department_dto_t *tenant_department_dto) {
    cJSON *item = cJSON_CreateObject();

    // tenant_department_dto->id
    if(tenant_department_dto->id) {
    if(cJSON_AddStringToObject(item, "id", tenant_department_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_department_dto->timestamp
    if(tenant_department_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", tenant_department_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // tenant_department_dto->business_id
    if(tenant_department_dto->business_id) {
    if(cJSON_AddStringToObject(item, "businessID", tenant_department_dto->business_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_department_dto->business_profile_record_id
    if(tenant_department_dto->business_profile_record_id) {
    if(cJSON_AddStringToObject(item, "businessProfileRecordID", tenant_department_dto->business_profile_record_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_department_dto->name
    if(tenant_department_dto->name) {
    if(cJSON_AddStringToObject(item, "name", tenant_department_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // tenant_department_dto->description
    if(tenant_department_dto->description) {
    if(cJSON_AddStringToObject(item, "description", tenant_department_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // tenant_department_dto->disabled
    if(tenant_department_dto->disabled) {
    if(cJSON_AddBoolToObject(item, "disabled", tenant_department_dto->disabled) == NULL) {
    goto fail; //Bool
    }
    }


    // tenant_department_dto->organization_profile_id
    if(tenant_department_dto->organization_profile_id) {
    if(cJSON_AddStringToObject(item, "organizationProfileID", tenant_department_dto->organization_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_department_dto->parent_department_id
    if(tenant_department_dto->parent_department_id) {
    if(cJSON_AddStringToObject(item, "parentDepartmentID", tenant_department_dto->parent_department_id) == NULL) {
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

tenant_department_dto_t *tenant_department_dto_parseFromJSON(cJSON *tenant_department_dtoJSON){

    tenant_department_dto_t *tenant_department_dto_local_var = NULL;

    // tenant_department_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(tenant_department_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // tenant_department_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(tenant_department_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // tenant_department_dto->business_id
    cJSON *business_id = cJSON_GetObjectItemCaseSensitive(tenant_department_dtoJSON, "businessID");
    if (business_id) { 
    if(!cJSON_IsString(business_id) && !cJSON_IsNull(business_id))
    {
    goto end; //String
    }
    }

    // tenant_department_dto->business_profile_record_id
    cJSON *business_profile_record_id = cJSON_GetObjectItemCaseSensitive(tenant_department_dtoJSON, "businessProfileRecordID");
    if (business_profile_record_id) { 
    if(!cJSON_IsString(business_profile_record_id) && !cJSON_IsNull(business_profile_record_id))
    {
    goto end; //String
    }
    }

    // tenant_department_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(tenant_department_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // tenant_department_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(tenant_department_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // tenant_department_dto->disabled
    cJSON *disabled = cJSON_GetObjectItemCaseSensitive(tenant_department_dtoJSON, "disabled");
    if (disabled) { 
    if(!cJSON_IsBool(disabled))
    {
    goto end; //Bool
    }
    }

    // tenant_department_dto->organization_profile_id
    cJSON *organization_profile_id = cJSON_GetObjectItemCaseSensitive(tenant_department_dtoJSON, "organizationProfileID");
    if (organization_profile_id) { 
    if(!cJSON_IsString(organization_profile_id) && !cJSON_IsNull(organization_profile_id))
    {
    goto end; //String
    }
    }

    // tenant_department_dto->parent_department_id
    cJSON *parent_department_id = cJSON_GetObjectItemCaseSensitive(tenant_department_dtoJSON, "parentDepartmentID");
    if (parent_department_id) { 
    if(!cJSON_IsString(parent_department_id) && !cJSON_IsNull(parent_department_id))
    {
    goto end; //String
    }
    }


    tenant_department_dto_local_var = tenant_department_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        business_id && !cJSON_IsNull(business_id) ? strdup(business_id->valuestring) : NULL,
        business_profile_record_id && !cJSON_IsNull(business_profile_record_id) ? strdup(business_profile_record_id->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        disabled ? disabled->valueint : 0,
        organization_profile_id && !cJSON_IsNull(organization_profile_id) ? strdup(organization_profile_id->valuestring) : NULL,
        parent_department_id && !cJSON_IsNull(parent_department_id) ? strdup(parent_department_id->valuestring) : NULL
        );

    return tenant_department_dto_local_var;
end:
    return NULL;

}
