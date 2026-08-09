/*
 * forex_rates_dto.h
 *
 * 
 */

#ifndef _forex_rates_dto_H_
#define _forex_rates_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct forex_rates_dto_t forex_rates_dto_t;




typedef struct forex_rates_dto_t {
    int success; //boolean
    char *date; // string
    char *base; // string
    long timestamp; //numeric
    char *request_timestamp; //date time
    list_t* rates; //map

} forex_rates_dto_t;

forex_rates_dto_t *forex_rates_dto_create(
    int success,
    char *date,
    char *base,
    long timestamp,
    char *request_timestamp,
    list_t* rates
);

void forex_rates_dto_free(forex_rates_dto_t *forex_rates_dto);

forex_rates_dto_t *forex_rates_dto_parseFromJSON(cJSON *forex_rates_dtoJSON);

cJSON *forex_rates_dto_convertToJSON(forex_rates_dto_t *forex_rates_dto);

#endif /* _forex_rates_dto_H_ */

