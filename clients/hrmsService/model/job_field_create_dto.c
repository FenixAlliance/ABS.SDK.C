#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "job_field_create_dto.h"



job_field_create_dto_t *job_field_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *image_url,
    char *description
    ) {
    job_field_create_dto_t *job_field_create_dto_local_var = malloc(sizeof(job_field_create_dto_t));
    if (!job_field_create_dto_local_var) {
        return NULL;
    }
    job_field_create_dto_local_var->id = id;
    job_field_create_dto_local_var->timestamp = timestamp;
    job_field_create_dto_local_var->name = name;
    job_field_create_dto_local_var->image_url = image_url;
    job_field_create_dto_local_var->description = description;

    return job_field_create_dto_local_var;
}


void job_field_create_dto_free(job_field_create_dto_t *job_field_create_dto) {
    if(NULL == job_field_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (job_field_create_dto->id) {
        free(job_field_create_dto->id);
        job_field_create_dto->id = NULL;
    }
    if (job_field_create_dto->timestamp) {
        free(job_field_create_dto->timestamp);
        job_field_create_dto->timestamp = NULL;
    }
    if (job_field_create_dto->name) {
        free(job_field_create_dto->name);
        job_field_create_dto->name = NULL;
    }
    if (job_field_create_dto->image_url) {
        free(job_field_create_dto->image_url);
        job_field_create_dto->image_url = NULL;
    }
    if (job_field_create_dto->description) {
        free(job_field_create_dto->description);
        job_field_create_dto->description = NULL;
    }
    free(job_field_create_dto);
}

cJSON *job_field_create_dto_convertToJSON(job_field_create_dto_t *job_field_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // job_field_create_dto->id
    if(job_field_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", job_field_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // job_field_create_dto->timestamp
    if(job_field_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", job_field_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // job_field_create_dto->name
    if (!job_field_create_dto->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", job_field_create_dto->name) == NULL) {
    goto fail; //String
    }


    // job_field_create_dto->image_url
    if(job_field_create_dto->image_url) {
    if(cJSON_AddStringToObject(item, "imageUrl", job_field_create_dto->image_url) == NULL) {
    goto fail; //String
    }
    }


    // job_field_create_dto->description
    if(job_field_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", job_field_create_dto->description) == NULL) {
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

job_field_create_dto_t *job_field_create_dto_parseFromJSON(cJSON *job_field_create_dtoJSON){

    job_field_create_dto_t *job_field_create_dto_local_var = NULL;

    // job_field_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(job_field_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // job_field_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(job_field_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // job_field_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(job_field_create_dtoJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // job_field_create_dto->image_url
    cJSON *image_url = cJSON_GetObjectItemCaseSensitive(job_field_create_dtoJSON, "imageUrl");
    if (image_url) { 
    if(!cJSON_IsString(image_url) && !cJSON_IsNull(image_url))
    {
    goto end; //String
    }
    }

    // job_field_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(job_field_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    job_field_create_dto_local_var = job_field_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(name->valuestring),
        image_url && !cJSON_IsNull(image_url) ? strdup(image_url->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return job_field_create_dto_local_var;
end:
    return NULL;

}
