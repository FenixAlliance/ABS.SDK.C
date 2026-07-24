#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "license_update_dto.h"



license_update_dto_t *license_update_dto_create(
    char *title,
    char *description,
    char *code,
    char *license_type_id
    ) {
    license_update_dto_t *license_update_dto_local_var = malloc(sizeof(license_update_dto_t));
    if (!license_update_dto_local_var) {
        return NULL;
    }
    license_update_dto_local_var->title = title;
    license_update_dto_local_var->description = description;
    license_update_dto_local_var->code = code;
    license_update_dto_local_var->license_type_id = license_type_id;

    return license_update_dto_local_var;
}


void license_update_dto_free(license_update_dto_t *license_update_dto) {
    if(NULL == license_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (license_update_dto->title) {
        free(license_update_dto->title);
        license_update_dto->title = NULL;
    }
    if (license_update_dto->description) {
        free(license_update_dto->description);
        license_update_dto->description = NULL;
    }
    if (license_update_dto->code) {
        free(license_update_dto->code);
        license_update_dto->code = NULL;
    }
    if (license_update_dto->license_type_id) {
        free(license_update_dto->license_type_id);
        license_update_dto->license_type_id = NULL;
    }
    free(license_update_dto);
}

cJSON *license_update_dto_convertToJSON(license_update_dto_t *license_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // license_update_dto->title
    if(license_update_dto->title) {
    if(cJSON_AddStringToObject(item, "title", license_update_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // license_update_dto->description
    if(license_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", license_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // license_update_dto->code
    if(license_update_dto->code) {
    if(cJSON_AddStringToObject(item, "code", license_update_dto->code) == NULL) {
    goto fail; //String
    }
    }


    // license_update_dto->license_type_id
    if(license_update_dto->license_type_id) {
    if(cJSON_AddStringToObject(item, "licenseTypeId", license_update_dto->license_type_id) == NULL) {
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

license_update_dto_t *license_update_dto_parseFromJSON(cJSON *license_update_dtoJSON){

    license_update_dto_t *license_update_dto_local_var = NULL;

    // license_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(license_update_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // license_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(license_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // license_update_dto->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(license_update_dtoJSON, "code");
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // license_update_dto->license_type_id
    cJSON *license_type_id = cJSON_GetObjectItemCaseSensitive(license_update_dtoJSON, "licenseTypeId");
    if (license_type_id) { 
    if(!cJSON_IsString(license_type_id) && !cJSON_IsNull(license_type_id))
    {
    goto end; //String
    }
    }


    license_update_dto_local_var = license_update_dto_create (
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        license_type_id && !cJSON_IsNull(license_type_id) ? strdup(license_type_id->valuestring) : NULL
        );

    return license_update_dto_local_var;
end:
    return NULL;

}
