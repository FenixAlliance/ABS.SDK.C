/*
 * currency_switch_request.h
 *
 * 
 */

#ifndef _currency_switch_request_H_
#define _currency_switch_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct currency_switch_request_t currency_switch_request_t;




typedef struct currency_switch_request_t {
    char *cart_id; // string
    char *currency_id; // string

} currency_switch_request_t;

currency_switch_request_t *currency_switch_request_create(
    char *cart_id,
    char *currency_id
);

void currency_switch_request_free(currency_switch_request_t *currency_switch_request);

currency_switch_request_t *currency_switch_request_parseFromJSON(cJSON *currency_switch_requestJSON);

cJSON *currency_switch_request_convertToJSON(currency_switch_request_t *currency_switch_request);

#endif /* _currency_switch_request_H_ */

