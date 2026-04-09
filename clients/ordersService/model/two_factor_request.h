/*
 * two_factor_request.h
 *
 * 
 */

#ifndef _two_factor_request_H_
#define _two_factor_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct two_factor_request_t two_factor_request_t;




typedef struct two_factor_request_t {
    int enable; //boolean
    char *two_factor_code; // string
    int reset_shared_key; //boolean
    int reset_recovery_codes; //boolean
    int forget_machine; //boolean

} two_factor_request_t;

two_factor_request_t *two_factor_request_create(
    int enable,
    char *two_factor_code,
    int reset_shared_key,
    int reset_recovery_codes,
    int forget_machine
);

void two_factor_request_free(two_factor_request_t *two_factor_request);

two_factor_request_t *two_factor_request_parseFromJSON(cJSON *two_factor_requestJSON);

cJSON *two_factor_request_convertToJSON(two_factor_request_t *two_factor_request);

#endif /* _two_factor_request_H_ */

