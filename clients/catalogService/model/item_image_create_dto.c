#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "item_image_create_dto.h"



item_image_create_dto_t *item_image_create_dto_create(
    char *id,
    char *timestamp,
    char *business_id,
    char *business_profile_record_id,
    char *item_id,
    int is_item_mozaic_bg,
    char *m_d5_hash,
    char *metadata,
    char *file_upload_url,
    char *file_name,
    char *title,
    char *abstract,
    char *author,
    char *key_words,
    char *notes,
    char *content_type,
    long file_length,
    int valid_response,
    char *social_profile_id,
    char *parent_file_upload_id,
    char *account_holder_id
    ) {
    item_image_create_dto_t *item_image_create_dto_local_var = malloc(sizeof(item_image_create_dto_t));
    if (!item_image_create_dto_local_var) {
        return NULL;
    }
    item_image_create_dto_local_var->id = id;
    item_image_create_dto_local_var->timestamp = timestamp;
    item_image_create_dto_local_var->business_id = business_id;
    item_image_create_dto_local_var->business_profile_record_id = business_profile_record_id;
    item_image_create_dto_local_var->item_id = item_id;
    item_image_create_dto_local_var->is_item_mozaic_bg = is_item_mozaic_bg;
    item_image_create_dto_local_var->m_d5_hash = m_d5_hash;
    item_image_create_dto_local_var->metadata = metadata;
    item_image_create_dto_local_var->file_upload_url = file_upload_url;
    item_image_create_dto_local_var->file_name = file_name;
    item_image_create_dto_local_var->title = title;
    item_image_create_dto_local_var->abstract = abstract;
    item_image_create_dto_local_var->author = author;
    item_image_create_dto_local_var->key_words = key_words;
    item_image_create_dto_local_var->notes = notes;
    item_image_create_dto_local_var->content_type = content_type;
    item_image_create_dto_local_var->file_length = file_length;
    item_image_create_dto_local_var->valid_response = valid_response;
    item_image_create_dto_local_var->social_profile_id = social_profile_id;
    item_image_create_dto_local_var->parent_file_upload_id = parent_file_upload_id;
    item_image_create_dto_local_var->account_holder_id = account_holder_id;

    return item_image_create_dto_local_var;
}


void item_image_create_dto_free(item_image_create_dto_t *item_image_create_dto) {
    if(NULL == item_image_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (item_image_create_dto->id) {
        free(item_image_create_dto->id);
        item_image_create_dto->id = NULL;
    }
    if (item_image_create_dto->timestamp) {
        free(item_image_create_dto->timestamp);
        item_image_create_dto->timestamp = NULL;
    }
    if (item_image_create_dto->business_id) {
        free(item_image_create_dto->business_id);
        item_image_create_dto->business_id = NULL;
    }
    if (item_image_create_dto->business_profile_record_id) {
        free(item_image_create_dto->business_profile_record_id);
        item_image_create_dto->business_profile_record_id = NULL;
    }
    if (item_image_create_dto->item_id) {
        free(item_image_create_dto->item_id);
        item_image_create_dto->item_id = NULL;
    }
    if (item_image_create_dto->m_d5_hash) {
        free(item_image_create_dto->m_d5_hash);
        item_image_create_dto->m_d5_hash = NULL;
    }
    if (item_image_create_dto->metadata) {
        free(item_image_create_dto->metadata);
        item_image_create_dto->metadata = NULL;
    }
    if (item_image_create_dto->file_upload_url) {
        free(item_image_create_dto->file_upload_url);
        item_image_create_dto->file_upload_url = NULL;
    }
    if (item_image_create_dto->file_name) {
        free(item_image_create_dto->file_name);
        item_image_create_dto->file_name = NULL;
    }
    if (item_image_create_dto->title) {
        free(item_image_create_dto->title);
        item_image_create_dto->title = NULL;
    }
    if (item_image_create_dto->abstract) {
        free(item_image_create_dto->abstract);
        item_image_create_dto->abstract = NULL;
    }
    if (item_image_create_dto->author) {
        free(item_image_create_dto->author);
        item_image_create_dto->author = NULL;
    }
    if (item_image_create_dto->key_words) {
        free(item_image_create_dto->key_words);
        item_image_create_dto->key_words = NULL;
    }
    if (item_image_create_dto->notes) {
        free(item_image_create_dto->notes);
        item_image_create_dto->notes = NULL;
    }
    if (item_image_create_dto->content_type) {
        free(item_image_create_dto->content_type);
        item_image_create_dto->content_type = NULL;
    }
    if (item_image_create_dto->social_profile_id) {
        free(item_image_create_dto->social_profile_id);
        item_image_create_dto->social_profile_id = NULL;
    }
    if (item_image_create_dto->parent_file_upload_id) {
        free(item_image_create_dto->parent_file_upload_id);
        item_image_create_dto->parent_file_upload_id = NULL;
    }
    if (item_image_create_dto->account_holder_id) {
        free(item_image_create_dto->account_holder_id);
        item_image_create_dto->account_holder_id = NULL;
    }
    free(item_image_create_dto);
}

cJSON *item_image_create_dto_convertToJSON(item_image_create_dto_t *item_image_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // item_image_create_dto->id
    if(item_image_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", item_image_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // item_image_create_dto->timestamp
    if(item_image_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", item_image_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // item_image_create_dto->business_id
    if (!item_image_create_dto->business_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "businessID", item_image_create_dto->business_id) == NULL) {
    goto fail; //String
    }


    // item_image_create_dto->business_profile_record_id
    if(item_image_create_dto->business_profile_record_id) {
    if(cJSON_AddStringToObject(item, "businessProfileRecordID", item_image_create_dto->business_profile_record_id) == NULL) {
    goto fail; //String
    }
    }


    // item_image_create_dto->item_id
    if(item_image_create_dto->item_id) {
    if(cJSON_AddStringToObject(item, "itemID", item_image_create_dto->item_id) == NULL) {
    goto fail; //String
    }
    }


    // item_image_create_dto->is_item_mozaic_bg
    if(item_image_create_dto->is_item_mozaic_bg) {
    if(cJSON_AddBoolToObject(item, "isItemMozaicBG", item_image_create_dto->is_item_mozaic_bg) == NULL) {
    goto fail; //Bool
    }
    }


    // item_image_create_dto->m_d5_hash
    if(item_image_create_dto->m_d5_hash) {
    if(cJSON_AddStringToObject(item, "mD5Hash", item_image_create_dto->m_d5_hash) == NULL) {
    goto fail; //String
    }
    }


    // item_image_create_dto->metadata
    if(item_image_create_dto->metadata) {
    if(cJSON_AddStringToObject(item, "metadata", item_image_create_dto->metadata) == NULL) {
    goto fail; //String
    }
    }


    // item_image_create_dto->file_upload_url
    if(item_image_create_dto->file_upload_url) {
    if(cJSON_AddStringToObject(item, "fileUploadURL", item_image_create_dto->file_upload_url) == NULL) {
    goto fail; //String
    }
    }


    // item_image_create_dto->file_name
    if (!item_image_create_dto->file_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "fileName", item_image_create_dto->file_name) == NULL) {
    goto fail; //String
    }


    // item_image_create_dto->title
    if(item_image_create_dto->title) {
    if(cJSON_AddStringToObject(item, "title", item_image_create_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // item_image_create_dto->abstract
    if(item_image_create_dto->abstract) {
    if(cJSON_AddStringToObject(item, "abstract", item_image_create_dto->abstract) == NULL) {
    goto fail; //String
    }
    }


    // item_image_create_dto->author
    if(item_image_create_dto->author) {
    if(cJSON_AddStringToObject(item, "author", item_image_create_dto->author) == NULL) {
    goto fail; //String
    }
    }


    // item_image_create_dto->key_words
    if(item_image_create_dto->key_words) {
    if(cJSON_AddStringToObject(item, "keyWords", item_image_create_dto->key_words) == NULL) {
    goto fail; //String
    }
    }


    // item_image_create_dto->notes
    if(item_image_create_dto->notes) {
    if(cJSON_AddStringToObject(item, "notes", item_image_create_dto->notes) == NULL) {
    goto fail; //String
    }
    }


    // item_image_create_dto->content_type
    if(item_image_create_dto->content_type) {
    if(cJSON_AddStringToObject(item, "contentType", item_image_create_dto->content_type) == NULL) {
    goto fail; //String
    }
    }


    // item_image_create_dto->file_length
    if(item_image_create_dto->file_length) {
    if(cJSON_AddNumberToObject(item, "fileLength", item_image_create_dto->file_length) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_image_create_dto->valid_response
    if(item_image_create_dto->valid_response) {
    if(cJSON_AddBoolToObject(item, "validResponse", item_image_create_dto->valid_response) == NULL) {
    goto fail; //Bool
    }
    }


    // item_image_create_dto->social_profile_id
    if(item_image_create_dto->social_profile_id) {
    if(cJSON_AddStringToObject(item, "socialProfileID", item_image_create_dto->social_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // item_image_create_dto->parent_file_upload_id
    if(item_image_create_dto->parent_file_upload_id) {
    if(cJSON_AddStringToObject(item, "parentFileUploadID", item_image_create_dto->parent_file_upload_id) == NULL) {
    goto fail; //String
    }
    }


    // item_image_create_dto->account_holder_id
    if(item_image_create_dto->account_holder_id) {
    if(cJSON_AddStringToObject(item, "accountHolderID", item_image_create_dto->account_holder_id) == NULL) {
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

item_image_create_dto_t *item_image_create_dto_parseFromJSON(cJSON *item_image_create_dtoJSON){

    item_image_create_dto_t *item_image_create_dto_local_var = NULL;

    // item_image_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(item_image_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // item_image_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(item_image_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // item_image_create_dto->business_id
    cJSON *business_id = cJSON_GetObjectItemCaseSensitive(item_image_create_dtoJSON, "businessID");
    if (!business_id) {
        goto end;
    }

    
    if(!cJSON_IsString(business_id))
    {
    goto end; //String
    }

    // item_image_create_dto->business_profile_record_id
    cJSON *business_profile_record_id = cJSON_GetObjectItemCaseSensitive(item_image_create_dtoJSON, "businessProfileRecordID");
    if (business_profile_record_id) { 
    if(!cJSON_IsString(business_profile_record_id) && !cJSON_IsNull(business_profile_record_id))
    {
    goto end; //String
    }
    }

    // item_image_create_dto->item_id
    cJSON *item_id = cJSON_GetObjectItemCaseSensitive(item_image_create_dtoJSON, "itemID");
    if (item_id) { 
    if(!cJSON_IsString(item_id) && !cJSON_IsNull(item_id))
    {
    goto end; //String
    }
    }

    // item_image_create_dto->is_item_mozaic_bg
    cJSON *is_item_mozaic_bg = cJSON_GetObjectItemCaseSensitive(item_image_create_dtoJSON, "isItemMozaicBG");
    if (is_item_mozaic_bg) { 
    if(!cJSON_IsBool(is_item_mozaic_bg))
    {
    goto end; //Bool
    }
    }

    // item_image_create_dto->m_d5_hash
    cJSON *m_d5_hash = cJSON_GetObjectItemCaseSensitive(item_image_create_dtoJSON, "mD5Hash");
    if (m_d5_hash) { 
    if(!cJSON_IsString(m_d5_hash) && !cJSON_IsNull(m_d5_hash))
    {
    goto end; //String
    }
    }

    // item_image_create_dto->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(item_image_create_dtoJSON, "metadata");
    if (metadata) { 
    if(!cJSON_IsString(metadata) && !cJSON_IsNull(metadata))
    {
    goto end; //String
    }
    }

    // item_image_create_dto->file_upload_url
    cJSON *file_upload_url = cJSON_GetObjectItemCaseSensitive(item_image_create_dtoJSON, "fileUploadURL");
    if (file_upload_url) { 
    if(!cJSON_IsString(file_upload_url) && !cJSON_IsNull(file_upload_url))
    {
    goto end; //String
    }
    }

    // item_image_create_dto->file_name
    cJSON *file_name = cJSON_GetObjectItemCaseSensitive(item_image_create_dtoJSON, "fileName");
    if (!file_name) {
        goto end;
    }

    
    if(!cJSON_IsString(file_name))
    {
    goto end; //String
    }

    // item_image_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(item_image_create_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // item_image_create_dto->abstract
    cJSON *abstract = cJSON_GetObjectItemCaseSensitive(item_image_create_dtoJSON, "abstract");
    if (abstract) { 
    if(!cJSON_IsString(abstract) && !cJSON_IsNull(abstract))
    {
    goto end; //String
    }
    }

    // item_image_create_dto->author
    cJSON *author = cJSON_GetObjectItemCaseSensitive(item_image_create_dtoJSON, "author");
    if (author) { 
    if(!cJSON_IsString(author) && !cJSON_IsNull(author))
    {
    goto end; //String
    }
    }

    // item_image_create_dto->key_words
    cJSON *key_words = cJSON_GetObjectItemCaseSensitive(item_image_create_dtoJSON, "keyWords");
    if (key_words) { 
    if(!cJSON_IsString(key_words) && !cJSON_IsNull(key_words))
    {
    goto end; //String
    }
    }

    // item_image_create_dto->notes
    cJSON *notes = cJSON_GetObjectItemCaseSensitive(item_image_create_dtoJSON, "notes");
    if (notes) { 
    if(!cJSON_IsString(notes) && !cJSON_IsNull(notes))
    {
    goto end; //String
    }
    }

    // item_image_create_dto->content_type
    cJSON *content_type = cJSON_GetObjectItemCaseSensitive(item_image_create_dtoJSON, "contentType");
    if (content_type) { 
    if(!cJSON_IsString(content_type) && !cJSON_IsNull(content_type))
    {
    goto end; //String
    }
    }

    // item_image_create_dto->file_length
    cJSON *file_length = cJSON_GetObjectItemCaseSensitive(item_image_create_dtoJSON, "fileLength");
    if (file_length) { 
    if(!cJSON_IsNumber(file_length))
    {
    goto end; //Numeric
    }
    }

    // item_image_create_dto->valid_response
    cJSON *valid_response = cJSON_GetObjectItemCaseSensitive(item_image_create_dtoJSON, "validResponse");
    if (valid_response) { 
    if(!cJSON_IsBool(valid_response))
    {
    goto end; //Bool
    }
    }

    // item_image_create_dto->social_profile_id
    cJSON *social_profile_id = cJSON_GetObjectItemCaseSensitive(item_image_create_dtoJSON, "socialProfileID");
    if (social_profile_id) { 
    if(!cJSON_IsString(social_profile_id) && !cJSON_IsNull(social_profile_id))
    {
    goto end; //String
    }
    }

    // item_image_create_dto->parent_file_upload_id
    cJSON *parent_file_upload_id = cJSON_GetObjectItemCaseSensitive(item_image_create_dtoJSON, "parentFileUploadID");
    if (parent_file_upload_id) { 
    if(!cJSON_IsString(parent_file_upload_id) && !cJSON_IsNull(parent_file_upload_id))
    {
    goto end; //String
    }
    }

    // item_image_create_dto->account_holder_id
    cJSON *account_holder_id = cJSON_GetObjectItemCaseSensitive(item_image_create_dtoJSON, "accountHolderID");
    if (account_holder_id) { 
    if(!cJSON_IsString(account_holder_id) && !cJSON_IsNull(account_holder_id))
    {
    goto end; //String
    }
    }


    item_image_create_dto_local_var = item_image_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(business_id->valuestring),
        business_profile_record_id && !cJSON_IsNull(business_profile_record_id) ? strdup(business_profile_record_id->valuestring) : NULL,
        item_id && !cJSON_IsNull(item_id) ? strdup(item_id->valuestring) : NULL,
        is_item_mozaic_bg ? is_item_mozaic_bg->valueint : 0,
        m_d5_hash && !cJSON_IsNull(m_d5_hash) ? strdup(m_d5_hash->valuestring) : NULL,
        metadata && !cJSON_IsNull(metadata) ? strdup(metadata->valuestring) : NULL,
        file_upload_url && !cJSON_IsNull(file_upload_url) ? strdup(file_upload_url->valuestring) : NULL,
        strdup(file_name->valuestring),
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        abstract && !cJSON_IsNull(abstract) ? strdup(abstract->valuestring) : NULL,
        author && !cJSON_IsNull(author) ? strdup(author->valuestring) : NULL,
        key_words && !cJSON_IsNull(key_words) ? strdup(key_words->valuestring) : NULL,
        notes && !cJSON_IsNull(notes) ? strdup(notes->valuestring) : NULL,
        content_type && !cJSON_IsNull(content_type) ? strdup(content_type->valuestring) : NULL,
        file_length ? file_length->valuedouble : 0,
        valid_response ? valid_response->valueint : 0,
        social_profile_id && !cJSON_IsNull(social_profile_id) ? strdup(social_profile_id->valuestring) : NULL,
        parent_file_upload_id && !cJSON_IsNull(parent_file_upload_id) ? strdup(parent_file_upload_id->valuestring) : NULL,
        account_holder_id && !cJSON_IsNull(account_holder_id) ? strdup(account_holder_id->valuestring) : NULL
        );

    return item_image_create_dto_local_var;
end:
    return NULL;

}
