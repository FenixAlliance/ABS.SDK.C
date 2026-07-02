/*
 * job_offer_field_record_dto.h
 *
 * 
 */

#ifndef _job_offer_field_record_dto_H_
#define _job_offer_field_record_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct job_offer_field_record_dto_t job_offer_field_record_dto_t;




typedef struct job_offer_field_record_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *job_field_id; // string
    char *job_offer_id; // string
    char *tenant_id; // string
    char *enrollment_id; // string

} job_offer_field_record_dto_t;

job_offer_field_record_dto_t *job_offer_field_record_dto_create(
    char *id,
    char *timestamp,
    char *job_field_id,
    char *job_offer_id,
    char *tenant_id,
    char *enrollment_id
);

void job_offer_field_record_dto_free(job_offer_field_record_dto_t *job_offer_field_record_dto);

job_offer_field_record_dto_t *job_offer_field_record_dto_parseFromJSON(cJSON *job_offer_field_record_dtoJSON);

cJSON *job_offer_field_record_dto_convertToJSON(job_offer_field_record_dto_t *job_offer_field_record_dto);

#endif /* _job_offer_field_record_dto_H_ */

