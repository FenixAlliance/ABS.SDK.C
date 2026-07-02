/*
 * job_offer_field_record_update_dto.h
 *
 * 
 */

#ifndef _job_offer_field_record_update_dto_H_
#define _job_offer_field_record_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct job_offer_field_record_update_dto_t job_offer_field_record_update_dto_t;




typedef struct job_offer_field_record_update_dto_t {
    char *job_field_id; // string
    char *job_offer_id; // string

} job_offer_field_record_update_dto_t;

job_offer_field_record_update_dto_t *job_offer_field_record_update_dto_create(
    char *job_field_id,
    char *job_offer_id
);

void job_offer_field_record_update_dto_free(job_offer_field_record_update_dto_t *job_offer_field_record_update_dto);

job_offer_field_record_update_dto_t *job_offer_field_record_update_dto_parseFromJSON(cJSON *job_offer_field_record_update_dtoJSON);

cJSON *job_offer_field_record_update_dto_convertToJSON(job_offer_field_record_update_dto_t *job_offer_field_record_update_dto);

#endif /* _job_offer_field_record_update_dto_H_ */

