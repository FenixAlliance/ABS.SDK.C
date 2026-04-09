/*
 * country_calling_code_dto.h
 *
 * 
 */

#ifndef _country_calling_code_dto_H_
#define _country_calling_code_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct country_calling_code_dto_t country_calling_code_dto_t;




typedef struct country_calling_code_dto_t {
    int id; //numeric
    char *calling_code; // string
    char *country_id; // string

} country_calling_code_dto_t;

country_calling_code_dto_t *country_calling_code_dto_create(
    int id,
    char *calling_code,
    char *country_id
);

void country_calling_code_dto_free(country_calling_code_dto_t *country_calling_code_dto);

country_calling_code_dto_t *country_calling_code_dto_parseFromJSON(cJSON *country_calling_code_dtoJSON);

cJSON *country_calling_code_dto_convertToJSON(country_calling_code_dto_t *country_calling_code_dto);

#endif /* _country_calling_code_dto_H_ */

