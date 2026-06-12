/*
 * string_string_key_value_pair.h
 *
 * 
 */

#ifndef _string_string_key_value_pair_H_
#define _string_string_key_value_pair_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct string_string_key_value_pair_t string_string_key_value_pair_t;




typedef struct string_string_key_value_pair_t {
    char *key; // string
    char *value; // string

} string_string_key_value_pair_t;

string_string_key_value_pair_t *string_string_key_value_pair_create(
    char *key,
    char *value
);

void string_string_key_value_pair_free(string_string_key_value_pair_t *string_string_key_value_pair);

string_string_key_value_pair_t *string_string_key_value_pair_parseFromJSON(cJSON *string_string_key_value_pairJSON);

cJSON *string_string_key_value_pair_convertToJSON(string_string_key_value_pair_t *string_string_key_value_pair);

#endif /* _string_string_key_value_pair_H_ */

