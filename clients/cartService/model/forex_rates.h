/*
 * forex_rates.h
 *
 * 
 */

#ifndef _forex_rates_H_
#define _forex_rates_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct forex_rates_t forex_rates_t;




typedef struct forex_rates_t {
    int success; //boolean
    char *date; // string
    char *base; // string
    long timestamp; //numeric
    char *request_timestamp; //date time
    list_t* rates; //map

} forex_rates_t;

forex_rates_t *forex_rates_create(
    int success,
    char *date,
    char *base,
    long timestamp,
    char *request_timestamp,
    list_t* rates
);

void forex_rates_free(forex_rates_t *forex_rates);

forex_rates_t *forex_rates_parseFromJSON(cJSON *forex_ratesJSON);

cJSON *forex_rates_convertToJSON(forex_rates_t *forex_rates);

#endif /* _forex_rates_H_ */

