#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "job_offer_create_dto.h"



job_offer_create_dto_t *job_offer_create_dto_create(
    char *id,
    char *timestamp,
    int remote,
    char *expected_hire_date,
    char *title,
    char *description,
    char *technical_skills,
    char *non_technical_skills,
    char *certifications,
    char *project_experience,
    char *technologies,
    char *benefits,
    int is_official_job_offer,
    int is_remote_job_offer,
    int is_mid_time_job_offer,
    int is_undergraduate_option,
    int min_overall_experience_years,
    int availiable_positions_count,
    double min_salary_amount,
    double max_salary_amount,
    char *currency_id,
    char *job_field_id,
    char *employer_profile_id,
    char *country_id,
    char *country_state_id,
    char *city_id,
    char *image_url,
    char *location,
    char *external_url,
    char *data,
    char *data_label,
    char *data1,
    char *data1_label,
    char *data2,
    char *data2_label,
    char *data3,
    char *data3_label,
    char *data4,
    char *data4_label,
    char *data5,
    char *data5_label,
    char *data6,
    char *data6_label,
    char *data7,
    char *data7_label,
    char *data8,
    char *data8_label,
    char *data9,
    char *data9_label
    ) {
    job_offer_create_dto_t *job_offer_create_dto_local_var = malloc(sizeof(job_offer_create_dto_t));
    if (!job_offer_create_dto_local_var) {
        return NULL;
    }
    job_offer_create_dto_local_var->id = id;
    job_offer_create_dto_local_var->timestamp = timestamp;
    job_offer_create_dto_local_var->remote = remote;
    job_offer_create_dto_local_var->expected_hire_date = expected_hire_date;
    job_offer_create_dto_local_var->title = title;
    job_offer_create_dto_local_var->description = description;
    job_offer_create_dto_local_var->technical_skills = technical_skills;
    job_offer_create_dto_local_var->non_technical_skills = non_technical_skills;
    job_offer_create_dto_local_var->certifications = certifications;
    job_offer_create_dto_local_var->project_experience = project_experience;
    job_offer_create_dto_local_var->technologies = technologies;
    job_offer_create_dto_local_var->benefits = benefits;
    job_offer_create_dto_local_var->is_official_job_offer = is_official_job_offer;
    job_offer_create_dto_local_var->is_remote_job_offer = is_remote_job_offer;
    job_offer_create_dto_local_var->is_mid_time_job_offer = is_mid_time_job_offer;
    job_offer_create_dto_local_var->is_undergraduate_option = is_undergraduate_option;
    job_offer_create_dto_local_var->min_overall_experience_years = min_overall_experience_years;
    job_offer_create_dto_local_var->availiable_positions_count = availiable_positions_count;
    job_offer_create_dto_local_var->min_salary_amount = min_salary_amount;
    job_offer_create_dto_local_var->max_salary_amount = max_salary_amount;
    job_offer_create_dto_local_var->currency_id = currency_id;
    job_offer_create_dto_local_var->job_field_id = job_field_id;
    job_offer_create_dto_local_var->employer_profile_id = employer_profile_id;
    job_offer_create_dto_local_var->country_id = country_id;
    job_offer_create_dto_local_var->country_state_id = country_state_id;
    job_offer_create_dto_local_var->city_id = city_id;
    job_offer_create_dto_local_var->image_url = image_url;
    job_offer_create_dto_local_var->location = location;
    job_offer_create_dto_local_var->external_url = external_url;
    job_offer_create_dto_local_var->data = data;
    job_offer_create_dto_local_var->data_label = data_label;
    job_offer_create_dto_local_var->data1 = data1;
    job_offer_create_dto_local_var->data1_label = data1_label;
    job_offer_create_dto_local_var->data2 = data2;
    job_offer_create_dto_local_var->data2_label = data2_label;
    job_offer_create_dto_local_var->data3 = data3;
    job_offer_create_dto_local_var->data3_label = data3_label;
    job_offer_create_dto_local_var->data4 = data4;
    job_offer_create_dto_local_var->data4_label = data4_label;
    job_offer_create_dto_local_var->data5 = data5;
    job_offer_create_dto_local_var->data5_label = data5_label;
    job_offer_create_dto_local_var->data6 = data6;
    job_offer_create_dto_local_var->data6_label = data6_label;
    job_offer_create_dto_local_var->data7 = data7;
    job_offer_create_dto_local_var->data7_label = data7_label;
    job_offer_create_dto_local_var->data8 = data8;
    job_offer_create_dto_local_var->data8_label = data8_label;
    job_offer_create_dto_local_var->data9 = data9;
    job_offer_create_dto_local_var->data9_label = data9_label;

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
    if (job_offer_create_dto->expected_hire_date) {
        free(job_offer_create_dto->expected_hire_date);
        job_offer_create_dto->expected_hire_date = NULL;
    }
    if (job_offer_create_dto->title) {
        free(job_offer_create_dto->title);
        job_offer_create_dto->title = NULL;
    }
    if (job_offer_create_dto->description) {
        free(job_offer_create_dto->description);
        job_offer_create_dto->description = NULL;
    }
    if (job_offer_create_dto->technical_skills) {
        free(job_offer_create_dto->technical_skills);
        job_offer_create_dto->technical_skills = NULL;
    }
    if (job_offer_create_dto->non_technical_skills) {
        free(job_offer_create_dto->non_technical_skills);
        job_offer_create_dto->non_technical_skills = NULL;
    }
    if (job_offer_create_dto->certifications) {
        free(job_offer_create_dto->certifications);
        job_offer_create_dto->certifications = NULL;
    }
    if (job_offer_create_dto->project_experience) {
        free(job_offer_create_dto->project_experience);
        job_offer_create_dto->project_experience = NULL;
    }
    if (job_offer_create_dto->technologies) {
        free(job_offer_create_dto->technologies);
        job_offer_create_dto->technologies = NULL;
    }
    if (job_offer_create_dto->benefits) {
        free(job_offer_create_dto->benefits);
        job_offer_create_dto->benefits = NULL;
    }
    if (job_offer_create_dto->currency_id) {
        free(job_offer_create_dto->currency_id);
        job_offer_create_dto->currency_id = NULL;
    }
    if (job_offer_create_dto->job_field_id) {
        free(job_offer_create_dto->job_field_id);
        job_offer_create_dto->job_field_id = NULL;
    }
    if (job_offer_create_dto->employer_profile_id) {
        free(job_offer_create_dto->employer_profile_id);
        job_offer_create_dto->employer_profile_id = NULL;
    }
    if (job_offer_create_dto->country_id) {
        free(job_offer_create_dto->country_id);
        job_offer_create_dto->country_id = NULL;
    }
    if (job_offer_create_dto->country_state_id) {
        free(job_offer_create_dto->country_state_id);
        job_offer_create_dto->country_state_id = NULL;
    }
    if (job_offer_create_dto->city_id) {
        free(job_offer_create_dto->city_id);
        job_offer_create_dto->city_id = NULL;
    }
    if (job_offer_create_dto->image_url) {
        free(job_offer_create_dto->image_url);
        job_offer_create_dto->image_url = NULL;
    }
    if (job_offer_create_dto->location) {
        free(job_offer_create_dto->location);
        job_offer_create_dto->location = NULL;
    }
    if (job_offer_create_dto->external_url) {
        free(job_offer_create_dto->external_url);
        job_offer_create_dto->external_url = NULL;
    }
    if (job_offer_create_dto->data) {
        free(job_offer_create_dto->data);
        job_offer_create_dto->data = NULL;
    }
    if (job_offer_create_dto->data_label) {
        free(job_offer_create_dto->data_label);
        job_offer_create_dto->data_label = NULL;
    }
    if (job_offer_create_dto->data1) {
        free(job_offer_create_dto->data1);
        job_offer_create_dto->data1 = NULL;
    }
    if (job_offer_create_dto->data1_label) {
        free(job_offer_create_dto->data1_label);
        job_offer_create_dto->data1_label = NULL;
    }
    if (job_offer_create_dto->data2) {
        free(job_offer_create_dto->data2);
        job_offer_create_dto->data2 = NULL;
    }
    if (job_offer_create_dto->data2_label) {
        free(job_offer_create_dto->data2_label);
        job_offer_create_dto->data2_label = NULL;
    }
    if (job_offer_create_dto->data3) {
        free(job_offer_create_dto->data3);
        job_offer_create_dto->data3 = NULL;
    }
    if (job_offer_create_dto->data3_label) {
        free(job_offer_create_dto->data3_label);
        job_offer_create_dto->data3_label = NULL;
    }
    if (job_offer_create_dto->data4) {
        free(job_offer_create_dto->data4);
        job_offer_create_dto->data4 = NULL;
    }
    if (job_offer_create_dto->data4_label) {
        free(job_offer_create_dto->data4_label);
        job_offer_create_dto->data4_label = NULL;
    }
    if (job_offer_create_dto->data5) {
        free(job_offer_create_dto->data5);
        job_offer_create_dto->data5 = NULL;
    }
    if (job_offer_create_dto->data5_label) {
        free(job_offer_create_dto->data5_label);
        job_offer_create_dto->data5_label = NULL;
    }
    if (job_offer_create_dto->data6) {
        free(job_offer_create_dto->data6);
        job_offer_create_dto->data6 = NULL;
    }
    if (job_offer_create_dto->data6_label) {
        free(job_offer_create_dto->data6_label);
        job_offer_create_dto->data6_label = NULL;
    }
    if (job_offer_create_dto->data7) {
        free(job_offer_create_dto->data7);
        job_offer_create_dto->data7 = NULL;
    }
    if (job_offer_create_dto->data7_label) {
        free(job_offer_create_dto->data7_label);
        job_offer_create_dto->data7_label = NULL;
    }
    if (job_offer_create_dto->data8) {
        free(job_offer_create_dto->data8);
        job_offer_create_dto->data8 = NULL;
    }
    if (job_offer_create_dto->data8_label) {
        free(job_offer_create_dto->data8_label);
        job_offer_create_dto->data8_label = NULL;
    }
    if (job_offer_create_dto->data9) {
        free(job_offer_create_dto->data9);
        job_offer_create_dto->data9 = NULL;
    }
    if (job_offer_create_dto->data9_label) {
        free(job_offer_create_dto->data9_label);
        job_offer_create_dto->data9_label = NULL;
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


    // job_offer_create_dto->remote
    if(job_offer_create_dto->remote) {
    if(cJSON_AddBoolToObject(item, "remote", job_offer_create_dto->remote) == NULL) {
    goto fail; //Bool
    }
    }


    // job_offer_create_dto->expected_hire_date
    if(job_offer_create_dto->expected_hire_date) {
    if(cJSON_AddStringToObject(item, "expectedHireDate", job_offer_create_dto->expected_hire_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // job_offer_create_dto->title
    if(job_offer_create_dto->title) {
    if(cJSON_AddStringToObject(item, "title", job_offer_create_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // job_offer_create_dto->description
    if(job_offer_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", job_offer_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // job_offer_create_dto->technical_skills
    if(job_offer_create_dto->technical_skills) {
    if(cJSON_AddStringToObject(item, "technicalSkills", job_offer_create_dto->technical_skills) == NULL) {
    goto fail; //String
    }
    }


    // job_offer_create_dto->non_technical_skills
    if(job_offer_create_dto->non_technical_skills) {
    if(cJSON_AddStringToObject(item, "nonTechnicalSkills", job_offer_create_dto->non_technical_skills) == NULL) {
    goto fail; //String
    }
    }


    // job_offer_create_dto->certifications
    if(job_offer_create_dto->certifications) {
    if(cJSON_AddStringToObject(item, "certifications", job_offer_create_dto->certifications) == NULL) {
    goto fail; //String
    }
    }


    // job_offer_create_dto->project_experience
    if(job_offer_create_dto->project_experience) {
    if(cJSON_AddStringToObject(item, "projectExperience", job_offer_create_dto->project_experience) == NULL) {
    goto fail; //String
    }
    }


    // job_offer_create_dto->technologies
    if(job_offer_create_dto->technologies) {
    if(cJSON_AddStringToObject(item, "technologies", job_offer_create_dto->technologies) == NULL) {
    goto fail; //String
    }
    }


    // job_offer_create_dto->benefits
    if(job_offer_create_dto->benefits) {
    if(cJSON_AddStringToObject(item, "benefits", job_offer_create_dto->benefits) == NULL) {
    goto fail; //String
    }
    }


    // job_offer_create_dto->is_official_job_offer
    if(job_offer_create_dto->is_official_job_offer) {
    if(cJSON_AddBoolToObject(item, "isOfficialJobOffer", job_offer_create_dto->is_official_job_offer) == NULL) {
    goto fail; //Bool
    }
    }


    // job_offer_create_dto->is_remote_job_offer
    if(job_offer_create_dto->is_remote_job_offer) {
    if(cJSON_AddBoolToObject(item, "isRemoteJobOffer", job_offer_create_dto->is_remote_job_offer) == NULL) {
    goto fail; //Bool
    }
    }


    // job_offer_create_dto->is_mid_time_job_offer
    if(job_offer_create_dto->is_mid_time_job_offer) {
    if(cJSON_AddBoolToObject(item, "isMidTimeJobOffer", job_offer_create_dto->is_mid_time_job_offer) == NULL) {
    goto fail; //Bool
    }
    }


    // job_offer_create_dto->is_undergraduate_option
    if(job_offer_create_dto->is_undergraduate_option) {
    if(cJSON_AddBoolToObject(item, "isUndergraduateOption", job_offer_create_dto->is_undergraduate_option) == NULL) {
    goto fail; //Bool
    }
    }


    // job_offer_create_dto->min_overall_experience_years
    if(job_offer_create_dto->min_overall_experience_years) {
    if(cJSON_AddNumberToObject(item, "minOverallExperienceYears", job_offer_create_dto->min_overall_experience_years) == NULL) {
    goto fail; //Numeric
    }
    }


    // job_offer_create_dto->availiable_positions_count
    if(job_offer_create_dto->availiable_positions_count) {
    if(cJSON_AddNumberToObject(item, "availiablePositionsCount", job_offer_create_dto->availiable_positions_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // job_offer_create_dto->min_salary_amount
    if(job_offer_create_dto->min_salary_amount) {
    if(cJSON_AddNumberToObject(item, "minSalaryAmount", job_offer_create_dto->min_salary_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // job_offer_create_dto->max_salary_amount
    if(job_offer_create_dto->max_salary_amount) {
    if(cJSON_AddNumberToObject(item, "maxSalaryAmount", job_offer_create_dto->max_salary_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // job_offer_create_dto->currency_id
    if(job_offer_create_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", job_offer_create_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // job_offer_create_dto->job_field_id
    if(job_offer_create_dto->job_field_id) {
    if(cJSON_AddStringToObject(item, "jobFieldId", job_offer_create_dto->job_field_id) == NULL) {
    goto fail; //String
    }
    }


    // job_offer_create_dto->employer_profile_id
    if(job_offer_create_dto->employer_profile_id) {
    if(cJSON_AddStringToObject(item, "employerProfileId", job_offer_create_dto->employer_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // job_offer_create_dto->country_id
    if(job_offer_create_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryId", job_offer_create_dto->country_id) == NULL) {
    goto fail; //String
    }
    }


    // job_offer_create_dto->country_state_id
    if(job_offer_create_dto->country_state_id) {
    if(cJSON_AddStringToObject(item, "countryStateId", job_offer_create_dto->country_state_id) == NULL) {
    goto fail; //String
    }
    }


    // job_offer_create_dto->city_id
    if(job_offer_create_dto->city_id) {
    if(cJSON_AddStringToObject(item, "cityId", job_offer_create_dto->city_id) == NULL) {
    goto fail; //String
    }
    }


    // job_offer_create_dto->image_url
    if(job_offer_create_dto->image_url) {
    if(cJSON_AddStringToObject(item, "imageUrl", job_offer_create_dto->image_url) == NULL) {
    goto fail; //String
    }
    }


    // job_offer_create_dto->location
    if(job_offer_create_dto->location) {
    if(cJSON_AddStringToObject(item, "location", job_offer_create_dto->location) == NULL) {
    goto fail; //String
    }
    }


    // job_offer_create_dto->external_url
    if(job_offer_create_dto->external_url) {
    if(cJSON_AddStringToObject(item, "externalUrl", job_offer_create_dto->external_url) == NULL) {
    goto fail; //String
    }
    }


    // job_offer_create_dto->data
    if(job_offer_create_dto->data) {
    if(cJSON_AddStringToObject(item, "data", job_offer_create_dto->data) == NULL) {
    goto fail; //String
    }
    }


    // job_offer_create_dto->data_label
    if(job_offer_create_dto->data_label) {
    if(cJSON_AddStringToObject(item, "dataLabel", job_offer_create_dto->data_label) == NULL) {
    goto fail; //String
    }
    }


    // job_offer_create_dto->data1
    if(job_offer_create_dto->data1) {
    if(cJSON_AddStringToObject(item, "data1", job_offer_create_dto->data1) == NULL) {
    goto fail; //String
    }
    }


    // job_offer_create_dto->data1_label
    if(job_offer_create_dto->data1_label) {
    if(cJSON_AddStringToObject(item, "data1Label", job_offer_create_dto->data1_label) == NULL) {
    goto fail; //String
    }
    }


    // job_offer_create_dto->data2
    if(job_offer_create_dto->data2) {
    if(cJSON_AddStringToObject(item, "data2", job_offer_create_dto->data2) == NULL) {
    goto fail; //String
    }
    }


    // job_offer_create_dto->data2_label
    if(job_offer_create_dto->data2_label) {
    if(cJSON_AddStringToObject(item, "data2Label", job_offer_create_dto->data2_label) == NULL) {
    goto fail; //String
    }
    }


    // job_offer_create_dto->data3
    if(job_offer_create_dto->data3) {
    if(cJSON_AddStringToObject(item, "data3", job_offer_create_dto->data3) == NULL) {
    goto fail; //String
    }
    }


    // job_offer_create_dto->data3_label
    if(job_offer_create_dto->data3_label) {
    if(cJSON_AddStringToObject(item, "data3Label", job_offer_create_dto->data3_label) == NULL) {
    goto fail; //String
    }
    }


    // job_offer_create_dto->data4
    if(job_offer_create_dto->data4) {
    if(cJSON_AddStringToObject(item, "data4", job_offer_create_dto->data4) == NULL) {
    goto fail; //String
    }
    }


    // job_offer_create_dto->data4_label
    if(job_offer_create_dto->data4_label) {
    if(cJSON_AddStringToObject(item, "data4Label", job_offer_create_dto->data4_label) == NULL) {
    goto fail; //String
    }
    }


    // job_offer_create_dto->data5
    if(job_offer_create_dto->data5) {
    if(cJSON_AddStringToObject(item, "data5", job_offer_create_dto->data5) == NULL) {
    goto fail; //String
    }
    }


    // job_offer_create_dto->data5_label
    if(job_offer_create_dto->data5_label) {
    if(cJSON_AddStringToObject(item, "data5Label", job_offer_create_dto->data5_label) == NULL) {
    goto fail; //String
    }
    }


    // job_offer_create_dto->data6
    if(job_offer_create_dto->data6) {
    if(cJSON_AddStringToObject(item, "data6", job_offer_create_dto->data6) == NULL) {
    goto fail; //String
    }
    }


    // job_offer_create_dto->data6_label
    if(job_offer_create_dto->data6_label) {
    if(cJSON_AddStringToObject(item, "data6Label", job_offer_create_dto->data6_label) == NULL) {
    goto fail; //String
    }
    }


    // job_offer_create_dto->data7
    if(job_offer_create_dto->data7) {
    if(cJSON_AddStringToObject(item, "data7", job_offer_create_dto->data7) == NULL) {
    goto fail; //String
    }
    }


    // job_offer_create_dto->data7_label
    if(job_offer_create_dto->data7_label) {
    if(cJSON_AddStringToObject(item, "data7Label", job_offer_create_dto->data7_label) == NULL) {
    goto fail; //String
    }
    }


    // job_offer_create_dto->data8
    if(job_offer_create_dto->data8) {
    if(cJSON_AddStringToObject(item, "data8", job_offer_create_dto->data8) == NULL) {
    goto fail; //String
    }
    }


    // job_offer_create_dto->data8_label
    if(job_offer_create_dto->data8_label) {
    if(cJSON_AddStringToObject(item, "data8Label", job_offer_create_dto->data8_label) == NULL) {
    goto fail; //String
    }
    }


    // job_offer_create_dto->data9
    if(job_offer_create_dto->data9) {
    if(cJSON_AddStringToObject(item, "data9", job_offer_create_dto->data9) == NULL) {
    goto fail; //String
    }
    }


    // job_offer_create_dto->data9_label
    if(job_offer_create_dto->data9_label) {
    if(cJSON_AddStringToObject(item, "data9Label", job_offer_create_dto->data9_label) == NULL) {
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

    // job_offer_create_dto->remote
    cJSON *remote = cJSON_GetObjectItemCaseSensitive(job_offer_create_dtoJSON, "remote");
    if (remote) { 
    if(!cJSON_IsBool(remote))
    {
    goto end; //Bool
    }
    }

    // job_offer_create_dto->expected_hire_date
    cJSON *expected_hire_date = cJSON_GetObjectItemCaseSensitive(job_offer_create_dtoJSON, "expectedHireDate");
    if (expected_hire_date) { 
    if(!cJSON_IsString(expected_hire_date) && !cJSON_IsNull(expected_hire_date))
    {
    goto end; //DateTime
    }
    }

    // job_offer_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(job_offer_create_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // job_offer_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(job_offer_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // job_offer_create_dto->technical_skills
    cJSON *technical_skills = cJSON_GetObjectItemCaseSensitive(job_offer_create_dtoJSON, "technicalSkills");
    if (technical_skills) { 
    if(!cJSON_IsString(technical_skills) && !cJSON_IsNull(technical_skills))
    {
    goto end; //String
    }
    }

    // job_offer_create_dto->non_technical_skills
    cJSON *non_technical_skills = cJSON_GetObjectItemCaseSensitive(job_offer_create_dtoJSON, "nonTechnicalSkills");
    if (non_technical_skills) { 
    if(!cJSON_IsString(non_technical_skills) && !cJSON_IsNull(non_technical_skills))
    {
    goto end; //String
    }
    }

    // job_offer_create_dto->certifications
    cJSON *certifications = cJSON_GetObjectItemCaseSensitive(job_offer_create_dtoJSON, "certifications");
    if (certifications) { 
    if(!cJSON_IsString(certifications) && !cJSON_IsNull(certifications))
    {
    goto end; //String
    }
    }

    // job_offer_create_dto->project_experience
    cJSON *project_experience = cJSON_GetObjectItemCaseSensitive(job_offer_create_dtoJSON, "projectExperience");
    if (project_experience) { 
    if(!cJSON_IsString(project_experience) && !cJSON_IsNull(project_experience))
    {
    goto end; //String
    }
    }

    // job_offer_create_dto->technologies
    cJSON *technologies = cJSON_GetObjectItemCaseSensitive(job_offer_create_dtoJSON, "technologies");
    if (technologies) { 
    if(!cJSON_IsString(technologies) && !cJSON_IsNull(technologies))
    {
    goto end; //String
    }
    }

    // job_offer_create_dto->benefits
    cJSON *benefits = cJSON_GetObjectItemCaseSensitive(job_offer_create_dtoJSON, "benefits");
    if (benefits) { 
    if(!cJSON_IsString(benefits) && !cJSON_IsNull(benefits))
    {
    goto end; //String
    }
    }

    // job_offer_create_dto->is_official_job_offer
    cJSON *is_official_job_offer = cJSON_GetObjectItemCaseSensitive(job_offer_create_dtoJSON, "isOfficialJobOffer");
    if (is_official_job_offer) { 
    if(!cJSON_IsBool(is_official_job_offer))
    {
    goto end; //Bool
    }
    }

    // job_offer_create_dto->is_remote_job_offer
    cJSON *is_remote_job_offer = cJSON_GetObjectItemCaseSensitive(job_offer_create_dtoJSON, "isRemoteJobOffer");
    if (is_remote_job_offer) { 
    if(!cJSON_IsBool(is_remote_job_offer))
    {
    goto end; //Bool
    }
    }

    // job_offer_create_dto->is_mid_time_job_offer
    cJSON *is_mid_time_job_offer = cJSON_GetObjectItemCaseSensitive(job_offer_create_dtoJSON, "isMidTimeJobOffer");
    if (is_mid_time_job_offer) { 
    if(!cJSON_IsBool(is_mid_time_job_offer))
    {
    goto end; //Bool
    }
    }

    // job_offer_create_dto->is_undergraduate_option
    cJSON *is_undergraduate_option = cJSON_GetObjectItemCaseSensitive(job_offer_create_dtoJSON, "isUndergraduateOption");
    if (is_undergraduate_option) { 
    if(!cJSON_IsBool(is_undergraduate_option))
    {
    goto end; //Bool
    }
    }

    // job_offer_create_dto->min_overall_experience_years
    cJSON *min_overall_experience_years = cJSON_GetObjectItemCaseSensitive(job_offer_create_dtoJSON, "minOverallExperienceYears");
    if (min_overall_experience_years) { 
    if(!cJSON_IsNumber(min_overall_experience_years))
    {
    goto end; //Numeric
    }
    }

    // job_offer_create_dto->availiable_positions_count
    cJSON *availiable_positions_count = cJSON_GetObjectItemCaseSensitive(job_offer_create_dtoJSON, "availiablePositionsCount");
    if (availiable_positions_count) { 
    if(!cJSON_IsNumber(availiable_positions_count))
    {
    goto end; //Numeric
    }
    }

    // job_offer_create_dto->min_salary_amount
    cJSON *min_salary_amount = cJSON_GetObjectItemCaseSensitive(job_offer_create_dtoJSON, "minSalaryAmount");
    if (min_salary_amount) { 
    if(!cJSON_IsNumber(min_salary_amount))
    {
    goto end; //Numeric
    }
    }

    // job_offer_create_dto->max_salary_amount
    cJSON *max_salary_amount = cJSON_GetObjectItemCaseSensitive(job_offer_create_dtoJSON, "maxSalaryAmount");
    if (max_salary_amount) { 
    if(!cJSON_IsNumber(max_salary_amount))
    {
    goto end; //Numeric
    }
    }

    // job_offer_create_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(job_offer_create_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // job_offer_create_dto->job_field_id
    cJSON *job_field_id = cJSON_GetObjectItemCaseSensitive(job_offer_create_dtoJSON, "jobFieldId");
    if (job_field_id) { 
    if(!cJSON_IsString(job_field_id) && !cJSON_IsNull(job_field_id))
    {
    goto end; //String
    }
    }

    // job_offer_create_dto->employer_profile_id
    cJSON *employer_profile_id = cJSON_GetObjectItemCaseSensitive(job_offer_create_dtoJSON, "employerProfileId");
    if (employer_profile_id) { 
    if(!cJSON_IsString(employer_profile_id) && !cJSON_IsNull(employer_profile_id))
    {
    goto end; //String
    }
    }

    // job_offer_create_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(job_offer_create_dtoJSON, "countryId");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }

    // job_offer_create_dto->country_state_id
    cJSON *country_state_id = cJSON_GetObjectItemCaseSensitive(job_offer_create_dtoJSON, "countryStateId");
    if (country_state_id) { 
    if(!cJSON_IsString(country_state_id) && !cJSON_IsNull(country_state_id))
    {
    goto end; //String
    }
    }

    // job_offer_create_dto->city_id
    cJSON *city_id = cJSON_GetObjectItemCaseSensitive(job_offer_create_dtoJSON, "cityId");
    if (city_id) { 
    if(!cJSON_IsString(city_id) && !cJSON_IsNull(city_id))
    {
    goto end; //String
    }
    }

    // job_offer_create_dto->image_url
    cJSON *image_url = cJSON_GetObjectItemCaseSensitive(job_offer_create_dtoJSON, "imageUrl");
    if (image_url) { 
    if(!cJSON_IsString(image_url) && !cJSON_IsNull(image_url))
    {
    goto end; //String
    }
    }

    // job_offer_create_dto->location
    cJSON *location = cJSON_GetObjectItemCaseSensitive(job_offer_create_dtoJSON, "location");
    if (location) { 
    if(!cJSON_IsString(location) && !cJSON_IsNull(location))
    {
    goto end; //String
    }
    }

    // job_offer_create_dto->external_url
    cJSON *external_url = cJSON_GetObjectItemCaseSensitive(job_offer_create_dtoJSON, "externalUrl");
    if (external_url) { 
    if(!cJSON_IsString(external_url) && !cJSON_IsNull(external_url))
    {
    goto end; //String
    }
    }

    // job_offer_create_dto->data
    cJSON *data = cJSON_GetObjectItemCaseSensitive(job_offer_create_dtoJSON, "data");
    if (data) { 
    if(!cJSON_IsString(data) && !cJSON_IsNull(data))
    {
    goto end; //String
    }
    }

    // job_offer_create_dto->data_label
    cJSON *data_label = cJSON_GetObjectItemCaseSensitive(job_offer_create_dtoJSON, "dataLabel");
    if (data_label) { 
    if(!cJSON_IsString(data_label) && !cJSON_IsNull(data_label))
    {
    goto end; //String
    }
    }

    // job_offer_create_dto->data1
    cJSON *data1 = cJSON_GetObjectItemCaseSensitive(job_offer_create_dtoJSON, "data1");
    if (data1) { 
    if(!cJSON_IsString(data1) && !cJSON_IsNull(data1))
    {
    goto end; //String
    }
    }

    // job_offer_create_dto->data1_label
    cJSON *data1_label = cJSON_GetObjectItemCaseSensitive(job_offer_create_dtoJSON, "data1Label");
    if (data1_label) { 
    if(!cJSON_IsString(data1_label) && !cJSON_IsNull(data1_label))
    {
    goto end; //String
    }
    }

    // job_offer_create_dto->data2
    cJSON *data2 = cJSON_GetObjectItemCaseSensitive(job_offer_create_dtoJSON, "data2");
    if (data2) { 
    if(!cJSON_IsString(data2) && !cJSON_IsNull(data2))
    {
    goto end; //String
    }
    }

    // job_offer_create_dto->data2_label
    cJSON *data2_label = cJSON_GetObjectItemCaseSensitive(job_offer_create_dtoJSON, "data2Label");
    if (data2_label) { 
    if(!cJSON_IsString(data2_label) && !cJSON_IsNull(data2_label))
    {
    goto end; //String
    }
    }

    // job_offer_create_dto->data3
    cJSON *data3 = cJSON_GetObjectItemCaseSensitive(job_offer_create_dtoJSON, "data3");
    if (data3) { 
    if(!cJSON_IsString(data3) && !cJSON_IsNull(data3))
    {
    goto end; //String
    }
    }

    // job_offer_create_dto->data3_label
    cJSON *data3_label = cJSON_GetObjectItemCaseSensitive(job_offer_create_dtoJSON, "data3Label");
    if (data3_label) { 
    if(!cJSON_IsString(data3_label) && !cJSON_IsNull(data3_label))
    {
    goto end; //String
    }
    }

    // job_offer_create_dto->data4
    cJSON *data4 = cJSON_GetObjectItemCaseSensitive(job_offer_create_dtoJSON, "data4");
    if (data4) { 
    if(!cJSON_IsString(data4) && !cJSON_IsNull(data4))
    {
    goto end; //String
    }
    }

    // job_offer_create_dto->data4_label
    cJSON *data4_label = cJSON_GetObjectItemCaseSensitive(job_offer_create_dtoJSON, "data4Label");
    if (data4_label) { 
    if(!cJSON_IsString(data4_label) && !cJSON_IsNull(data4_label))
    {
    goto end; //String
    }
    }

    // job_offer_create_dto->data5
    cJSON *data5 = cJSON_GetObjectItemCaseSensitive(job_offer_create_dtoJSON, "data5");
    if (data5) { 
    if(!cJSON_IsString(data5) && !cJSON_IsNull(data5))
    {
    goto end; //String
    }
    }

    // job_offer_create_dto->data5_label
    cJSON *data5_label = cJSON_GetObjectItemCaseSensitive(job_offer_create_dtoJSON, "data5Label");
    if (data5_label) { 
    if(!cJSON_IsString(data5_label) && !cJSON_IsNull(data5_label))
    {
    goto end; //String
    }
    }

    // job_offer_create_dto->data6
    cJSON *data6 = cJSON_GetObjectItemCaseSensitive(job_offer_create_dtoJSON, "data6");
    if (data6) { 
    if(!cJSON_IsString(data6) && !cJSON_IsNull(data6))
    {
    goto end; //String
    }
    }

    // job_offer_create_dto->data6_label
    cJSON *data6_label = cJSON_GetObjectItemCaseSensitive(job_offer_create_dtoJSON, "data6Label");
    if (data6_label) { 
    if(!cJSON_IsString(data6_label) && !cJSON_IsNull(data6_label))
    {
    goto end; //String
    }
    }

    // job_offer_create_dto->data7
    cJSON *data7 = cJSON_GetObjectItemCaseSensitive(job_offer_create_dtoJSON, "data7");
    if (data7) { 
    if(!cJSON_IsString(data7) && !cJSON_IsNull(data7))
    {
    goto end; //String
    }
    }

    // job_offer_create_dto->data7_label
    cJSON *data7_label = cJSON_GetObjectItemCaseSensitive(job_offer_create_dtoJSON, "data7Label");
    if (data7_label) { 
    if(!cJSON_IsString(data7_label) && !cJSON_IsNull(data7_label))
    {
    goto end; //String
    }
    }

    // job_offer_create_dto->data8
    cJSON *data8 = cJSON_GetObjectItemCaseSensitive(job_offer_create_dtoJSON, "data8");
    if (data8) { 
    if(!cJSON_IsString(data8) && !cJSON_IsNull(data8))
    {
    goto end; //String
    }
    }

    // job_offer_create_dto->data8_label
    cJSON *data8_label = cJSON_GetObjectItemCaseSensitive(job_offer_create_dtoJSON, "data8Label");
    if (data8_label) { 
    if(!cJSON_IsString(data8_label) && !cJSON_IsNull(data8_label))
    {
    goto end; //String
    }
    }

    // job_offer_create_dto->data9
    cJSON *data9 = cJSON_GetObjectItemCaseSensitive(job_offer_create_dtoJSON, "data9");
    if (data9) { 
    if(!cJSON_IsString(data9) && !cJSON_IsNull(data9))
    {
    goto end; //String
    }
    }

    // job_offer_create_dto->data9_label
    cJSON *data9_label = cJSON_GetObjectItemCaseSensitive(job_offer_create_dtoJSON, "data9Label");
    if (data9_label) { 
    if(!cJSON_IsString(data9_label) && !cJSON_IsNull(data9_label))
    {
    goto end; //String
    }
    }


    job_offer_create_dto_local_var = job_offer_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        remote ? remote->valueint : 0,
        expected_hire_date && !cJSON_IsNull(expected_hire_date) ? strdup(expected_hire_date->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        technical_skills && !cJSON_IsNull(technical_skills) ? strdup(technical_skills->valuestring) : NULL,
        non_technical_skills && !cJSON_IsNull(non_technical_skills) ? strdup(non_technical_skills->valuestring) : NULL,
        certifications && !cJSON_IsNull(certifications) ? strdup(certifications->valuestring) : NULL,
        project_experience && !cJSON_IsNull(project_experience) ? strdup(project_experience->valuestring) : NULL,
        technologies && !cJSON_IsNull(technologies) ? strdup(technologies->valuestring) : NULL,
        benefits && !cJSON_IsNull(benefits) ? strdup(benefits->valuestring) : NULL,
        is_official_job_offer ? is_official_job_offer->valueint : 0,
        is_remote_job_offer ? is_remote_job_offer->valueint : 0,
        is_mid_time_job_offer ? is_mid_time_job_offer->valueint : 0,
        is_undergraduate_option ? is_undergraduate_option->valueint : 0,
        min_overall_experience_years ? min_overall_experience_years->valuedouble : 0,
        availiable_positions_count ? availiable_positions_count->valuedouble : 0,
        min_salary_amount ? min_salary_amount->valuedouble : 0,
        max_salary_amount ? max_salary_amount->valuedouble : 0,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        job_field_id && !cJSON_IsNull(job_field_id) ? strdup(job_field_id->valuestring) : NULL,
        employer_profile_id && !cJSON_IsNull(employer_profile_id) ? strdup(employer_profile_id->valuestring) : NULL,
        country_id && !cJSON_IsNull(country_id) ? strdup(country_id->valuestring) : NULL,
        country_state_id && !cJSON_IsNull(country_state_id) ? strdup(country_state_id->valuestring) : NULL,
        city_id && !cJSON_IsNull(city_id) ? strdup(city_id->valuestring) : NULL,
        image_url && !cJSON_IsNull(image_url) ? strdup(image_url->valuestring) : NULL,
        location && !cJSON_IsNull(location) ? strdup(location->valuestring) : NULL,
        external_url && !cJSON_IsNull(external_url) ? strdup(external_url->valuestring) : NULL,
        data && !cJSON_IsNull(data) ? strdup(data->valuestring) : NULL,
        data_label && !cJSON_IsNull(data_label) ? strdup(data_label->valuestring) : NULL,
        data1 && !cJSON_IsNull(data1) ? strdup(data1->valuestring) : NULL,
        data1_label && !cJSON_IsNull(data1_label) ? strdup(data1_label->valuestring) : NULL,
        data2 && !cJSON_IsNull(data2) ? strdup(data2->valuestring) : NULL,
        data2_label && !cJSON_IsNull(data2_label) ? strdup(data2_label->valuestring) : NULL,
        data3 && !cJSON_IsNull(data3) ? strdup(data3->valuestring) : NULL,
        data3_label && !cJSON_IsNull(data3_label) ? strdup(data3_label->valuestring) : NULL,
        data4 && !cJSON_IsNull(data4) ? strdup(data4->valuestring) : NULL,
        data4_label && !cJSON_IsNull(data4_label) ? strdup(data4_label->valuestring) : NULL,
        data5 && !cJSON_IsNull(data5) ? strdup(data5->valuestring) : NULL,
        data5_label && !cJSON_IsNull(data5_label) ? strdup(data5_label->valuestring) : NULL,
        data6 && !cJSON_IsNull(data6) ? strdup(data6->valuestring) : NULL,
        data6_label && !cJSON_IsNull(data6_label) ? strdup(data6_label->valuestring) : NULL,
        data7 && !cJSON_IsNull(data7) ? strdup(data7->valuestring) : NULL,
        data7_label && !cJSON_IsNull(data7_label) ? strdup(data7_label->valuestring) : NULL,
        data8 && !cJSON_IsNull(data8) ? strdup(data8->valuestring) : NULL,
        data8_label && !cJSON_IsNull(data8_label) ? strdup(data8_label->valuestring) : NULL,
        data9 && !cJSON_IsNull(data9) ? strdup(data9->valuestring) : NULL,
        data9_label && !cJSON_IsNull(data9_label) ? strdup(data9_label->valuestring) : NULL
        );

    return job_offer_create_dto_local_var;
end:
    return NULL;

}
