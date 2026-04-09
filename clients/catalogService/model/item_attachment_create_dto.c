#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "item_attachment_create_dto.h"



item_attachment_create_dto_t *item_attachment_create_dto_create(
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
    char *item_id
    ) {
    item_attachment_create_dto_t *item_attachment_create_dto_local_var = malloc(sizeof(item_attachment_create_dto_t));
    if (!item_attachment_create_dto_local_var) {
        return NULL;
    }
    item_attachment_create_dto_local_var->id = id;
    item_attachment_create_dto_local_var->timestamp = timestamp;
    item_attachment_create_dto_local_var->notes = notes;
    item_attachment_create_dto_local_var->title = title;
    item_attachment_create_dto_local_var->author = author;
    item_attachment_create_dto_local_var->is_folder = is_folder;
    item_attachment_create_dto_local_var->file_name = file_name;
    item_attachment_create_dto_local_var->abstract = abstract;
    item_attachment_create_dto_local_var->key_words = key_words;
    item_attachment_create_dto_local_var->valid_response = valid_response;
    item_attachment_create_dto_local_var->parent_file_upload_id = parent_file_upload_id;
    item_attachment_create_dto_local_var->file_path = file_path;
    item_attachment_create_dto_local_var->item_id = item_id;

    return item_attachment_create_dto_local_var;
}


void item_attachment_create_dto_free(item_attachment_create_dto_t *item_attachment_create_dto) {
    if(NULL == item_attachment_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (item_attachment_create_dto->id) {
        free(item_attachment_create_dto->id);
        item_attachment_create_dto->id = NULL;
    }
    if (item_attachment_create_dto->timestamp) {
        free(item_attachment_create_dto->timestamp);
        item_attachment_create_dto->timestamp = NULL;
    }
    if (item_attachment_create_dto->notes) {
        free(item_attachment_create_dto->notes);
        item_attachment_create_dto->notes = NULL;
    }
    if (item_attachment_create_dto->title) {
        free(item_attachment_create_dto->title);
        item_attachment_create_dto->title = NULL;
    }
    if (item_attachment_create_dto->author) {
        free(item_attachment_create_dto->author);
        item_attachment_create_dto->author = NULL;
    }
    if (item_attachment_create_dto->file_name) {
        free(item_attachment_create_dto->file_name);
        item_attachment_create_dto->file_name = NULL;
    }
    if (item_attachment_create_dto->abstract) {
        free(item_attachment_create_dto->abstract);
        item_attachment_create_dto->abstract = NULL;
    }
    if (item_attachment_create_dto->key_words) {
        free(item_attachment_create_dto->key_words);
        item_attachment_create_dto->key_words = NULL;
    }
    if (item_attachment_create_dto->parent_file_upload_id) {
        free(item_attachment_create_dto->parent_file_upload_id);
        item_attachment_create_dto->parent_file_upload_id = NULL;
    }
    if (item_attachment_create_dto->file_path) {
        free(item_attachment_create_dto->file_path);
        item_attachment_create_dto->file_path = NULL;
    }
    if (item_attachment_create_dto->item_id) {
        free(item_attachment_create_dto->item_id);
        item_attachment_create_dto->item_id = NULL;
    }
    free(item_attachment_create_dto);
}

cJSON *item_attachment_create_dto_convertToJSON(item_attachment_create_dto_t *item_attachment_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // item_attachment_create_dto->id
    if(item_attachment_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", item_attachment_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // item_attachment_create_dto->timestamp
    if(item_attachment_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", item_attachment_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // item_attachment_create_dto->notes
    if(item_attachment_create_dto->notes) {
    if(cJSON_AddStringToObject(item, "notes", item_attachment_create_dto->notes) == NULL) {
    goto fail; //String
    }
    }


    // item_attachment_create_dto->title
    if(item_attachment_create_dto->title) {
    if(cJSON_AddStringToObject(item, "title", item_attachment_create_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // item_attachment_create_dto->author
    if(item_attachment_create_dto->author) {
    if(cJSON_AddStringToObject(item, "author", item_attachment_create_dto->author) == NULL) {
    goto fail; //String
    }
    }


    // item_attachment_create_dto->is_folder
    if(item_attachment_create_dto->is_folder) {
    if(cJSON_AddBoolToObject(item, "isFolder", item_attachment_create_dto->is_folder) == NULL) {
    goto fail; //Bool
    }
    }


    // item_attachment_create_dto->file_name
    if(item_attachment_create_dto->file_name) {
    if(cJSON_AddStringToObject(item, "fileName", item_attachment_create_dto->file_name) == NULL) {
    goto fail; //String
    }
    }


    // item_attachment_create_dto->abstract
    if(item_attachment_create_dto->abstract) {
    if(cJSON_AddStringToObject(item, "abstract", item_attachment_create_dto->abstract) == NULL) {
    goto fail; //String
    }
    }


    // item_attachment_create_dto->key_words
    if(item_attachment_create_dto->key_words) {
    if(cJSON_AddStringToObject(item, "keyWords", item_attachment_create_dto->key_words) == NULL) {
    goto fail; //String
    }
    }


    // item_attachment_create_dto->valid_response
    if(item_attachment_create_dto->valid_response) {
    if(cJSON_AddBoolToObject(item, "validResponse", item_attachment_create_dto->valid_response) == NULL) {
    goto fail; //Bool
    }
    }


    // item_attachment_create_dto->parent_file_upload_id
    if(item_attachment_create_dto->parent_file_upload_id) {
    if(cJSON_AddStringToObject(item, "parentFileUploadId", item_attachment_create_dto->parent_file_upload_id) == NULL) {
    goto fail; //String
    }
    }


    // item_attachment_create_dto->file_path
    if(item_attachment_create_dto->file_path) {
    if(cJSON_AddStringToObject(item, "filePath", item_attachment_create_dto->file_path) == NULL) {
    goto fail; //String
    }
    }


    // item_attachment_create_dto->item_id
    if(item_attachment_create_dto->item_id) {
    if(cJSON_AddStringToObject(item, "itemID", item_attachment_create_dto->item_id) == NULL) {
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

item_attachment_create_dto_t *item_attachment_create_dto_parseFromJSON(cJSON *item_attachment_create_dtoJSON){

    item_attachment_create_dto_t *item_attachment_create_dto_local_var = NULL;

    // item_attachment_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(item_attachment_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // item_attachment_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(item_attachment_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // item_attachment_create_dto->notes
    cJSON *notes = cJSON_GetObjectItemCaseSensitive(item_attachment_create_dtoJSON, "notes");
    if (notes) { 
    if(!cJSON_IsString(notes) && !cJSON_IsNull(notes))
    {
    goto end; //String
    }
    }

    // item_attachment_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(item_attachment_create_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // item_attachment_create_dto->author
    cJSON *author = cJSON_GetObjectItemCaseSensitive(item_attachment_create_dtoJSON, "author");
    if (author) { 
    if(!cJSON_IsString(author) && !cJSON_IsNull(author))
    {
    goto end; //String
    }
    }

    // item_attachment_create_dto->is_folder
    cJSON *is_folder = cJSON_GetObjectItemCaseSensitive(item_attachment_create_dtoJSON, "isFolder");
    if (is_folder) { 
    if(!cJSON_IsBool(is_folder))
    {
    goto end; //Bool
    }
    }

    // item_attachment_create_dto->file_name
    cJSON *file_name = cJSON_GetObjectItemCaseSensitive(item_attachment_create_dtoJSON, "fileName");
    if (file_name) { 
    if(!cJSON_IsString(file_name) && !cJSON_IsNull(file_name))
    {
    goto end; //String
    }
    }

    // item_attachment_create_dto->abstract
    cJSON *abstract = cJSON_GetObjectItemCaseSensitive(item_attachment_create_dtoJSON, "abstract");
    if (abstract) { 
    if(!cJSON_IsString(abstract) && !cJSON_IsNull(abstract))
    {
    goto end; //String
    }
    }

    // item_attachment_create_dto->key_words
    cJSON *key_words = cJSON_GetObjectItemCaseSensitive(item_attachment_create_dtoJSON, "keyWords");
    if (key_words) { 
    if(!cJSON_IsString(key_words) && !cJSON_IsNull(key_words))
    {
    goto end; //String
    }
    }

    // item_attachment_create_dto->valid_response
    cJSON *valid_response = cJSON_GetObjectItemCaseSensitive(item_attachment_create_dtoJSON, "validResponse");
    if (valid_response) { 
    if(!cJSON_IsBool(valid_response))
    {
    goto end; //Bool
    }
    }

    // item_attachment_create_dto->parent_file_upload_id
    cJSON *parent_file_upload_id = cJSON_GetObjectItemCaseSensitive(item_attachment_create_dtoJSON, "parentFileUploadId");
    if (parent_file_upload_id) { 
    if(!cJSON_IsString(parent_file_upload_id) && !cJSON_IsNull(parent_file_upload_id))
    {
    goto end; //String
    }
    }

    // item_attachment_create_dto->file_path
    cJSON *file_path = cJSON_GetObjectItemCaseSensitive(item_attachment_create_dtoJSON, "filePath");
    if (file_path) { 
    if(!cJSON_IsString(file_path) && !cJSON_IsNull(file_path))
    {
    goto end; //String
    }
    }

    // item_attachment_create_dto->item_id
    cJSON *item_id = cJSON_GetObjectItemCaseSensitive(item_attachment_create_dtoJSON, "itemID");
    if (item_id) { 
    if(!cJSON_IsString(item_id) && !cJSON_IsNull(item_id))
    {
    goto end; //String
    }
    }


    item_attachment_create_dto_local_var = item_attachment_create_dto_create (
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
        item_id && !cJSON_IsNull(item_id) ? strdup(item_id->valuestring) : NULL
        );

    return item_attachment_create_dto_local_var;
end:
    return NULL;

}
