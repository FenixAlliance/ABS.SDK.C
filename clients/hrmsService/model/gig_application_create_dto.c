#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "gig_application_create_dto.h"



gig_application_create_dto_t *gig_application_create_dto_create(
    char *id,
    char *timestamp,
    char *proposal,
    double cost,
    char *gig_id,
    char *currency_id,
    char *curriculum_id,
    char *curriculum_cover_id,
    char *job_applicant_profile_id
    ) {
    gig_application_create_dto_t *gig_application_create_dto_local_var = malloc(sizeof(gig_application_create_dto_t));
    if (!gig_application_create_dto_local_var) {
        return NULL;
    }
    gig_application_create_dto_local_var->id = id;
    gig_application_create_dto_local_var->timestamp = timestamp;
    gig_application_create_dto_local_var->proposal = proposal;
    gig_application_create_dto_local_var->cost = cost;
    gig_application_create_dto_local_var->gig_id = gig_id;
    gig_application_create_dto_local_var->currency_id = currency_id;
    gig_application_create_dto_local_var->curriculum_id = curriculum_id;
    gig_application_create_dto_local_var->curriculum_cover_id = curriculum_cover_id;
    gig_application_create_dto_local_var->job_applicant_profile_id = job_applicant_profile_id;

    return gig_application_create_dto_local_var;
}


void gig_application_create_dto_free(gig_application_create_dto_t *gig_application_create_dto) {
    if(NULL == gig_application_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (gig_application_create_dto->id) {
        free(gig_application_create_dto->id);
        gig_application_create_dto->id = NULL;
    }
    if (gig_application_create_dto->timestamp) {
        free(gig_application_create_dto->timestamp);
        gig_application_create_dto->timestamp = NULL;
    }
    if (gig_application_create_dto->proposal) {
        free(gig_application_create_dto->proposal);
        gig_application_create_dto->proposal = NULL;
    }
    if (gig_application_create_dto->gig_id) {
        free(gig_application_create_dto->gig_id);
        gig_application_create_dto->gig_id = NULL;
    }
    if (gig_application_create_dto->currency_id) {
        free(gig_application_create_dto->currency_id);
        gig_application_create_dto->currency_id = NULL;
    }
    if (gig_application_create_dto->curriculum_id) {
        free(gig_application_create_dto->curriculum_id);
        gig_application_create_dto->curriculum_id = NULL;
    }
    if (gig_application_create_dto->curriculum_cover_id) {
        free(gig_application_create_dto->curriculum_cover_id);
        gig_application_create_dto->curriculum_cover_id = NULL;
    }
    if (gig_application_create_dto->job_applicant_profile_id) {
        free(gig_application_create_dto->job_applicant_profile_id);
        gig_application_create_dto->job_applicant_profile_id = NULL;
    }
    free(gig_application_create_dto);
}

cJSON *gig_application_create_dto_convertToJSON(gig_application_create_dto_t *gig_application_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // gig_application_create_dto->id
    if(gig_application_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", gig_application_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // gig_application_create_dto->timestamp
    if(gig_application_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", gig_application_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // gig_application_create_dto->proposal
    if(gig_application_create_dto->proposal) {
    if(cJSON_AddStringToObject(item, "proposal", gig_application_create_dto->proposal) == NULL) {
    goto fail; //String
    }
    }


    // gig_application_create_dto->cost
    if(gig_application_create_dto->cost) {
    if(cJSON_AddNumberToObject(item, "cost", gig_application_create_dto->cost) == NULL) {
    goto fail; //Numeric
    }
    }


    // gig_application_create_dto->gig_id
    if(gig_application_create_dto->gig_id) {
    if(cJSON_AddStringToObject(item, "gigId", gig_application_create_dto->gig_id) == NULL) {
    goto fail; //String
    }
    }


    // gig_application_create_dto->currency_id
    if(gig_application_create_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", gig_application_create_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // gig_application_create_dto->curriculum_id
    if(gig_application_create_dto->curriculum_id) {
    if(cJSON_AddStringToObject(item, "curriculumId", gig_application_create_dto->curriculum_id) == NULL) {
    goto fail; //String
    }
    }


    // gig_application_create_dto->curriculum_cover_id
    if(gig_application_create_dto->curriculum_cover_id) {
    if(cJSON_AddStringToObject(item, "curriculumCoverId", gig_application_create_dto->curriculum_cover_id) == NULL) {
    goto fail; //String
    }
    }


    // gig_application_create_dto->job_applicant_profile_id
    if(gig_application_create_dto->job_applicant_profile_id) {
    if(cJSON_AddStringToObject(item, "jobApplicantProfileId", gig_application_create_dto->job_applicant_profile_id) == NULL) {
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

gig_application_create_dto_t *gig_application_create_dto_parseFromJSON(cJSON *gig_application_create_dtoJSON){

    gig_application_create_dto_t *gig_application_create_dto_local_var = NULL;

    // gig_application_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(gig_application_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // gig_application_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(gig_application_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // gig_application_create_dto->proposal
    cJSON *proposal = cJSON_GetObjectItemCaseSensitive(gig_application_create_dtoJSON, "proposal");
    if (proposal) { 
    if(!cJSON_IsString(proposal) && !cJSON_IsNull(proposal))
    {
    goto end; //String
    }
    }

    // gig_application_create_dto->cost
    cJSON *cost = cJSON_GetObjectItemCaseSensitive(gig_application_create_dtoJSON, "cost");
    if (cost) { 
    if(!cJSON_IsNumber(cost))
    {
    goto end; //Numeric
    }
    }

    // gig_application_create_dto->gig_id
    cJSON *gig_id = cJSON_GetObjectItemCaseSensitive(gig_application_create_dtoJSON, "gigId");
    if (gig_id) { 
    if(!cJSON_IsString(gig_id) && !cJSON_IsNull(gig_id))
    {
    goto end; //String
    }
    }

    // gig_application_create_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(gig_application_create_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // gig_application_create_dto->curriculum_id
    cJSON *curriculum_id = cJSON_GetObjectItemCaseSensitive(gig_application_create_dtoJSON, "curriculumId");
    if (curriculum_id) { 
    if(!cJSON_IsString(curriculum_id) && !cJSON_IsNull(curriculum_id))
    {
    goto end; //String
    }
    }

    // gig_application_create_dto->curriculum_cover_id
    cJSON *curriculum_cover_id = cJSON_GetObjectItemCaseSensitive(gig_application_create_dtoJSON, "curriculumCoverId");
    if (curriculum_cover_id) { 
    if(!cJSON_IsString(curriculum_cover_id) && !cJSON_IsNull(curriculum_cover_id))
    {
    goto end; //String
    }
    }

    // gig_application_create_dto->job_applicant_profile_id
    cJSON *job_applicant_profile_id = cJSON_GetObjectItemCaseSensitive(gig_application_create_dtoJSON, "jobApplicantProfileId");
    if (job_applicant_profile_id) { 
    if(!cJSON_IsString(job_applicant_profile_id) && !cJSON_IsNull(job_applicant_profile_id))
    {
    goto end; //String
    }
    }


    gig_application_create_dto_local_var = gig_application_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        proposal && !cJSON_IsNull(proposal) ? strdup(proposal->valuestring) : NULL,
        cost ? cost->valuedouble : 0,
        gig_id && !cJSON_IsNull(gig_id) ? strdup(gig_id->valuestring) : NULL,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        curriculum_id && !cJSON_IsNull(curriculum_id) ? strdup(curriculum_id->valuestring) : NULL,
        curriculum_cover_id && !cJSON_IsNull(curriculum_cover_id) ? strdup(curriculum_cover_id->valuestring) : NULL,
        job_applicant_profile_id && !cJSON_IsNull(job_applicant_profile_id) ? strdup(job_applicant_profile_id->valuestring) : NULL
        );

    return gig_application_create_dto_local_var;
end:
    return NULL;

}
