#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "course_file_update_dto.h"



course_file_update_dto_t *course_file_update_dto_create(
    char *title,
    char *file_name,
    char *file_upload_url,
    char *content_type,
    long file_length
    ) {
    course_file_update_dto_t *course_file_update_dto_local_var = malloc(sizeof(course_file_update_dto_t));
    if (!course_file_update_dto_local_var) {
        return NULL;
    }
    course_file_update_dto_local_var->title = title;
    course_file_update_dto_local_var->file_name = file_name;
    course_file_update_dto_local_var->file_upload_url = file_upload_url;
    course_file_update_dto_local_var->content_type = content_type;
    course_file_update_dto_local_var->file_length = file_length;

    return course_file_update_dto_local_var;
}


void course_file_update_dto_free(course_file_update_dto_t *course_file_update_dto) {
    if(NULL == course_file_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (course_file_update_dto->title) {
        free(course_file_update_dto->title);
        course_file_update_dto->title = NULL;
    }
    if (course_file_update_dto->file_name) {
        free(course_file_update_dto->file_name);
        course_file_update_dto->file_name = NULL;
    }
    if (course_file_update_dto->file_upload_url) {
        free(course_file_update_dto->file_upload_url);
        course_file_update_dto->file_upload_url = NULL;
    }
    if (course_file_update_dto->content_type) {
        free(course_file_update_dto->content_type);
        course_file_update_dto->content_type = NULL;
    }
    free(course_file_update_dto);
}

cJSON *course_file_update_dto_convertToJSON(course_file_update_dto_t *course_file_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // course_file_update_dto->title
    if(course_file_update_dto->title) {
    if(cJSON_AddStringToObject(item, "title", course_file_update_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // course_file_update_dto->file_name
    if(course_file_update_dto->file_name) {
    if(cJSON_AddStringToObject(item, "fileName", course_file_update_dto->file_name) == NULL) {
    goto fail; //String
    }
    }


    // course_file_update_dto->file_upload_url
    if(course_file_update_dto->file_upload_url) {
    if(cJSON_AddStringToObject(item, "fileUploadURL", course_file_update_dto->file_upload_url) == NULL) {
    goto fail; //String
    }
    }


    // course_file_update_dto->content_type
    if(course_file_update_dto->content_type) {
    if(cJSON_AddStringToObject(item, "contentType", course_file_update_dto->content_type) == NULL) {
    goto fail; //String
    }
    }


    // course_file_update_dto->file_length
    if(course_file_update_dto->file_length) {
    if(cJSON_AddNumberToObject(item, "fileLength", course_file_update_dto->file_length) == NULL) {
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

course_file_update_dto_t *course_file_update_dto_parseFromJSON(cJSON *course_file_update_dtoJSON){

    course_file_update_dto_t *course_file_update_dto_local_var = NULL;

    // course_file_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(course_file_update_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // course_file_update_dto->file_name
    cJSON *file_name = cJSON_GetObjectItemCaseSensitive(course_file_update_dtoJSON, "fileName");
    if (file_name) { 
    if(!cJSON_IsString(file_name) && !cJSON_IsNull(file_name))
    {
    goto end; //String
    }
    }

    // course_file_update_dto->file_upload_url
    cJSON *file_upload_url = cJSON_GetObjectItemCaseSensitive(course_file_update_dtoJSON, "fileUploadURL");
    if (file_upload_url) { 
    if(!cJSON_IsString(file_upload_url) && !cJSON_IsNull(file_upload_url))
    {
    goto end; //String
    }
    }

    // course_file_update_dto->content_type
    cJSON *content_type = cJSON_GetObjectItemCaseSensitive(course_file_update_dtoJSON, "contentType");
    if (content_type) { 
    if(!cJSON_IsString(content_type) && !cJSON_IsNull(content_type))
    {
    goto end; //String
    }
    }

    // course_file_update_dto->file_length
    cJSON *file_length = cJSON_GetObjectItemCaseSensitive(course_file_update_dtoJSON, "fileLength");
    if (file_length) { 
    if(!cJSON_IsNumber(file_length))
    {
    goto end; //Numeric
    }
    }


    course_file_update_dto_local_var = course_file_update_dto_create (
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        file_name && !cJSON_IsNull(file_name) ? strdup(file_name->valuestring) : NULL,
        file_upload_url && !cJSON_IsNull(file_upload_url) ? strdup(file_upload_url->valuestring) : NULL,
        content_type && !cJSON_IsNull(content_type) ? strdup(content_type->valuestring) : NULL,
        file_length ? file_length->valuedouble : 0
        );

    return course_file_update_dto_local_var;
end:
    return NULL;

}
