/*
 * cart_update_request.h
 *
 * 
 */

#ifndef _cart_update_request_H_
#define _cart_update_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cart_update_request_t cart_update_request_t;




typedef struct cart_update_request_t {
    char *currency_id; // string
    char *country_id; // string

} cart_update_request_t;

cart_update_request_t *cart_update_request_create(
    char *currency_id,
    char *country_id
);

void cart_update_request_free(cart_update_request_t *cart_update_request);

cart_update_request_t *cart_update_request_parseFromJSON(cJSON *cart_update_requestJSON);

cJSON *cart_update_request_convertToJSON(cart_update_request_t *cart_update_request);

#endif /* _cart_update_request_H_ */

