#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "job_offer_create_dto.h"



job_offer_create_dto_t *job_offer_create_dto_create(
    char *id,
    char *timestamp
    ) {
    job_offer_create_dto_t *job_offer_create_dto_local_var = malloc(sizeof(job_offer_create_dto_t));
    if (!job_offer_create_dto_local_var) {
        return NULL;
    }
    job_offer_create_dto_local_var->id = id;
    job_offer_create_dto_local_var->timestamp = timestamp;

    return job_offer_create_dto_local_var;
}


void job_offer_create_dto_free(job_offer_create_dto_t *job_offer_create_dto) {
    if(NULL == job_offer_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (job_offer_create_dto->id) {
        free(job_offer_create_dto->id);
        job_offer_create_dto->id = NULL;
    }
    if (job_offer_create_dto->timestamp) {
        free(job_offer_create_dto->timestamp);
        job_offer_create_dto->timestamp = NULL;
    }
    free(job_offer_create_dto);
}

cJSON *job_offer_create_dto_convertToJSON(job_offer_create_dto_t *job_offer_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // job_offer_create_dto->id
    if(job_offer_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", job_offer_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // job_offer_create_dto->timestamp
    if(job_offer_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", job_offer_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

job_offer_create_dto_t *job_offer_create_dto_parseFromJSON(cJSON *job_offer_create_dtoJSON){

    job_offer_create_dto_t *job_offer_create_dto_local_var = NULL;

    // job_offer_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(job_offer_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // job_offer_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(job_offer_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }


    job_offer_create_dto_local_var = job_offer_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL
        );

    return job_offer_create_dto_local_var;
end:
    return NULL;

}
