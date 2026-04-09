/*
 * job_offer_dto.h
 *
 * 
 */

#ifndef _job_offer_dto_H_
#define _job_offer_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct job_offer_dto_t job_offer_dto_t;




typedef struct job_offer_dto_t {
    char *id; // string
    char *timestamp; //date time

} job_offer_dto_t;

job_offer_dto_t *job_offer_dto_create(
    char *id,
    char *timestamp
);

void job_offer_dto_free(job_offer_dto_t *job_offer_dto);

job_offer_dto_t *job_offer_dto_parseFromJSON(cJSON *job_offer_dtoJSON);

cJSON *job_offer_dto_convertToJSON(job_offer_dto_t *job_offer_dto);

#endif /* _job_offer_dto_H_ */

