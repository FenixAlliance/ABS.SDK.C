#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "signing_profile_graphical_representation_update_dto.h"


char* signing_profile_graphical_representation_update_dto_kind_ToString(trustservice_signing_profile_graphical_representation_update_dto_KIND_e kind) {
    char* kindArray[] =  { "NULL", "Drawn", "UploadedImage", "Typed", "Initials", "Seal", "Stamp" };
    return kindArray[kind];
}

trustservice_signing_profile_graphical_representation_update_dto_KIND_e signing_profile_graphical_representation_update_dto_kind_FromString(char* kind){
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

signing_profile_graphical_representation_update_dto_t *signing_profile_graphical_representation_update_dto_create(
    trustservice_signing_profile_graphical_representation_update_dto_KIND_e kind,
    char *display_name,
    char *file_upload_id,
    char *sha256,
    char *vector_data_json,
    char *text_value,
    char *font_family,
    int is_default,
    int is_active
    ) {
    signing_profile_graphical_representation_update_dto_t *signing_profile_graphical_representation_update_dto_local_var = malloc(sizeof(signing_profile_graphical_representation_update_dto_t));
    if (!signing_profile_graphical_representation_update_dto_local_var) {
        return NULL;
    }
    signing_profile_graphical_representation_update_dto_local_var->kind = kind;
    signing_profile_graphical_representation_update_dto_local_var->display_name = display_name;
    signing_profile_graphical_representation_update_dto_local_var->file_upload_id = file_upload_id;
    signing_profile_graphical_representation_update_dto_local_var->sha256 = sha256;
    signing_profile_graphical_representation_update_dto_local_var->vector_data_json = vector_data_json;
    signing_profile_graphical_representation_update_dto_local_var->text_value = text_value;
    signing_profile_graphical_representation_update_dto_local_var->font_family = font_family;
    signing_profile_graphical_representation_update_dto_local_var->is_default = is_default;
    signing_profile_graphical_representation_update_dto_local_var->is_active = is_active;

    return signing_profile_graphical_representation_update_dto_local_var;
}


void signing_profile_graphical_representation_update_dto_free(signing_profile_graphical_representation_update_dto_t *signing_profile_graphical_representation_update_dto) {
    if(NULL == signing_profile_graphical_representation_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (signing_profile_graphical_representation_update_dto->display_name) {
        free(signing_profile_graphical_representation_update_dto->display_name);
        signing_profile_graphical_representation_update_dto->display_name = NULL;
    }
    if (signing_profile_graphical_representation_update_dto->file_upload_id) {
        free(signing_profile_graphical_representation_update_dto->file_upload_id);
        signing_profile_graphical_representation_update_dto->file_upload_id = NULL;
    }
    if (signing_profile_graphical_representation_update_dto->sha256) {
        free(signing_profile_graphical_representation_update_dto->sha256);
        signing_profile_graphical_representation_update_dto->sha256 = NULL;
    }
    if (signing_profile_graphical_representation_update_dto->vector_data_json) {
        free(signing_profile_graphical_representation_update_dto->vector_data_json);
        signing_profile_graphical_representation_update_dto->vector_data_json = NULL;
    }
    if (signing_profile_graphical_representation_update_dto->text_value) {
        free(signing_profile_graphical_representation_update_dto->text_value);
        signing_profile_graphical_representation_update_dto->text_value = NULL;
    }
    if (signing_profile_graphical_representation_update_dto->font_family) {
        free(signing_profile_graphical_representation_update_dto->font_family);
        signing_profile_graphical_representation_update_dto->font_family = NULL;
    }
    free(signing_profile_graphical_representation_update_dto);
}

cJSON *signing_profile_graphical_representation_update_dto_convertToJSON(signing_profile_graphical_representation_update_dto_t *signing_profile_graphical_representation_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // signing_profile_graphical_representation_update_dto->kind
    if(signing_profile_graphical_representation_update_dto->kind != trustservice_signing_profile_graphical_representation_update_dto_KIND_NULL) {
    if(cJSON_AddStringToObject(item, "kind", kindsigning_profile_graphical_representation_update_dto_ToString(signing_profile_graphical_representation_update_dto->kind)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // signing_profile_graphical_representation_update_dto->display_name
    if(signing_profile_graphical_representation_update_dto->display_name) {
    if(cJSON_AddStringToObject(item, "displayName", signing_profile_graphical_representation_update_dto->display_name) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_graphical_representation_update_dto->file_upload_id
    if(signing_profile_graphical_representation_update_dto->file_upload_id) {
    if(cJSON_AddStringToObject(item, "fileUploadId", signing_profile_graphical_representation_update_dto->file_upload_id) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_graphical_representation_update_dto->sha256
    if(signing_profile_graphical_representation_update_dto->sha256) {
    if(cJSON_AddStringToObject(item, "sha256", signing_profile_graphical_representation_update_dto->sha256) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_graphical_representation_update_dto->vector_data_json
    if(signing_profile_graphical_representation_update_dto->vector_data_json) {
    if(cJSON_AddStringToObject(item, "vectorDataJson", signing_profile_graphical_representation_update_dto->vector_data_json) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_graphical_representation_update_dto->text_value
    if(signing_profile_graphical_representation_update_dto->text_value) {
    if(cJSON_AddStringToObject(item, "textValue", signing_profile_graphical_representation_update_dto->text_value) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_graphical_representation_update_dto->font_family
    if(signing_profile_graphical_representation_update_dto->font_family) {
    if(cJSON_AddStringToObject(item, "fontFamily", signing_profile_graphical_representation_update_dto->font_family) == NULL) {
    goto fail; //String
    }
    }


    // signing_profile_graphical_representation_update_dto->is_default
    if(signing_profile_graphical_representation_update_dto->is_default) {
    if(cJSON_AddBoolToObject(item, "isDefault", signing_profile_graphical_representation_update_dto->is_default) == NULL) {
    goto fail; //Bool
    }
    }


    // signing_profile_graphical_representation_update_dto->is_active
    if(signing_profile_graphical_representation_update_dto->is_active) {
    if(cJSON_AddBoolToObject(item, "isActive", signing_profile_graphical_representation_update_dto->is_active) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

signing_profile_graphical_representation_update_dto_t *signing_profile_graphical_representation_update_dto_parseFromJSON(cJSON *signing_profile_graphical_representation_update_dtoJSON){

    signing_profile_graphical_representation_update_dto_t *signing_profile_graphical_representation_update_dto_local_var = NULL;

    // signing_profile_graphical_representation_update_dto->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(signing_profile_graphical_representation_update_dtoJSON, "kind");
    trustservice_signing_profile_graphical_representation_update_dto_KIND_e kindVariable;
    if (kind) { 
    if(!cJSON_IsString(kind))
    {
    goto end; //Enum
    }
    kindVariable = signing_profile_graphical_representation_update_dto_kind_FromString(kind->valuestring);
    }

    // signing_profile_graphical_representation_update_dto->display_name
    cJSON *display_name = cJSON_GetObjectItemCaseSensitive(signing_profile_graphical_representation_update_dtoJSON, "displayName");
    if (display_name) { 
    if(!cJSON_IsString(display_name) && !cJSON_IsNull(display_name))
    {
    goto end; //String
    }
    }

    // signing_profile_graphical_representation_update_dto->file_upload_id
    cJSON *file_upload_id = cJSON_GetObjectItemCaseSensitive(signing_profile_graphical_representation_update_dtoJSON, "fileUploadId");
    if (file_upload_id) { 
    if(!cJSON_IsString(file_upload_id) && !cJSON_IsNull(file_upload_id))
    {
    goto end; //String
    }
    }

    // signing_profile_graphical_representation_update_dto->sha256
    cJSON *sha256 = cJSON_GetObjectItemCaseSensitive(signing_profile_graphical_representation_update_dtoJSON, "sha256");
    if (sha256) { 
    if(!cJSON_IsString(sha256) && !cJSON_IsNull(sha256))
    {
    goto end; //String
    }
    }

    // signing_profile_graphical_representation_update_dto->vector_data_json
    cJSON *vector_data_json = cJSON_GetObjectItemCaseSensitive(signing_profile_graphical_representation_update_dtoJSON, "vectorDataJson");
    if (vector_data_json) { 
    if(!cJSON_IsString(vector_data_json) && !cJSON_IsNull(vector_data_json))
    {
    goto end; //String
    }
    }

    // signing_profile_graphical_representation_update_dto->text_value
    cJSON *text_value = cJSON_GetObjectItemCaseSensitive(signing_profile_graphical_representation_update_dtoJSON, "textValue");
    if (text_value) { 
    if(!cJSON_IsString(text_value) && !cJSON_IsNull(text_value))
    {
    goto end; //String
    }
    }

    // signing_profile_graphical_representation_update_dto->font_family
    cJSON *font_family = cJSON_GetObjectItemCaseSensitive(signing_profile_graphical_representation_update_dtoJSON, "fontFamily");
    if (font_family) { 
    if(!cJSON_IsString(font_family) && !cJSON_IsNull(font_family))
    {
    goto end; //String
    }
    }

    // signing_profile_graphical_representation_update_dto->is_default
    cJSON *is_default = cJSON_GetObjectItemCaseSensitive(signing_profile_graphical_representation_update_dtoJSON, "isDefault");
    if (is_default) { 
    if(!cJSON_IsBool(is_default))
    {
    goto end; //Bool
    }
    }

    // signing_profile_graphical_representation_update_dto->is_active
    cJSON *is_active = cJSON_GetObjectItemCaseSensitive(signing_profile_graphical_representation_update_dtoJSON, "isActive");
    if (is_active) { 
    if(!cJSON_IsBool(is_active))
    {
    goto end; //Bool
    }
    }


    signing_profile_graphical_representation_update_dto_local_var = signing_profile_graphical_representation_update_dto_create (
        kind ? kindVariable : trustservice_signing_profile_graphical_representation_update_dto_KIND_NULL,
        display_name && !cJSON_IsNull(display_name) ? strdup(display_name->valuestring) : NULL,
        file_upload_id && !cJSON_IsNull(file_upload_id) ? strdup(file_upload_id->valuestring) : NULL,
        sha256 && !cJSON_IsNull(sha256) ? strdup(sha256->valuestring) : NULL,
        vector_data_json && !cJSON_IsNull(vector_data_json) ? strdup(vector_data_json->valuestring) : NULL,
        text_value && !cJSON_IsNull(text_value) ? strdup(text_value->valuestring) : NULL,
        font_family && !cJSON_IsNull(font_family) ? strdup(font_family->valuestring) : NULL,
        is_default ? is_default->valueint : 0,
        is_active ? is_active->valueint : 0
        );

    return signing_profile_graphical_representation_update_dto_local_var;
end:
    return NULL;

}
