/*
 * country_language_dto.h
 *
 * 
 */

#ifndef _country_language_dto_H_
#define _country_language_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct country_language_dto_t country_language_dto_t;




typedef struct country_language_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *iso639_1; // string
    char *iso639_2; // string
    int enabled; //boolean
    char *name; // string
    char *language_native_name; // string

} country_language_dto_t;

country_language_dto_t *country_language_dto_create(
    char *id,
    char *timestamp,
    char *iso639_1,
    char *iso639_2,
    int enabled,
    char *name,
    char *language_native_name
);

void country_language_dto_free(country_language_dto_t *country_language_dto);

country_language_dto_t *country_language_dto_parseFromJSON(cJSON *country_language_dtoJSON);

cJSON *country_language_dto_convertToJSON(country_language_dto_t *country_language_dto);

#endif /* _country_language_dto_H_ */

