#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "file_upload_dto.h"



file_upload_dto_t *file_upload_dto_create(
    char *id,
    char *timestamp,
    char *notes,
    char *title,
    char *author,
    int is_folder,
    char *hash,
    char *file_url,
    char *file_path,
    char *file_name,
    char *abstract,
    char *key_words,
    char *metadata,
    long file_length,
    char *content_type,
    char *parent_file_id,
    int valid_response,
    char *user_id,
    char *tenant_id,
    char *enrollment_id,
    char *social_profile_id,
    char *folder_path
    ) {
    file_upload_dto_t *file_upload_dto_local_var = malloc(sizeof(file_upload_dto_t));
    if (!file_upload_dto_local_var) {
        return NULL;
    }
    file_upload_dto_local_var->id = id;
    file_upload_dto_local_var->timestamp = timestamp;
    file_upload_dto_local_var->notes = notes;
    file_upload_dto_local_var->title = title;
    file_upload_dto_local_var->author = author;
    file_upload_dto_local_var->is_folder = is_folder;
    file_upload_dto_local_var->hash = hash;
    file_upload_dto_local_var->file_url = file_url;
    file_upload_dto_local_var->file_path = file_path;
    file_upload_dto_local_var->file_name = file_name;
    file_upload_dto_local_var->abstract = abstract;
    file_upload_dto_local_var->key_words = key_words;
    file_upload_dto_local_var->metadata = metadata;
    file_upload_dto_local_var->file_length = file_length;
    file_upload_dto_local_var->content_type = content_type;
    file_upload_dto_local_var->parent_file_id = parent_file_id;
    file_upload_dto_local_var->valid_response = valid_response;
    file_upload_dto_local_var->user_id = user_id;
    file_upload_dto_local_var->tenant_id = tenant_id;
    file_upload_dto_local_var->enrollment_id = enrollment_id;
    file_upload_dto_local_var->social_profile_id = social_profile_id;
    file_upload_dto_local_var->folder_path = folder_path;

    return file_upload_dto_local_var;
}


void file_upload_dto_free(file_upload_dto_t *file_upload_dto) {
    if(NULL == file_upload_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (file_upload_dto->id) {
        free(file_upload_dto->id);
        file_upload_dto->id = NULL;
    }
    if (file_upload_dto->timestamp) {
        free(file_upload_dto->timestamp);
        file_upload_dto->timestamp = NULL;
    }
    if (file_upload_dto->notes) {
        free(file_upload_dto->notes);
        file_upload_dto->notes = NULL;
    }
    if (file_upload_dto->title) {
        free(file_upload_dto->title);
        file_upload_dto->title = NULL;
    }
    if (file_upload_dto->author) {
        free(file_upload_dto->author);
        file_upload_dto->author = NULL;
    }
    if (file_upload_dto->hash) {
        free(file_upload_dto->hash);
        file_upload_dto->hash = NULL;
    }
    if (file_upload_dto->file_url) {
        free(file_upload_dto->file_url);
        file_upload_dto->file_url = NULL;
    }
    if (file_upload_dto->file_path) {
        free(file_upload_dto->file_path);
        file_upload_dto->file_path = NULL;
    }
    if (file_upload_dto->file_name) {
        free(file_upload_dto->file_name);
        file_upload_dto->file_name = NULL;
    }
    if (file_upload_dto->abstract) {
        free(file_upload_dto->abstract);
        file_upload_dto->abstract = NULL;
    }
    if (file_upload_dto->key_words) {
        free(file_upload_dto->key_words);
        file_upload_dto->key_words = NULL;
    }
    if (file_upload_dto->metadata) {
        free(file_upload_dto->metadata);
        file_upload_dto->metadata = NULL;
    }
    if (file_upload_dto->content_type) {
        free(file_upload_dto->content_type);
        file_upload_dto->content_type = NULL;
    }
    if (file_upload_dto->parent_file_id) {
        free(file_upload_dto->parent_file_id);
        file_upload_dto->parent_file_id = NULL;
    }
    if (file_upload_dto->user_id) {
        free(file_upload_dto->user_id);
        file_upload_dto->user_id = NULL;
    }
    if (file_upload_dto->tenant_id) {
        free(file_upload_dto->tenant_id);
        file_upload_dto->tenant_id = NULL;
    }
    if (file_upload_dto->enrollment_id) {
        free(file_upload_dto->enrollment_id);
        file_upload_dto->enrollment_id = NULL;
    }
    if (file_upload_dto->social_profile_id) {
        free(file_upload_dto->social_profile_id);
        file_upload_dto->social_profile_id = NULL;
    }
    if (file_upload_dto->folder_path) {
        free(file_upload_dto->folder_path);
        file_upload_dto->folder_path = NULL;
    }
    free(file_upload_dto);
}

cJSON *file_upload_dto_convertToJSON(file_upload_dto_t *file_upload_dto) {
    cJSON *item = cJSON_CreateObject();

    // file_upload_dto->id
    if(file_upload_dto->id) {
    if(cJSON_AddStringToObject(item, "id", file_upload_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // file_upload_dto->timestamp
    if(file_upload_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", file_upload_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // file_upload_dto->notes
    if(file_upload_dto->notes) {
    if(cJSON_AddStringToObject(item, "notes", file_upload_dto->notes) == NULL) {
    goto fail; //String
    }
    }


    // file_upload_dto->title
    if(file_upload_dto->title) {
    if(cJSON_AddStringToObject(item, "title", file_upload_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // file_upload_dto->author
    if(file_upload_dto->author) {
    if(cJSON_AddStringToObject(item, "author", file_upload_dto->author) == NULL) {
    goto fail; //String
    }
    }


    // file_upload_dto->is_folder
    if(file_upload_dto->is_folder) {
    if(cJSON_AddBoolToObject(item, "isFolder", file_upload_dto->is_folder) == NULL) {
    goto fail; //Bool
    }
    }


    // file_upload_dto->hash
    if(file_upload_dto->hash) {
    if(cJSON_AddStringToObject(item, "hash", file_upload_dto->hash) == NULL) {
    goto fail; //String
    }
    }


    // file_upload_dto->file_url
    if(file_upload_dto->file_url) {
    if(cJSON_AddStringToObject(item, "fileUrl", file_upload_dto->file_url) == NULL) {
    goto fail; //String
    }
    }


    // file_upload_dto->file_path
    if(file_upload_dto->file_path) {
    if(cJSON_AddStringToObject(item, "filePath", file_upload_dto->file_path) == NULL) {
    goto fail; //String
    }
    }


    // file_upload_dto->file_name
    if(file_upload_dto->file_name) {
    if(cJSON_AddStringToObject(item, "fileName", file_upload_dto->file_name) == NULL) {
    goto fail; //String
    }
    }


    // file_upload_dto->abstract
    if(file_upload_dto->abstract) {
    if(cJSON_AddStringToObject(item, "abstract", file_upload_dto->abstract) == NULL) {
    goto fail; //String
    }
    }


    // file_upload_dto->key_words
    if(file_upload_dto->key_words) {
    if(cJSON_AddStringToObject(item, "keyWords", file_upload_dto->key_words) == NULL) {
    goto fail; //String
    }
    }


    // file_upload_dto->metadata
    if(file_upload_dto->metadata) {
    if(cJSON_AddStringToObject(item, "metadata", file_upload_dto->metadata) == NULL) {
    goto fail; //String
    }
    }


    // file_upload_dto->file_length
    if(file_upload_dto->file_length) {
    if(cJSON_AddNumberToObject(item, "fileLength", file_upload_dto->file_length) == NULL) {
    goto fail; //Numeric
    }
    }


    // file_upload_dto->content_type
    if(file_upload_dto->content_type) {
    if(cJSON_AddStringToObject(item, "contentType", file_upload_dto->content_type) == NULL) {
    goto fail; //String
    }
    }


    // file_upload_dto->parent_file_id
    if(file_upload_dto->parent_file_id) {
    if(cJSON_AddStringToObject(item, "parentFileId", file_upload_dto->parent_file_id) == NULL) {
    goto fail; //String
    }
    }


    // file_upload_dto->valid_response
    if(file_upload_dto->valid_response) {
    if(cJSON_AddBoolToObject(item, "validResponse", file_upload_dto->valid_response) == NULL) {
    goto fail; //Bool
    }
    }


    // file_upload_dto->user_id
    if(file_upload_dto->user_id) {
    if(cJSON_AddStringToObject(item, "userId", file_upload_dto->user_id) == NULL) {
    goto fail; //String
    }
    }


    // file_upload_dto->tenant_id
    if(file_upload_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", file_upload_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // file_upload_dto->enrollment_id
    if(file_upload_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", file_upload_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // file_upload_dto->social_profile_id
    if(file_upload_dto->social_profile_id) {
    if(cJSON_AddStringToObject(item, "socialProfileId", file_upload_dto->social_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // file_upload_dto->folder_path
    if(file_upload_dto->folder_path) {
    if(cJSON_AddStringToObject(item, "folderPath", file_upload_dto->folder_path) == NULL) {
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

file_upload_dto_t *file_upload_dto_parseFromJSON(cJSON *file_upload_dtoJSON){

    file_upload_dto_t *file_upload_dto_local_var = NULL;

    // file_upload_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(file_upload_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // file_upload_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(file_upload_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // file_upload_dto->notes
    cJSON *notes = cJSON_GetObjectItemCaseSensitive(file_upload_dtoJSON, "notes");
    if (notes) { 
    if(!cJSON_IsString(notes) && !cJSON_IsNull(notes))
    {
    goto end; //String
    }
    }

    // file_upload_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(file_upload_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // file_upload_dto->author
    cJSON *author = cJSON_GetObjectItemCaseSensitive(file_upload_dtoJSON, "author");
    if (author) { 
    if(!cJSON_IsString(author) && !cJSON_IsNull(author))
    {
    goto end; //String
    }
    }

    // file_upload_dto->is_folder
    cJSON *is_folder = cJSON_GetObjectItemCaseSensitive(file_upload_dtoJSON, "isFolder");
    if (is_folder) { 
    if(!cJSON_IsBool(is_folder))
    {
    goto end; //Bool
    }
    }

    // file_upload_dto->hash
    cJSON *hash = cJSON_GetObjectItemCaseSensitive(file_upload_dtoJSON, "hash");
    if (hash) { 
    if(!cJSON_IsString(hash) && !cJSON_IsNull(hash))
    {
    goto end; //String
    }
    }

    // file_upload_dto->file_url
    cJSON *file_url = cJSON_GetObjectItemCaseSensitive(file_upload_dtoJSON, "fileUrl");
    if (file_url) { 
    if(!cJSON_IsString(file_url) && !cJSON_IsNull(file_url))
    {
    goto end; //String
    }
    }

    // file_upload_dto->file_path
    cJSON *file_path = cJSON_GetObjectItemCaseSensitive(file_upload_dtoJSON, "filePath");
    if (file_path) { 
    if(!cJSON_IsString(file_path) && !cJSON_IsNull(file_path))
    {
    goto end; //String
    }
    }

    // file_upload_dto->file_name
    cJSON *file_name = cJSON_GetObjectItemCaseSensitive(file_upload_dtoJSON, "fileName");
    if (file_name) { 
    if(!cJSON_IsString(file_name) && !cJSON_IsNull(file_name))
    {
    goto end; //String
    }
    }

    // file_upload_dto->abstract
    cJSON *abstract = cJSON_GetObjectItemCaseSensitive(file_upload_dtoJSON, "abstract");
    if (abstract) { 
    if(!cJSON_IsString(abstract) && !cJSON_IsNull(abstract))
    {
    goto end; //String
    }
    }

    // file_upload_dto->key_words
    cJSON *key_words = cJSON_GetObjectItemCaseSensitive(file_upload_dtoJSON, "keyWords");
    if (key_words) { 
    if(!cJSON_IsString(key_words) && !cJSON_IsNull(key_words))
    {
    goto end; //String
    }
    }

    // file_upload_dto->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(file_upload_dtoJSON, "metadata");
    if (metadata) { 
    if(!cJSON_IsString(metadata) && !cJSON_IsNull(metadata))
    {
    goto end; //String
    }
    }

    // file_upload_dto->file_length
    cJSON *file_length = cJSON_GetObjectItemCaseSensitive(file_upload_dtoJSON, "fileLength");
    if (file_length) { 
    if(!cJSON_IsNumber(file_length))
    {
    goto end; //Numeric
    }
    }

    // file_upload_dto->content_type
    cJSON *content_type = cJSON_GetObjectItemCaseSensitive(file_upload_dtoJSON, "contentType");
    if (content_type) { 
    if(!cJSON_IsString(content_type) && !cJSON_IsNull(content_type))
    {
    goto end; //String
    }
    }

    // file_upload_dto->parent_file_id
    cJSON *parent_file_id = cJSON_GetObjectItemCaseSensitive(file_upload_dtoJSON, "parentFileId");
    if (parent_file_id) { 
    if(!cJSON_IsString(parent_file_id) && !cJSON_IsNull(parent_file_id))
    {
    goto end; //String
    }
    }

    // file_upload_dto->valid_response
    cJSON *valid_response = cJSON_GetObjectItemCaseSensitive(file_upload_dtoJSON, "validResponse");
    if (valid_response) { 
    if(!cJSON_IsBool(valid_response))
    {
    goto end; //Bool
    }
    }

    // file_upload_dto->user_id
    cJSON *user_id = cJSON_GetObjectItemCaseSensitive(file_upload_dtoJSON, "userId");
    if (user_id) { 
    if(!cJSON_IsString(user_id) && !cJSON_IsNull(user_id))
    {
    goto end; //String
    }
    }

    // file_upload_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(file_upload_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // file_upload_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(file_upload_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // file_upload_dto->social_profile_id
    cJSON *social_profile_id = cJSON_GetObjectItemCaseSensitive(file_upload_dtoJSON, "socialProfileId");
    if (social_profile_id) { 
    if(!cJSON_IsString(social_profile_id) && !cJSON_IsNull(social_profile_id))
    {
    goto end; //String
    }
    }

    // file_upload_dto->folder_path
    cJSON *folder_path = cJSON_GetObjectItemCaseSensitive(file_upload_dtoJSON, "folderPath");
    if (folder_path) { 
    if(!cJSON_IsString(folder_path) && !cJSON_IsNull(folder_path))
    {
    goto end; //String
    }
    }


    file_upload_dto_local_var = file_upload_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        notes && !cJSON_IsNull(notes) ? strdup(notes->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        author && !cJSON_IsNull(author) ? strdup(author->valuestring) : NULL,
        is_folder ? is_folder->valueint : 0,
        hash && !cJSON_IsNull(hash) ? strdup(hash->valuestring) : NULL,
        file_url && !cJSON_IsNull(file_url) ? strdup(file_url->valuestring) : NULL,
        file_path && !cJSON_IsNull(file_path) ? strdup(file_path->valuestring) : NULL,
        file_name && !cJSON_IsNull(file_name) ? strdup(file_name->valuestring) : NULL,
        abstract && !cJSON_IsNull(abstract) ? strdup(abstract->valuestring) : NULL,
        key_words && !cJSON_IsNull(key_words) ? strdup(key_words->valuestring) : NULL,
        metadata && !cJSON_IsNull(metadata) ? strdup(metadata->valuestring) : NULL,
        file_length ? file_length->valuedouble : 0,
        content_type && !cJSON_IsNull(content_type) ? strdup(content_type->valuestring) : NULL,
        parent_file_id && !cJSON_IsNull(parent_file_id) ? strdup(parent_file_id->valuestring) : NULL,
        valid_response ? valid_response->valueint : 0,
        user_id && !cJSON_IsNull(user_id) ? strdup(user_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        social_profile_id && !cJSON_IsNull(social_profile_id) ? strdup(social_profile_id->valuestring) : NULL,
        folder_path && !cJSON_IsNull(folder_path) ? strdup(folder_path->valuestring) : NULL
        );

    return file_upload_dto_local_var;
end:
    return NULL;

}
