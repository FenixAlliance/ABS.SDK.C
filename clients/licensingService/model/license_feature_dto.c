#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "license_feature_dto.h"



license_feature_dto_t *license_feature_dto_create(
    char *id,
    char *timestamp,
    char *code,
    char *key,
    char *value,
    char *name,
    char *description,
    char *license_type_id,
    char *tenant_id,
    char *enrollment_id
    ) {
    license_feature_dto_t *license_feature_dto_local_var = malloc(sizeof(license_feature_dto_t));
    if (!license_feature_dto_local_var) {
        return NULL;
    }
    license_feature_dto_local_var->id = id;
    license_feature_dto_local_var->timestamp = timestamp;
    license_feature_dto_local_var->code = code;
    license_feature_dto_local_var->key = key;
    license_feature_dto_local_var->value = value;
    license_feature_dto_local_var->name = name;
    license_feature_dto_local_var->description = description;
    license_feature_dto_local_var->license_type_id = license_type_id;
    license_feature_dto_local_var->tenant_id = tenant_id;
    license_feature_dto_local_var->enrollment_id = enrollment_id;

    return license_feature_dto_local_var;
}


void license_feature_dto_free(license_feature_dto_t *license_feature_dto) {
    if(NULL == license_feature_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (license_feature_dto->id) {
        free(license_feature_dto->id);
        license_feature_dto->id = NULL;
    }
    if (license_feature_dto->timestamp) {
        free(license_feature_dto->timestamp);
        license_feature_dto->timestamp = NULL;
    }
    if (license_feature_dto->code) {
        free(license_feature_dto->code);
        license_feature_dto->code = NULL;
    }
    if (license_feature_dto->key) {
        free(license_feature_dto->key);
        license_feature_dto->key = NULL;
    }
    if (license_feature_dto->value) {
        free(license_feature_dto->value);
        license_feature_dto->value = NULL;
    }
    if (license_feature_dto->name) {
        free(license_feature_dto->name);
        license_feature_dto->name = NULL;
    }
    if (license_feature_dto->description) {
        free(license_feature_dto->description);
        license_feature_dto->description = NULL;
    }
    if (license_feature_dto->license_type_id) {
        free(license_feature_dto->license_type_id);
        license_feature_dto->license_type_id = NULL;
    }
    if (license_feature_dto->tenant_id) {
        free(license_feature_dto->tenant_id);
        license_feature_dto->tenant_id = NULL;
    }
    if (license_feature_dto->enrollment_id) {
        free(license_feature_dto->enrollment_id);
        license_feature_dto->enrollment_id = NULL;
    }
    free(license_feature_dto);
}

cJSON *license_feature_dto_convertToJSON(license_feature_dto_t *license_feature_dto) {
    cJSON *item = cJSON_CreateObject();

    // license_feature_dto->id
    if(license_feature_dto->id) {
    if(cJSON_AddStringToObject(item, "id", license_feature_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // license_feature_dto->timestamp
    if(license_feature_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", license_feature_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // license_feature_dto->code
    if(license_feature_dto->code) {
    if(cJSON_AddStringToObject(item, "code", license_feature_dto->code) == NULL) {
    goto fail; //String
    }
    }


    // license_feature_dto->key
    if(license_feature_dto->key) {
    if(cJSON_AddStringToObject(item, "key", license_feature_dto->key) == NULL) {
    goto fail; //String
    }
    }


    // license_feature_dto->value
    if(license_feature_dto->value) {
    if(cJSON_AddStringToObject(item, "value", license_feature_dto->value) == NULL) {
    goto fail; //String
    }
    }


    // license_feature_dto->name
    if(license_feature_dto->name) {
    if(cJSON_AddStringToObject(item, "name", license_feature_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // license_feature_dto->description
    if(license_feature_dto->description) {
    if(cJSON_AddStringToObject(item, "description", license_feature_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // license_feature_dto->license_type_id
    if(license_feature_dto->license_type_id) {
    if(cJSON_AddStringToObject(item, "licenseTypeId", license_feature_dto->license_type_id) == NULL) {
    goto fail; //String
    }
    }


    // license_feature_dto->tenant_id
    if(license_feature_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", license_feature_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // license_feature_dto->enrollment_id
    if(license_feature_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", license_feature_dto->enrollment_id) == NULL) {
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

license_feature_dto_t *license_feature_dto_parseFromJSON(cJSON *license_feature_dtoJSON){

    license_feature_dto_t *license_feature_dto_local_var = NULL;

    // license_feature_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(license_feature_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // license_feature_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(license_feature_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // license_feature_dto->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(license_feature_dtoJSON, "code");
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // license_feature_dto->key
    cJSON *key = cJSON_GetObjectItemCaseSensitive(license_feature_dtoJSON, "key");
    if (key) { 
    if(!cJSON_IsString(key) && !cJSON_IsNull(key))
    {
    goto end; //String
    }
    }

    // license_feature_dto->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(license_feature_dtoJSON, "value");
    if (value) { 
    if(!cJSON_IsString(value) && !cJSON_IsNull(value))
    {
    goto end; //String
    }
    }

    // license_feature_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(license_feature_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // license_feature_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(license_feature_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // license_feature_dto->license_type_id
    cJSON *license_type_id = cJSON_GetObjectItemCaseSensitive(license_feature_dtoJSON, "licenseTypeId");
    if (license_type_id) { 
    if(!cJSON_IsString(license_type_id) && !cJSON_IsNull(license_type_id))
    {
    goto end; //String
    }
    }

    // license_feature_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(license_feature_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // license_feature_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(license_feature_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    license_feature_dto_local_var = license_feature_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        key && !cJSON_IsNull(key) ? strdup(key->valuestring) : NULL,
        value && !cJSON_IsNull(value) ? strdup(value->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        license_type_id && !cJSON_IsNull(license_type_id) ? strdup(license_type_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return license_feature_dto_local_var;
end:
    return NULL;

}
