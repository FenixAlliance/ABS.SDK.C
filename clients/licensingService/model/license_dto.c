#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "license_dto.h"



license_dto_t *license_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *code,
    char *license_type_id,
    char *tenant_id,
    char *enrollment_id
    ) {
    license_dto_t *license_dto_local_var = malloc(sizeof(license_dto_t));
    if (!license_dto_local_var) {
        return NULL;
    }
    license_dto_local_var->id = id;
    license_dto_local_var->timestamp = timestamp;
    license_dto_local_var->title = title;
    license_dto_local_var->description = description;
    license_dto_local_var->code = code;
    license_dto_local_var->license_type_id = license_type_id;
    license_dto_local_var->tenant_id = tenant_id;
    license_dto_local_var->enrollment_id = enrollment_id;

    return license_dto_local_var;
}


void license_dto_free(license_dto_t *license_dto) {
    if(NULL == license_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (license_dto->id) {
        free(license_dto->id);
        license_dto->id = NULL;
    }
    if (license_dto->timestamp) {
        free(license_dto->timestamp);
        license_dto->timestamp = NULL;
    }
    if (license_dto->title) {
        free(license_dto->title);
        license_dto->title = NULL;
    }
    if (license_dto->description) {
        free(license_dto->description);
        license_dto->description = NULL;
    }
    if (license_dto->code) {
        free(license_dto->code);
        license_dto->code = NULL;
    }
    if (license_dto->license_type_id) {
        free(license_dto->license_type_id);
        license_dto->license_type_id = NULL;
    }
    if (license_dto->tenant_id) {
        free(license_dto->tenant_id);
        license_dto->tenant_id = NULL;
    }
    if (license_dto->enrollment_id) {
        free(license_dto->enrollment_id);
        license_dto->enrollment_id = NULL;
    }
    free(license_dto);
}

cJSON *license_dto_convertToJSON(license_dto_t *license_dto) {
    cJSON *item = cJSON_CreateObject();

    // license_dto->id
    if(license_dto->id) {
    if(cJSON_AddStringToObject(item, "id", license_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // license_dto->timestamp
    if(license_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", license_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // license_dto->title
    if(license_dto->title) {
    if(cJSON_AddStringToObject(item, "title", license_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // license_dto->description
    if(license_dto->description) {
    if(cJSON_AddStringToObject(item, "description", license_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // license_dto->code
    if(license_dto->code) {
    if(cJSON_AddStringToObject(item, "code", license_dto->code) == NULL) {
    goto fail; //String
    }
    }


    // license_dto->license_type_id
    if(license_dto->license_type_id) {
    if(cJSON_AddStringToObject(item, "licenseTypeId", license_dto->license_type_id) == NULL) {
    goto fail; //String
    }
    }


    // license_dto->tenant_id
    if(license_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", license_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // license_dto->enrollment_id
    if(license_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", license_dto->enrollment_id) == NULL) {
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

license_dto_t *license_dto_parseFromJSON(cJSON *license_dtoJSON){

    license_dto_t *license_dto_local_var = NULL;

    // license_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(license_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // license_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(license_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // license_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(license_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // license_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(license_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // license_dto->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(license_dtoJSON, "code");
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // license_dto->license_type_id
    cJSON *license_type_id = cJSON_GetObjectItemCaseSensitive(license_dtoJSON, "licenseTypeId");
    if (license_type_id) { 
    if(!cJSON_IsString(license_type_id) && !cJSON_IsNull(license_type_id))
    {
    goto end; //String
    }
    }

    // license_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(license_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // license_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(license_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    license_dto_local_var = license_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        license_type_id && !cJSON_IsNull(license_type_id) ? strdup(license_type_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return license_dto_local_var;
end:
    return NULL;

}
