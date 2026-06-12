/*
 * key_sizes.h
 *
 * 
 */

#ifndef _key_sizes_H_
#define _key_sizes_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct key_sizes_t key_sizes_t;




typedef struct key_sizes_t {
    int min_size; //numeric
    int max_size; //numeric
    int skip_size; //numeric

} key_sizes_t;

key_sizes_t *key_sizes_create(
    int min_size,
    int max_size,
    int skip_size
);

void key_sizes_free(key_sizes_t *key_sizes);

key_sizes_t *key_sizes_parseFromJSON(cJSON *key_sizesJSON);

cJSON *key_sizes_convertToJSON(key_sizes_t *key_sizes);

#endif /* _key_sizes_H_ */

