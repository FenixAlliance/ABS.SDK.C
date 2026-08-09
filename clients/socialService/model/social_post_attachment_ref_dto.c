#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "social_post_attachment_ref_dto.h"



social_post_attachment_ref_dto_t *social_post_attachment_ref_dto_create(
    char *id,
    char *file_url,
    char *title,
    char *content_type
    ) {
    social_post_attachment_ref_dto_t *social_post_attachment_ref_dto_local_var = malloc(sizeof(social_post_attachment_ref_dto_t));
    if (!social_post_attachment_ref_dto_local_var) {
        return NULL;
    }
    social_post_attachment_ref_dto_local_var->id = id;
    social_post_attachment_ref_dto_local_var->file_url = file_url;
    social_post_attachment_ref_dto_local_var->title = title;
    social_post_attachment_ref_dto_local_var->content_type = content_type;

    return social_post_attachment_ref_dto_local_var;
}


void social_post_attachment_ref_dto_free(social_post_attachment_ref_dto_t *social_post_attachment_ref_dto) {
    if(NULL == social_post_attachment_ref_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (social_post_attachment_ref_dto->id) {
        free(social_post_attachment_ref_dto->id);
        social_post_attachment_ref_dto->id = NULL;
    }
    if (social_post_attachment_ref_dto->file_url) {
        free(social_post_attachment_ref_dto->file_url);
        social_post_attachment_ref_dto->file_url = NULL;
    }
    if (social_post_attachment_ref_dto->title) {
        free(social_post_attachment_ref_dto->title);
        social_post_attachment_ref_dto->title = NULL;
    }
    if (social_post_attachment_ref_dto->content_type) {
        free(social_post_attachment_ref_dto->content_type);
        social_post_attachment_ref_dto->content_type = NULL;
    }
    free(social_post_attachment_ref_dto);
}

cJSON *social_post_attachment_ref_dto_convertToJSON(social_post_attachment_ref_dto_t *social_post_attachment_ref_dto) {
    cJSON *item = cJSON_CreateObject();

    // social_post_attachment_ref_dto->id
    if(social_post_attachment_ref_dto->id) {
    if(cJSON_AddStringToObject(item, "id", social_post_attachment_ref_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // social_post_attachment_ref_dto->file_url
    if(social_post_attachment_ref_dto->file_url) {
    if(cJSON_AddStringToObject(item, "fileUrl", social_post_attachment_ref_dto->file_url) == NULL) {
    goto fail; //String
    }
    }


    // social_post_attachment_ref_dto->title
    if(social_post_attachment_ref_dto->title) {
    if(cJSON_AddStringToObject(item, "title", social_post_attachment_ref_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // social_post_attachment_ref_dto->content_type
    if(social_post_attachment_ref_dto->content_type) {
    if(cJSON_AddStringToObject(item, "contentType", social_post_attachment_ref_dto->content_type) == NULL) {
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

social_post_attachment_ref_dto_t *social_post_attachment_ref_dto_parseFromJSON(cJSON *social_post_attachment_ref_dtoJSON){

    social_post_attachment_ref_dto_t *social_post_attachment_ref_dto_local_var = NULL;

    // social_post_attachment_ref_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(social_post_attachment_ref_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // social_post_attachment_ref_dto->file_url
    cJSON *file_url = cJSON_GetObjectItemCaseSensitive(social_post_attachment_ref_dtoJSON, "fileUrl");
    if (file_url) { 
    if(!cJSON_IsString(file_url) && !cJSON_IsNull(file_url))
    {
    goto end; //String
    }
    }

    // social_post_attachment_ref_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(social_post_attachment_ref_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // social_post_attachment_ref_dto->content_type
    cJSON *content_type = cJSON_GetObjectItemCaseSensitive(social_post_attachment_ref_dtoJSON, "contentType");
    if (content_type) { 
    if(!cJSON_IsString(content_type) && !cJSON_IsNull(content_type))
    {
    goto end; //String
    }
    }


    social_post_attachment_ref_dto_local_var = social_post_attachment_ref_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        file_url && !cJSON_IsNull(file_url) ? strdup(file_url->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        content_type && !cJSON_IsNull(content_type) ? strdup(content_type->valuestring) : NULL
        );

    return social_post_attachment_ref_dto_local_var;
end:
    return NULL;

}
