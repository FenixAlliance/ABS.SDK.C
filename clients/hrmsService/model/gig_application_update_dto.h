/*
 * gig_application_update_dto.h
 *
 * 
 */

#ifndef _gig_application_update_dto_H_
#define _gig_application_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct gig_application_update_dto_t gig_application_update_dto_t;




typedef struct gig_application_update_dto_t {
    char *proposal; // string
    double cost; //numeric
    char *currency_id; // string
    char *curriculum_id; // string
    char *curriculum_cover_id; // string

} gig_application_update_dto_t;

gig_application_update_dto_t *gig_application_update_dto_create(
    char *proposal,
    double cost,
    char *currency_id,
    char *curriculum_id,
    char *curriculum_cover_id
);

void gig_application_update_dto_free(gig_application_update_dto_t *gig_application_update_dto);

gig_application_update_dto_t *gig_application_update_dto_parseFromJSON(cJSON *gig_application_update_dtoJSON);

cJSON *gig_application_update_dto_convertToJSON(gig_application_update_dto_t *gig_application_update_dto);

#endif /* _gig_application_update_dto_H_ */

