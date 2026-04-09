/*
 * gig_update_dto.h
 *
 * 
 */

#ifndef _gig_update_dto_H_
#define _gig_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct gig_update_dto_t gig_update_dto_t;




typedef struct gig_update_dto_t {
    char *title; // string
    char *description; // string
    double price; //numeric
    char *currency; // string
    char *location; // string
    char *start_date; //date time
    char *end_date; //date time
    char *category; // string
    char *tags; // string

} gig_update_dto_t;

gig_update_dto_t *gig_update_dto_create(
    char *title,
    char *description,
    double price,
    char *currency,
    char *location,
    char *start_date,
    char *end_date,
    char *category,
    char *tags
);

void gig_update_dto_free(gig_update_dto_t *gig_update_dto);

gig_update_dto_t *gig_update_dto_parseFromJSON(cJSON *gig_update_dtoJSON);

cJSON *gig_update_dto_convertToJSON(gig_update_dto_t *gig_update_dto);

#endif /* _gig_update_dto_H_ */

