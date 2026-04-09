/*
 * gig_dto.h
 *
 * 
 */

#ifndef _gig_dto_H_
#define _gig_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct gig_dto_t gig_dto_t;




typedef struct gig_dto_t {
    char *id; // string
    char *timestamp; //date time

} gig_dto_t;

gig_dto_t *gig_dto_create(
    char *id,
    char *timestamp
);

void gig_dto_free(gig_dto_t *gig_dto);

gig_dto_t *gig_dto_parseFromJSON(cJSON *gig_dtoJSON);

cJSON *gig_dto_convertToJSON(gig_dto_t *gig_dto);

#endif /* _gig_dto_H_ */

