/*
 * city_dto.h
 *
 * 
 */

#ifndef _city_dto_H_
#define _city_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct city_dto_t city_dto_t;




typedef struct city_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *image_url; // string
    char *state_id; // string
    char *country_id; // string
    char *latitude; // string
    char *longitude; // string

} city_dto_t;

city_dto_t *city_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *image_url,
    char *state_id,
    char *country_id,
    char *latitude,
    char *longitude
);

void city_dto_free(city_dto_t *city_dto);

city_dto_t *city_dto_parseFromJSON(cJSON *city_dtoJSON);

cJSON *city_dto_convertToJSON(city_dto_t *city_dto);

#endif /* _city_dto_H_ */

