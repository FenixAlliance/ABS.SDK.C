/*
 * country_switch_request.h
 *
 * 
 */

#ifndef _country_switch_request_H_
#define _country_switch_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct country_switch_request_t country_switch_request_t;




typedef struct country_switch_request_t {
    char *cart_id; // string
    char *country_id; // string

} country_switch_request_t;

country_switch_request_t *country_switch_request_create(
    char *cart_id,
    char *country_id
);

void country_switch_request_free(country_switch_request_t *country_switch_request);

country_switch_request_t *country_switch_request_parseFromJSON(cJSON *country_switch_requestJSON);

cJSON *country_switch_request_convertToJSON(country_switch_request_t *country_switch_request);

#endif /* _country_switch_request_H_ */

