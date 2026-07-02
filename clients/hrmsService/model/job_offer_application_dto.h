/*
 * job_offer_application_dto.h
 *
 * 
 */

#ifndef _job_offer_application_dto_H_
#define _job_offer_application_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct job_offer_application_dto_t job_offer_application_dto_t;


// Enum STATUS for job_offer_application_dto

typedef enum  { hrmsservice_job_offer_application_dto_STATUS_NULL = 0, hrmsservice_job_offer_application_dto_STATUS_Submitted, hrmsservice_job_offer_application_dto_STATUS_UnderReview, hrmsservice_job_offer_application_dto_STATUS_Interviewing, hrmsservice_job_offer_application_dto_STATUS_Offered, hrmsservice_job_offer_application_dto_STATUS_Hired, hrmsservice_job_offer_application_dto_STATUS_Rejected, hrmsservice_job_offer_application_dto_STATUS_Withdrawn } hrmsservice_job_offer_application_dto_STATUS_e;

char* job_offer_application_dto_status_ToString(hrmsservice_job_offer_application_dto_STATUS_e status);

hrmsservice_job_offer_application_dto_STATUS_e job_offer_application_dto_status_FromString(char* status);



typedef struct job_offer_application_dto_t {
    char *id; // string
    char *timestamp; //date time
    hrmsservice_job_offer_application_dto_STATUS_e status; //enum
    char *start; //date time
    char *end; //date time
    double salary_expectation; //numeric
    char *currency_id; // string
    char *curriculum_id; // string
    char *curriculum_cover_id; // string
    char *job_offer_id; // string
    char *partner_profile_id; // string
    char *job_applicant_profile_id; // string

} job_offer_application_dto_t;

job_offer_application_dto_t *job_offer_application_dto_create(
    char *id,
    char *timestamp,
    hrmsservice_job_offer_application_dto_STATUS_e status,
    char *start,
    char *end,
    double salary_expectation,
    char *currency_id,
    char *curriculum_id,
    char *curriculum_cover_id,
    char *job_offer_id,
    char *partner_profile_id,
    char *job_applicant_profile_id
);

void job_offer_application_dto_free(job_offer_application_dto_t *job_offer_application_dto);

job_offer_application_dto_t *job_offer_application_dto_parseFromJSON(cJSON *job_offer_application_dtoJSON);

cJSON *job_offer_application_dto_convertToJSON(job_offer_application_dto_t *job_offer_application_dto);

#endif /* _job_offer_application_dto_H_ */

