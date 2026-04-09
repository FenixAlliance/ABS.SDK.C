/*
 * exchange_rate.h
 *
 * 
 */

#ifndef _exchange_rate_H_
#define _exchange_rate_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct exchange_rate_t exchange_rate_t;

#include "money.h"



typedef struct exchange_rate_t {
    struct money_t *source; //model
    struct money_t *target; //model
    struct money_t *rate; //model

} exchange_rate_t;

exchange_rate_t *exchange_rate_create(
    money_t *source,
    money_t *target,
    money_t *rate
);

void exchange_rate_free(exchange_rate_t *exchange_rate);

exchange_rate_t *exchange_rate_parseFromJSON(cJSON *exchange_rateJSON);

cJSON *exchange_rate_convertToJSON(exchange_rate_t *exchange_rate);

#endif /* _exchange_rate_H_ */

