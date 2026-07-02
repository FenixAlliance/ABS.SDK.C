#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "job_field_dto.h"



job_field_dto_t *job_field_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *image_url,
    char *description,
    char *tenant_id,
    char *enrollment_id
    ) {
    job_field_dto_t *job_field_dto_local_var = malloc(sizeof(job_field_dto_t));
    if (!job_field_dto_local_var) {
        return NULL;
    }
    job_field_dto_local_var->id = id;
    job_field_dto_local_var->timestamp = timestamp;
    job_field_dto_local_var->name = name;
    job_field_dto_local_var->image_url = image_url;
    job_field_dto_local_var->description = description;
    job_field_dto_local_var->tenant_id = tenant_id;
    job_field_dto_local_var->enrollment_id = enrollment_id;

    return job_field_dto_local_var;
}


void job_field_dto_free(job_field_dto_t *job_field_dto) {
    if(NULL == job_field_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (job_field_dto->id) {
        free(job_field_dto->id);
        job_field_dto->id = NULL;
    }
    if (job_field_dto->timestamp) {
        free(job_field_dto->timestamp);
        job_field_dto->timestamp = NULL;
    }
    if (job_field_dto->name) {
        free(job_field_dto->name);
        job_field_dto->name = NULL;
    }
    if (job_field_dto->image_url) {
        free(job_field_dto->image_url);
        job_field_dto->image_url = NULL;
    }
    if (job_field_dto->description) {
        free(job_field_dto->description);
        job_field_dto->description = NULL;
    }
    if (job_field_dto->tenant_id) {
        free(job_field_dto->tenant_id);
        job_field_dto->tenant_id = NULL;
    }
    if (job_field_dto->enrollment_id) {
        free(job_field_dto->enrollment_id);
        job_field_dto->enrollment_id = NULL;
    }
    free(job_field_dto);
}

cJSON *job_field_dto_convertToJSON(job_field_dto_t *job_field_dto) {
    cJSON *item = cJSON_CreateObject();

    // job_field_dto->id
    if(job_field_dto->id) {
    if(cJSON_AddStringToObject(item, "id", job_field_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // job_field_dto->timestamp
    if(job_field_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", job_field_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // job_field_dto->name
    if(job_field_dto->name) {
    if(cJSON_AddStringToObject(item, "name", job_field_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // job_field_dto->image_url
    if(job_field_dto->image_url) {
    if(cJSON_AddStringToObject(item, "imageUrl", job_field_dto->image_url) == NULL) {
    goto fail; //String
    }
    }


    // job_field_dto->description
    if(job_field_dto->description) {
    if(cJSON_AddStringToObject(item, "description", job_field_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // job_field_dto->tenant_id
    if(job_field_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", job_field_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // job_field_dto->enrollment_id
    if(job_field_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", job_field_dto->enrollment_id) == NULL) {
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

job_field_dto_t *job_field_dto_parseFromJSON(cJSON *job_field_dtoJSON){

    job_field_dto_t *job_field_dto_local_var = NULL;

    // job_field_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(job_field_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // job_field_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(job_field_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // job_field_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(job_field_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // job_field_dto->image_url
    cJSON *image_url = cJSON_GetObjectItemCaseSensitive(job_field_dtoJSON, "imageUrl");
    if (image_url) { 
    if(!cJSON_IsString(image_url) && !cJSON_IsNull(image_url))
    {
    goto end; //String
    }
    }

    // job_field_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(job_field_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // job_field_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(job_field_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // job_field_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(job_field_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    job_field_dto_local_var = job_field_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        image_url && !cJSON_IsNull(image_url) ? strdup(image_url->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return job_field_dto_local_var;
end:
    return NULL;

}
