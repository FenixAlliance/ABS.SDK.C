#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "course_file_create_dto.h"



course_file_create_dto_t *course_file_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *file_name,
    char *file_upload_url,
    char *content_type,
    long file_length,
    char *course_id
    ) {
    course_file_create_dto_t *course_file_create_dto_local_var = malloc(sizeof(course_file_create_dto_t));
    if (!course_file_create_dto_local_var) {
        return NULL;
    }
    course_file_create_dto_local_var->id = id;
    course_file_create_dto_local_var->timestamp = timestamp;
    course_file_create_dto_local_var->title = title;
    course_file_create_dto_local_var->file_name = file_name;
    course_file_create_dto_local_var->file_upload_url = file_upload_url;
    course_file_create_dto_local_var->content_type = content_type;
    course_file_create_dto_local_var->file_length = file_length;
    course_file_create_dto_local_var->course_id = course_id;

    return course_file_create_dto_local_var;
}


void course_file_create_dto_free(course_file_create_dto_t *course_file_create_dto) {
    if(NULL == course_file_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (course_file_create_dto->id) {
        free(course_file_create_dto->id);
        course_file_create_dto->id = NULL;
    }
    if (course_file_create_dto->timestamp) {
        free(course_file_create_dto->timestamp);
        course_file_create_dto->timestamp = NULL;
    }
    if (course_file_create_dto->title) {
        free(course_file_create_dto->title);
        course_file_create_dto->title = NULL;
    }
    if (course_file_create_dto->file_name) {
        free(course_file_create_dto->file_name);
        course_file_create_dto->file_name = NULL;
    }
    if (course_file_create_dto->file_upload_url) {
        free(course_file_create_dto->file_upload_url);
        course_file_create_dto->file_upload_url = NULL;
    }
    if (course_file_create_dto->content_type) {
        free(course_file_create_dto->content_type);
        course_file_create_dto->content_type = NULL;
    }
    if (course_file_create_dto->course_id) {
        free(course_file_create_dto->course_id);
        course_file_create_dto->course_id = NULL;
    }
    free(course_file_create_dto);
}

cJSON *course_file_create_dto_convertToJSON(course_file_create_dto_t *course_file_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // course_file_create_dto->id
    if(course_file_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", course_file_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // course_file_create_dto->timestamp
    if(course_file_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", course_file_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_file_create_dto->title
    if (!course_file_create_dto->title) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "title", course_file_create_dto->title) == NULL) {
    goto fail; //String
    }


    // course_file_create_dto->file_name
    if (!course_file_create_dto->file_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "fileName", course_file_create_dto->file_name) == NULL) {
    goto fail; //String
    }


    // course_file_create_dto->file_upload_url
    if (!course_file_create_dto->file_upload_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "fileUploadURL", course_file_create_dto->file_upload_url) == NULL) {
    goto fail; //String
    }


    // course_file_create_dto->content_type
    if(course_file_create_dto->content_type) {
    if(cJSON_AddStringToObject(item, "contentType", course_file_create_dto->content_type) == NULL) {
    goto fail; //String
    }
    }


    // course_file_create_dto->file_length
    if(course_file_create_dto->file_length) {
    if(cJSON_AddNumberToObject(item, "fileLength", course_file_create_dto->file_length) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_file_create_dto->course_id
    if (!course_file_create_dto->course_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "courseID", course_file_create_dto->course_id) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

course_file_create_dto_t *course_file_create_dto_parseFromJSON(cJSON *course_file_create_dtoJSON){

    course_file_create_dto_t *course_file_create_dto_local_var = NULL;

    // course_file_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(course_file_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // course_file_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(course_file_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // course_file_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(course_file_create_dtoJSON, "title");
    if (!title) {
        goto end;
    }

    
    if(!cJSON_IsString(title))
    {
    goto end; //String
    }

    // course_file_create_dto->file_name
    cJSON *file_name = cJSON_GetObjectItemCaseSensitive(course_file_create_dtoJSON, "fileName");
    if (!file_name) {
        goto end;
    }

    
    if(!cJSON_IsString(file_name))
    {
    goto end; //String
    }

    // course_file_create_dto->file_upload_url
    cJSON *file_upload_url = cJSON_GetObjectItemCaseSensitive(course_file_create_dtoJSON, "fileUploadURL");
    if (!file_upload_url) {
        goto end;
    }

    
    if(!cJSON_IsString(file_upload_url))
    {
    goto end; //String
    }

    // course_file_create_dto->content_type
    cJSON *content_type = cJSON_GetObjectItemCaseSensitive(course_file_create_dtoJSON, "contentType");
    if (content_type) { 
    if(!cJSON_IsString(content_type) && !cJSON_IsNull(content_type))
    {
    goto end; //String
    }
    }

    // course_file_create_dto->file_length
    cJSON *file_length = cJSON_GetObjectItemCaseSensitive(course_file_create_dtoJSON, "fileLength");
    if (file_length) { 
    if(!cJSON_IsNumber(file_length))
    {
    goto end; //Numeric
    }
    }

    // course_file_create_dto->course_id
    cJSON *course_id = cJSON_GetObjectItemCaseSensitive(course_file_create_dtoJSON, "courseID");
    if (!course_id) {
        goto end;
    }

    
    if(!cJSON_IsString(course_id))
    {
    goto end; //String
    }


    course_file_create_dto_local_var = course_file_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(title->valuestring),
        strdup(file_name->valuestring),
        strdup(file_upload_url->valuestring),
        content_type && !cJSON_IsNull(content_type) ? strdup(content_type->valuestring) : NULL,
        file_length ? file_length->valuedouble : 0,
        strdup(course_id->valuestring)
        );

    return course_file_create_dto_local_var;
end:
    return NULL;

}
