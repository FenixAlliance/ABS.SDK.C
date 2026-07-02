/*
 * job_offer_application_update_dto.h
 *
 * 
 */

#ifndef _job_offer_application_update_dto_H_
#define _job_offer_application_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct job_offer_application_update_dto_t job_offer_application_update_dto_t;




typedef struct job_offer_application_update_dto_t {
    char *start; //date time
    char *end; //date time
    double salary_expectation; //numeric
    char *currency_id; // string
    char *curriculum_id; // string
    char *curriculum_cover_id; // string
    char *partner_profile_id; // string

} job_offer_application_update_dto_t;

job_offer_application_update_dto_t *job_offer_application_update_dto_create(
    char *start,
    char *end,
    double salary_expectation,
    char *currency_id,
    char *curriculum_id,
    char *curriculum_cover_id,
    char *partner_profile_id
);

void job_offer_application_update_dto_free(job_offer_application_update_dto_t *job_offer_application_update_dto);

job_offer_application_update_dto_t *job_offer_application_update_dto_parseFromJSON(cJSON *job_offer_application_update_dtoJSON);

cJSON *job_offer_application_update_dto_convertToJSON(job_offer_application_update_dto_t *job_offer_application_update_dto);

#endif /* _job_offer_application_update_dto_H_ */

