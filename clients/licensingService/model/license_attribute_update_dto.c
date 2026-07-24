#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "license_attribute_update_dto.h"



license_attribute_update_dto_t *license_attribute_update_dto_create(
    char *code,
    char *name,
    char *description,
    char *license_type_id
    ) {
    license_attribute_update_dto_t *license_attribute_update_dto_local_var = malloc(sizeof(license_attribute_update_dto_t));
    if (!license_attribute_update_dto_local_var) {
        return NULL;
    }
    license_attribute_update_dto_local_var->code = code;
    license_attribute_update_dto_local_var->name = name;
    license_attribute_update_dto_local_var->description = description;
    license_attribute_update_dto_local_var->license_type_id = license_type_id;

    return license_attribute_update_dto_local_var;
}


void license_attribute_update_dto_free(license_attribute_update_dto_t *license_attribute_update_dto) {
    if(NULL == license_attribute_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (license_attribute_update_dto->code) {
        free(license_attribute_update_dto->code);
        license_attribute_update_dto->code = NULL;
    }
    if (license_attribute_update_dto->name) {
        free(license_attribute_update_dto->name);
        license_attribute_update_dto->name = NULL;
    }
    if (license_attribute_update_dto->description) {
        free(license_attribute_update_dto->description);
        license_attribute_update_dto->description = NULL;
    }
    if (license_attribute_update_dto->license_type_id) {
        free(license_attribute_update_dto->license_type_id);
        license_attribute_update_dto->license_type_id = NULL;
    }
    free(license_attribute_update_dto);
}

cJSON *license_attribute_update_dto_convertToJSON(license_attribute_update_dto_t *license_attribute_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // license_attribute_update_dto->code
    if(license_attribute_update_dto->code) {
    if(cJSON_AddStringToObject(item, "code", license_attribute_update_dto->code) == NULL) {
    goto fail; //String
    }
    }


    // license_attribute_update_dto->name
    if(license_attribute_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", license_attribute_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // license_attribute_update_dto->description
    if(license_attribute_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", license_attribute_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // license_attribute_update_dto->license_type_id
    if(license_attribute_update_dto->license_type_id) {
    if(cJSON_AddStringToObject(item, "licenseTypeId", license_attribute_update_dto->license_type_id) == NULL) {
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

license_attribute_update_dto_t *license_attribute_update_dto_parseFromJSON(cJSON *license_attribute_update_dtoJSON){

    license_attribute_update_dto_t *license_attribute_update_dto_local_var = NULL;

    // license_attribute_update_dto->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(license_attribute_update_dtoJSON, "code");
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // license_attribute_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(license_attribute_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // license_attribute_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(license_attribute_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // license_attribute_update_dto->license_type_id
    cJSON *license_type_id = cJSON_GetObjectItemCaseSensitive(license_attribute_update_dtoJSON, "licenseTypeId");
    if (license_type_id) { 
    if(!cJSON_IsString(license_type_id) && !cJSON_IsNull(license_type_id))
    {
    goto end; //String
    }
    }


    license_attribute_update_dto_local_var = license_attribute_update_dto_create (
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        license_type_id && !cJSON_IsNull(license_type_id) ? strdup(license_type_id->valuestring) : NULL
        );

    return license_attribute_update_dto_local_var;
end:
    return NULL;

}
