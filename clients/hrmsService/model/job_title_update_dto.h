/*
 * job_title_update_dto.h
 *
 * 
 */

#ifndef _job_title_update_dto_H_
#define _job_title_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct job_title_update_dto_t job_title_update_dto_t;




typedef struct job_title_update_dto_t {
    char *title; // string
    char *description; // string
    double gross_pay; //numeric
    double net_salary; //numeric
    char *currency_id; // string
    char *country_id; // string
    char *country_state_id; // string
    char *city_id; // string

} job_title_update_dto_t;

job_title_update_dto_t *job_title_update_dto_create(
    char *title,
    char *description,
    double gross_pay,
    double net_salary,
    char *currency_id,
    char *country_id,
    char *country_state_id,
    char *city_id
);

void job_title_update_dto_free(job_title_update_dto_t *job_title_update_dto);

job_title_update_dto_t *job_title_update_dto_parseFromJSON(cJSON *job_title_update_dtoJSON);

cJSON *job_title_update_dto_convertToJSON(job_title_update_dto_t *job_title_update_dto);

#endif /* _job_title_update_dto_H_ */

