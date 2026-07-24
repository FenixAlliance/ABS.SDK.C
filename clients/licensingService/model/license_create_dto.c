#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "license_create_dto.h"



license_create_dto_t *license_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *code,
    char *license_type_id
    ) {
    license_create_dto_t *license_create_dto_local_var = malloc(sizeof(license_create_dto_t));
    if (!license_create_dto_local_var) {
        return NULL;
    }
    license_create_dto_local_var->id = id;
    license_create_dto_local_var->timestamp = timestamp;
    license_create_dto_local_var->title = title;
    license_create_dto_local_var->description = description;
    license_create_dto_local_var->code = code;
    license_create_dto_local_var->license_type_id = license_type_id;

    return license_create_dto_local_var;
}


void license_create_dto_free(license_create_dto_t *license_create_dto) {
    if(NULL == license_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (license_create_dto->id) {
        free(license_create_dto->id);
        license_create_dto->id = NULL;
    }
    if (license_create_dto->timestamp) {
        free(license_create_dto->timestamp);
        license_create_dto->timestamp = NULL;
    }
    if (license_create_dto->title) {
        free(license_create_dto->title);
        license_create_dto->title = NULL;
    }
    if (license_create_dto->description) {
        free(license_create_dto->description);
        license_create_dto->description = NULL;
    }
    if (license_create_dto->code) {
        free(license_create_dto->code);
        license_create_dto->code = NULL;
    }
    if (license_create_dto->license_type_id) {
        free(license_create_dto->license_type_id);
        license_create_dto->license_type_id = NULL;
    }
    free(license_create_dto);
}

cJSON *license_create_dto_convertToJSON(license_create_dto_t *license_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // license_create_dto->id
    if(license_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", license_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // license_create_dto->timestamp
    if(license_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", license_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // license_create_dto->title
    if (!license_create_dto->title) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "title", license_create_dto->title) == NULL) {
    goto fail; //String
    }


    // license_create_dto->description
    if(license_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", license_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // license_create_dto->code
    if(license_create_dto->code) {
    if(cJSON_AddStringToObject(item, "code", license_create_dto->code) == NULL) {
    goto fail; //String
    }
    }


    // license_create_dto->license_type_id
    if(license_create_dto->license_type_id) {
    if(cJSON_AddStringToObject(item, "licenseTypeId", license_create_dto->license_type_id) == NULL) {
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

license_create_dto_t *license_create_dto_parseFromJSON(cJSON *license_create_dtoJSON){

    license_create_dto_t *license_create_dto_local_var = NULL;

    // license_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(license_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // license_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(license_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // license_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(license_create_dtoJSON, "title");
    if (!title) {
        goto end;
    }

    
    if(!cJSON_IsString(title))
    {
    goto end; //String
    }

    // license_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(license_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // license_create_dto->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(license_create_dtoJSON, "code");
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // license_create_dto->license_type_id
    cJSON *license_type_id = cJSON_GetObjectItemCaseSensitive(license_create_dtoJSON, "licenseTypeId");
    if (license_type_id) { 
    if(!cJSON_IsString(license_type_id) && !cJSON_IsNull(license_type_id))
    {
    goto end; //String
    }
    }


    license_create_dto_local_var = license_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(title->valuestring),
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        license_type_id && !cJSON_IsNull(license_type_id) ? strdup(license_type_id->valuestring) : NULL
        );

    return license_create_dto_local_var;
end:
    return NULL;

}
