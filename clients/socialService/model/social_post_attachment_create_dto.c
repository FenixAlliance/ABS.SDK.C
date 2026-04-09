#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "social_post_attachment_create_dto.h"



social_post_attachment_create_dto_t *social_post_attachment_create_dto_create(
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
    char *social_post_id
    ) {
    social_post_attachment_create_dto_t *social_post_attachment_create_dto_local_var = malloc(sizeof(social_post_attachment_create_dto_t));
    if (!social_post_attachment_create_dto_local_var) {
        return NULL;
    }
    social_post_attachment_create_dto_local_var->id = id;
    social_post_attachment_create_dto_local_var->timestamp = timestamp;
    social_post_attachment_create_dto_local_var->notes = notes;
    social_post_attachment_create_dto_local_var->title = title;
    social_post_attachment_create_dto_local_var->author = author;
    social_post_attachment_create_dto_local_var->is_folder = is_folder;
    social_post_attachment_create_dto_local_var->file_name = file_name;
    social_post_attachment_create_dto_local_var->abstract = abstract;
    social_post_attachment_create_dto_local_var->key_words = key_words;
    social_post_attachment_create_dto_local_var->valid_response = valid_response;
    social_post_attachment_create_dto_local_var->parent_file_upload_id = parent_file_upload_id;
    social_post_attachment_create_dto_local_var->file_path = file_path;
    social_post_attachment_create_dto_local_var->social_post_id = social_post_id;

    return social_post_attachment_create_dto_local_var;
}


void social_post_attachment_create_dto_free(social_post_attachment_create_dto_t *social_post_attachment_create_dto) {
    if(NULL == social_post_attachment_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (social_post_attachment_create_dto->id) {
        free(social_post_attachment_create_dto->id);
        social_post_attachment_create_dto->id = NULL;
    }
    if (social_post_attachment_create_dto->timestamp) {
        free(social_post_attachment_create_dto->timestamp);
        social_post_attachment_create_dto->timestamp = NULL;
    }
    if (social_post_attachment_create_dto->notes) {
        free(social_post_attachment_create_dto->notes);
        social_post_attachment_create_dto->notes = NULL;
    }
    if (social_post_attachment_create_dto->title) {
        free(social_post_attachment_create_dto->title);
        social_post_attachment_create_dto->title = NULL;
    }
    if (social_post_attachment_create_dto->author) {
        free(social_post_attachment_create_dto->author);
        social_post_attachment_create_dto->author = NULL;
    }
    if (social_post_attachment_create_dto->file_name) {
        free(social_post_attachment_create_dto->file_name);
        social_post_attachment_create_dto->file_name = NULL;
    }
    if (social_post_attachment_create_dto->abstract) {
        free(social_post_attachment_create_dto->abstract);
        social_post_attachment_create_dto->abstract = NULL;
    }
    if (social_post_attachment_create_dto->key_words) {
        free(social_post_attachment_create_dto->key_words);
        social_post_attachment_create_dto->key_words = NULL;
    }
    if (social_post_attachment_create_dto->parent_file_upload_id) {
        free(social_post_attachment_create_dto->parent_file_upload_id);
        social_post_attachment_create_dto->parent_file_upload_id = NULL;
    }
    if (social_post_attachment_create_dto->file_path) {
        free(social_post_attachment_create_dto->file_path);
        social_post_attachment_create_dto->file_path = NULL;
    }
    if (social_post_attachment_create_dto->social_post_id) {
        free(social_post_attachment_create_dto->social_post_id);
        social_post_attachment_create_dto->social_post_id = NULL;
    }
    free(social_post_attachment_create_dto);
}

cJSON *social_post_attachment_create_dto_convertToJSON(social_post_attachment_create_dto_t *social_post_attachment_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // social_post_attachment_create_dto->id
    if(social_post_attachment_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", social_post_attachment_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // social_post_attachment_create_dto->timestamp
    if(social_post_attachment_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", social_post_attachment_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // social_post_attachment_create_dto->notes
    if(social_post_attachment_create_dto->notes) {
    if(cJSON_AddStringToObject(item, "notes", social_post_attachment_create_dto->notes) == NULL) {
    goto fail; //String
    }
    }


    // social_post_attachment_create_dto->title
    if(social_post_attachment_create_dto->title) {
    if(cJSON_AddStringToObject(item, "title", social_post_attachment_create_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // social_post_attachment_create_dto->author
    if(social_post_attachment_create_dto->author) {
    if(cJSON_AddStringToObject(item, "author", social_post_attachment_create_dto->author) == NULL) {
    goto fail; //String
    }
    }


    // social_post_attachment_create_dto->is_folder
    if(social_post_attachment_create_dto->is_folder) {
    if(cJSON_AddBoolToObject(item, "isFolder", social_post_attachment_create_dto->is_folder) == NULL) {
    goto fail; //Bool
    }
    }


    // social_post_attachment_create_dto->file_name
    if(social_post_attachment_create_dto->file_name) {
    if(cJSON_AddStringToObject(item, "fileName", social_post_attachment_create_dto->file_name) == NULL) {
    goto fail; //String
    }
    }


    // social_post_attachment_create_dto->abstract
    if(social_post_attachment_create_dto->abstract) {
    if(cJSON_AddStringToObject(item, "abstract", social_post_attachment_create_dto->abstract) == NULL) {
    goto fail; //String
    }
    }


    // social_post_attachment_create_dto->key_words
    if(social_post_attachment_create_dto->key_words) {
    if(cJSON_AddStringToObject(item, "keyWords", social_post_attachment_create_dto->key_words) == NULL) {
    goto fail; //String
    }
    }


    // social_post_attachment_create_dto->valid_response
    if(social_post_attachment_create_dto->valid_response) {
    if(cJSON_AddBoolToObject(item, "validResponse", social_post_attachment_create_dto->valid_response) == NULL) {
    goto fail; //Bool
    }
    }


    // social_post_attachment_create_dto->parent_file_upload_id
    if(social_post_attachment_create_dto->parent_file_upload_id) {
    if(cJSON_AddStringToObject(item, "parentFileUploadId", social_post_attachment_create_dto->parent_file_upload_id) == NULL) {
    goto fail; //String
    }
    }


    // social_post_attachment_create_dto->file_path
    if(social_post_attachment_create_dto->file_path) {
    if(cJSON_AddStringToObject(item, "filePath", social_post_attachment_create_dto->file_path) == NULL) {
    goto fail; //String
    }
    }


    // social_post_attachment_create_dto->social_post_id
    if(social_post_attachment_create_dto->social_post_id) {
    if(cJSON_AddStringToObject(item, "socialPostId", social_post_attachment_create_dto->social_post_id) == NULL) {
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

social_post_attachment_create_dto_t *social_post_attachment_create_dto_parseFromJSON(cJSON *social_post_attachment_create_dtoJSON){

    social_post_attachment_create_dto_t *social_post_attachment_create_dto_local_var = NULL;

    // social_post_attachment_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(social_post_attachment_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // social_post_attachment_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(social_post_attachment_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // social_post_attachment_create_dto->notes
    cJSON *notes = cJSON_GetObjectItemCaseSensitive(social_post_attachment_create_dtoJSON, "notes");
    if (notes) { 
    if(!cJSON_IsString(notes) && !cJSON_IsNull(notes))
    {
    goto end; //String
    }
    }

    // social_post_attachment_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(social_post_attachment_create_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // social_post_attachment_create_dto->author
    cJSON *author = cJSON_GetObjectItemCaseSensitive(social_post_attachment_create_dtoJSON, "author");
    if (author) { 
    if(!cJSON_IsString(author) && !cJSON_IsNull(author))
    {
    goto end; //String
    }
    }

    // social_post_attachment_create_dto->is_folder
    cJSON *is_folder = cJSON_GetObjectItemCaseSensitive(social_post_attachment_create_dtoJSON, "isFolder");
    if (is_folder) { 
    if(!cJSON_IsBool(is_folder))
    {
    goto end; //Bool
    }
    }

    // social_post_attachment_create_dto->file_name
    cJSON *file_name = cJSON_GetObjectItemCaseSensitive(social_post_attachment_create_dtoJSON, "fileName");
    if (file_name) { 
    if(!cJSON_IsString(file_name) && !cJSON_IsNull(file_name))
    {
    goto end; //String
    }
    }

    // social_post_attachment_create_dto->abstract
    cJSON *abstract = cJSON_GetObjectItemCaseSensitive(social_post_attachment_create_dtoJSON, "abstract");
    if (abstract) { 
    if(!cJSON_IsString(abstract) && !cJSON_IsNull(abstract))
    {
    goto end; //String
    }
    }

    // social_post_attachment_create_dto->key_words
    cJSON *key_words = cJSON_GetObjectItemCaseSensitive(social_post_attachment_create_dtoJSON, "keyWords");
    if (key_words) { 
    if(!cJSON_IsString(key_words) && !cJSON_IsNull(key_words))
    {
    goto end; //String
    }
    }

    // social_post_attachment_create_dto->valid_response
    cJSON *valid_response = cJSON_GetObjectItemCaseSensitive(social_post_attachment_create_dtoJSON, "validResponse");
    if (valid_response) { 
    if(!cJSON_IsBool(valid_response))
    {
    goto end; //Bool
    }
    }

    // social_post_attachment_create_dto->parent_file_upload_id
    cJSON *parent_file_upload_id = cJSON_GetObjectItemCaseSensitive(social_post_attachment_create_dtoJSON, "parentFileUploadId");
    if (parent_file_upload_id) { 
    if(!cJSON_IsString(parent_file_upload_id) && !cJSON_IsNull(parent_file_upload_id))
    {
    goto end; //String
    }
    }

    // social_post_attachment_create_dto->file_path
    cJSON *file_path = cJSON_GetObjectItemCaseSensitive(social_post_attachment_create_dtoJSON, "filePath");
    if (file_path) { 
    if(!cJSON_IsString(file_path) && !cJSON_IsNull(file_path))
    {
    goto end; //String
    }
    }

    // social_post_attachment_create_dto->social_post_id
    cJSON *social_post_id = cJSON_GetObjectItemCaseSensitive(social_post_attachment_create_dtoJSON, "socialPostId");
    if (social_post_id) { 
    if(!cJSON_IsString(social_post_id) && !cJSON_IsNull(social_post_id))
    {
    goto end; //String
    }
    }


    social_post_attachment_create_dto_local_var = social_post_attachment_create_dto_create (
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
        social_post_id && !cJSON_IsNull(social_post_id) ? strdup(social_post_id->valuestring) : NULL
        );

    return social_post_attachment_create_dto_local_var;
end:
    return NULL;

}
