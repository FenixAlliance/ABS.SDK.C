#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "conversation_attachment_upload_result_dto.h"



conversation_attachment_upload_result_dto_t *conversation_attachment_upload_result_dto_create(
    char *file_id,
    char *name,
    char *content_type,
    long length
    ) {
    conversation_attachment_upload_result_dto_t *conversation_attachment_upload_result_dto_local_var = malloc(sizeof(conversation_attachment_upload_result_dto_t));
    if (!conversation_attachment_upload_result_dto_local_var) {
        return NULL;
    }
    conversation_attachment_upload_result_dto_local_var->file_id = file_id;
    conversation_attachment_upload_result_dto_local_var->name = name;
    conversation_attachment_upload_result_dto_local_var->content_type = content_type;
    conversation_attachment_upload_result_dto_local_var->length = length;

    return conversation_attachment_upload_result_dto_local_var;
}


void conversation_attachment_upload_result_dto_free(conversation_attachment_upload_result_dto_t *conversation_attachment_upload_result_dto) {
    if(NULL == conversation_attachment_upload_result_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (conversation_attachment_upload_result_dto->file_id) {
        free(conversation_attachment_upload_result_dto->file_id);
        conversation_attachment_upload_result_dto->file_id = NULL;
    }
    if (conversation_attachment_upload_result_dto->name) {
        free(conversation_attachment_upload_result_dto->name);
        conversation_attachment_upload_result_dto->name = NULL;
    }
    if (conversation_attachment_upload_result_dto->content_type) {
        free(conversation_attachment_upload_result_dto->content_type);
        conversation_attachment_upload_result_dto->content_type = NULL;
    }
    free(conversation_attachment_upload_result_dto);
}

cJSON *conversation_attachment_upload_result_dto_convertToJSON(conversation_attachment_upload_result_dto_t *conversation_attachment_upload_result_dto) {
    cJSON *item = cJSON_CreateObject();

    // conversation_attachment_upload_result_dto->file_id
    if(conversation_attachment_upload_result_dto->file_id) {
    if(cJSON_AddStringToObject(item, "fileId", conversation_attachment_upload_result_dto->file_id) == NULL) {
    goto fail; //String
    }
    }


    // conversation_attachment_upload_result_dto->name
    if(conversation_attachment_upload_result_dto->name) {
    if(cJSON_AddStringToObject(item, "name", conversation_attachment_upload_result_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // conversation_attachment_upload_result_dto->content_type
    if(conversation_attachment_upload_result_dto->content_type) {
    if(cJSON_AddStringToObject(item, "contentType", conversation_attachment_upload_result_dto->content_type) == NULL) {
    goto fail; //String
    }
    }


    // conversation_attachment_upload_result_dto->length
    if(conversation_attachment_upload_result_dto->length) {
    if(cJSON_AddNumberToObject(item, "length", conversation_attachment_upload_result_dto->length) == NULL) {
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

conversation_attachment_upload_result_dto_t *conversation_attachment_upload_result_dto_parseFromJSON(cJSON *conversation_attachment_upload_result_dtoJSON){

    conversation_attachment_upload_result_dto_t *conversation_attachment_upload_result_dto_local_var = NULL;

    // conversation_attachment_upload_result_dto->file_id
    cJSON *file_id = cJSON_GetObjectItemCaseSensitive(conversation_attachment_upload_result_dtoJSON, "fileId");
    if (file_id) { 
    if(!cJSON_IsString(file_id) && !cJSON_IsNull(file_id))
    {
    goto end; //String
    }
    }

    // conversation_attachment_upload_result_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(conversation_attachment_upload_result_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // conversation_attachment_upload_result_dto->content_type
    cJSON *content_type = cJSON_GetObjectItemCaseSensitive(conversation_attachment_upload_result_dtoJSON, "contentType");
    if (content_type) { 
    if(!cJSON_IsString(content_type) && !cJSON_IsNull(content_type))
    {
    goto end; //String
    }
    }

    // conversation_attachment_upload_result_dto->length
    cJSON *length = cJSON_GetObjectItemCaseSensitive(conversation_attachment_upload_result_dtoJSON, "length");
    if (length) { 
    if(!cJSON_IsNumber(length))
    {
    goto end; //Numeric
    }
    }


    conversation_attachment_upload_result_dto_local_var = conversation_attachment_upload_result_dto_create (
        file_id && !cJSON_IsNull(file_id) ? strdup(file_id->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        content_type && !cJSON_IsNull(content_type) ? strdup(content_type->valuestring) : NULL,
        length ? length->valuedouble : 0
        );

    return conversation_attachment_upload_result_dto_local_var;
end:
    return NULL;

}
