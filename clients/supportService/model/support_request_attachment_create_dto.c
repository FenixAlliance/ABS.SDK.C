#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "support_request_attachment_create_dto.h"



support_request_attachment_create_dto_t *support_request_attachment_create_dto_create(
    char *id,
    char *timestamp,
    char *notes,
    char *title,
    char *author,
    int is_folder,
    char *file_name,
    char *abstract,
    char *key_words,
    int valid_response,
    char *parent_file_upload_id,
    char *file_path,
    char *business_id,
    char *business_profile_record_id,
    char *metadata,
    char *support_request_id
    ) {
    support_request_attachment_create_dto_t *support_request_attachment_create_dto_local_var = malloc(sizeof(support_request_attachment_create_dto_t));
    if (!support_request_attachment_create_dto_local_var) {
        return NULL;
    }
    support_request_attachment_create_dto_local_var->id = id;
    support_request_attachment_create_dto_local_var->timestamp = timestamp;
    support_request_attachment_create_dto_local_var->notes = notes;
    support_request_attachment_create_dto_local_var->title = title;
    support_request_attachment_create_dto_local_var->author = author;
    support_request_attachment_create_dto_local_var->is_folder = is_folder;
    support_request_attachment_create_dto_local_var->file_name = file_name;
    support_request_attachment_create_dto_local_var->abstract = abstract;
    support_request_attachment_create_dto_local_var->key_words = key_words;
    support_request_attachment_create_dto_local_var->valid_response = valid_response;
    support_request_attachment_create_dto_local_var->parent_file_upload_id = parent_file_upload_id;
    support_request_attachment_create_dto_local_var->file_path = file_path;
    support_request_attachment_create_dto_local_var->business_id = business_id;
    support_request_attachment_create_dto_local_var->business_profile_record_id = business_profile_record_id;
    support_request_attachment_create_dto_local_var->metadata = metadata;
    support_request_attachment_create_dto_local_var->support_request_id = support_request_id;

    return support_request_attachment_create_dto_local_var;
}


void support_request_attachment_create_dto_free(support_request_attachment_create_dto_t *support_request_attachment_create_dto) {
    if(NULL == support_request_attachment_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (support_request_attachment_create_dto->id) {
        free(support_request_attachment_create_dto->id);
        support_request_attachment_create_dto->id = NULL;
    }
    if (support_request_attachment_create_dto->timestamp) {
        free(support_request_attachment_create_dto->timestamp);
        support_request_attachment_create_dto->timestamp = NULL;
    }
    if (support_request_attachment_create_dto->notes) {
        free(support_request_attachment_create_dto->notes);
        support_request_attachment_create_dto->notes = NULL;
    }
    if (support_request_attachment_create_dto->title) {
        free(support_request_attachment_create_dto->title);
        support_request_attachment_create_dto->title = NULL;
    }
    if (support_request_attachment_create_dto->author) {
        free(support_request_attachment_create_dto->author);
        support_request_attachment_create_dto->author = NULL;
    }
    if (support_request_attachment_create_dto->file_name) {
        free(support_request_attachment_create_dto->file_name);
        support_request_attachment_create_dto->file_name = NULL;
    }
    if (support_request_attachment_create_dto->abstract) {
        free(support_request_attachment_create_dto->abstract);
        support_request_attachment_create_dto->abstract = NULL;
    }
    if (support_request_attachment_create_dto->key_words) {
        free(support_request_attachment_create_dto->key_words);
        support_request_attachment_create_dto->key_words = NULL;
    }
    if (support_request_attachment_create_dto->parent_file_upload_id) {
        free(support_request_attachment_create_dto->parent_file_upload_id);
        support_request_attachment_create_dto->parent_file_upload_id = NULL;
    }
    if (support_request_attachment_create_dto->file_path) {
        free(support_request_attachment_create_dto->file_path);
        support_request_attachment_create_dto->file_path = NULL;
    }
    if (support_request_attachment_create_dto->business_id) {
        free(support_request_attachment_create_dto->business_id);
        support_request_attachment_create_dto->business_id = NULL;
    }
    if (support_request_attachment_create_dto->business_profile_record_id) {
        free(support_request_attachment_create_dto->business_profile_record_id);
        support_request_attachment_create_dto->business_profile_record_id = NULL;
    }
    if (support_request_attachment_create_dto->metadata) {
        free(support_request_attachment_create_dto->metadata);
        support_request_attachment_create_dto->metadata = NULL;
    }
    if (support_request_attachment_create_dto->support_request_id) {
        free(support_request_attachment_create_dto->support_request_id);
        support_request_attachment_create_dto->support_request_id = NULL;
    }
    free(support_request_attachment_create_dto);
}

cJSON *support_request_attachment_create_dto_convertToJSON(support_request_attachment_create_dto_t *support_request_attachment_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // support_request_attachment_create_dto->id
    if(support_request_attachment_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", support_request_attachment_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // support_request_attachment_create_dto->timestamp
    if(support_request_attachment_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", support_request_attachment_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // support_request_attachment_create_dto->notes
    if(support_request_attachment_create_dto->notes) {
    if(cJSON_AddStringToObject(item, "notes", support_request_attachment_create_dto->notes) == NULL) {
    goto fail; //String
    }
    }


    // support_request_attachment_create_dto->title
    if(support_request_attachment_create_dto->title) {
    if(cJSON_AddStringToObject(item, "title", support_request_attachment_create_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // support_request_attachment_create_dto->author
    if(support_request_attachment_create_dto->author) {
    if(cJSON_AddStringToObject(item, "author", support_request_attachment_create_dto->author) == NULL) {
    goto fail; //String
    }
    }


    // support_request_attachment_create_dto->is_folder
    if(support_request_attachment_create_dto->is_folder) {
    if(cJSON_AddBoolToObject(item, "isFolder", support_request_attachment_create_dto->is_folder) == NULL) {
    goto fail; //Bool
    }
    }


    // support_request_attachment_create_dto->file_name
    if(support_request_attachment_create_dto->file_name) {
    if(cJSON_AddStringToObject(item, "fileName", support_request_attachment_create_dto->file_name) == NULL) {
    goto fail; //String
    }
    }


    // support_request_attachment_create_dto->abstract
    if(support_request_attachment_create_dto->abstract) {
    if(cJSON_AddStringToObject(item, "abstract", support_request_attachment_create_dto->abstract) == NULL) {
    goto fail; //String
    }
    }


    // support_request_attachment_create_dto->key_words
    if(support_request_attachment_create_dto->key_words) {
    if(cJSON_AddStringToObject(item, "keyWords", support_request_attachment_create_dto->key_words) == NULL) {
    goto fail; //String
    }
    }


    // support_request_attachment_create_dto->valid_response
    if(support_request_attachment_create_dto->valid_response) {
    if(cJSON_AddBoolToObject(item, "validResponse", support_request_attachment_create_dto->valid_response) == NULL) {
    goto fail; //Bool
    }
    }


    // support_request_attachment_create_dto->parent_file_upload_id
    if(support_request_attachment_create_dto->parent_file_upload_id) {
    if(cJSON_AddStringToObject(item, "parentFileUploadId", support_request_attachment_create_dto->parent_file_upload_id) == NULL) {
    goto fail; //String
    }
    }


    // support_request_attachment_create_dto->file_path
    if(support_request_attachment_create_dto->file_path) {
    if(cJSON_AddStringToObject(item, "filePath", support_request_attachment_create_dto->file_path) == NULL) {
    goto fail; //String
    }
    }


    // support_request_attachment_create_dto->business_id
    if(support_request_attachment_create_dto->business_id) {
    if(cJSON_AddStringToObject(item, "businessID", support_request_attachment_create_dto->business_id) == NULL) {
    goto fail; //String
    }
    }


    // support_request_attachment_create_dto->business_profile_record_id
    if(support_request_attachment_create_dto->business_profile_record_id) {
    if(cJSON_AddStringToObject(item, "businessProfileRecordID", support_request_attachment_create_dto->business_profile_record_id) == NULL) {
    goto fail; //String
    }
    }


    // support_request_attachment_create_dto->metadata
    if(support_request_attachment_create_dto->metadata) {
    if(cJSON_AddStringToObject(item, "metadata", support_request_attachment_create_dto->metadata) == NULL) {
    goto fail; //String
    }
    }


    // support_request_attachment_create_dto->support_request_id
    if(support_request_attachment_create_dto->support_request_id) {
    if(cJSON_AddStringToObject(item, "supportRequestID", support_request_attachment_create_dto->support_request_id) == NULL) {
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

support_request_attachment_create_dto_t *support_request_attachment_create_dto_parseFromJSON(cJSON *support_request_attachment_create_dtoJSON){

    support_request_attachment_create_dto_t *support_request_attachment_create_dto_local_var = NULL;

    // support_request_attachment_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(support_request_attachment_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // support_request_attachment_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(support_request_attachment_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // support_request_attachment_create_dto->notes
    cJSON *notes = cJSON_GetObjectItemCaseSensitive(support_request_attachment_create_dtoJSON, "notes");
    if (notes) { 
    if(!cJSON_IsString(notes) && !cJSON_IsNull(notes))
    {
    goto end; //String
    }
    }

    // support_request_attachment_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(support_request_attachment_create_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // support_request_attachment_create_dto->author
    cJSON *author = cJSON_GetObjectItemCaseSensitive(support_request_attachment_create_dtoJSON, "author");
    if (author) { 
    if(!cJSON_IsString(author) && !cJSON_IsNull(author))
    {
    goto end; //String
    }
    }

    // support_request_attachment_create_dto->is_folder
    cJSON *is_folder = cJSON_GetObjectItemCaseSensitive(support_request_attachment_create_dtoJSON, "isFolder");
    if (is_folder) { 
    if(!cJSON_IsBool(is_folder))
    {
    goto end; //Bool
    }
    }

    // support_request_attachment_create_dto->file_name
    cJSON *file_name = cJSON_GetObjectItemCaseSensitive(support_request_attachment_create_dtoJSON, "fileName");
    if (file_name) { 
    if(!cJSON_IsString(file_name) && !cJSON_IsNull(file_name))
    {
    goto end; //String
    }
    }

    // support_request_attachment_create_dto->abstract
    cJSON *abstract = cJSON_GetObjectItemCaseSensitive(support_request_attachment_create_dtoJSON, "abstract");
    if (abstract) { 
    if(!cJSON_IsString(abstract) && !cJSON_IsNull(abstract))
    {
    goto end; //String
    }
    }

    // support_request_attachment_create_dto->key_words
    cJSON *key_words = cJSON_GetObjectItemCaseSensitive(support_request_attachment_create_dtoJSON, "keyWords");
    if (key_words) { 
    if(!cJSON_IsString(key_words) && !cJSON_IsNull(key_words))
    {
    goto end; //String
    }
    }

    // support_request_attachment_create_dto->valid_response
    cJSON *valid_response = cJSON_GetObjectItemCaseSensitive(support_request_attachment_create_dtoJSON, "validResponse");
    if (valid_response) { 
    if(!cJSON_IsBool(valid_response))
    {
    goto end; //Bool
    }
    }

    // support_request_attachment_create_dto->parent_file_upload_id
    cJSON *parent_file_upload_id = cJSON_GetObjectItemCaseSensitive(support_request_attachment_create_dtoJSON, "parentFileUploadId");
    if (parent_file_upload_id) { 
    if(!cJSON_IsString(parent_file_upload_id) && !cJSON_IsNull(parent_file_upload_id))
    {
    goto end; //String
    }
    }

    // support_request_attachment_create_dto->file_path
    cJSON *file_path = cJSON_GetObjectItemCaseSensitive(support_request_attachment_create_dtoJSON, "filePath");
    if (file_path) { 
    if(!cJSON_IsString(file_path) && !cJSON_IsNull(file_path))
    {
    goto end; //String
    }
    }

    // support_request_attachment_create_dto->business_id
    cJSON *business_id = cJSON_GetObjectItemCaseSensitive(support_request_attachment_create_dtoJSON, "businessID");
    if (business_id) { 
    if(!cJSON_IsString(business_id) && !cJSON_IsNull(business_id))
    {
    goto end; //String
    }
    }

    // support_request_attachment_create_dto->business_profile_record_id
    cJSON *business_profile_record_id = cJSON_GetObjectItemCaseSensitive(support_request_attachment_create_dtoJSON, "businessProfileRecordID");
    if (business_profile_record_id) { 
    if(!cJSON_IsString(business_profile_record_id) && !cJSON_IsNull(business_profile_record_id))
    {
    goto end; //String
    }
    }

    // support_request_attachment_create_dto->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(support_request_attachment_create_dtoJSON, "metadata");
    if (metadata) { 
    if(!cJSON_IsString(metadata) && !cJSON_IsNull(metadata))
    {
    goto end; //String
    }
    }

    // support_request_attachment_create_dto->support_request_id
    cJSON *support_request_id = cJSON_GetObjectItemCaseSensitive(support_request_attachment_create_dtoJSON, "supportRequestID");
    if (support_request_id) { 
    if(!cJSON_IsString(support_request_id) && !cJSON_IsNull(support_request_id))
    {
    goto end; //String
    }
    }


    support_request_attachment_create_dto_local_var = support_request_attachment_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        notes && !cJSON_IsNull(notes) ? strdup(notes->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        author && !cJSON_IsNull(author) ? strdup(author->valuestring) : NULL,
        is_folder ? is_folder->valueint : 0,
        file_name && !cJSON_IsNull(file_name) ? strdup(file_name->valuestring) : NULL,
        abstract && !cJSON_IsNull(abstract) ? strdup(abstract->valuestring) : NULL,
        key_words && !cJSON_IsNull(key_words) ? strdup(key_words->valuestring) : NULL,
        valid_response ? valid_response->valueint : 0,
        parent_file_upload_id && !cJSON_IsNull(parent_file_upload_id) ? strdup(parent_file_upload_id->valuestring) : NULL,
        file_path && !cJSON_IsNull(file_path) ? strdup(file_path->valuestring) : NULL,
        business_id && !cJSON_IsNull(business_id) ? strdup(business_id->valuestring) : NULL,
        business_profile_record_id && !cJSON_IsNull(business_profile_record_id) ? strdup(business_profile_record_id->valuestring) : NULL,
        metadata && !cJSON_IsNull(metadata) ? strdup(metadata->valuestring) : NULL,
        support_request_id && !cJSON_IsNull(support_request_id) ? strdup(support_request_id->valuestring) : NULL
        );

    return support_request_attachment_create_dto_local_var;
end:
    return NULL;

}
