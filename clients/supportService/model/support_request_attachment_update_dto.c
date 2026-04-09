#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "support_request_attachment_update_dto.h"



support_request_attachment_update_dto_t *support_request_attachment_update_dto_create(
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
    char *file_path,
    char *content_type,
    long file_length
    ) {
    support_request_attachment_update_dto_t *support_request_attachment_update_dto_local_var = malloc(sizeof(support_request_attachment_update_dto_t));
    if (!support_request_attachment_update_dto_local_var) {
        return NULL;
    }
    support_request_attachment_update_dto_local_var->notes = notes;
    support_request_attachment_update_dto_local_var->metadata = metadata;
    support_request_attachment_update_dto_local_var->title = title;
    support_request_attachment_update_dto_local_var->author = author;
    support_request_attachment_update_dto_local_var->is_folder = is_folder;
    support_request_attachment_update_dto_local_var->file_name = file_name;
    support_request_attachment_update_dto_local_var->abstract = abstract;
    support_request_attachment_update_dto_local_var->key_words = key_words;
    support_request_attachment_update_dto_local_var->valid_response = valid_response;
    support_request_attachment_update_dto_local_var->parent_file_upload_id = parent_file_upload_id;
    support_request_attachment_update_dto_local_var->file_path = file_path;
    support_request_attachment_update_dto_local_var->content_type = content_type;
    support_request_attachment_update_dto_local_var->file_length = file_length;

    return support_request_attachment_update_dto_local_var;
}


void support_request_attachment_update_dto_free(support_request_attachment_update_dto_t *support_request_attachment_update_dto) {
    if(NULL == support_request_attachment_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (support_request_attachment_update_dto->notes) {
        free(support_request_attachment_update_dto->notes);
        support_request_attachment_update_dto->notes = NULL;
    }
    if (support_request_attachment_update_dto->metadata) {
        free(support_request_attachment_update_dto->metadata);
        support_request_attachment_update_dto->metadata = NULL;
    }
    if (support_request_attachment_update_dto->title) {
        free(support_request_attachment_update_dto->title);
        support_request_attachment_update_dto->title = NULL;
    }
    if (support_request_attachment_update_dto->author) {
        free(support_request_attachment_update_dto->author);
        support_request_attachment_update_dto->author = NULL;
    }
    if (support_request_attachment_update_dto->file_name) {
        free(support_request_attachment_update_dto->file_name);
        support_request_attachment_update_dto->file_name = NULL;
    }
    if (support_request_attachment_update_dto->abstract) {
        free(support_request_attachment_update_dto->abstract);
        support_request_attachment_update_dto->abstract = NULL;
    }
    if (support_request_attachment_update_dto->key_words) {
        free(support_request_attachment_update_dto->key_words);
        support_request_attachment_update_dto->key_words = NULL;
    }
    if (support_request_attachment_update_dto->parent_file_upload_id) {
        free(support_request_attachment_update_dto->parent_file_upload_id);
        support_request_attachment_update_dto->parent_file_upload_id = NULL;
    }
    if (support_request_attachment_update_dto->file_path) {
        free(support_request_attachment_update_dto->file_path);
        support_request_attachment_update_dto->file_path = NULL;
    }
    if (support_request_attachment_update_dto->content_type) {
        free(support_request_attachment_update_dto->content_type);
        support_request_attachment_update_dto->content_type = NULL;
    }
    free(support_request_attachment_update_dto);
}

cJSON *support_request_attachment_update_dto_convertToJSON(support_request_attachment_update_dto_t *support_request_attachment_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // support_request_attachment_update_dto->notes
    if(support_request_attachment_update_dto->notes) {
    if(cJSON_AddStringToObject(item, "notes", support_request_attachment_update_dto->notes) == NULL) {
    goto fail; //String
    }
    }


    // support_request_attachment_update_dto->metadata
    if(support_request_attachment_update_dto->metadata) {
    if(cJSON_AddStringToObject(item, "metadata", support_request_attachment_update_dto->metadata) == NULL) {
    goto fail; //String
    }
    }


    // support_request_attachment_update_dto->title
    if(support_request_attachment_update_dto->title) {
    if(cJSON_AddStringToObject(item, "title", support_request_attachment_update_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // support_request_attachment_update_dto->author
    if(support_request_attachment_update_dto->author) {
    if(cJSON_AddStringToObject(item, "author", support_request_attachment_update_dto->author) == NULL) {
    goto fail; //String
    }
    }


    // support_request_attachment_update_dto->is_folder
    if(support_request_attachment_update_dto->is_folder) {
    if(cJSON_AddBoolToObject(item, "isFolder", support_request_attachment_update_dto->is_folder) == NULL) {
    goto fail; //Bool
    }
    }


    // support_request_attachment_update_dto->file_name
    if(support_request_attachment_update_dto->file_name) {
    if(cJSON_AddStringToObject(item, "fileName", support_request_attachment_update_dto->file_name) == NULL) {
    goto fail; //String
    }
    }


    // support_request_attachment_update_dto->abstract
    if(support_request_attachment_update_dto->abstract) {
    if(cJSON_AddStringToObject(item, "abstract", support_request_attachment_update_dto->abstract) == NULL) {
    goto fail; //String
    }
    }


    // support_request_attachment_update_dto->key_words
    if(support_request_attachment_update_dto->key_words) {
    if(cJSON_AddStringToObject(item, "keyWords", support_request_attachment_update_dto->key_words) == NULL) {
    goto fail; //String
    }
    }


    // support_request_attachment_update_dto->valid_response
    if(support_request_attachment_update_dto->valid_response) {
    if(cJSON_AddBoolToObject(item, "validResponse", support_request_attachment_update_dto->valid_response) == NULL) {
    goto fail; //Bool
    }
    }


    // support_request_attachment_update_dto->parent_file_upload_id
    if(support_request_attachment_update_dto->parent_file_upload_id) {
    if(cJSON_AddStringToObject(item, "parentFileUploadID", support_request_attachment_update_dto->parent_file_upload_id) == NULL) {
    goto fail; //String
    }
    }


    // support_request_attachment_update_dto->file_path
    if(support_request_attachment_update_dto->file_path) {
    if(cJSON_AddStringToObject(item, "filePath", support_request_attachment_update_dto->file_path) == NULL) {
    goto fail; //String
    }
    }


    // support_request_attachment_update_dto->content_type
    if(support_request_attachment_update_dto->content_type) {
    if(cJSON_AddStringToObject(item, "contentType", support_request_attachment_update_dto->content_type) == NULL) {
    goto fail; //String
    }
    }


    // support_request_attachment_update_dto->file_length
    if(support_request_attachment_update_dto->file_length) {
    if(cJSON_AddNumberToObject(item, "fileLength", support_request_attachment_update_dto->file_length) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

support_request_attachment_update_dto_t *support_request_attachment_update_dto_parseFromJSON(cJSON *support_request_attachment_update_dtoJSON){

    support_request_attachment_update_dto_t *support_request_attachment_update_dto_local_var = NULL;

    // support_request_attachment_update_dto->notes
    cJSON *notes = cJSON_GetObjectItemCaseSensitive(support_request_attachment_update_dtoJSON, "notes");
    if (notes) { 
    if(!cJSON_IsString(notes) && !cJSON_IsNull(notes))
    {
    goto end; //String
    }
    }

    // support_request_attachment_update_dto->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(support_request_attachment_update_dtoJSON, "metadata");
    if (metadata) { 
    if(!cJSON_IsString(metadata) && !cJSON_IsNull(metadata))
    {
    goto end; //String
    }
    }

    // support_request_attachment_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(support_request_attachment_update_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // support_request_attachment_update_dto->author
    cJSON *author = cJSON_GetObjectItemCaseSensitive(support_request_attachment_update_dtoJSON, "author");
    if (author) { 
    if(!cJSON_IsString(author) && !cJSON_IsNull(author))
    {
    goto end; //String
    }
    }

    // support_request_attachment_update_dto->is_folder
    cJSON *is_folder = cJSON_GetObjectItemCaseSensitive(support_request_attachment_update_dtoJSON, "isFolder");
    if (is_folder) { 
    if(!cJSON_IsBool(is_folder))
    {
    goto end; //Bool
    }
    }

    // support_request_attachment_update_dto->file_name
    cJSON *file_name = cJSON_GetObjectItemCaseSensitive(support_request_attachment_update_dtoJSON, "fileName");
    if (file_name) { 
    if(!cJSON_IsString(file_name) && !cJSON_IsNull(file_name))
    {
    goto end; //String
    }
    }

    // support_request_attachment_update_dto->abstract
    cJSON *abstract = cJSON_GetObjectItemCaseSensitive(support_request_attachment_update_dtoJSON, "abstract");
    if (abstract) { 
    if(!cJSON_IsString(abstract) && !cJSON_IsNull(abstract))
    {
    goto end; //String
    }
    }

    // support_request_attachment_update_dto->key_words
    cJSON *key_words = cJSON_GetObjectItemCaseSensitive(support_request_attachment_update_dtoJSON, "keyWords");
    if (key_words) { 
    if(!cJSON_IsString(key_words) && !cJSON_IsNull(key_words))
    {
    goto end; //String
    }
    }

    // support_request_attachment_update_dto->valid_response
    cJSON *valid_response = cJSON_GetObjectItemCaseSensitive(support_request_attachment_update_dtoJSON, "validResponse");
    if (valid_response) { 
    if(!cJSON_IsBool(valid_response))
    {
    goto end; //Bool
    }
    }

    // support_request_attachment_update_dto->parent_file_upload_id
    cJSON *parent_file_upload_id = cJSON_GetObjectItemCaseSensitive(support_request_attachment_update_dtoJSON, "parentFileUploadID");
    if (parent_file_upload_id) { 
    if(!cJSON_IsString(parent_file_upload_id) && !cJSON_IsNull(parent_file_upload_id))
    {
    goto end; //String
    }
    }

    // support_request_attachment_update_dto->file_path
    cJSON *file_path = cJSON_GetObjectItemCaseSensitive(support_request_attachment_update_dtoJSON, "filePath");
    if (file_path) { 
    if(!cJSON_IsString(file_path) && !cJSON_IsNull(file_path))
    {
    goto end; //String
    }
    }

    // support_request_attachment_update_dto->content_type
    cJSON *content_type = cJSON_GetObjectItemCaseSensitive(support_request_attachment_update_dtoJSON, "contentType");
    if (content_type) { 
    if(!cJSON_IsString(content_type) && !cJSON_IsNull(content_type))
    {
    goto end; //String
    }
    }

    // support_request_attachment_update_dto->file_length
    cJSON *file_length = cJSON_GetObjectItemCaseSensitive(support_request_attachment_update_dtoJSON, "fileLength");
    if (file_length) { 
    if(!cJSON_IsNumber(file_length))
    {
    goto end; //Numeric
    }
    }


    support_request_attachment_update_dto_local_var = support_request_attachment_update_dto_create (
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
        file_path && !cJSON_IsNull(file_path) ? strdup(file_path->valuestring) : NULL,
        content_type && !cJSON_IsNull(content_type) ? strdup(content_type->valuestring) : NULL,
        file_length ? file_length->valuedouble : 0
        );

    return support_request_attachment_update_dto_local_var;
end:
    return NULL;

}
