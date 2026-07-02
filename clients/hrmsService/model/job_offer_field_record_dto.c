#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "job_offer_field_record_dto.h"



job_offer_field_record_dto_t *job_offer_field_record_dto_create(
    char *id,
    char *timestamp,
    char *job_field_id,
    char *job_offer_id,
    char *tenant_id,
    char *enrollment_id
    ) {
    job_offer_field_record_dto_t *job_offer_field_record_dto_local_var = malloc(sizeof(job_offer_field_record_dto_t));
    if (!job_offer_field_record_dto_local_var) {
        return NULL;
    }
    job_offer_field_record_dto_local_var->id = id;
    job_offer_field_record_dto_local_var->timestamp = timestamp;
    job_offer_field_record_dto_local_var->job_field_id = job_field_id;
    job_offer_field_record_dto_local_var->job_offer_id = job_offer_id;
    job_offer_field_record_dto_local_var->tenant_id = tenant_id;
    job_offer_field_record_dto_local_var->enrollment_id = enrollment_id;

    return job_offer_field_record_dto_local_var;
}


void job_offer_field_record_dto_free(job_offer_field_record_dto_t *job_offer_field_record_dto) {
    if(NULL == job_offer_field_record_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (job_offer_field_record_dto->id) {
        free(job_offer_field_record_dto->id);
        job_offer_field_record_dto->id = NULL;
    }
    if (job_offer_field_record_dto->timestamp) {
        free(job_offer_field_record_dto->timestamp);
        job_offer_field_record_dto->timestamp = NULL;
    }
    if (job_offer_field_record_dto->job_field_id) {
        free(job_offer_field_record_dto->job_field_id);
        job_offer_field_record_dto->job_field_id = NULL;
    }
    if (job_offer_field_record_dto->job_offer_id) {
        free(job_offer_field_record_dto->job_offer_id);
        job_offer_field_record_dto->job_offer_id = NULL;
    }
    if (job_offer_field_record_dto->tenant_id) {
        free(job_offer_field_record_dto->tenant_id);
        job_offer_field_record_dto->tenant_id = NULL;
    }
    if (job_offer_field_record_dto->enrollment_id) {
        free(job_offer_field_record_dto->enrollment_id);
        job_offer_field_record_dto->enrollment_id = NULL;
    }
    free(job_offer_field_record_dto);
}

cJSON *job_offer_field_record_dto_convertToJSON(job_offer_field_record_dto_t *job_offer_field_record_dto) {
    cJSON *item = cJSON_CreateObject();

    // job_offer_field_record_dto->id
    if(job_offer_field_record_dto->id) {
    if(cJSON_AddStringToObject(item, "id", job_offer_field_record_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // job_offer_field_record_dto->timestamp
    if(job_offer_field_record_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", job_offer_field_record_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // job_offer_field_record_dto->job_field_id
    if(job_offer_field_record_dto->job_field_id) {
    if(cJSON_AddStringToObject(item, "jobFieldId", job_offer_field_record_dto->job_field_id) == NULL) {
    goto fail; //String
    }
    }


    // job_offer_field_record_dto->job_offer_id
    if(job_offer_field_record_dto->job_offer_id) {
    if(cJSON_AddStringToObject(item, "jobOfferId", job_offer_field_record_dto->job_offer_id) == NULL) {
    goto fail; //String
    }
    }


    // job_offer_field_record_dto->tenant_id
    if(job_offer_field_record_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", job_offer_field_record_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // job_offer_field_record_dto->enrollment_id
    if(job_offer_field_record_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", job_offer_field_record_dto->enrollment_id) == NULL) {
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

job_offer_field_record_dto_t *job_offer_field_record_dto_parseFromJSON(cJSON *job_offer_field_record_dtoJSON){

    job_offer_field_record_dto_t *job_offer_field_record_dto_local_var = NULL;

    // job_offer_field_record_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(job_offer_field_record_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // job_offer_field_record_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(job_offer_field_record_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // job_offer_field_record_dto->job_field_id
    cJSON *job_field_id = cJSON_GetObjectItemCaseSensitive(job_offer_field_record_dtoJSON, "jobFieldId");
    if (job_field_id) { 
    if(!cJSON_IsString(job_field_id) && !cJSON_IsNull(job_field_id))
    {
    goto end; //String
    }
    }

    // job_offer_field_record_dto->job_offer_id
    cJSON *job_offer_id = cJSON_GetObjectItemCaseSensitive(job_offer_field_record_dtoJSON, "jobOfferId");
    if (job_offer_id) { 
    if(!cJSON_IsString(job_offer_id) && !cJSON_IsNull(job_offer_id))
    {
    goto end; //String
    }
    }

    // job_offer_field_record_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(job_offer_field_record_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // job_offer_field_record_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(job_offer_field_record_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    job_offer_field_record_dto_local_var = job_offer_field_record_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        job_field_id && !cJSON_IsNull(job_field_id) ? strdup(job_field_id->valuestring) : NULL,
        job_offer_id && !cJSON_IsNull(job_offer_id) ? strdup(job_offer_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return job_offer_field_record_dto_local_var;
end:
    return NULL;

}
