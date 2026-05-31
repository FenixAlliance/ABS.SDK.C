/*
 * voyage_create_dto.h
 *
 * 
 */

#ifndef _voyage_create_dto_H_
#define _voyage_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct voyage_create_dto_t voyage_create_dto_t;




typedef struct voyage_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *voyage_number; // string
    char *title; // string
    char *description; // string
    char *voyage_direction; // string
    char *departure_date; //date time
    char *arrival_date; //date time
    char *vessel_id; // string

} voyage_create_dto_t;

voyage_create_dto_t *voyage_create_dto_create(
    char *id,
    char *timestamp,
    char *voyage_number,
    char *title,
    char *description,
    char *voyage_direction,
    char *departure_date,
    char *arrival_date,
    char *vessel_id
);

void voyage_create_dto_free(voyage_create_dto_t *voyage_create_dto);

voyage_create_dto_t *voyage_create_dto_parseFromJSON(cJSON *voyage_create_dtoJSON);

cJSON *voyage_create_dto_convertToJSON(voyage_create_dto_t *voyage_create_dto);

#endif /* _voyage_create_dto_H_ */

