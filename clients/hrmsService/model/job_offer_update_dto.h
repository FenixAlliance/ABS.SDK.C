/*
 * job_offer_update_dto.h
 *
 * 
 */

#ifndef _job_offer_update_dto_H_
#define _job_offer_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct job_offer_update_dto_t job_offer_update_dto_t;




typedef struct job_offer_update_dto_t {
    int remote; //boolean
    char *expected_hire_date; //date time
    char *title; // string
    char *description; // string
    char *technical_skills; // string
    char *non_technical_skills; // string
    char *certifications; // string
    char *project_experience; // string
    char *technologies; // string
    char *benefits; // string
    int is_official_job_offer; //boolean
    int is_remote_job_offer; //boolean
    int is_mid_time_job_offer; //boolean
    int is_undergraduate_option; //boolean
    int min_overall_experience_years; //numeric
    int availiable_positions_count; //numeric
    double min_salary_amount; //numeric
    double max_salary_amount; //numeric
    char *currency_id; // string
    char *job_field_id; // string
    char *employer_profile_id; // string
    char *country_id; // string
    char *country_state_id; // string
    char *city_id; // string
    char *image_url; // string
    char *location; // string
    char *external_url; // string
    char *data; // string
    char *data_label; // string
    char *data1; // string
    char *data1_label; // string
    char *data2; // string
    char *data2_label; // string
    char *data3; // string
    char *data3_label; // string
    char *data4; // string
    char *data4_label; // string
    char *data5; // string
    char *data5_label; // string
    char *data6; // string
    char *data6_label; // string
    char *data7; // string
    char *data7_label; // string
    char *data8; // string
    char *data8_label; // string
    char *data9; // string
    char *data9_label; // string

} job_offer_update_dto_t;

job_offer_update_dto_t *job_offer_update_dto_create(
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
);

void job_offer_update_dto_free(job_offer_update_dto_t *job_offer_update_dto);

job_offer_update_dto_t *job_offer_update_dto_parseFromJSON(cJSON *job_offer_update_dtoJSON);

cJSON *job_offer_update_dto_convertToJSON(job_offer_update_dto_t *job_offer_update_dto);

#endif /* _job_offer_update_dto_H_ */

