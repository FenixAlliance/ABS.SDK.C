/*
 * voyage_dto.h
 *
 * 
 */

#ifndef _voyage_dto_H_
#define _voyage_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct voyage_dto_t voyage_dto_t;




typedef struct voyage_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *voyage_number; // string
    char *title; // string
    char *description; // string
    char *voyage_status; // string
    char *voyage_direction; // string
    char *departure_date; //date time
    char *arrival_date; //date time
    char *actual_departure_date; //date time
    char *actual_arrival_date; //date time
    char *vessel_id; // string
    char *tenant_id; // string
    char *enrollment_id; // string

} voyage_dto_t;

voyage_dto_t *voyage_dto_create(
    char *id,
    char *timestamp,
    char *voyage_number,
    char *title,
    char *description,
    char *voyage_status,
    char *voyage_direction,
    char *departure_date,
    char *arrival_date,
    char *actual_departure_date,
    char *actual_arrival_date,
    char *vessel_id,
    char *tenant_id,
    char *enrollment_id
);

void voyage_dto_free(voyage_dto_t *voyage_dto);

voyage_dto_t *voyage_dto_parseFromJSON(cJSON *voyage_dtoJSON);

cJSON *voyage_dto_convertToJSON(voyage_dto_t *voyage_dto);

#endif /* _voyage_dto_H_ */

