#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "license_attribute_dto.h"



license_attribute_dto_t *license_attribute_dto_create(
    char *id,
    char *timestamp,
    char *code,
    char *name,
    char *description,
    char *license_type_id,
    char *tenant_id,
    char *enrollment_id
    ) {
    license_attribute_dto_t *license_attribute_dto_local_var = malloc(sizeof(license_attribute_dto_t));
    if (!license_attribute_dto_local_var) {
        return NULL;
    }
    license_attribute_dto_local_var->id = id;
    license_attribute_dto_local_var->timestamp = timestamp;
    license_attribute_dto_local_var->code = code;
    license_attribute_dto_local_var->name = name;
    license_attribute_dto_local_var->description = description;
    license_attribute_dto_local_var->license_type_id = license_type_id;
    license_attribute_dto_local_var->tenant_id = tenant_id;
    license_attribute_dto_local_var->enrollment_id = enrollment_id;

    return license_attribute_dto_local_var;
}


void license_attribute_dto_free(license_attribute_dto_t *license_attribute_dto) {
    if(NULL == license_attribute_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (license_attribute_dto->id) {
        free(license_attribute_dto->id);
        license_attribute_dto->id = NULL;
    }
    if (license_attribute_dto->timestamp) {
        free(license_attribute_dto->timestamp);
        license_attribute_dto->timestamp = NULL;
    }
    if (license_attribute_dto->code) {
        free(license_attribute_dto->code);
        license_attribute_dto->code = NULL;
    }
    if (license_attribute_dto->name) {
        free(license_attribute_dto->name);
        license_attribute_dto->name = NULL;
    }
    if (license_attribute_dto->description) {
        free(license_attribute_dto->description);
        license_attribute_dto->description = NULL;
    }
    if (license_attribute_dto->license_type_id) {
        free(license_attribute_dto->license_type_id);
        license_attribute_dto->license_type_id = NULL;
    }
    if (license_attribute_dto->tenant_id) {
        free(license_attribute_dto->tenant_id);
        license_attribute_dto->tenant_id = NULL;
    }
    if (license_attribute_dto->enrollment_id) {
        free(license_attribute_dto->enrollment_id);
        license_attribute_dto->enrollment_id = NULL;
    }
    free(license_attribute_dto);
}

cJSON *license_attribute_dto_convertToJSON(license_attribute_dto_t *license_attribute_dto) {
    cJSON *item = cJSON_CreateObject();

    // license_attribute_dto->id
    if(license_attribute_dto->id) {
    if(cJSON_AddStringToObject(item, "id", license_attribute_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // license_attribute_dto->timestamp
    if(license_attribute_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", license_attribute_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // license_attribute_dto->code
    if(license_attribute_dto->code) {
    if(cJSON_AddStringToObject(item, "code", license_attribute_dto->code) == NULL) {
    goto fail; //String
    }
    }


    // license_attribute_dto->name
    if(license_attribute_dto->name) {
    if(cJSON_AddStringToObject(item, "name", license_attribute_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // license_attribute_dto->description
    if(license_attribute_dto->description) {
    if(cJSON_AddStringToObject(item, "description", license_attribute_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // license_attribute_dto->license_type_id
    if(license_attribute_dto->license_type_id) {
    if(cJSON_AddStringToObject(item, "licenseTypeId", license_attribute_dto->license_type_id) == NULL) {
    goto fail; //String
    }
    }


    // license_attribute_dto->tenant_id
    if(license_attribute_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", license_attribute_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // license_attribute_dto->enrollment_id
    if(license_attribute_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", license_attribute_dto->enrollment_id) == NULL) {
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

license_attribute_dto_t *license_attribute_dto_parseFromJSON(cJSON *license_attribute_dtoJSON){

    license_attribute_dto_t *license_attribute_dto_local_var = NULL;

    // license_attribute_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(license_attribute_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // license_attribute_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(license_attribute_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // license_attribute_dto->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(license_attribute_dtoJSON, "code");
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // license_attribute_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(license_attribute_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // license_attribute_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(license_attribute_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // license_attribute_dto->license_type_id
    cJSON *license_type_id = cJSON_GetObjectItemCaseSensitive(license_attribute_dtoJSON, "licenseTypeId");
    if (license_type_id) { 
    if(!cJSON_IsString(license_type_id) && !cJSON_IsNull(license_type_id))
    {
    goto end; //String
    }
    }

    // license_attribute_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(license_attribute_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // license_attribute_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(license_attribute_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    license_attribute_dto_local_var = license_attribute_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        license_type_id && !cJSON_IsNull(license_type_id) ? strdup(license_type_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return license_attribute_dto_local_var;
end:
    return NULL;

}
