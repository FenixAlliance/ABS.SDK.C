/*
 * gig_application_dto.h
 *
 * 
 */

#ifndef _gig_application_dto_H_
#define _gig_application_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct gig_application_dto_t gig_application_dto_t;




typedef struct gig_application_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *accepted_timestamp; //date time
    int accepted; //boolean
    char *proposal; // string
    double cost; //numeric
    char *gig_id; // string
    char *currency_id; // string
    char *curriculum_id; // string
    char *curriculum_cover_id; // string
    char *job_applicant_profile_id; // string

} gig_application_dto_t;

gig_application_dto_t *gig_application_dto_create(
    char *id,
    char *timestamp,
    char *accepted_timestamp,
    int accepted,
    char *proposal,
    double cost,
    char *gig_id,
    char *currency_id,
    char *curriculum_id,
    char *curriculum_cover_id,
    char *job_applicant_profile_id
);

void gig_application_dto_free(gig_application_dto_t *gig_application_dto);

gig_application_dto_t *gig_application_dto_parseFromJSON(cJSON *gig_application_dtoJSON);

cJSON *gig_application_dto_convertToJSON(gig_application_dto_t *gig_application_dto);

#endif /* _gig_application_dto_H_ */

