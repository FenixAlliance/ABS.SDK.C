#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "job_offer_application_update_dto.h"



job_offer_application_update_dto_t *job_offer_application_update_dto_create(
    char *start,
    char *end,
    double salary_expectation,
    char *currency_id,
    char *curriculum_id,
    char *curriculum_cover_id,
    char *partner_profile_id
    ) {
    job_offer_application_update_dto_t *job_offer_application_update_dto_local_var = malloc(sizeof(job_offer_application_update_dto_t));
    if (!job_offer_application_update_dto_local_var) {
        return NULL;
    }
    job_offer_application_update_dto_local_var->start = start;
    job_offer_application_update_dto_local_var->end = end;
    job_offer_application_update_dto_local_var->salary_expectation = salary_expectation;
    job_offer_application_update_dto_local_var->currency_id = currency_id;
    job_offer_application_update_dto_local_var->curriculum_id = curriculum_id;
    job_offer_application_update_dto_local_var->curriculum_cover_id = curriculum_cover_id;
    job_offer_application_update_dto_local_var->partner_profile_id = partner_profile_id;

    return job_offer_application_update_dto_local_var;
}


void job_offer_application_update_dto_free(job_offer_application_update_dto_t *job_offer_application_update_dto) {
    if(NULL == job_offer_application_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (job_offer_application_update_dto->start) {
        free(job_offer_application_update_dto->start);
        job_offer_application_update_dto->start = NULL;
    }
    if (job_offer_application_update_dto->end) {
        free(job_offer_application_update_dto->end);
        job_offer_application_update_dto->end = NULL;
    }
    if (job_offer_application_update_dto->currency_id) {
        free(job_offer_application_update_dto->currency_id);
        job_offer_application_update_dto->currency_id = NULL;
    }
    if (job_offer_application_update_dto->curriculum_id) {
        free(job_offer_application_update_dto->curriculum_id);
        job_offer_application_update_dto->curriculum_id = NULL;
    }
    if (job_offer_application_update_dto->curriculum_cover_id) {
        free(job_offer_application_update_dto->curriculum_cover_id);
        job_offer_application_update_dto->curriculum_cover_id = NULL;
    }
    if (job_offer_application_update_dto->partner_profile_id) {
        free(job_offer_application_update_dto->partner_profile_id);
        job_offer_application_update_dto->partner_profile_id = NULL;
    }
    free(job_offer_application_update_dto);
}

cJSON *job_offer_application_update_dto_convertToJSON(job_offer_application_update_dto_t *job_offer_application_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // job_offer_application_update_dto->start
    if(job_offer_application_update_dto->start) {
    if(cJSON_AddStringToObject(item, "start", job_offer_application_update_dto->start) == NULL) {
    goto fail; //Date-Time
    }
    }


    // job_offer_application_update_dto->end
    if(job_offer_application_update_dto->end) {
    if(cJSON_AddStringToObject(item, "end", job_offer_application_update_dto->end) == NULL) {
    goto fail; //Date-Time
    }
    }


    // job_offer_application_update_dto->salary_expectation
    if(job_offer_application_update_dto->salary_expectation) {
    if(cJSON_AddNumberToObject(item, "salaryExpectation", job_offer_application_update_dto->salary_expectation) == NULL) {
    goto fail; //Numeric
    }
    }


    // job_offer_application_update_dto->currency_id
    if(job_offer_application_update_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", job_offer_application_update_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // job_offer_application_update_dto->curriculum_id
    if(job_offer_application_update_dto->curriculum_id) {
    if(cJSON_AddStringToObject(item, "curriculumId", job_offer_application_update_dto->curriculum_id) == NULL) {
    goto fail; //String
    }
    }


    // job_offer_application_update_dto->curriculum_cover_id
    if(job_offer_application_update_dto->curriculum_cover_id) {
    if(cJSON_AddStringToObject(item, "curriculumCoverId", job_offer_application_update_dto->curriculum_cover_id) == NULL) {
    goto fail; //String
    }
    }


    // job_offer_application_update_dto->partner_profile_id
    if(job_offer_application_update_dto->partner_profile_id) {
    if(cJSON_AddStringToObject(item, "partnerProfileId", job_offer_application_update_dto->partner_profile_id) == NULL) {
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

job_offer_application_update_dto_t *job_offer_application_update_dto_parseFromJSON(cJSON *job_offer_application_update_dtoJSON){

    job_offer_application_update_dto_t *job_offer_application_update_dto_local_var = NULL;

    // job_offer_application_update_dto->start
    cJSON *start = cJSON_GetObjectItemCaseSensitive(job_offer_application_update_dtoJSON, "start");
    if (start) { 
    if(!cJSON_IsString(start) && !cJSON_IsNull(start))
    {
    goto end; //DateTime
    }
    }

    // job_offer_application_update_dto->end
    cJSON *end = cJSON_GetObjectItemCaseSensitive(job_offer_application_update_dtoJSON, "end");
    if (end) { 
    if(!cJSON_IsString(end) && !cJSON_IsNull(end))
    {
    goto end; //DateTime
    }
    }

    // job_offer_application_update_dto->salary_expectation
    cJSON *salary_expectation = cJSON_GetObjectItemCaseSensitive(job_offer_application_update_dtoJSON, "salaryExpectation");
    if (salary_expectation) { 
    if(!cJSON_IsNumber(salary_expectation))
    {
    goto end; //Numeric
    }
    }

    // job_offer_application_update_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(job_offer_application_update_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // job_offer_application_update_dto->curriculum_id
    cJSON *curriculum_id = cJSON_GetObjectItemCaseSensitive(job_offer_application_update_dtoJSON, "curriculumId");
    if (curriculum_id) { 
    if(!cJSON_IsString(curriculum_id) && !cJSON_IsNull(curriculum_id))
    {
    goto end; //String
    }
    }

    // job_offer_application_update_dto->curriculum_cover_id
    cJSON *curriculum_cover_id = cJSON_GetObjectItemCaseSensitive(job_offer_application_update_dtoJSON, "curriculumCoverId");
    if (curriculum_cover_id) { 
    if(!cJSON_IsString(curriculum_cover_id) && !cJSON_IsNull(curriculum_cover_id))
    {
    goto end; //String
    }
    }

    // job_offer_application_update_dto->partner_profile_id
    cJSON *partner_profile_id = cJSON_GetObjectItemCaseSensitive(job_offer_application_update_dtoJSON, "partnerProfileId");
    if (partner_profile_id) { 
    if(!cJSON_IsString(partner_profile_id) && !cJSON_IsNull(partner_profile_id))
    {
    goto end; //String
    }
    }


    job_offer_application_update_dto_local_var = job_offer_application_update_dto_create (
        start && !cJSON_IsNull(start) ? strdup(start->valuestring) : NULL,
        end && !cJSON_IsNull(end) ? strdup(end->valuestring) : NULL,
        salary_expectation ? salary_expectation->valuedouble : 0,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        curriculum_id && !cJSON_IsNull(curriculum_id) ? strdup(curriculum_id->valuestring) : NULL,
        curriculum_cover_id && !cJSON_IsNull(curriculum_cover_id) ? strdup(curriculum_cover_id->valuestring) : NULL,
        partner_profile_id && !cJSON_IsNull(partner_profile_id) ? strdup(partner_profile_id->valuestring) : NULL
        );

    return job_offer_application_update_dto_local_var;
end:
    return NULL;

}
