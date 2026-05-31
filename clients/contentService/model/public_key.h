/*
 * public_key.h
 *
 * 
 */

#ifndef _public_key_H_
#define _public_key_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct public_key_t public_key_t;

#include "asn_encoded_data.h"
#include "asymmetric_algorithm.h"
#include "oid.h"



typedef struct public_key_t {
    struct asn_encoded_data_t *encoded_key_value; //model
    struct asn_encoded_data_t *encoded_parameters; //model
    struct asymmetric_algorithm_t *key; //model
    struct oid_t *oid; //model

} public_key_t;

public_key_t *public_key_create(
    asn_encoded_data_t *encoded_key_value,
    asn_encoded_data_t *encoded_parameters,
    asymmetric_algorithm_t *key,
    oid_t *oid
);

void public_key_free(public_key_t *public_key);

public_key_t *public_key_parseFromJSON(cJSON *public_keyJSON);

cJSON *public_key_convertToJSON(public_key_t *public_key);

#endif /* _public_key_H_ */

