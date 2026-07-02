/*
 * job_applicant_profile_create_dto.h
 *
 * 
 */

#ifndef _job_applicant_profile_create_dto_H_
#define _job_applicant_profile_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct job_applicant_profile_create_dto_t job_applicant_profile_create_dto_t;

#include "contact_create_dto.h"

// Enum CAREERLEVEL for job_applicant_profile_create_dto

typedef enum  { hrmsservice_job_applicant_profile_create_dto_CAREERLEVEL_NULL = 0, hrmsservice_job_applicant_profile_create_dto_CAREERLEVEL_Junior, hrmsservice_job_applicant_profile_create_dto_CAREERLEVEL_Intermediate, hrmsservice_job_applicant_profile_create_dto_CAREERLEVEL_MidLevel, hrmsservice_job_applicant_profile_create_dto_CAREERLEVEL_Executive, hrmsservice_job_applicant_profile_create_dto_CAREERLEVEL_Senior } hrmsservice_job_applicant_profile_create_dto_CAREERLEVEL_e;

char* job_applicant_profile_create_dto_career_level_ToString(hrmsservice_job_applicant_profile_create_dto_CAREERLEVEL_e career_level);

hrmsservice_job_applicant_profile_create_dto_CAREERLEVEL_e job_applicant_profile_create_dto_career_level_FromString(char* career_level);



typedef struct job_applicant_profile_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *type; // string
    char *contact_id; // string
    struct contact_create_dto_t *contact; //model
    char *about; // string
    char *avatar_url; // string
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
    int available_for_hire; //boolean
    hrmsservice_job_applicant_profile_create_dto_CAREERLEVEL_e career_level; //enum
    int experience_in_years; //numeric
    double current_salary; //numeric
    double min_salary_expectation; //numeric
    double max_salary_expectation; //numeric
    char *currency_id; // string

} job_applicant_profile_create_dto_t;

job_applicant_profile_create_dto_t *job_applicant_profile_create_dto_create(
    char *id,
    char *timestamp,
    char *type,
    char *contact_id,
    contact_create_dto_t *contact,
    char *about,
    char *avatar_url,
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
    char *data9_label,
    int available_for_hire,
    hrmsservice_job_applicant_profile_create_dto_CAREERLEVEL_e career_level,
    int experience_in_years,
    double current_salary,
    double min_salary_expectation,
    double max_salary_expectation,
    char *currency_id
);

void job_applicant_profile_create_dto_free(job_applicant_profile_create_dto_t *job_applicant_profile_create_dto);

job_applicant_profile_create_dto_t *job_applicant_profile_create_dto_parseFromJSON(cJSON *job_applicant_profile_create_dtoJSON);

cJSON *job_applicant_profile_create_dto_convertToJSON(job_applicant_profile_create_dto_t *job_applicant_profile_create_dto);

#endif /* _job_applicant_profile_create_dto_H_ */

