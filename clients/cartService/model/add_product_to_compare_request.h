/*
 * add_product_to_compare_request.h
 *
 * 
 */

#ifndef _add_product_to_compare_request_H_
#define _add_product_to_compare_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct add_product_to_compare_request_t add_product_to_compare_request_t;




typedef struct add_product_to_compare_request_t {
    char *id; // string
    char *cart_id; // string
    char *item_id; // string

} add_product_to_compare_request_t;

add_product_to_compare_request_t *add_product_to_compare_request_create(
    char *id,
    char *cart_id,
    char *item_id
);

void add_product_to_compare_request_free(add_product_to_compare_request_t *add_product_to_compare_request);

add_product_to_compare_request_t *add_product_to_compare_request_parseFromJSON(cJSON *add_product_to_compare_requestJSON);

cJSON *add_product_to_compare_request_convertToJSON(add_product_to_compare_request_t *add_product_to_compare_request);

#endif /* _add_product_to_compare_request_H_ */

