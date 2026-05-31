/*
 * voyage_update_dto.h
 *
 * 
 */

#ifndef _voyage_update_dto_H_
#define _voyage_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct voyage_update_dto_t voyage_update_dto_t;




typedef struct voyage_update_dto_t {
    char *voyage_number; // string
    char *title; // string
    char *description; // string
    char *voyage_direction; // string
    char *departure_date; //date time
    char *arrival_date; //date time
    char *vessel_id; // string

} voyage_update_dto_t;

voyage_update_dto_t *voyage_update_dto_create(
    char *voyage_number,
    char *title,
    char *description,
    char *voyage_direction,
    char *departure_date,
    char *arrival_date,
    char *vessel_id
);

void voyage_update_dto_free(voyage_update_dto_t *voyage_update_dto);

voyage_update_dto_t *voyage_update_dto_parseFromJSON(cJSON *voyage_update_dtoJSON);

cJSON *voyage_update_dto_convertToJSON(voyage_update_dto_t *voyage_update_dto);

#endif /* _voyage_update_dto_H_ */

