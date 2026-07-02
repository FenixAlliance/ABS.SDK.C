#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "curriculum_update_dto.h"



curriculum_update_dto_t *curriculum_update_dto_create(
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
    curriculum_update_dto_t *curriculum_update_dto_local_var = malloc(sizeof(curriculum_update_dto_t));
    if (!curriculum_update_dto_local_var) {
        return NULL;
    }
    curriculum_update_dto_local_var->job_applicant_profile_id = job_applicant_profile_id;
    curriculum_update_dto_local_var->undergraduate = undergraduate;
    curriculum_update_dto_local_var->certified_professional = certified_professional;
    curriculum_update_dto_local_var->sales = sales;
    curriculum_update_dto_local_var->others = others;
    curriculum_update_dto_local_var->finance = finance;
    curriculum_update_dto_local_var->research = research;
    curriculum_update_dto_local_var->advocate = advocate;
    curriculum_update_dto_local_var->marketing = marketing;
    curriculum_update_dto_local_var->education = education;
    curriculum_update_dto_local_var->executive = executive;
    curriculum_update_dto_local_var->commercial = commercial;
    curriculum_update_dto_local_var->graphic_design = graphic_design;
    curriculum_update_dto_local_var->sustainability = sustainability;
    curriculum_update_dto_local_var->administrative = administrative;
    curriculum_update_dto_local_var->human_resources = human_resources;
    curriculum_update_dto_local_var->sound_engineering = sound_engineering;
    curriculum_update_dto_local_var->cloud_engineering = cloud_engineering;
    curriculum_update_dto_local_var->first_level_support = first_level_support;
    curriculum_update_dto_local_var->second_level_support = second_level_support;
    curriculum_update_dto_local_var->software_engineering = software_engineering;
    curriculum_update_dto_local_var->partner_account_representative = partner_account_representative;
    curriculum_update_dto_local_var->startup_success_representative = startup_success_representative;
    curriculum_update_dto_local_var->customer_success_representative = customer_success_representative;

    return curriculum_update_dto_local_var;
}


void curriculum_update_dto_free(curriculum_update_dto_t *curriculum_update_dto) {
    if(NULL == curriculum_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (curriculum_update_dto->job_applicant_profile_id) {
        free(curriculum_update_dto->job_applicant_profile_id);
        curriculum_update_dto->job_applicant_profile_id = NULL;
    }
    free(curriculum_update_dto);
}

cJSON *curriculum_update_dto_convertToJSON(curriculum_update_dto_t *curriculum_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // curriculum_update_dto->job_applicant_profile_id
    if(curriculum_update_dto->job_applicant_profile_id) {
    if(cJSON_AddStringToObject(item, "jobApplicantProfileId", curriculum_update_dto->job_applicant_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // curriculum_update_dto->undergraduate
    if(curriculum_update_dto->undergraduate) {
    if(cJSON_AddBoolToObject(item, "undergraduate", curriculum_update_dto->undergraduate) == NULL) {
    goto fail; //Bool
    }
    }


    // curriculum_update_dto->certified_professional
    if(curriculum_update_dto->certified_professional) {
    if(cJSON_AddBoolToObject(item, "certifiedProfessional", curriculum_update_dto->certified_professional) == NULL) {
    goto fail; //Bool
    }
    }


    // curriculum_update_dto->sales
    if(curriculum_update_dto->sales) {
    if(cJSON_AddBoolToObject(item, "sales", curriculum_update_dto->sales) == NULL) {
    goto fail; //Bool
    }
    }


    // curriculum_update_dto->others
    if(curriculum_update_dto->others) {
    if(cJSON_AddBoolToObject(item, "others", curriculum_update_dto->others) == NULL) {
    goto fail; //Bool
    }
    }


    // curriculum_update_dto->finance
    if(curriculum_update_dto->finance) {
    if(cJSON_AddBoolToObject(item, "finance", curriculum_update_dto->finance) == NULL) {
    goto fail; //Bool
    }
    }


    // curriculum_update_dto->research
    if(curriculum_update_dto->research) {
    if(cJSON_AddBoolToObject(item, "research", curriculum_update_dto->research) == NULL) {
    goto fail; //Bool
    }
    }


    // curriculum_update_dto->advocate
    if(curriculum_update_dto->advocate) {
    if(cJSON_AddBoolToObject(item, "advocate", curriculum_update_dto->advocate) == NULL) {
    goto fail; //Bool
    }
    }


    // curriculum_update_dto->marketing
    if(curriculum_update_dto->marketing) {
    if(cJSON_AddBoolToObject(item, "marketing", curriculum_update_dto->marketing) == NULL) {
    goto fail; //Bool
    }
    }


    // curriculum_update_dto->education
    if(curriculum_update_dto->education) {
    if(cJSON_AddBoolToObject(item, "education", curriculum_update_dto->education) == NULL) {
    goto fail; //Bool
    }
    }


    // curriculum_update_dto->executive
    if(curriculum_update_dto->executive) {
    if(cJSON_AddBoolToObject(item, "executive", curriculum_update_dto->executive) == NULL) {
    goto fail; //Bool
    }
    }


    // curriculum_update_dto->commercial
    if(curriculum_update_dto->commercial) {
    if(cJSON_AddBoolToObject(item, "commercial", curriculum_update_dto->commercial) == NULL) {
    goto fail; //Bool
    }
    }


    // curriculum_update_dto->graphic_design
    if(curriculum_update_dto->graphic_design) {
    if(cJSON_AddBoolToObject(item, "graphicDesign", curriculum_update_dto->graphic_design) == NULL) {
    goto fail; //Bool
    }
    }


    // curriculum_update_dto->sustainability
    if(curriculum_update_dto->sustainability) {
    if(cJSON_AddBoolToObject(item, "sustainability", curriculum_update_dto->sustainability) == NULL) {
    goto fail; //Bool
    }
    }


    // curriculum_update_dto->administrative
    if(curriculum_update_dto->administrative) {
    if(cJSON_AddBoolToObject(item, "administrative", curriculum_update_dto->administrative) == NULL) {
    goto fail; //Bool
    }
    }


    // curriculum_update_dto->human_resources
    if(curriculum_update_dto->human_resources) {
    if(cJSON_AddBoolToObject(item, "humanResources", curriculum_update_dto->human_resources) == NULL) {
    goto fail; //Bool
    }
    }


    // curriculum_update_dto->sound_engineering
    if(curriculum_update_dto->sound_engineering) {
    if(cJSON_AddBoolToObject(item, "soundEngineering", curriculum_update_dto->sound_engineering) == NULL) {
    goto fail; //Bool
    }
    }


    // curriculum_update_dto->cloud_engineering
    if(curriculum_update_dto->cloud_engineering) {
    if(cJSON_AddBoolToObject(item, "cloudEngineering", curriculum_update_dto->cloud_engineering) == NULL) {
    goto fail; //Bool
    }
    }


    // curriculum_update_dto->first_level_support
    if(curriculum_update_dto->first_level_support) {
    if(cJSON_AddBoolToObject(item, "firstLevelSupport", curriculum_update_dto->first_level_support) == NULL) {
    goto fail; //Bool
    }
    }


    // curriculum_update_dto->second_level_support
    if(curriculum_update_dto->second_level_support) {
    if(cJSON_AddBoolToObject(item, "secondLevelSupport", curriculum_update_dto->second_level_support) == NULL) {
    goto fail; //Bool
    }
    }


    // curriculum_update_dto->software_engineering
    if(curriculum_update_dto->software_engineering) {
    if(cJSON_AddBoolToObject(item, "softwareEngineering", curriculum_update_dto->software_engineering) == NULL) {
    goto fail; //Bool
    }
    }


    // curriculum_update_dto->partner_account_representative
    if(curriculum_update_dto->partner_account_representative) {
    if(cJSON_AddBoolToObject(item, "partnerAccountRepresentative", curriculum_update_dto->partner_account_representative) == NULL) {
    goto fail; //Bool
    }
    }


    // curriculum_update_dto->startup_success_representative
    if(curriculum_update_dto->startup_success_representative) {
    if(cJSON_AddBoolToObject(item, "startupSuccessRepresentative", curriculum_update_dto->startup_success_representative) == NULL) {
    goto fail; //Bool
    }
    }


    // curriculum_update_dto->customer_success_representative
    if(curriculum_update_dto->customer_success_representative) {
    if(cJSON_AddBoolToObject(item, "customerSuccessRepresentative", curriculum_update_dto->customer_success_representative) == NULL) {
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

curriculum_update_dto_t *curriculum_update_dto_parseFromJSON(cJSON *curriculum_update_dtoJSON){

    curriculum_update_dto_t *curriculum_update_dto_local_var = NULL;

    // curriculum_update_dto->job_applicant_profile_id
    cJSON *job_applicant_profile_id = cJSON_GetObjectItemCaseSensitive(curriculum_update_dtoJSON, "jobApplicantProfileId");
    if (job_applicant_profile_id) { 
    if(!cJSON_IsString(job_applicant_profile_id) && !cJSON_IsNull(job_applicant_profile_id))
    {
    goto end; //String
    }
    }

    // curriculum_update_dto->undergraduate
    cJSON *undergraduate = cJSON_GetObjectItemCaseSensitive(curriculum_update_dtoJSON, "undergraduate");
    if (undergraduate) { 
    if(!cJSON_IsBool(undergraduate))
    {
    goto end; //Bool
    }
    }

    // curriculum_update_dto->certified_professional
    cJSON *certified_professional = cJSON_GetObjectItemCaseSensitive(curriculum_update_dtoJSON, "certifiedProfessional");
    if (certified_professional) { 
    if(!cJSON_IsBool(certified_professional))
    {
    goto end; //Bool
    }
    }

    // curriculum_update_dto->sales
    cJSON *sales = cJSON_GetObjectItemCaseSensitive(curriculum_update_dtoJSON, "sales");
    if (sales) { 
    if(!cJSON_IsBool(sales))
    {
    goto end; //Bool
    }
    }

    // curriculum_update_dto->others
    cJSON *others = cJSON_GetObjectItemCaseSensitive(curriculum_update_dtoJSON, "others");
    if (others) { 
    if(!cJSON_IsBool(others))
    {
    goto end; //Bool
    }
    }

    // curriculum_update_dto->finance
    cJSON *finance = cJSON_GetObjectItemCaseSensitive(curriculum_update_dtoJSON, "finance");
    if (finance) { 
    if(!cJSON_IsBool(finance))
    {
    goto end; //Bool
    }
    }

    // curriculum_update_dto->research
    cJSON *research = cJSON_GetObjectItemCaseSensitive(curriculum_update_dtoJSON, "research");
    if (research) { 
    if(!cJSON_IsBool(research))
    {
    goto end; //Bool
    }
    }

    // curriculum_update_dto->advocate
    cJSON *advocate = cJSON_GetObjectItemCaseSensitive(curriculum_update_dtoJSON, "advocate");
    if (advocate) { 
    if(!cJSON_IsBool(advocate))
    {
    goto end; //Bool
    }
    }

    // curriculum_update_dto->marketing
    cJSON *marketing = cJSON_GetObjectItemCaseSensitive(curriculum_update_dtoJSON, "marketing");
    if (marketing) { 
    if(!cJSON_IsBool(marketing))
    {
    goto end; //Bool
    }
    }

    // curriculum_update_dto->education
    cJSON *education = cJSON_GetObjectItemCaseSensitive(curriculum_update_dtoJSON, "education");
    if (education) { 
    if(!cJSON_IsBool(education))
    {
    goto end; //Bool
    }
    }

    // curriculum_update_dto->executive
    cJSON *executive = cJSON_GetObjectItemCaseSensitive(curriculum_update_dtoJSON, "executive");
    if (executive) { 
    if(!cJSON_IsBool(executive))
    {
    goto end; //Bool
    }
    }

    // curriculum_update_dto->commercial
    cJSON *commercial = cJSON_GetObjectItemCaseSensitive(curriculum_update_dtoJSON, "commercial");
    if (commercial) { 
    if(!cJSON_IsBool(commercial))
    {
    goto end; //Bool
    }
    }

    // curriculum_update_dto->graphic_design
    cJSON *graphic_design = cJSON_GetObjectItemCaseSensitive(curriculum_update_dtoJSON, "graphicDesign");
    if (graphic_design) { 
    if(!cJSON_IsBool(graphic_design))
    {
    goto end; //Bool
    }
    }

    // curriculum_update_dto->sustainability
    cJSON *sustainability = cJSON_GetObjectItemCaseSensitive(curriculum_update_dtoJSON, "sustainability");
    if (sustainability) { 
    if(!cJSON_IsBool(sustainability))
    {
    goto end; //Bool
    }
    }

    // curriculum_update_dto->administrative
    cJSON *administrative = cJSON_GetObjectItemCaseSensitive(curriculum_update_dtoJSON, "administrative");
    if (administrative) { 
    if(!cJSON_IsBool(administrative))
    {
    goto end; //Bool
    }
    }

    // curriculum_update_dto->human_resources
    cJSON *human_resources = cJSON_GetObjectItemCaseSensitive(curriculum_update_dtoJSON, "humanResources");
    if (human_resources) { 
    if(!cJSON_IsBool(human_resources))
    {
    goto end; //Bool
    }
    }

    // curriculum_update_dto->sound_engineering
    cJSON *sound_engineering = cJSON_GetObjectItemCaseSensitive(curriculum_update_dtoJSON, "soundEngineering");
    if (sound_engineering) { 
    if(!cJSON_IsBool(sound_engineering))
    {
    goto end; //Bool
    }
    }

    // curriculum_update_dto->cloud_engineering
    cJSON *cloud_engineering = cJSON_GetObjectItemCaseSensitive(curriculum_update_dtoJSON, "cloudEngineering");
    if (cloud_engineering) { 
    if(!cJSON_IsBool(cloud_engineering))
    {
    goto end; //Bool
    }
    }

    // curriculum_update_dto->first_level_support
    cJSON *first_level_support = cJSON_GetObjectItemCaseSensitive(curriculum_update_dtoJSON, "firstLevelSupport");
    if (first_level_support) { 
    if(!cJSON_IsBool(first_level_support))
    {
    goto end; //Bool
    }
    }

    // curriculum_update_dto->second_level_support
    cJSON *second_level_support = cJSON_GetObjectItemCaseSensitive(curriculum_update_dtoJSON, "secondLevelSupport");
    if (second_level_support) { 
    if(!cJSON_IsBool(second_level_support))
    {
    goto end; //Bool
    }
    }

    // curriculum_update_dto->software_engineering
    cJSON *software_engineering = cJSON_GetObjectItemCaseSensitive(curriculum_update_dtoJSON, "softwareEngineering");
    if (software_engineering) { 
    if(!cJSON_IsBool(software_engineering))
    {
    goto end; //Bool
    }
    }

    // curriculum_update_dto->partner_account_representative
    cJSON *partner_account_representative = cJSON_GetObjectItemCaseSensitive(curriculum_update_dtoJSON, "partnerAccountRepresentative");
    if (partner_account_representative) { 
    if(!cJSON_IsBool(partner_account_representative))
    {
    goto end; //Bool
    }
    }

    // curriculum_update_dto->startup_success_representative
    cJSON *startup_success_representative = cJSON_GetObjectItemCaseSensitive(curriculum_update_dtoJSON, "startupSuccessRepresentative");
    if (startup_success_representative) { 
    if(!cJSON_IsBool(startup_success_representative))
    {
    goto end; //Bool
    }
    }

    // curriculum_update_dto->customer_success_representative
    cJSON *customer_success_representative = cJSON_GetObjectItemCaseSensitive(curriculum_update_dtoJSON, "customerSuccessRepresentative");
    if (customer_success_representative) { 
    if(!cJSON_IsBool(customer_success_representative))
    {
    goto end; //Bool
    }
    }


    curriculum_update_dto_local_var = curriculum_update_dto_create (
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

    return curriculum_update_dto_local_var;
end:
    return NULL;

}
