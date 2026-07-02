#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "required_skill_record_update_dto.h"


char* required_skill_record_update_dto_required_skill_record_type_ToString(hrmsservice_required_skill_record_update_dto_REQUIREDSKILLRECORDTYPE_e required_skill_record_type) {
    char* required_skill_record_typeArray[] =  { "NULL", "MustHave", "Optional" };
    return required_skill_record_typeArray[required_skill_record_type];
}

hrmsservice_required_skill_record_update_dto_REQUIREDSKILLRECORDTYPE_e required_skill_record_update_dto_required_skill_record_type_FromString(char* required_skill_record_type){
    int stringToReturn = 0;
    char *required_skill_record_typeArray[] =  { "NULL", "MustHave", "Optional" };
    size_t sizeofArray = sizeof(required_skill_record_typeArray) / sizeof(required_skill_record_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(required_skill_record_type, required_skill_record_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

required_skill_record_update_dto_t *required_skill_record_update_dto_create(
    char *skill_id,
    char *job_offer_id,
    char *employer_profile_id,
    int experience_in_years,
    double priority,
    hrmsservice_required_skill_record_update_dto_REQUIREDSKILLRECORDTYPE_e required_skill_record_type
    ) {
    required_skill_record_update_dto_t *required_skill_record_update_dto_local_var = malloc(sizeof(required_skill_record_update_dto_t));
    if (!required_skill_record_update_dto_local_var) {
        return NULL;
    }
    required_skill_record_update_dto_local_var->skill_id = skill_id;
    required_skill_record_update_dto_local_var->job_offer_id = job_offer_id;
    required_skill_record_update_dto_local_var->employer_profile_id = employer_profile_id;
    required_skill_record_update_dto_local_var->experience_in_years = experience_in_years;
    required_skill_record_update_dto_local_var->priority = priority;
    required_skill_record_update_dto_local_var->required_skill_record_type = required_skill_record_type;

    return required_skill_record_update_dto_local_var;
}


void required_skill_record_update_dto_free(required_skill_record_update_dto_t *required_skill_record_update_dto) {
    if(NULL == required_skill_record_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (required_skill_record_update_dto->skill_id) {
        free(required_skill_record_update_dto->skill_id);
        required_skill_record_update_dto->skill_id = NULL;
    }
    if (required_skill_record_update_dto->job_offer_id) {
        free(required_skill_record_update_dto->job_offer_id);
        required_skill_record_update_dto->job_offer_id = NULL;
    }
    if (required_skill_record_update_dto->employer_profile_id) {
        free(required_skill_record_update_dto->employer_profile_id);
        required_skill_record_update_dto->employer_profile_id = NULL;
    }
    free(required_skill_record_update_dto);
}

cJSON *required_skill_record_update_dto_convertToJSON(required_skill_record_update_dto_t *required_skill_record_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // required_skill_record_update_dto->skill_id
    if(required_skill_record_update_dto->skill_id) {
    if(cJSON_AddStringToObject(item, "skillId", required_skill_record_update_dto->skill_id) == NULL) {
    goto fail; //String
    }
    }


    // required_skill_record_update_dto->job_offer_id
    if(required_skill_record_update_dto->job_offer_id) {
    if(cJSON_AddStringToObject(item, "jobOfferId", required_skill_record_update_dto->job_offer_id) == NULL) {
    goto fail; //String
    }
    }


    // required_skill_record_update_dto->employer_profile_id
    if(required_skill_record_update_dto->employer_profile_id) {
    if(cJSON_AddStringToObject(item, "employerProfileId", required_skill_record_update_dto->employer_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // required_skill_record_update_dto->experience_in_years
    if(required_skill_record_update_dto->experience_in_years) {
    if(cJSON_AddNumberToObject(item, "experienceInYears", required_skill_record_update_dto->experience_in_years) == NULL) {
    goto fail; //Numeric
    }
    }


    // required_skill_record_update_dto->priority
    if(required_skill_record_update_dto->priority) {
    if(cJSON_AddNumberToObject(item, "priority", required_skill_record_update_dto->priority) == NULL) {
    goto fail; //Numeric
    }
    }


    // required_skill_record_update_dto->required_skill_record_type
    if(required_skill_record_update_dto->required_skill_record_type != hrmsservice_required_skill_record_update_dto_REQUIREDSKILLRECORDTYPE_NULL) {
    if(cJSON_AddStringToObject(item, "requiredSkillRecordType", required_skill_record_typerequired_skill_record_update_dto_ToString(required_skill_record_update_dto->required_skill_record_type)) == NULL)
    {
    goto fail; //Enum
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

required_skill_record_update_dto_t *required_skill_record_update_dto_parseFromJSON(cJSON *required_skill_record_update_dtoJSON){

    required_skill_record_update_dto_t *required_skill_record_update_dto_local_var = NULL;

    // required_skill_record_update_dto->skill_id
    cJSON *skill_id = cJSON_GetObjectItemCaseSensitive(required_skill_record_update_dtoJSON, "skillId");
    if (skill_id) { 
    if(!cJSON_IsString(skill_id) && !cJSON_IsNull(skill_id))
    {
    goto end; //String
    }
    }

    // required_skill_record_update_dto->job_offer_id
    cJSON *job_offer_id = cJSON_GetObjectItemCaseSensitive(required_skill_record_update_dtoJSON, "jobOfferId");
    if (job_offer_id) { 
    if(!cJSON_IsString(job_offer_id) && !cJSON_IsNull(job_offer_id))
    {
    goto end; //String
    }
    }

    // required_skill_record_update_dto->employer_profile_id
    cJSON *employer_profile_id = cJSON_GetObjectItemCaseSensitive(required_skill_record_update_dtoJSON, "employerProfileId");
    if (employer_profile_id) { 
    if(!cJSON_IsString(employer_profile_id) && !cJSON_IsNull(employer_profile_id))
    {
    goto end; //String
    }
    }

    // required_skill_record_update_dto->experience_in_years
    cJSON *experience_in_years = cJSON_GetObjectItemCaseSensitive(required_skill_record_update_dtoJSON, "experienceInYears");
    if (experience_in_years) { 
    if(!cJSON_IsNumber(experience_in_years))
    {
    goto end; //Numeric
    }
    }

    // required_skill_record_update_dto->priority
    cJSON *priority = cJSON_GetObjectItemCaseSensitive(required_skill_record_update_dtoJSON, "priority");
    if (priority) { 
    if(!cJSON_IsNumber(priority))
    {
    goto end; //Numeric
    }
    }

    // required_skill_record_update_dto->required_skill_record_type
    cJSON *required_skill_record_type = cJSON_GetObjectItemCaseSensitive(required_skill_record_update_dtoJSON, "requiredSkillRecordType");
    hrmsservice_required_skill_record_update_dto_REQUIREDSKILLRECORDTYPE_e required_skill_record_typeVariable;
    if (required_skill_record_type) { 
    if(!cJSON_IsString(required_skill_record_type))
    {
    goto end; //Enum
    }
    required_skill_record_typeVariable = required_skill_record_update_dto_required_skill_record_type_FromString(required_skill_record_type->valuestring);
    }


    required_skill_record_update_dto_local_var = required_skill_record_update_dto_create (
        skill_id && !cJSON_IsNull(skill_id) ? strdup(skill_id->valuestring) : NULL,
        job_offer_id && !cJSON_IsNull(job_offer_id) ? strdup(job_offer_id->valuestring) : NULL,
        employer_profile_id && !cJSON_IsNull(employer_profile_id) ? strdup(employer_profile_id->valuestring) : NULL,
        experience_in_years ? experience_in_years->valuedouble : 0,
        priority ? priority->valuedouble : 0,
        required_skill_record_type ? required_skill_record_typeVariable : hrmsservice_required_skill_record_update_dto_REQUIREDSKILLRECORDTYPE_NULL
        );

    return required_skill_record_update_dto_local_var;
end:
    return NULL;

}
