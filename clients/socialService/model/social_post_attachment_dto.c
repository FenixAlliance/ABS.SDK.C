#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "social_post_attachment_dto.h"



social_post_attachment_dto_t *social_post_attachment_dto_create(
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
    char *folder_path,
    char *social_post_id
    ) {
    social_post_attachment_dto_t *social_post_attachment_dto_local_var = malloc(sizeof(social_post_attachment_dto_t));
    if (!social_post_attachment_dto_local_var) {
        return NULL;
    }
    social_post_attachment_dto_local_var->id = id;
    social_post_attachment_dto_local_var->timestamp = timestamp;
    social_post_attachment_dto_local_var->notes = notes;
    social_post_attachment_dto_local_var->title = title;
    social_post_attachment_dto_local_var->author = author;
    social_post_attachment_dto_local_var->is_folder = is_folder;
    social_post_attachment_dto_local_var->hash = hash;
    social_post_attachment_dto_local_var->file_url = file_url;
    social_post_attachment_dto_local_var->file_path = file_path;
    social_post_attachment_dto_local_var->file_name = file_name;
    social_post_attachment_dto_local_var->abstract = abstract;
    social_post_attachment_dto_local_var->key_words = key_words;
    social_post_attachment_dto_local_var->metadata = metadata;
    social_post_attachment_dto_local_var->file_length = file_length;
    social_post_attachment_dto_local_var->content_type = content_type;
    social_post_attachment_dto_local_var->parent_file_id = parent_file_id;
    social_post_attachment_dto_local_var->valid_response = valid_response;
    social_post_attachment_dto_local_var->user_id = user_id;
    social_post_attachment_dto_local_var->tenant_id = tenant_id;
    social_post_attachment_dto_local_var->enrollment_id = enrollment_id;
    social_post_attachment_dto_local_var->social_profile_id = social_profile_id;
    social_post_attachment_dto_local_var->folder_path = folder_path;
    social_post_attachment_dto_local_var->social_post_id = social_post_id;

    return social_post_attachment_dto_local_var;
}


void social_post_attachment_dto_free(social_post_attachment_dto_t *social_post_attachment_dto) {
    if(NULL == social_post_attachment_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (social_post_attachment_dto->id) {
        free(social_post_attachment_dto->id);
        social_post_attachment_dto->id = NULL;
    }
    if (social_post_attachment_dto->timestamp) {
        free(social_post_attachment_dto->timestamp);
        social_post_attachment_dto->timestamp = NULL;
    }
    if (social_post_attachment_dto->notes) {
        free(social_post_attachment_dto->notes);
        social_post_attachment_dto->notes = NULL;
    }
    if (social_post_attachment_dto->title) {
        free(social_post_attachment_dto->title);
        social_post_attachment_dto->title = NULL;
    }
    if (social_post_attachment_dto->author) {
        free(social_post_attachment_dto->author);
        social_post_attachment_dto->author = NULL;
    }
    if (social_post_attachment_dto->hash) {
        free(social_post_attachment_dto->hash);
        social_post_attachment_dto->hash = NULL;
    }
    if (social_post_attachment_dto->file_url) {
        free(social_post_attachment_dto->file_url);
        social_post_attachment_dto->file_url = NULL;
    }
    if (social_post_attachment_dto->file_path) {
        free(social_post_attachment_dto->file_path);
        social_post_attachment_dto->file_path = NULL;
    }
    if (social_post_attachment_dto->file_name) {
        free(social_post_attachment_dto->file_name);
        social_post_attachment_dto->file_name = NULL;
    }
    if (social_post_attachment_dto->abstract) {
        free(social_post_attachment_dto->abstract);
        social_post_attachment_dto->abstract = NULL;
    }
    if (social_post_attachment_dto->key_words) {
        free(social_post_attachment_dto->key_words);
        social_post_attachment_dto->key_words = NULL;
    }
    if (social_post_attachment_dto->metadata) {
        free(social_post_attachment_dto->metadata);
        social_post_attachment_dto->metadata = NULL;
    }
    if (social_post_attachment_dto->content_type) {
        free(social_post_attachment_dto->content_type);
        social_post_attachment_dto->content_type = NULL;
    }
    if (social_post_attachment_dto->parent_file_id) {
        free(social_post_attachment_dto->parent_file_id);
        social_post_attachment_dto->parent_file_id = NULL;
    }
    if (social_post_attachment_dto->user_id) {
        free(social_post_attachment_dto->user_id);
        social_post_attachment_dto->user_id = NULL;
    }
    if (social_post_attachment_dto->tenant_id) {
        free(social_post_attachment_dto->tenant_id);
        social_post_attachment_dto->tenant_id = NULL;
    }
    if (social_post_attachment_dto->enrollment_id) {
        free(social_post_attachment_dto->enrollment_id);
        social_post_attachment_dto->enrollment_id = NULL;
    }
    if (social_post_attachment_dto->social_profile_id) {
        free(social_post_attachment_dto->social_profile_id);
        social_post_attachment_dto->social_profile_id = NULL;
    }
    if (social_post_attachment_dto->folder_path) {
        free(social_post_attachment_dto->folder_path);
        social_post_attachment_dto->folder_path = NULL;
    }
    if (social_post_attachment_dto->social_post_id) {
        free(social_post_attachment_dto->social_post_id);
        social_post_attachment_dto->social_post_id = NULL;
    }
    free(social_post_attachment_dto);
}

cJSON *social_post_attachment_dto_convertToJSON(social_post_attachment_dto_t *social_post_attachment_dto) {
    cJSON *item = cJSON_CreateObject();

    // social_post_attachment_dto->id
    if(social_post_attachment_dto->id) {
    if(cJSON_AddStringToObject(item, "id", social_post_attachment_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // social_post_attachment_dto->timestamp
    if(social_post_attachment_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", social_post_attachment_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // social_post_attachment_dto->notes
    if(social_post_attachment_dto->notes) {
    if(cJSON_AddStringToObject(item, "notes", social_post_attachment_dto->notes) == NULL) {
    goto fail; //String
    }
    }


    // social_post_attachment_dto->title
    if(social_post_attachment_dto->title) {
    if(cJSON_AddStringToObject(item, "title", social_post_attachment_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // social_post_attachment_dto->author
    if(social_post_attachment_dto->author) {
    if(cJSON_AddStringToObject(item, "author", social_post_attachment_dto->author) == NULL) {
    goto fail; //String
    }
    }


    // social_post_attachment_dto->is_folder
    if(social_post_attachment_dto->is_folder) {
    if(cJSON_AddBoolToObject(item, "isFolder", social_post_attachment_dto->is_folder) == NULL) {
    goto fail; //Bool
    }
    }


    // social_post_attachment_dto->hash
    if(social_post_attachment_dto->hash) {
    if(cJSON_AddStringToObject(item, "hash", social_post_attachment_dto->hash) == NULL) {
    goto fail; //String
    }
    }


    // social_post_attachment_dto->file_url
    if(social_post_attachment_dto->file_url) {
    if(cJSON_AddStringToObject(item, "fileUrl", social_post_attachment_dto->file_url) == NULL) {
    goto fail; //String
    }
    }


    // social_post_attachment_dto->file_path
    if(social_post_attachment_dto->file_path) {
    if(cJSON_AddStringToObject(item, "filePath", social_post_attachment_dto->file_path) == NULL) {
    goto fail; //String
    }
    }


    // social_post_attachment_dto->file_name
    if(social_post_attachment_dto->file_name) {
    if(cJSON_AddStringToObject(item, "fileName", social_post_attachment_dto->file_name) == NULL) {
    goto fail; //String
    }
    }


    // social_post_attachment_dto->abstract
    if(social_post_attachment_dto->abstract) {
    if(cJSON_AddStringToObject(item, "abstract", social_post_attachment_dto->abstract) == NULL) {
    goto fail; //String
    }
    }


    // social_post_attachment_dto->key_words
    if(social_post_attachment_dto->key_words) {
    if(cJSON_AddStringToObject(item, "keyWords", social_post_attachment_dto->key_words) == NULL) {
    goto fail; //String
    }
    }


    // social_post_attachment_dto->metadata
    if(social_post_attachment_dto->metadata) {
    if(cJSON_AddStringToObject(item, "metadata", social_post_attachment_dto->metadata) == NULL) {
    goto fail; //String
    }
    }


    // social_post_attachment_dto->file_length
    if(social_post_attachment_dto->file_length) {
    if(cJSON_AddNumberToObject(item, "fileLength", social_post_attachment_dto->file_length) == NULL) {
    goto fail; //Numeric
    }
    }


    // social_post_attachment_dto->content_type
    if(social_post_attachment_dto->content_type) {
    if(cJSON_AddStringToObject(item, "contentType", social_post_attachment_dto->content_type) == NULL) {
    goto fail; //String
    }
    }


    // social_post_attachment_dto->parent_file_id
    if(social_post_attachment_dto->parent_file_id) {
    if(cJSON_AddStringToObject(item, "parentFileId", social_post_attachment_dto->parent_file_id) == NULL) {
    goto fail; //String
    }
    }


    // social_post_attachment_dto->valid_response
    if(social_post_attachment_dto->valid_response) {
    if(cJSON_AddBoolToObject(item, "validResponse", social_post_attachment_dto->valid_response) == NULL) {
    goto fail; //Bool
    }
    }


    // social_post_attachment_dto->user_id
    if(social_post_attachment_dto->user_id) {
    if(cJSON_AddStringToObject(item, "userId", social_post_attachment_dto->user_id) == NULL) {
    goto fail; //String
    }
    }


    // social_post_attachment_dto->tenant_id
    if(social_post_attachment_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", social_post_attachment_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // social_post_attachment_dto->enrollment_id
    if(social_post_attachment_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", social_post_attachment_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // social_post_attachment_dto->social_profile_id
    if(social_post_attachment_dto->social_profile_id) {
    if(cJSON_AddStringToObject(item, "socialProfileId", social_post_attachment_dto->social_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // social_post_attachment_dto->folder_path
    if(social_post_attachment_dto->folder_path) {
    if(cJSON_AddStringToObject(item, "folderPath", social_post_attachment_dto->folder_path) == NULL) {
    goto fail; //String
    }
    }


    // social_post_attachment_dto->social_post_id
    if(social_post_attachment_dto->social_post_id) {
    if(cJSON_AddStringToObject(item, "socialPostId", social_post_attachment_dto->social_post_id) == NULL) {
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

social_post_attachment_dto_t *social_post_attachment_dto_parseFromJSON(cJSON *social_post_attachment_dtoJSON){

    social_post_attachment_dto_t *social_post_attachment_dto_local_var = NULL;

    // social_post_attachment_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(social_post_attachment_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // social_post_attachment_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(social_post_attachment_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // social_post_attachment_dto->notes
    cJSON *notes = cJSON_GetObjectItemCaseSensitive(social_post_attachment_dtoJSON, "notes");
    if (notes) { 
    if(!cJSON_IsString(notes) && !cJSON_IsNull(notes))
    {
    goto end; //String
    }
    }

    // social_post_attachment_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(social_post_attachment_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // social_post_attachment_dto->author
    cJSON *author = cJSON_GetObjectItemCaseSensitive(social_post_attachment_dtoJSON, "author");
    if (author) { 
    if(!cJSON_IsString(author) && !cJSON_IsNull(author))
    {
    goto end; //String
    }
    }

    // social_post_attachment_dto->is_folder
    cJSON *is_folder = cJSON_GetObjectItemCaseSensitive(social_post_attachment_dtoJSON, "isFolder");
    if (is_folder) { 
    if(!cJSON_IsBool(is_folder))
    {
    goto end; //Bool
    }
    }

    // social_post_attachment_dto->hash
    cJSON *hash = cJSON_GetObjectItemCaseSensitive(social_post_attachment_dtoJSON, "hash");
    if (hash) { 
    if(!cJSON_IsString(hash) && !cJSON_IsNull(hash))
    {
    goto end; //String
    }
    }

    // social_post_attachment_dto->file_url
    cJSON *file_url = cJSON_GetObjectItemCaseSensitive(social_post_attachment_dtoJSON, "fileUrl");
    if (file_url) { 
    if(!cJSON_IsString(file_url) && !cJSON_IsNull(file_url))
    {
    goto end; //String
    }
    }

    // social_post_attachment_dto->file_path
    cJSON *file_path = cJSON_GetObjectItemCaseSensitive(social_post_attachment_dtoJSON, "filePath");
    if (file_path) { 
    if(!cJSON_IsString(file_path) && !cJSON_IsNull(file_path))
    {
    goto end; //String
    }
    }

    // social_post_attachment_dto->file_name
    cJSON *file_name = cJSON_GetObjectItemCaseSensitive(social_post_attachment_dtoJSON, "fileName");
    if (file_name) { 
    if(!cJSON_IsString(file_name) && !cJSON_IsNull(file_name))
    {
    goto end; //String
    }
    }

    // social_post_attachment_dto->abstract
    cJSON *abstract = cJSON_GetObjectItemCaseSensitive(social_post_attachment_dtoJSON, "abstract");
    if (abstract) { 
    if(!cJSON_IsString(abstract) && !cJSON_IsNull(abstract))
    {
    goto end; //String
    }
    }

    // social_post_attachment_dto->key_words
    cJSON *key_words = cJSON_GetObjectItemCaseSensitive(social_post_attachment_dtoJSON, "keyWords");
    if (key_words) { 
    if(!cJSON_IsString(key_words) && !cJSON_IsNull(key_words))
    {
    goto end; //String
    }
    }

    // social_post_attachment_dto->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(social_post_attachment_dtoJSON, "metadata");
    if (metadata) { 
    if(!cJSON_IsString(metadata) && !cJSON_IsNull(metadata))
    {
    goto end; //String
    }
    }

    // social_post_attachment_dto->file_length
    cJSON *file_length = cJSON_GetObjectItemCaseSensitive(social_post_attachment_dtoJSON, "fileLength");
    if (file_length) { 
    if(!cJSON_IsNumber(file_length))
    {
    goto end; //Numeric
    }
    }

    // social_post_attachment_dto->content_type
    cJSON *content_type = cJSON_GetObjectItemCaseSensitive(social_post_attachment_dtoJSON, "contentType");
    if (content_type) { 
    if(!cJSON_IsString(content_type) && !cJSON_IsNull(content_type))
    {
    goto end; //String
    }
    }

    // social_post_attachment_dto->parent_file_id
    cJSON *parent_file_id = cJSON_GetObjectItemCaseSensitive(social_post_attachment_dtoJSON, "parentFileId");
    if (parent_file_id) { 
    if(!cJSON_IsString(parent_file_id) && !cJSON_IsNull(parent_file_id))
    {
    goto end; //String
    }
    }

    // social_post_attachment_dto->valid_response
    cJSON *valid_response = cJSON_GetObjectItemCaseSensitive(social_post_attachment_dtoJSON, "validResponse");
    if (valid_response) { 
    if(!cJSON_IsBool(valid_response))
    {
    goto end; //Bool
    }
    }

    // social_post_attachment_dto->user_id
    cJSON *user_id = cJSON_GetObjectItemCaseSensitive(social_post_attachment_dtoJSON, "userId");
    if (user_id) { 
    if(!cJSON_IsString(user_id) && !cJSON_IsNull(user_id))
    {
    goto end; //String
    }
    }

    // social_post_attachment_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(social_post_attachment_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // social_post_attachment_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(social_post_attachment_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // social_post_attachment_dto->social_profile_id
    cJSON *social_profile_id = cJSON_GetObjectItemCaseSensitive(social_post_attachment_dtoJSON, "socialProfileId");
    if (social_profile_id) { 
    if(!cJSON_IsString(social_profile_id) && !cJSON_IsNull(social_profile_id))
    {
    goto end; //String
    }
    }

    // social_post_attachment_dto->folder_path
    cJSON *folder_path = cJSON_GetObjectItemCaseSensitive(social_post_attachment_dtoJSON, "folderPath");
    if (folder_path) { 
    if(!cJSON_IsString(folder_path) && !cJSON_IsNull(folder_path))
    {
    goto end; //String
    }
    }

    // social_post_attachment_dto->social_post_id
    cJSON *social_post_id = cJSON_GetObjectItemCaseSensitive(social_post_attachment_dtoJSON, "socialPostId");
    if (social_post_id) { 
    if(!cJSON_IsString(social_post_id) && !cJSON_IsNull(social_post_id))
    {
    goto end; //String
    }
    }


    social_post_attachment_dto_local_var = social_post_attachment_dto_create (
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
        folder_path && !cJSON_IsNull(folder_path) ? strdup(folder_path->valuestring) : NULL,
        social_post_id && !cJSON_IsNull(social_post_id) ? strdup(social_post_id->valuestring) : NULL
        );

    return social_post_attachment_dto_local_var;
end:
    return NULL;

}
