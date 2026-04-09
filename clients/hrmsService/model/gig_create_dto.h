/*
 * gig_create_dto.h
 *
 * 
 */

#ifndef _gig_create_dto_H_
#define _gig_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct gig_create_dto_t gig_create_dto_t;




typedef struct gig_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *description; // string
    char *start_date; //date time
    char *end_date; //date time
    double budget; //numeric
    char *location; // string
    char *skills_required; // string

} gig_create_dto_t;

gig_create_dto_t *gig_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *start_date,
    char *end_date,
    double budget,
    char *location,
    char *skills_required
);

void gig_create_dto_free(gig_create_dto_t *gig_create_dto);

gig_create_dto_t *gig_create_dto_parseFromJSON(cJSON *gig_create_dtoJSON);

cJSON *gig_create_dto_convertToJSON(gig_create_dto_t *gig_create_dto);

#endif /* _gig_create_dto_H_ */

