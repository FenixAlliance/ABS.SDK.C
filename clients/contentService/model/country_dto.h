/*
 * country_dto.h
 *
 * 
 */

#ifndef _country_dto_H_
#define _country_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct country_dto_t country_dto_t;




typedef struct country_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *iso3; // string
    char *iso2; // string
    char *name; // string
    char *native_name; // string
    char *flag_url; // string

} country_dto_t;

country_dto_t *country_dto_create(
    char *id,
    char *timestamp,
    char *iso3,
    char *iso2,
    char *name,
    char *native_name,
    char *flag_url
);

void country_dto_free(country_dto_t *country_dto);

country_dto_t *country_dto_parseFromJSON(cJSON *country_dtoJSON);

cJSON *country_dto_convertToJSON(country_dto_t *country_dto);

#endif /* _country_dto_H_ */

