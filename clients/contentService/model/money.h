/*
 * money.h
 *
 * 
 */

#ifndef _money_H_
#define _money_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct money_t money_t;

#include "currency_id.h"



typedef struct money_t {
    double amount; //numeric
    struct currency_id_t *currency; //model

} money_t;

money_t *money_create(
    double amount,
    currency_id_t *currency
);

void money_free(money_t *money);

money_t *money_parseFromJSON(cJSON *moneyJSON);

cJSON *money_convertToJSON(money_t *money);

#endif /* _money_H_ */

