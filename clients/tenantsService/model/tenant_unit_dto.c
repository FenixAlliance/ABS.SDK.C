#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tenant_unit_dto.h"



tenant_unit_dto_t *tenant_unit_dto_create(
    char *id,
    char *timestamp,
    char *business_id,
    char *business_profile_record_id,
    char *name,
    char *description,
    int disabled,
    char *business_unit_qualified_name,
    char *country_id,
    char *organization_profile_id,
    char *parent_business_unit_id
    ) {
    tenant_unit_dto_t *tenant_unit_dto_local_var = malloc(sizeof(tenant_unit_dto_t));
    if (!tenant_unit_dto_local_var) {
        return NULL;
    }
    tenant_unit_dto_local_var->id = id;
    tenant_unit_dto_local_var->timestamp = timestamp;
    tenant_unit_dto_local_var->business_id = business_id;
    tenant_unit_dto_local_var->business_profile_record_id = business_profile_record_id;
    tenant_unit_dto_local_var->name = name;
    tenant_unit_dto_local_var->description = description;
    tenant_unit_dto_local_var->disabled = disabled;
    tenant_unit_dto_local_var->business_unit_qualified_name = business_unit_qualified_name;
    tenant_unit_dto_local_var->country_id = country_id;
    tenant_unit_dto_local_var->organization_profile_id = organization_profile_id;
    tenant_unit_dto_local_var->parent_business_unit_id = parent_business_unit_id;

    return tenant_unit_dto_local_var;
}


void tenant_unit_dto_free(tenant_unit_dto_t *tenant_unit_dto) {
    if(NULL == tenant_unit_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (tenant_unit_dto->id) {
        free(tenant_unit_dto->id);
        tenant_unit_dto->id = NULL;
    }
    if (tenant_unit_dto->timestamp) {
        free(tenant_unit_dto->timestamp);
        tenant_unit_dto->timestamp = NULL;
    }
    if (tenant_unit_dto->business_id) {
        free(tenant_unit_dto->business_id);
        tenant_unit_dto->business_id = NULL;
    }
    if (tenant_unit_dto->business_profile_record_id) {
        free(tenant_unit_dto->business_profile_record_id);
        tenant_unit_dto->business_profile_record_id = NULL;
    }
    if (tenant_unit_dto->name) {
        free(tenant_unit_dto->name);
        tenant_unit_dto->name = NULL;
    }
    if (tenant_unit_dto->description) {
        free(tenant_unit_dto->description);
        tenant_unit_dto->description = NULL;
    }
    if (tenant_unit_dto->business_unit_qualified_name) {
        free(tenant_unit_dto->business_unit_qualified_name);
        tenant_unit_dto->business_unit_qualified_name = NULL;
    }
    if (tenant_unit_dto->country_id) {
        free(tenant_unit_dto->country_id);
        tenant_unit_dto->country_id = NULL;
    }
    if (tenant_unit_dto->organization_profile_id) {
        free(tenant_unit_dto->organization_profile_id);
        tenant_unit_dto->organization_profile_id = NULL;
    }
    if (tenant_unit_dto->parent_business_unit_id) {
        free(tenant_unit_dto->parent_business_unit_id);
        tenant_unit_dto->parent_business_unit_id = NULL;
    }
    free(tenant_unit_dto);
}

cJSON *tenant_unit_dto_convertToJSON(tenant_unit_dto_t *tenant_unit_dto) {
    cJSON *item = cJSON_CreateObject();

    // tenant_unit_dto->id
    if(tenant_unit_dto->id) {
    if(cJSON_AddStringToObject(item, "id", tenant_unit_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_unit_dto->timestamp
    if(tenant_unit_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", tenant_unit_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // tenant_unit_dto->business_id
    if(tenant_unit_dto->business_id) {
    if(cJSON_AddStringToObject(item, "businessID", tenant_unit_dto->business_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_unit_dto->business_profile_record_id
    if(tenant_unit_dto->business_profile_record_id) {
    if(cJSON_AddStringToObject(item, "businessProfileRecordID", tenant_unit_dto->business_profile_record_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_unit_dto->name
    if(tenant_unit_dto->name) {
    if(cJSON_AddStringToObject(item, "name", tenant_unit_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // tenant_unit_dto->description
    if(tenant_unit_dto->description) {
    if(cJSON_AddStringToObject(item, "description", tenant_unit_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // tenant_unit_dto->disabled
    if(tenant_unit_dto->disabled) {
    if(cJSON_AddBoolToObject(item, "disabled", tenant_unit_dto->disabled) == NULL) {
    goto fail; //Bool
    }
    }


    // tenant_unit_dto->business_unit_qualified_name
    if(tenant_unit_dto->business_unit_qualified_name) {
    if(cJSON_AddStringToObject(item, "businessUnitQualifiedName", tenant_unit_dto->business_unit_qualified_name) == NULL) {
    goto fail; //String
    }
    }


    // tenant_unit_dto->country_id
    if(tenant_unit_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryID", tenant_unit_dto->country_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_unit_dto->organization_profile_id
    if(tenant_unit_dto->organization_profile_id) {
    if(cJSON_AddStringToObject(item, "organizationProfileID", tenant_unit_dto->organization_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_unit_dto->parent_business_unit_id
    if(tenant_unit_dto->parent_business_unit_id) {
    if(cJSON_AddStringToObject(item, "parentBusinessUnitID", tenant_unit_dto->parent_business_unit_id) == NULL) {
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

tenant_unit_dto_t *tenant_unit_dto_parseFromJSON(cJSON *tenant_unit_dtoJSON){

    tenant_unit_dto_t *tenant_unit_dto_local_var = NULL;

    // tenant_unit_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(tenant_unit_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // tenant_unit_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(tenant_unit_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // tenant_unit_dto->business_id
    cJSON *business_id = cJSON_GetObjectItemCaseSensitive(tenant_unit_dtoJSON, "businessID");
    if (business_id) { 
    if(!cJSON_IsString(business_id) && !cJSON_IsNull(business_id))
    {
    goto end; //String
    }
    }

    // tenant_unit_dto->business_profile_record_id
    cJSON *business_profile_record_id = cJSON_GetObjectItemCaseSensitive(tenant_unit_dtoJSON, "businessProfileRecordID");
    if (business_profile_record_id) { 
    if(!cJSON_IsString(business_profile_record_id) && !cJSON_IsNull(business_profile_record_id))
    {
    goto end; //String
    }
    }

    // tenant_unit_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(tenant_unit_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // tenant_unit_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(tenant_unit_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // tenant_unit_dto->disabled
    cJSON *disabled = cJSON_GetObjectItemCaseSensitive(tenant_unit_dtoJSON, "disabled");
    if (disabled) { 
    if(!cJSON_IsBool(disabled))
    {
    goto end; //Bool
    }
    }

    // tenant_unit_dto->business_unit_qualified_name
    cJSON *business_unit_qualified_name = cJSON_GetObjectItemCaseSensitive(tenant_unit_dtoJSON, "businessUnitQualifiedName");
    if (business_unit_qualified_name) { 
    if(!cJSON_IsString(business_unit_qualified_name) && !cJSON_IsNull(business_unit_qualified_name))
    {
    goto end; //String
    }
    }

    // tenant_unit_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(tenant_unit_dtoJSON, "countryID");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }

    // tenant_unit_dto->organization_profile_id
    cJSON *organization_profile_id = cJSON_GetObjectItemCaseSensitive(tenant_unit_dtoJSON, "organizationProfileID");
    if (organization_profile_id) { 
    if(!cJSON_IsString(organization_profile_id) && !cJSON_IsNull(organization_profile_id))
    {
    goto end; //String
    }
    }

    // tenant_unit_dto->parent_business_unit_id
    cJSON *parent_business_unit_id = cJSON_GetObjectItemCaseSensitive(tenant_unit_dtoJSON, "parentBusinessUnitID");
    if (parent_business_unit_id) { 
    if(!cJSON_IsString(parent_business_unit_id) && !cJSON_IsNull(parent_business_unit_id))
    {
    goto end; //String
    }
    }


    tenant_unit_dto_local_var = tenant_unit_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        business_id && !cJSON_IsNull(business_id) ? strdup(business_id->valuestring) : NULL,
        business_profile_record_id && !cJSON_IsNull(business_profile_record_id) ? strdup(business_profile_record_id->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        disabled ? disabled->valueint : 0,
        business_unit_qualified_name && !cJSON_IsNull(business_unit_qualified_name) ? strdup(business_unit_qualified_name->valuestring) : NULL,
        country_id && !cJSON_IsNull(country_id) ? strdup(country_id->valuestring) : NULL,
        organization_profile_id && !cJSON_IsNull(organization_profile_id) ? strdup(organization_profile_id->valuestring) : NULL,
        parent_business_unit_id && !cJSON_IsNull(parent_business_unit_id) ? strdup(parent_business_unit_id->valuestring) : NULL
        );

    return tenant_unit_dto_local_var;
end:
    return NULL;

}
