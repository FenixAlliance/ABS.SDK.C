/*
 * two_factor_response.h
 *
 * 
 */

#ifndef _two_factor_response_H_
#define _two_factor_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct two_factor_response_t two_factor_response_t;




typedef struct two_factor_response_t {
    char *shared_key; // string
    int recovery_codes_left; //numeric
    list_t *recovery_codes; //primitive container
    int is_two_factor_enabled; //boolean
    int is_machine_remembered; //boolean

} two_factor_response_t;

two_factor_response_t *two_factor_response_create(
    char *shared_key,
    int recovery_codes_left,
    list_t *recovery_codes,
    int is_two_factor_enabled,
    int is_machine_remembered
);

void two_factor_response_free(two_factor_response_t *two_factor_response);

two_factor_response_t *two_factor_response_parseFromJSON(cJSON *two_factor_responseJSON);

cJSON *two_factor_response_convertToJSON(two_factor_response_t *two_factor_response);

#endif /* _two_factor_response_H_ */

