#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "signing_profile_graphical_representation_dto.h"


char* signing_profile_graphical_representation_dto_kind_ToString(trustservice_signing_profile_graphical_representation_dto_KIND_e kind) {
    char* kindArray[] =  { "NULL", "Drawn", "UploadedImage", "Typed", "Initials", "Seal", "Stamp" };
    return kindArray[kind];
}

trustservice_signing_profile_graphical_representation_dto_KIND_e signing_profile_graphical_representation_dto_kind_FromString(char* kind){
    int stringToReturn = 0;
    char *kindArray[] =  { "NULL", "Drawn", "UploadedImage", "Typed", "Initials", "Seal", "Stamp" };
    size_t sizeofArray = sizeof(kindArray) / sizeof(kindArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(kind, kindArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

signing_profile_graphical_representation_dto_t *signing_profile_graphical_representation_dto_create(
    char *id,
    char *timestamp,
    char *signing_profile_id,
    trustservice_signing_profile_graphical_representation_dto_KIND_e kind,
    char *display_name,
    char *file_upload_id,
    char *sha256,
    char *vector_data_json,
    char *text_value,
    char *font_family,
    int is_default,
    int is_active,
    char *tenant_id,
    char *enrollment_id,
    char *created_by_id,
    char *created_at_utc,
    char *signing_profile_name
    ) {
    signing_profile_graphical_representation_dto_t *signing_profile_graphical_representation_dto_local_var = malloc(sizeof(signing_profile_graphical_representation_dto_t));
    if (!signing_profile_graphical_representation_dto_local_var) {
        return NULL;
    }
    signing_profile_graphical_representation_dto_local_var->id = id;
    signing_profile_graphical_representation_dto_local_var->timestamp = timestamp;
    signing_profile_graphical_representation_dto_local_var->signing_profile_id = signing_profile_id;
    signing_profile_graphical_representation_dto_local_var->kind = kind;
    signing_profile_graphical_representation_dto_local_var->display_name = display_name;
    signing_profile_graphical_representation_dto_local_var->file_upload_id = file_upload_id;
    signing_profile_graphical_representation_dto_local_var->sha256 = sha256;
    signing_profile_graphical_representation_dto_local_var->vector_data_json = vector_data_json;
    signing_profile_graphical_representation_dto_local_var->text_value = text_value;
    signing_profile_graphical_representation_dto_local_var->font_family = font_family;
    signing_profile_graphical_representation_dto_local_var->is_default = is_default;
    signing_profile_graphical_representation_dto_local_var->is_active = is_active;
    signing_profile_graphical_representation_dto_local_var->tenant_id = tenant_id;
    signing_profile_graphical_representation_dto_local_var->enrollment_id = enrollment_id;
    signing_profile_graphical_representation_dto_local_var->created_by_id = created_by_id;
    signing_profile_graphical_representation_dto_local_var->created_at_utc = created_at_utc;
    signing_profile_graphical_representation_dto_local_var->signing_profile_name = signing_profile_name;

    return signing_profile_graphical_representation_dto_local_var;
}


void signing_profile_graphical_representation_dto_free(signing_profile_graphical_representation_dto_t *signing_profile_graphical_representation_dto) {
    if(NULL == signing_profile_graphical_representation_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (signing_profile_graphical_representation_dto->id) {
        free(signing_profile_graphical_representation_dto->id);
        signing_profile_graphical_representation_dto->id = NULL;
    }
    if (signing_profile_graphical_representation_dto->timestamp) {
        free(signing_profile_graphical_representation_dto->timestamp);
        signing_profile_graphical_representation_dto->timestamp = NULL;
    }
    if (signing_profile_graphical_representation_dto->signing_profile_id) {
        free(signing_profile_graphical_representation_dto->signing_profile_id);
        signing_profile_graphical_representation_dto->signing_profile_id = NULL;
    }
    if (signing_profile_graphical_representation_dto->display_name) {
        free(signing_profile_graphical_representation_dto->display_name);
        signing_profile_graphical_representation_dto->display_name = NULL;
    }
    if (signing_profile_graphical_representation_dto->file_upload_id) {
        free(signing_profile_graphical_representation_dto->file_upload_id);
        signing_profile_graphical_representation_dto->file_upload_id = NULL;
    }
    if (signing_profile_graphical_representation_dto->sha256) {
        free(signing_profile_graphical_representation_dto->sha256);
        signing_profile_graphical_representation_dto->sha256 = NULL;
    }
    if (signing_profile_graphical_representation_dto->vector_data_json) {
        free(signing_profile_graphical_representation_dto->vector_data_json);
        signing_profile_graphical_representation_dto->vector_data_json = NULL;
    }
    if (signing_profile_graphical_representation_dto->text_value) {
        free(signing_profile_graphical_representation_dto->text_value);
        signing_profile_graphical_representation_dto->text_value = NULL;
    }
    if (signing_profile_graphical_representation_dto->font_family) {
        free(signing_profile_graphical_representation_dto->font_family);
        signing_profile_graphical_representation_dto->font_family = NULL;
    }
    if (signing_profile_graphical_representation_dto->tenant_id) {
        free(signing_profile_graphical_representation_dto->tenant_id);
        signing_profile_graphical_representation_dto->tenant_id = NULL;
    }
    if (signing_profile_graphical_representation_dto->enrollment_id) {
        free(signing_profile_graphical_representation_dto->enrollment_id);
        signing_profile_graphical_representation_dto->enrollment_id = NULL;
    }
    if (signing_profile_graphical_representation_dto->created_by_id) {
        free(signing_profile_graphical_representation_dto->created_by_id);
        signing_profile_graphical_representation_dto->created_by_id = NULL;
    }
    if (signing_profile_graphical_representation_dto->created_at_utc) {
        free(signing_profile_graphical_representation_dto->created_at_utc);
        signing_profile_graphical_representation_dto->created_at_utc = NULL;
    }
    if (signing_profile_graphical_representation_dto->signing_profile_name) {
        free(signing_profile_graphical_representation_dto->signing_profile_name);
        signing_profile_graphical_representation_dto->signing_profile_name = NULL;
    }
    free(signing_profile_graphical_representation_dto);
}

cJSON *signing_profile_graphical_representation_dto_convertToJSON(signing_profile_graphical_representation_dto_t *signing_profile_graphical_representation_dto) {
    cJSON *item = cJSON_CreateObject();

    // signing_profile_graphical_representation_dto->id
    if(signing_profile_graphical_representation_dto->id) {
    if(cJSON_AddStringToObject(item, "id", signing_profile_graphical_representation_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_graphical_representation_dto->timestamp
    if(signing_profile_graphical_representation_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", signing_profile_graphical_representation_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // signing_profile_graphical_representation_dto->signing_profile_id
    if(signing_profile_graphical_representation_dto->signing_profile_id) {
    if(cJSON_AddStringToObject(item, "signingProfileId", signing_profile_graphical_representation_dto->signing_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_graphical_representation_dto->kind
    if(signing_profile_graphical_representation_dto->kind != trustservice_signing_profile_graphical_representation_dto_KIND_NULL) {
    if(cJSON_AddStringToObject(item, "kind", kindsigning_profile_graphical_representation_dto_ToString(signing_profile_graphical_representation_dto->kind)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // signing_profile_graphical_representation_dto->display_name
    if(signing_profile_graphical_representation_dto->display_name) {
    if(cJSON_AddStringToObject(item, "displayName", signing_profile_graphical_representation_dto->display_name) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_graphical_representation_dto->file_upload_id
    if(signing_profile_graphical_representation_dto->file_upload_id) {
    if(cJSON_AddStringToObject(item, "fileUploadId", signing_profile_graphical_representation_dto->file_upload_id) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_graphical_representation_dto->sha256
    if(signing_profile_graphical_representation_dto->sha256) {
    if(cJSON_AddStringToObject(item, "sha256", signing_profile_graphical_representation_dto->sha256) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_graphical_representation_dto->vector_data_json
    if(signing_profile_graphical_representation_dto->vector_data_json) {
    if(cJSON_AddStringToObject(item, "vectorDataJson", signing_profile_graphical_representation_dto->vector_data_json) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_graphical_representation_dto->text_value
    if(signing_profile_graphical_representation_dto->text_value) {
    if(cJSON_AddStringToObject(item, "textValue", signing_profile_graphical_representation_dto->text_value) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_graphical_representation_dto->font_family
    if(signing_profile_graphical_representation_dto->font_family) {
    if(cJSON_AddStringToObject(item, "fontFamily", signing_profile_graphical_representation_dto->font_family) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_graphical_representation_dto->is_default
    if(signing_profile_graphical_representation_dto->is_default) {
    if(cJSON_AddBoolToObject(item, "isDefault", signing_profile_graphical_representation_dto->is_default) == NULL) {
    goto fail; //Bool
    }
    }


    // signing_profile_graphical_representation_dto->is_active
    if(signing_profile_graphical_representation_dto->is_active) {
    if(cJSON_AddBoolToObject(item, "isActive", signing_profile_graphical_representation_dto->is_active) == NULL) {
    goto fail; //Bool
    }
    }


    // signing_profile_graphical_representation_dto->tenant_id
    if(signing_profile_graphical_representation_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", signing_profile_graphical_representation_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_graphical_representation_dto->enrollment_id
    if(signing_profile_graphical_representation_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", signing_profile_graphical_representation_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_graphical_representation_dto->created_by_id
    if(signing_profile_graphical_representation_dto->created_by_id) {
    if(cJSON_AddStringToObject(item, "createdById", signing_profile_graphical_representation_dto->created_by_id) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_graphical_representation_dto->created_at_utc
    if(signing_profile_graphical_representation_dto->created_at_utc) {
    if(cJSON_AddStringToObject(item, "createdAtUtc", signing_profile_graphical_representation_dto->created_at_utc) == NULL) {
    goto fail; //Date-Time
    }
    }


    // signing_profile_graphical_representation_dto->signing_profile_name
    if(signing_profile_graphical_representation_dto->signing_profile_name) {
    if(cJSON_AddStringToObject(item, "signingProfileName", signing_profile_graphical_representation_dto->signing_profile_name) == NULL) {
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

signing_profile_graphical_representation_dto_t *signing_profile_graphical_representation_dto_parseFromJSON(cJSON *signing_profile_graphical_representation_dtoJSON){

    signing_profile_graphical_representation_dto_t *signing_profile_graphical_representation_dto_local_var = NULL;

    // signing_profile_graphical_representation_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(signing_profile_graphical_representation_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // signing_profile_graphical_representation_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(signing_profile_graphical_representation_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // signing_profile_graphical_representation_dto->signing_profile_id
    cJSON *signing_profile_id = cJSON_GetObjectItemCaseSensitive(signing_profile_graphical_representation_dtoJSON, "signingProfileId");
    if (signing_profile_id) { 
    if(!cJSON_IsString(signing_profile_id) && !cJSON_IsNull(signing_profile_id))
    {
    goto end; //String
    }
    }

    // signing_profile_graphical_representation_dto->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(signing_profile_graphical_representation_dtoJSON, "kind");
    trustservice_signing_profile_graphical_representation_dto_KIND_e kindVariable;
    if (kind) { 
    if(!cJSON_IsString(kind))
    {
    goto end; //Enum
    }
    kindVariable = signing_profile_graphical_representation_dto_kind_FromString(kind->valuestring);
    }

    // signing_profile_graphical_representation_dto->display_name
    cJSON *display_name = cJSON_GetObjectItemCaseSensitive(signing_profile_graphical_representation_dtoJSON, "displayName");
    if (display_name) { 
    if(!cJSON_IsString(display_name) && !cJSON_IsNull(display_name))
    {
    goto end; //String
    }
    }

    // signing_profile_graphical_representation_dto->file_upload_id
    cJSON *file_upload_id = cJSON_GetObjectItemCaseSensitive(signing_profile_graphical_representation_dtoJSON, "fileUploadId");
    if (file_upload_id) { 
    if(!cJSON_IsString(file_upload_id) && !cJSON_IsNull(file_upload_id))
    {
    goto end; //String
    }
    }

    // signing_profile_graphical_representation_dto->sha256
    cJSON *sha256 = cJSON_GetObjectItemCaseSensitive(signing_profile_graphical_representation_dtoJSON, "sha256");
    if (sha256) { 
    if(!cJSON_IsString(sha256) && !cJSON_IsNull(sha256))
    {
    goto end; //String
    }
    }

    // signing_profile_graphical_representation_dto->vector_data_json
    cJSON *vector_data_json = cJSON_GetObjectItemCaseSensitive(signing_profile_graphical_representation_dtoJSON, "vectorDataJson");
    if (vector_data_json) { 
    if(!cJSON_IsString(vector_data_json) && !cJSON_IsNull(vector_data_json))
    {
    goto end; //String
    }
    }

    // signing_profile_graphical_representation_dto->text_value
    cJSON *text_value = cJSON_GetObjectItemCaseSensitive(signing_profile_graphical_representation_dtoJSON, "textValue");
    if (text_value) { 
    if(!cJSON_IsString(text_value) && !cJSON_IsNull(text_value))
    {
    goto end; //String
    }
    }

    // signing_profile_graphical_representation_dto->font_family
    cJSON *font_family = cJSON_GetObjectItemCaseSensitive(signing_profile_graphical_representation_dtoJSON, "fontFamily");
    if (font_family) { 
    if(!cJSON_IsString(font_family) && !cJSON_IsNull(font_family))
    {
    goto end; //String
    }
    }

    // signing_profile_graphical_representation_dto->is_default
    cJSON *is_default = cJSON_GetObjectItemCaseSensitive(signing_profile_graphical_representation_dtoJSON, "isDefault");
    if (is_default) { 
    if(!cJSON_IsBool(is_default))
    {
    goto end; //Bool
    }
    }

    // signing_profile_graphical_representation_dto->is_active
    cJSON *is_active = cJSON_GetObjectItemCaseSensitive(signing_profile_graphical_representation_dtoJSON, "isActive");
    if (is_active) { 
    if(!cJSON_IsBool(is_active))
    {
    goto end; //Bool
    }
    }

    // signing_profile_graphical_representation_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(signing_profile_graphical_representation_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // signing_profile_graphical_representation_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(signing_profile_graphical_representation_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // signing_profile_graphical_representation_dto->created_by_id
    cJSON *created_by_id = cJSON_GetObjectItemCaseSensitive(signing_profile_graphical_representation_dtoJSON, "createdById");
    if (created_by_id) { 
    if(!cJSON_IsString(created_by_id) && !cJSON_IsNull(created_by_id))
    {
    goto end; //String
    }
    }

    // signing_profile_graphical_representation_dto->created_at_utc
    cJSON *created_at_utc = cJSON_GetObjectItemCaseSensitive(signing_profile_graphical_representation_dtoJSON, "createdAtUtc");
    if (created_at_utc) { 
    if(!cJSON_IsString(created_at_utc) && !cJSON_IsNull(created_at_utc))
    {
    goto end; //DateTime
    }
    }

    // signing_profile_graphical_representation_dto->signing_profile_name
    cJSON *signing_profile_name = cJSON_GetObjectItemCaseSensitive(signing_profile_graphical_representation_dtoJSON, "signingProfileName");
    if (signing_profile_name) { 
    if(!cJSON_IsString(signing_profile_name) && !cJSON_IsNull(signing_profile_name))
    {
    goto end; //String
    }
    }


    signing_profile_graphical_representation_dto_local_var = signing_profile_graphical_representation_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        signing_profile_id && !cJSON_IsNull(signing_profile_id) ? strdup(signing_profile_id->valuestring) : NULL,
        kind ? kindVariable : trustservice_signing_profile_graphical_representation_dto_KIND_NULL,
        display_name && !cJSON_IsNull(display_name) ? strdup(display_name->valuestring) : NULL,
        file_upload_id && !cJSON_IsNull(file_upload_id) ? strdup(file_upload_id->valuestring) : NULL,
        sha256 && !cJSON_IsNull(sha256) ? strdup(sha256->valuestring) : NULL,
        vector_data_json && !cJSON_IsNull(vector_data_json) ? strdup(vector_data_json->valuestring) : NULL,
        text_value && !cJSON_IsNull(text_value) ? strdup(text_value->valuestring) : NULL,
        font_family && !cJSON_IsNull(font_family) ? strdup(font_family->valuestring) : NULL,
        is_default ? is_default->valueint : 0,
        is_active ? is_active->valueint : 0,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        created_by_id && !cJSON_IsNull(created_by_id) ? strdup(created_by_id->valuestring) : NULL,
        created_at_utc && !cJSON_IsNull(created_at_utc) ? strdup(created_at_utc->valuestring) : NULL,
        signing_profile_name && !cJSON_IsNull(signing_profile_name) ? strdup(signing_profile_name->valuestring) : NULL
        );

    return signing_profile_graphical_representation_dto_local_var;
end:
    return NULL;

}
