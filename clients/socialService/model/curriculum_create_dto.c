#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "curriculum_create_dto.h"



curriculum_create_dto_t *curriculum_create_dto_create(
    char *id,
    char *timestamp,
    char *social_profile_id,
    char *job_applicant_profile_id,
    int undergraduate,
    int certified_professional,
    int sales,
    int others,
    int finance,
    int research,
    int advocate,
    int marketing,
    int education,
    int executive,
    int commercial,
    int graphic_design,
    int sustainability,
    int administrative,
    int human_resources,
    int sound_engineering,
    int cloud_engineering,
    int first_level_support,
    int second_level_support,
    int software_engineering,
    int partner_account_representative,
    int startup_success_representative,
    int customer_success_representative
    ) {
    curriculum_create_dto_t *curriculum_create_dto_local_var = malloc(sizeof(curriculum_create_dto_t));
    if (!curriculum_create_dto_local_var) {
        return NULL;
    }
    curriculum_create_dto_local_var->id = id;
    curriculum_create_dto_local_var->timestamp = timestamp;
    curriculum_create_dto_local_var->social_profile_id = social_profile_id;
    curriculum_create_dto_local_var->job_applicant_profile_id = job_applicant_profile_id;
    curriculum_create_dto_local_var->undergraduate = undergraduate;
    curriculum_create_dto_local_var->certified_professional = certified_professional;
    curriculum_create_dto_local_var->sales = sales;
    curriculum_create_dto_local_var->others = others;
    curriculum_create_dto_local_var->finance = finance;
    curriculum_create_dto_local_var->research = research;
    curriculum_create_dto_local_var->advocate = advocate;
    curriculum_create_dto_local_var->marketing = marketing;
    curriculum_create_dto_local_var->education = education;
    curriculum_create_dto_local_var->executive = executive;
    curriculum_create_dto_local_var->commercial = commercial;
    curriculum_create_dto_local_var->graphic_design = graphic_design;
    curriculum_create_dto_local_var->sustainability = sustainability;
    curriculum_create_dto_local_var->administrative = administrative;
    curriculum_create_dto_local_var->human_resources = human_resources;
    curriculum_create_dto_local_var->sound_engineering = sound_engineering;
    curriculum_create_dto_local_var->cloud_engineering = cloud_engineering;
    curriculum_create_dto_local_var->first_level_support = first_level_support;
    curriculum_create_dto_local_var->second_level_support = second_level_support;
    curriculum_create_dto_local_var->software_engineering = software_engineering;
    curriculum_create_dto_local_var->partner_account_representative = partner_account_representative;
    curriculum_create_dto_local_var->startup_success_representative = startup_success_representative;
    curriculum_create_dto_local_var->customer_success_representative = customer_success_representative;

    return curriculum_create_dto_local_var;
}


void curriculum_create_dto_free(curriculum_create_dto_t *curriculum_create_dto) {
    if(NULL == curriculum_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (curriculum_create_dto->id) {
        free(curriculum_create_dto->id);
        curriculum_create_dto->id = NULL;
    }
    if (curriculum_create_dto->timestamp) {
        free(curriculum_create_dto->timestamp);
        curriculum_create_dto->timestamp = NULL;
    }
    if (curriculum_create_dto->social_profile_id) {
        free(curriculum_create_dto->social_profile_id);
        curriculum_create_dto->social_profile_id = NULL;
    }
    if (curriculum_create_dto->job_applicant_profile_id) {
        free(curriculum_create_dto->job_applicant_profile_id);
        curriculum_create_dto->job_applicant_profile_id = NULL;
    }
    free(curriculum_create_dto);
}

cJSON *curriculum_create_dto_convertToJSON(curriculum_create_dto_t *curriculum_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // curriculum_create_dto->id
    if(curriculum_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", curriculum_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // curriculum_create_dto->timestamp
    if(curriculum_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", curriculum_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // curriculum_create_dto->social_profile_id
    if(curriculum_create_dto->social_profile_id) {
    if(cJSON_AddStringToObject(item, "socialProfileId", curriculum_create_dto->social_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // curriculum_create_dto->job_applicant_profile_id
    if(curriculum_create_dto->job_applicant_profile_id) {
    if(cJSON_AddStringToObject(item, "jobApplicantProfileId", curriculum_create_dto->job_applicant_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // curriculum_create_dto->undergraduate
    if(curriculum_create_dto->undergraduate) {
    if(cJSON_AddBoolToObject(item, "undergraduate", curriculum_create_dto->undergraduate) == NULL) {
    goto fail; //Bool
    }
    }


    // curriculum_create_dto->certified_professional
    if(curriculum_create_dto->certified_professional) {
    if(cJSON_AddBoolToObject(item, "certifiedProfessional", curriculum_create_dto->certified_professional) == NULL) {
    goto fail; //Bool
    }
    }


    // curriculum_create_dto->sales
    if(curriculum_create_dto->sales) {
    if(cJSON_AddBoolToObject(item, "sales", curriculum_create_dto->sales) == NULL) {
    goto fail; //Bool
    }
    }


    // curriculum_create_dto->others
    if(curriculum_create_dto->others) {
    if(cJSON_AddBoolToObject(item, "others", curriculum_create_dto->others) == NULL) {
    goto fail; //Bool
    }
    }


    // curriculum_create_dto->finance
    if(curriculum_create_dto->finance) {
    if(cJSON_AddBoolToObject(item, "finance", curriculum_create_dto->finance) == NULL) {
    goto fail; //Bool
    }
    }


    // curriculum_create_dto->research
    if(curriculum_create_dto->research) {
    if(cJSON_AddBoolToObject(item, "research", curriculum_create_dto->research) == NULL) {
    goto fail; //Bool
    }
    }


    // curriculum_create_dto->advocate
    if(curriculum_create_dto->advocate) {
    if(cJSON_AddBoolToObject(item, "advocate", curriculum_create_dto->advocate) == NULL) {
    goto fail; //Bool
    }
    }


    // curriculum_create_dto->marketing
    if(curriculum_create_dto->marketing) {
    if(cJSON_AddBoolToObject(item, "marketing", curriculum_create_dto->marketing) == NULL) {
    goto fail; //Bool
    }
    }


    // curriculum_create_dto->education
    if(curriculum_create_dto->education) {
    if(cJSON_AddBoolToObject(item, "education", curriculum_create_dto->education) == NULL) {
    goto fail; //Bool
    }
    }


    // curriculum_create_dto->executive
    if(curriculum_create_dto->executive) {
    if(cJSON_AddBoolToObject(item, "executive", curriculum_create_dto->executive) == NULL) {
    goto fail; //Bool
    }
    }


    // curriculum_create_dto->commercial
    if(curriculum_create_dto->commercial) {
    if(cJSON_AddBoolToObject(item, "commercial", curriculum_create_dto->commercial) == NULL) {
    goto fail; //Bool
    }
    }


    // curriculum_create_dto->graphic_design
    if(curriculum_create_dto->graphic_design) {
    if(cJSON_AddBoolToObject(item, "graphicDesign", curriculum_create_dto->graphic_design) == NULL) {
    goto fail; //Bool
    }
    }


    // curriculum_create_dto->sustainability
    if(curriculum_create_dto->sustainability) {
    if(cJSON_AddBoolToObject(item, "sustainability", curriculum_create_dto->sustainability) == NULL) {
    goto fail; //Bool
    }
    }


    // curriculum_create_dto->administrative
    if(curriculum_create_dto->administrative) {
    if(cJSON_AddBoolToObject(item, "administrative", curriculum_create_dto->administrative) == NULL) {
    goto fail; //Bool
    }
    }


    // curriculum_create_dto->human_resources
    if(curriculum_create_dto->human_resources) {
    if(cJSON_AddBoolToObject(item, "humanResources", curriculum_create_dto->human_resources) == NULL) {
    goto fail; //Bool
    }
    }


    // curriculum_create_dto->sound_engineering
    if(curriculum_create_dto->sound_engineering) {
    if(cJSON_AddBoolToObject(item, "soundEngineering", curriculum_create_dto->sound_engineering) == NULL) {
    goto fail; //Bool
    }
    }


    // curriculum_create_dto->cloud_engineering
    if(curriculum_create_dto->cloud_engineering) {
    if(cJSON_AddBoolToObject(item, "cloudEngineering", curriculum_create_dto->cloud_engineering) == NULL) {
    goto fail; //Bool
    }
    }


    // curriculum_create_dto->first_level_support
    if(curriculum_create_dto->first_level_support) {
    if(cJSON_AddBoolToObject(item, "firstLevelSupport", curriculum_create_dto->first_level_support) == NULL) {
    goto fail; //Bool
    }
    }


    // curriculum_create_dto->second_level_support
    if(curriculum_create_dto->second_level_support) {
    if(cJSON_AddBoolToObject(item, "secondLevelSupport", curriculum_create_dto->second_level_support) == NULL) {
    goto fail; //Bool
    }
    }


    // curriculum_create_dto->software_engineering
    if(curriculum_create_dto->software_engineering) {
    if(cJSON_AddBoolToObject(item, "softwareEngineering", curriculum_create_dto->software_engineering) == NULL) {
    goto fail; //Bool
    }
    }


    // curriculum_create_dto->partner_account_representative
    if(curriculum_create_dto->partner_account_representative) {
    if(cJSON_AddBoolToObject(item, "partnerAccountRepresentative", curriculum_create_dto->partner_account_representative) == NULL) {
    goto fail; //Bool
    }
    }


    // curriculum_create_dto->startup_success_representative
    if(curriculum_create_dto->startup_success_representative) {
    if(cJSON_AddBoolToObject(item, "startupSuccessRepresentative", curriculum_create_dto->startup_success_representative) == NULL) {
    goto fail; //Bool
    }
    }


    // curriculum_create_dto->customer_success_representative
    if(curriculum_create_dto->customer_success_representative) {
    if(cJSON_AddBoolToObject(item, "customerSuccessRepresentative", curriculum_create_dto->customer_success_representative) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

curriculum_create_dto_t *curriculum_create_dto_parseFromJSON(cJSON *curriculum_create_dtoJSON){

    curriculum_create_dto_t *curriculum_create_dto_local_var = NULL;

    // curriculum_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(curriculum_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // curriculum_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(curriculum_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // curriculum_create_dto->social_profile_id
    cJSON *social_profile_id = cJSON_GetObjectItemCaseSensitive(curriculum_create_dtoJSON, "socialProfileId");
    if (social_profile_id) { 
    if(!cJSON_IsString(social_profile_id) && !cJSON_IsNull(social_profile_id))
    {
    goto end; //String
    }
    }

    // curriculum_create_dto->job_applicant_profile_id
    cJSON *job_applicant_profile_id = cJSON_GetObjectItemCaseSensitive(curriculum_create_dtoJSON, "jobApplicantProfileId");
    if (job_applicant_profile_id) { 
    if(!cJSON_IsString(job_applicant_profile_id) && !cJSON_IsNull(job_applicant_profile_id))
    {
    goto end; //String
    }
    }

    // curriculum_create_dto->undergraduate
    cJSON *undergraduate = cJSON_GetObjectItemCaseSensitive(curriculum_create_dtoJSON, "undergraduate");
    if (undergraduate) { 
    if(!cJSON_IsBool(undergraduate))
    {
    goto end; //Bool
    }
    }

    // curriculum_create_dto->certified_professional
    cJSON *certified_professional = cJSON_GetObjectItemCaseSensitive(curriculum_create_dtoJSON, "certifiedProfessional");
    if (certified_professional) { 
    if(!cJSON_IsBool(certified_professional))
    {
    goto end; //Bool
    }
    }

    // curriculum_create_dto->sales
    cJSON *sales = cJSON_GetObjectItemCaseSensitive(curriculum_create_dtoJSON, "sales");
    if (sales) { 
    if(!cJSON_IsBool(sales))
    {
    goto end; //Bool
    }
    }

    // curriculum_create_dto->others
    cJSON *others = cJSON_GetObjectItemCaseSensitive(curriculum_create_dtoJSON, "others");
    if (others) { 
    if(!cJSON_IsBool(others))
    {
    goto end; //Bool
    }
    }

    // curriculum_create_dto->finance
    cJSON *finance = cJSON_GetObjectItemCaseSensitive(curriculum_create_dtoJSON, "finance");
    if (finance) { 
    if(!cJSON_IsBool(finance))
    {
    goto end; //Bool
    }
    }

    // curriculum_create_dto->research
    cJSON *research = cJSON_GetObjectItemCaseSensitive(curriculum_create_dtoJSON, "research");
    if (research) { 
    if(!cJSON_IsBool(research))
    {
    goto end; //Bool
    }
    }

    // curriculum_create_dto->advocate
    cJSON *advocate = cJSON_GetObjectItemCaseSensitive(curriculum_create_dtoJSON, "advocate");
    if (advocate) { 
    if(!cJSON_IsBool(advocate))
    {
    goto end; //Bool
    }
    }

    // curriculum_create_dto->marketing
    cJSON *marketing = cJSON_GetObjectItemCaseSensitive(curriculum_create_dtoJSON, "marketing");
    if (marketing) { 
    if(!cJSON_IsBool(marketing))
    {
    goto end; //Bool
    }
    }

    // curriculum_create_dto->education
    cJSON *education = cJSON_GetObjectItemCaseSensitive(curriculum_create_dtoJSON, "education");
    if (education) { 
    if(!cJSON_IsBool(education))
    {
    goto end; //Bool
    }
    }

    // curriculum_create_dto->executive
    cJSON *executive = cJSON_GetObjectItemCaseSensitive(curriculum_create_dtoJSON, "executive");
    if (executive) { 
    if(!cJSON_IsBool(executive))
    {
    goto end; //Bool
    }
    }

    // curriculum_create_dto->commercial
    cJSON *commercial = cJSON_GetObjectItemCaseSensitive(curriculum_create_dtoJSON, "commercial");
    if (commercial) { 
    if(!cJSON_IsBool(commercial))
    {
    goto end; //Bool
    }
    }

    // curriculum_create_dto->graphic_design
    cJSON *graphic_design = cJSON_GetObjectItemCaseSensitive(curriculum_create_dtoJSON, "graphicDesign");
    if (graphic_design) { 
    if(!cJSON_IsBool(graphic_design))
    {
    goto end; //Bool
    }
    }

    // curriculum_create_dto->sustainability
    cJSON *sustainability = cJSON_GetObjectItemCaseSensitive(curriculum_create_dtoJSON, "sustainability");
    if (sustainability) { 
    if(!cJSON_IsBool(sustainability))
    {
    goto end; //Bool
    }
    }

    // curriculum_create_dto->administrative
    cJSON *administrative = cJSON_GetObjectItemCaseSensitive(curriculum_create_dtoJSON, "administrative");
    if (administrative) { 
    if(!cJSON_IsBool(administrative))
    {
    goto end; //Bool
    }
    }

    // curriculum_create_dto->human_resources
    cJSON *human_resources = cJSON_GetObjectItemCaseSensitive(curriculum_create_dtoJSON, "humanResources");
    if (human_resources) { 
    if(!cJSON_IsBool(human_resources))
    {
    goto end; //Bool
    }
    }

    // curriculum_create_dto->sound_engineering
    cJSON *sound_engineering = cJSON_GetObjectItemCaseSensitive(curriculum_create_dtoJSON, "soundEngineering");
    if (sound_engineering) { 
    if(!cJSON_IsBool(sound_engineering))
    {
    goto end; //Bool
    }
    }

    // curriculum_create_dto->cloud_engineering
    cJSON *cloud_engineering = cJSON_GetObjectItemCaseSensitive(curriculum_create_dtoJSON, "cloudEngineering");
    if (cloud_engineering) { 
    if(!cJSON_IsBool(cloud_engineering))
    {
    goto end; //Bool
    }
    }

    // curriculum_create_dto->first_level_support
    cJSON *first_level_support = cJSON_GetObjectItemCaseSensitive(curriculum_create_dtoJSON, "firstLevelSupport");
    if (first_level_support) { 
    if(!cJSON_IsBool(first_level_support))
    {
    goto end; //Bool
    }
    }

    // curriculum_create_dto->second_level_support
    cJSON *second_level_support = cJSON_GetObjectItemCaseSensitive(curriculum_create_dtoJSON, "secondLevelSupport");
    if (second_level_support) { 
    if(!cJSON_IsBool(second_level_support))
    {
    goto end; //Bool
    }
    }

    // curriculum_create_dto->software_engineering
    cJSON *software_engineering = cJSON_GetObjectItemCaseSensitive(curriculum_create_dtoJSON, "softwareEngineering");
    if (software_engineering) { 
    if(!cJSON_IsBool(software_engineering))
    {
    goto end; //Bool
    }
    }

    // curriculum_create_dto->partner_account_representative
    cJSON *partner_account_representative = cJSON_GetObjectItemCaseSensitive(curriculum_create_dtoJSON, "partnerAccountRepresentative");
    if (partner_account_representative) { 
    if(!cJSON_IsBool(partner_account_representative))
    {
    goto end; //Bool
    }
    }

    // curriculum_create_dto->startup_success_representative
    cJSON *startup_success_representative = cJSON_GetObjectItemCaseSensitive(curriculum_create_dtoJSON, "startupSuccessRepresentative");
    if (startup_success_representative) { 
    if(!cJSON_IsBool(startup_success_representative))
    {
    goto end; //Bool
    }
    }

    // curriculum_create_dto->customer_success_representative
    cJSON *customer_success_representative = cJSON_GetObjectItemCaseSensitive(curriculum_create_dtoJSON, "customerSuccessRepresentative");
    if (customer_success_representative) { 
    if(!cJSON_IsBool(customer_success_representative))
    {
    goto end; //Bool
    }
    }


    curriculum_create_dto_local_var = curriculum_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        social_profile_id && !cJSON_IsNull(social_profile_id) ? strdup(social_profile_id->valuestring) : NULL,
        job_applicant_profile_id && !cJSON_IsNull(job_applicant_profile_id) ? strdup(job_applicant_profile_id->valuestring) : NULL,
        undergraduate ? undergraduate->valueint : 0,
        certified_professional ? certified_professional->valueint : 0,
        sales ? sales->valueint : 0,
        others ? others->valueint : 0,
        finance ? finance->valueint : 0,
        research ? research->valueint : 0,
        advocate ? advocate->valueint : 0,
        marketing ? marketing->valueint : 0,
        education ? education->valueint : 0,
        executive ? executive->valueint : 0,
        commercial ? commercial->valueint : 0,
        graphic_design ? graphic_design->valueint : 0,
        sustainability ? sustainability->valueint : 0,
        administrative ? administrative->valueint : 0,
        human_resources ? human_resources->valueint : 0,
        sound_engineering ? sound_engineering->valueint : 0,
        cloud_engineering ? cloud_engineering->valueint : 0,
        first_level_support ? first_level_support->valueint : 0,
        second_level_support ? second_level_support->valueint : 0,
        software_engineering ? software_engineering->valueint : 0,
        partner_account_representative ? partner_account_representative->valueint : 0,
        startup_success_representative ? startup_success_representative->valueint : 0,
        customer_success_representative ? customer_success_representative->valueint : 0
        );

    return curriculum_create_dto_local_var;
end:
    return NULL;

}
