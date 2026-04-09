/*
 * currency_dto.h
 *
 * 
 */

#ifndef _currency_dto_H_
#define _currency_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct currency_dto_t currency_dto_t;

#include "country_dto.h"



typedef struct currency_dto_t {
    char *id; // string
    char *code; // string
    char *name; // string
    char *symbol; // string
    struct country_dto_t *country; //model

} currency_dto_t;

currency_dto_t *currency_dto_create(
    char *id,
    char *code,
    char *name,
    char *symbol,
    country_dto_t *country
);

void currency_dto_free(currency_dto_t *currency_dto);

currency_dto_t *currency_dto_parseFromJSON(cJSON *currency_dtoJSON);

cJSON *currency_dto_convertToJSON(currency_dto_t *currency_dto);

#endif /* _currency_dto_H_ */

