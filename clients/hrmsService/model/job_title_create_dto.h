/*
 * job_title_create_dto.h
 *
 * 
 */

#ifndef _job_title_create_dto_H_
#define _job_title_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct job_title_create_dto_t job_title_create_dto_t;




typedef struct job_title_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *description; // string
    double gross_pay; //numeric
    double net_salary; //numeric
    char *currency_id; // string
    char *country_id; // string
    char *country_state_id; // string
    char *city_id; // string

} job_title_create_dto_t;

job_title_create_dto_t *job_title_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    double gross_pay,
    double net_salary,
    char *currency_id,
    char *country_id,
    char *country_state_id,
    char *city_id
);

void job_title_create_dto_free(job_title_create_dto_t *job_title_create_dto);

job_title_create_dto_t *job_title_create_dto_parseFromJSON(cJSON *job_title_create_dtoJSON);

cJSON *job_title_create_dto_convertToJSON(job_title_create_dto_t *job_title_create_dto);

#endif /* _job_title_create_dto_H_ */

