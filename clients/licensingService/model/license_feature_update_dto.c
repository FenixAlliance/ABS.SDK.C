#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "license_feature_update_dto.h"



license_feature_update_dto_t *license_feature_update_dto_create(
    char *code,
    char *key,
    char *value,
    char *name,
    char *description,
    char *license_type_id
    ) {
    license_feature_update_dto_t *license_feature_update_dto_local_var = malloc(sizeof(license_feature_update_dto_t));
    if (!license_feature_update_dto_local_var) {
        return NULL;
    }
    license_feature_update_dto_local_var->code = code;
    license_feature_update_dto_local_var->key = key;
    license_feature_update_dto_local_var->value = value;
    license_feature_update_dto_local_var->name = name;
    license_feature_update_dto_local_var->description = description;
    license_feature_update_dto_local_var->license_type_id = license_type_id;

    return license_feature_update_dto_local_var;
}


void license_feature_update_dto_free(license_feature_update_dto_t *license_feature_update_dto) {
    if(NULL == license_feature_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (license_feature_update_dto->code) {
        free(license_feature_update_dto->code);
        license_feature_update_dto->code = NULL;
    }
    if (license_feature_update_dto->key) {
        free(license_feature_update_dto->key);
        license_feature_update_dto->key = NULL;
    }
    if (license_feature_update_dto->value) {
        free(license_feature_update_dto->value);
        license_feature_update_dto->value = NULL;
    }
    if (license_feature_update_dto->name) {
        free(license_feature_update_dto->name);
        license_feature_update_dto->name = NULL;
    }
    if (license_feature_update_dto->description) {
        free(license_feature_update_dto->description);
        license_feature_update_dto->description = NULL;
    }
    if (license_feature_update_dto->license_type_id) {
        free(license_feature_update_dto->license_type_id);
        license_feature_update_dto->license_type_id = NULL;
    }
    free(license_feature_update_dto);
}

cJSON *license_feature_update_dto_convertToJSON(license_feature_update_dto_t *license_feature_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // license_feature_update_dto->code
    if(license_feature_update_dto->code) {
    if(cJSON_AddStringToObject(item, "code", license_feature_update_dto->code) == NULL) {
    goto fail; //String
    }
    }


    // license_feature_update_dto->key
    if(license_feature_update_dto->key) {
    if(cJSON_AddStringToObject(item, "key", license_feature_update_dto->key) == NULL) {
    goto fail; //String
    }
    }


    // license_feature_update_dto->value
    if(license_feature_update_dto->value) {
    if(cJSON_AddStringToObject(item, "value", license_feature_update_dto->value) == NULL) {
    goto fail; //String
    }
    }


    // license_feature_update_dto->name
    if(license_feature_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", license_feature_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // license_feature_update_dto->description
    if(license_feature_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", license_feature_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // license_feature_update_dto->license_type_id
    if(license_feature_update_dto->license_type_id) {
    if(cJSON_AddStringToObject(item, "licenseTypeId", license_feature_update_dto->license_type_id) == NULL) {
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

license_feature_update_dto_t *license_feature_update_dto_parseFromJSON(cJSON *license_feature_update_dtoJSON){

    license_feature_update_dto_t *license_feature_update_dto_local_var = NULL;

    // license_feature_update_dto->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(license_feature_update_dtoJSON, "code");
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // license_feature_update_dto->key
    cJSON *key = cJSON_GetObjectItemCaseSensitive(license_feature_update_dtoJSON, "key");
    if (key) { 
    if(!cJSON_IsString(key) && !cJSON_IsNull(key))
    {
    goto end; //String
    }
    }

    // license_feature_update_dto->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(license_feature_update_dtoJSON, "value");
    if (value) { 
    if(!cJSON_IsString(value) && !cJSON_IsNull(value))
    {
    goto end; //String
    }
    }

    // license_feature_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(license_feature_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // license_feature_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(license_feature_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // license_feature_update_dto->license_type_id
    cJSON *license_type_id = cJSON_GetObjectItemCaseSensitive(license_feature_update_dtoJSON, "licenseTypeId");
    if (license_type_id) { 
    if(!cJSON_IsString(license_type_id) && !cJSON_IsNull(license_type_id))
    {
    goto end; //String
    }
    }


    license_feature_update_dto_local_var = license_feature_update_dto_create (
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        key && !cJSON_IsNull(key) ? strdup(key->valuestring) : NULL,
        value && !cJSON_IsNull(value) ? strdup(value->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        license_type_id && !cJSON_IsNull(license_type_id) ? strdup(license_type_id->valuestring) : NULL
        );

    return license_feature_update_dto_local_var;
end:
    return NULL;

}
