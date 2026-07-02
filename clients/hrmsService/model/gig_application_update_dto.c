#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "gig_application_update_dto.h"



gig_application_update_dto_t *gig_application_update_dto_create(
    char *proposal,
    double cost,
    char *currency_id,
    char *curriculum_id,
    char *curriculum_cover_id
    ) {
    gig_application_update_dto_t *gig_application_update_dto_local_var = malloc(sizeof(gig_application_update_dto_t));
    if (!gig_application_update_dto_local_var) {
        return NULL;
    }
    gig_application_update_dto_local_var->proposal = proposal;
    gig_application_update_dto_local_var->cost = cost;
    gig_application_update_dto_local_var->currency_id = currency_id;
    gig_application_update_dto_local_var->curriculum_id = curriculum_id;
    gig_application_update_dto_local_var->curriculum_cover_id = curriculum_cover_id;

    return gig_application_update_dto_local_var;
}


void gig_application_update_dto_free(gig_application_update_dto_t *gig_application_update_dto) {
    if(NULL == gig_application_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (gig_application_update_dto->proposal) {
        free(gig_application_update_dto->proposal);
        gig_application_update_dto->proposal = NULL;
    }
    if (gig_application_update_dto->currency_id) {
        free(gig_application_update_dto->currency_id);
        gig_application_update_dto->currency_id = NULL;
    }
    if (gig_application_update_dto->curriculum_id) {
        free(gig_application_update_dto->curriculum_id);
        gig_application_update_dto->curriculum_id = NULL;
    }
    if (gig_application_update_dto->curriculum_cover_id) {
        free(gig_application_update_dto->curriculum_cover_id);
        gig_application_update_dto->curriculum_cover_id = NULL;
    }
    free(gig_application_update_dto);
}

cJSON *gig_application_update_dto_convertToJSON(gig_application_update_dto_t *gig_application_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // gig_application_update_dto->proposal
    if(gig_application_update_dto->proposal) {
    if(cJSON_AddStringToObject(item, "proposal", gig_application_update_dto->proposal) == NULL) {
    goto fail; //String
    }
    }


    // gig_application_update_dto->cost
    if(gig_application_update_dto->cost) {
    if(cJSON_AddNumberToObject(item, "cost", gig_application_update_dto->cost) == NULL) {
    goto fail; //Numeric
    }
    }


    // gig_application_update_dto->currency_id
    if(gig_application_update_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", gig_application_update_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // gig_application_update_dto->curriculum_id
    if(gig_application_update_dto->curriculum_id) {
    if(cJSON_AddStringToObject(item, "curriculumId", gig_application_update_dto->curriculum_id) == NULL) {
    goto fail; //String
    }
    }


    // gig_application_update_dto->curriculum_cover_id
    if(gig_application_update_dto->curriculum_cover_id) {
    if(cJSON_AddStringToObject(item, "curriculumCoverId", gig_application_update_dto->curriculum_cover_id) == NULL) {
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

gig_application_update_dto_t *gig_application_update_dto_parseFromJSON(cJSON *gig_application_update_dtoJSON){

    gig_application_update_dto_t *gig_application_update_dto_local_var = NULL;

    // gig_application_update_dto->proposal
    cJSON *proposal = cJSON_GetObjectItemCaseSensitive(gig_application_update_dtoJSON, "proposal");
    if (proposal) { 
    if(!cJSON_IsString(proposal) && !cJSON_IsNull(proposal))
    {
    goto end; //String
    }
    }

    // gig_application_update_dto->cost
    cJSON *cost = cJSON_GetObjectItemCaseSensitive(gig_application_update_dtoJSON, "cost");
    if (cost) { 
    if(!cJSON_IsNumber(cost))
    {
    goto end; //Numeric
    }
    }

    // gig_application_update_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(gig_application_update_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // gig_application_update_dto->curriculum_id
    cJSON *curriculum_id = cJSON_GetObjectItemCaseSensitive(gig_application_update_dtoJSON, "curriculumId");
    if (curriculum_id) { 
    if(!cJSON_IsString(curriculum_id) && !cJSON_IsNull(curriculum_id))
    {
    goto end; //String
    }
    }

    // gig_application_update_dto->curriculum_cover_id
    cJSON *curriculum_cover_id = cJSON_GetObjectItemCaseSensitive(gig_application_update_dtoJSON, "curriculumCoverId");
    if (curriculum_cover_id) { 
    if(!cJSON_IsString(curriculum_cover_id) && !cJSON_IsNull(curriculum_cover_id))
    {
    goto end; //String
    }
    }


    gig_application_update_dto_local_var = gig_application_update_dto_create (
        proposal && !cJSON_IsNull(proposal) ? strdup(proposal->valuestring) : NULL,
        cost ? cost->valuedouble : 0,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        curriculum_id && !cJSON_IsNull(curriculum_id) ? strdup(curriculum_id->valuestring) : NULL,
        curriculum_cover_id && !cJSON_IsNull(curriculum_cover_id) ? strdup(curriculum_cover_id->valuestring) : NULL
        );

    return gig_application_update_dto_local_var;
end:
    return NULL;

}
