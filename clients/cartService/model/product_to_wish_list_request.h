/*
 * product_to_wish_list_request.h
 *
 * 
 */

#ifndef _product_to_wish_list_request_H_
#define _product_to_wish_list_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_to_wish_list_request_t product_to_wish_list_request_t;




typedef struct product_to_wish_list_request_t {
    char *wish_list_id; // string
    char *item_id; // string

} product_to_wish_list_request_t;

product_to_wish_list_request_t *product_to_wish_list_request_create(
    char *wish_list_id,
    char *item_id
);

void product_to_wish_list_request_free(product_to_wish_list_request_t *product_to_wish_list_request);

product_to_wish_list_request_t *product_to_wish_list_request_parseFromJSON(cJSON *product_to_wish_list_requestJSON);

cJSON *product_to_wish_list_request_convertToJSON(product_to_wish_list_request_t *product_to_wish_list_request);

#endif /* _product_to_wish_list_request_H_ */

