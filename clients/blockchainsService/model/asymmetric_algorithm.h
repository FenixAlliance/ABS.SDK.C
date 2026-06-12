/*
 * asymmetric_algorithm.h
 *
 * 
 */

#ifndef _asymmetric_algorithm_H_
#define _asymmetric_algorithm_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct asymmetric_algorithm_t asymmetric_algorithm_t;

#include "key_sizes.h"



typedef struct asymmetric_algorithm_t {
    int key_size; //numeric
    list_t *legal_key_sizes; //nonprimitive container
    char *signature_algorithm; // string
    char *key_exchange_algorithm; // string

} asymmetric_algorithm_t;

asymmetric_algorithm_t *asymmetric_algorithm_create(
    int key_size,
    list_t *legal_key_sizes,
    char *signature_algorithm,
    char *key_exchange_algorithm
);

void asymmetric_algorithm_free(asymmetric_algorithm_t *asymmetric_algorithm);

asymmetric_algorithm_t *asymmetric_algorithm_parseFromJSON(cJSON *asymmetric_algorithmJSON);

cJSON *asymmetric_algorithm_convertToJSON(asymmetric_algorithm_t *asymmetric_algorithm);

#endif /* _asymmetric_algorithm_H_ */

