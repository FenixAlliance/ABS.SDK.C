/*
 * country_state_dto.h
 *
 * 
 */

#ifndef _country_state_dto_H_
#define _country_state_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct country_state_dto_t country_state_dto_t;




typedef struct country_state_dto_t {
    char *timestamp; //date time
    char *id; // string
    char *name; // string
    char *code; // string
    char *country_id; // string

} country_state_dto_t;

country_state_dto_t *country_state_dto_create(
    char *timestamp,
    char *id,
    char *name,
    char *code,
    char *country_id
);

void country_state_dto_free(country_state_dto_t *country_state_dto);

country_state_dto_t *country_state_dto_parseFromJSON(cJSON *country_state_dtoJSON);

cJSON *country_state_dto_convertToJSON(country_state_dto_t *country_state_dto);

#endif /* _country_state_dto_H_ */

