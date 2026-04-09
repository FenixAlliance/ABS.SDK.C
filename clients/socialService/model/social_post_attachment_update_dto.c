#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "social_post_attachment_update_dto.h"



social_post_attachment_update_dto_t *social_post_attachment_update_dto_create(
    char *notes,
    char *metadata,
    char *title,
    char *author,
    int is_folder,
    char *file_name,
    char *abstract,
    char *key_words,
    int valid_response,
    char *parent_file_upload_id,
    char *file_path
    ) {
    social_post_attachment_update_dto_t *social_post_attachment_update_dto_local_var = malloc(sizeof(social_post_attachment_update_dto_t));
    if (!social_post_attachment_update_dto_local_var) {
        return NULL;
    }
    social_post_attachment_update_dto_local_var->notes = notes;
    social_post_attachment_update_dto_local_var->metadata = metadata;
    social_post_attachment_update_dto_local_var->title = title;
    social_post_attachment_update_dto_local_var->author = author;
    social_post_attachment_update_dto_local_var->is_folder = is_folder;
    social_post_attachment_update_dto_local_var->file_name = file_name;
    social_post_attachment_update_dto_local_var->abstract = abstract;
    social_post_attachment_update_dto_local_var->key_words = key_words;
    social_post_attachment_update_dto_local_var->valid_response = valid_response;
    social_post_attachment_update_dto_local_var->parent_file_upload_id = parent_file_upload_id;
    social_post_attachment_update_dto_local_var->file_path = file_path;

    return social_post_attachment_update_dto_local_var;
}


void social_post_attachment_update_dto_free(social_post_attachment_update_dto_t *social_post_attachment_update_dto) {
    if(NULL == social_post_attachment_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (social_post_attachment_update_dto->notes) {
        free(social_post_attachment_update_dto->notes);
        social_post_attachment_update_dto->notes = NULL;
    }
    if (social_post_attachment_update_dto->metadata) {
        free(social_post_attachment_update_dto->metadata);
        social_post_attachment_update_dto->metadata = NULL;
    }
    if (social_post_attachment_update_dto->title) {
        free(social_post_attachment_update_dto->title);
        social_post_attachment_update_dto->title = NULL;
    }
    if (social_post_attachment_update_dto->author) {
        free(social_post_attachment_update_dto->author);
        social_post_attachment_update_dto->author = NULL;
    }
    if (social_post_attachment_update_dto->file_name) {
        free(social_post_attachment_update_dto->file_name);
        social_post_attachment_update_dto->file_name = NULL;
    }
    if (social_post_attachment_update_dto->abstract) {
        free(social_post_attachment_update_dto->abstract);
        social_post_attachment_update_dto->abstract = NULL;
    }
    if (social_post_attachment_update_dto->key_words) {
        free(social_post_attachment_update_dto->key_words);
        social_post_attachment_update_dto->key_words = NULL;
    }
    if (social_post_attachment_update_dto->parent_file_upload_id) {
        free(social_post_attachment_update_dto->parent_file_upload_id);
        social_post_attachment_update_dto->parent_file_upload_id = NULL;
    }
    if (social_post_attachment_update_dto->file_path) {
        free(social_post_attachment_update_dto->file_path);
        social_post_attachment_update_dto->file_path = NULL;
    }
    free(social_post_attachment_update_dto);
}

cJSON *social_post_attachment_update_dto_convertToJSON(social_post_attachment_update_dto_t *social_post_attachment_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // social_post_attachment_update_dto->notes
    if(social_post_attachment_update_dto->notes) {
    if(cJSON_AddStringToObject(item, "notes", social_post_attachment_update_dto->notes) == NULL) {
    goto fail; //String
    }
    }


    // social_post_attachment_update_dto->metadata
    if(social_post_attachment_update_dto->metadata) {
    if(cJSON_AddStringToObject(item, "metadata", social_post_attachment_update_dto->metadata) == NULL) {
    goto fail; //String
    }
    }


    // social_post_attachment_update_dto->title
    if(social_post_attachment_update_dto->title) {
    if(cJSON_AddStringToObject(item, "title", social_post_attachment_update_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // social_post_attachment_update_dto->author
    if(social_post_attachment_update_dto->author) {
    if(cJSON_AddStringToObject(item, "author", social_post_attachment_update_dto->author) == NULL) {
    goto fail; //String
    }
    }


    // social_post_attachment_update_dto->is_folder
    if(social_post_attachment_update_dto->is_folder) {
    if(cJSON_AddBoolToObject(item, "isFolder", social_post_attachment_update_dto->is_folder) == NULL) {
    goto fail; //Bool
    }
    }


    // social_post_attachment_update_dto->file_name
    if(social_post_attachment_update_dto->file_name) {
    if(cJSON_AddStringToObject(item, "fileName", social_post_attachment_update_dto->file_name) == NULL) {
    goto fail; //String
    }
    }


    // social_post_attachment_update_dto->abstract
    if(social_post_attachment_update_dto->abstract) {
    if(cJSON_AddStringToObject(item, "abstract", social_post_attachment_update_dto->abstract) == NULL) {
    goto fail; //String
    }
    }


    // social_post_attachment_update_dto->key_words
    if(social_post_attachment_update_dto->key_words) {
    if(cJSON_AddStringToObject(item, "keyWords", social_post_attachment_update_dto->key_words) == NULL) {
    goto fail; //String
    }
    }


    // social_post_attachment_update_dto->valid_response
    if(social_post_attachment_update_dto->valid_response) {
    if(cJSON_AddBoolToObject(item, "validResponse", social_post_attachment_update_dto->valid_response) == NULL) {
    goto fail; //Bool
    }
    }


    // social_post_attachment_update_dto->parent_file_upload_id
    if(social_post_attachment_update_dto->parent_file_upload_id) {
    if(cJSON_AddStringToObject(item, "parentFileUploadID", social_post_attachment_update_dto->parent_file_upload_id) == NULL) {
    goto fail; //String
    }
    }


    // social_post_attachment_update_dto->file_path
    if(social_post_attachment_update_dto->file_path) {
    if(cJSON_AddStringToObject(item, "filePath", social_post_attachment_update_dto->file_path) == NULL) {
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

social_post_attachment_update_dto_t *social_post_attachment_update_dto_parseFromJSON(cJSON *social_post_attachment_update_dtoJSON){

    social_post_attachment_update_dto_t *social_post_attachment_update_dto_local_var = NULL;

    // social_post_attachment_update_dto->notes
    cJSON *notes = cJSON_GetObjectItemCaseSensitive(social_post_attachment_update_dtoJSON, "notes");
    if (notes) { 
    if(!cJSON_IsString(notes) && !cJSON_IsNull(notes))
    {
    goto end; //String
    }
    }

    // social_post_attachment_update_dto->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(social_post_attachment_update_dtoJSON, "metadata");
    if (metadata) { 
    if(!cJSON_IsString(metadata) && !cJSON_IsNull(metadata))
    {
    goto end; //String
    }
    }

    // social_post_attachment_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(social_post_attachment_update_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // social_post_attachment_update_dto->author
    cJSON *author = cJSON_GetObjectItemCaseSensitive(social_post_attachment_update_dtoJSON, "author");
    if (author) { 
    if(!cJSON_IsString(author) && !cJSON_IsNull(author))
    {
    goto end; //String
    }
    }

    // social_post_attachment_update_dto->is_folder
    cJSON *is_folder = cJSON_GetObjectItemCaseSensitive(social_post_attachment_update_dtoJSON, "isFolder");
    if (is_folder) { 
    if(!cJSON_IsBool(is_folder))
    {
    goto end; //Bool
    }
    }

    // social_post_attachment_update_dto->file_name
    cJSON *file_name = cJSON_GetObjectItemCaseSensitive(social_post_attachment_update_dtoJSON, "fileName");
    if (file_name) { 
    if(!cJSON_IsString(file_name) && !cJSON_IsNull(file_name))
    {
    goto end; //String
    }
    }

    // social_post_attachment_update_dto->abstract
    cJSON *abstract = cJSON_GetObjectItemCaseSensitive(social_post_attachment_update_dtoJSON, "abstract");
    if (abstract) { 
    if(!cJSON_IsString(abstract) && !cJSON_IsNull(abstract))
    {
    goto end; //String
    }
    }

    // social_post_attachment_update_dto->key_words
    cJSON *key_words = cJSON_GetObjectItemCaseSensitive(social_post_attachment_update_dtoJSON, "keyWords");
    if (key_words) { 
    if(!cJSON_IsString(key_words) && !cJSON_IsNull(key_words))
    {
    goto end; //String
    }
    }

    // social_post_attachment_update_dto->valid_response
    cJSON *valid_response = cJSON_GetObjectItemCaseSensitive(social_post_attachment_update_dtoJSON, "validResponse");
    if (valid_response) { 
    if(!cJSON_IsBool(valid_response))
    {
    goto end; //Bool
    }
    }

    // social_post_attachment_update_dto->parent_file_upload_id
    cJSON *parent_file_upload_id = cJSON_GetObjectItemCaseSensitive(social_post_attachment_update_dtoJSON, "parentFileUploadID");
    if (parent_file_upload_id) { 
    if(!cJSON_IsString(parent_file_upload_id) && !cJSON_IsNull(parent_file_upload_id))
    {
    goto end; //String
    }
    }

    // social_post_attachment_update_dto->file_path
    cJSON *file_path = cJSON_GetObjectItemCaseSensitive(social_post_attachment_update_dtoJSON, "filePath");
    if (file_path) { 
    if(!cJSON_IsString(file_path) && !cJSON_IsNull(file_path))
    {
    goto end; //String
    }
    }


    social_post_attachment_update_dto_local_var = social_post_attachment_update_dto_create (
        notes && !cJSON_IsNull(notes) ? strdup(notes->valuestring) : NULL,
        metadata && !cJSON_IsNull(metadata) ? strdup(metadata->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        author && !cJSON_IsNull(author) ? strdup(author->valuestring) : NULL,
        is_folder ? is_folder->valueint : 0,
        file_name && !cJSON_IsNull(file_name) ? strdup(file_name->valuestring) : NULL,
        abstract && !cJSON_IsNull(abstract) ? strdup(abstract->valuestring) : NULL,
        key_words && !cJSON_IsNull(key_words) ? strdup(key_words->valuestring) : NULL,
        valid_response ? valid_response->valueint : 0,
        parent_file_upload_id && !cJSON_IsNull(parent_file_upload_id) ? strdup(parent_file_upload_id->valuestring) : NULL,
        file_path && !cJSON_IsNull(file_path) ? strdup(file_path->valuestring) : NULL
        );

    return social_post_attachment_update_dto_local_var;
end:
    return NULL;

}
