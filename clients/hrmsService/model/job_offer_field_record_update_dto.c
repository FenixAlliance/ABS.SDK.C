#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "job_offer_field_record_update_dto.h"



job_offer_field_record_update_dto_t *job_offer_field_record_update_dto_create(
    char *job_field_id,
    char *job_offer_id
    ) {
    job_offer_field_record_update_dto_t *job_offer_field_record_update_dto_local_var = malloc(sizeof(job_offer_field_record_update_dto_t));
    if (!job_offer_field_record_update_dto_local_var) {
        return NULL;
    }
    job_offer_field_record_update_dto_local_var->job_field_id = job_field_id;
    job_offer_field_record_update_dto_local_var->job_offer_id = job_offer_id;

    return job_offer_field_record_update_dto_local_var;
}


void job_offer_field_record_update_dto_free(job_offer_field_record_update_dto_t *job_offer_field_record_update_dto) {
    if(NULL == job_offer_field_record_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (job_offer_field_record_update_dto->job_field_id) {
        free(job_offer_field_record_update_dto->job_field_id);
        job_offer_field_record_update_dto->job_field_id = NULL;
    }
    if (job_offer_field_record_update_dto->job_offer_id) {
        free(job_offer_field_record_update_dto->job_offer_id);
        job_offer_field_record_update_dto->job_offer_id = NULL;
    }
    free(job_offer_field_record_update_dto);
}

cJSON *job_offer_field_record_update_dto_convertToJSON(job_offer_field_record_update_dto_t *job_offer_field_record_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // job_offer_field_record_update_dto->job_field_id
    if(job_offer_field_record_update_dto->job_field_id) {
    if(cJSON_AddStringToObject(item, "jobFieldId", job_offer_field_record_update_dto->job_field_id) == NULL) {
    goto fail; //String
    }
    }


    // job_offer_field_record_update_dto->job_offer_id
    if(job_offer_field_record_update_dto->job_offer_id) {
    if(cJSON_AddStringToObject(item, "jobOfferId", job_offer_field_record_update_dto->job_offer_id) == NULL) {
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

job_offer_field_record_update_dto_t *job_offer_field_record_update_dto_parseFromJSON(cJSON *job_offer_field_record_update_dtoJSON){

    job_offer_field_record_update_dto_t *job_offer_field_record_update_dto_local_var = NULL;

    // job_offer_field_record_update_dto->job_field_id
    cJSON *job_field_id = cJSON_GetObjectItemCaseSensitive(job_offer_field_record_update_dtoJSON, "jobFieldId");
    if (job_field_id) { 
    if(!cJSON_IsString(job_field_id) && !cJSON_IsNull(job_field_id))
    {
    goto end; //String
    }
    }

    // job_offer_field_record_update_dto->job_offer_id
    cJSON *job_offer_id = cJSON_GetObjectItemCaseSensitive(job_offer_field_record_update_dtoJSON, "jobOfferId");
    if (job_offer_id) { 
    if(!cJSON_IsString(job_offer_id) && !cJSON_IsNull(job_offer_id))
    {
    goto end; //String
    }
    }


    job_offer_field_record_update_dto_local_var = job_offer_field_record_update_dto_create (
        job_field_id && !cJSON_IsNull(job_field_id) ? strdup(job_field_id->valuestring) : NULL,
        job_offer_id && !cJSON_IsNull(job_offer_id) ? strdup(job_offer_id->valuestring) : NULL
        );

    return job_offer_field_record_update_dto_local_var;
end:
    return NULL;

}
