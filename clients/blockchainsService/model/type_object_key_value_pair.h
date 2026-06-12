/*
 * type_object_key_value_pair.h
 *
 * 
 */

#ifndef _type_object_key_value_pair_H_
#define _type_object_key_value_pair_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct type_object_key_value_pair_t type_object_key_value_pair_t;

#include "any_type.h"
#include "type.h"



typedef struct type_object_key_value_pair_t {
    struct type_t *key; //model
    any_type_t *value; // custom

} type_object_key_value_pair_t;

type_object_key_value_pair_t *type_object_key_value_pair_create(
    type_t *key,
    any_type_t *value
);

void type_object_key_value_pair_free(type_object_key_value_pair_t *type_object_key_value_pair);

type_object_key_value_pair_t *type_object_key_value_pair_parseFromJSON(cJSON *type_object_key_value_pairJSON);

cJSON *type_object_key_value_pair_convertToJSON(type_object_key_value_pair_t *type_object_key_value_pair);

#endif /* _type_object_key_value_pair_H_ */

