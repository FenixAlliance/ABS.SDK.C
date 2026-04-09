/*
 * update_product_primary_image_async_request.h
 *
 * 
 */

#ifndef _update_product_primary_image_async_request_H_
#define _update_product_primary_image_async_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct update_product_primary_image_async_request_t update_product_primary_image_async_request_t;




typedef struct update_product_primary_image_async_request_t {
    binary_t* data; //binary

} update_product_primary_image_async_request_t;

update_product_primary_image_async_request_t *update_product_primary_image_async_request_create(
    binary_t* data
);

void update_product_primary_image_async_request_free(update_product_primary_image_async_request_t *update_product_primary_image_async_request);

update_product_primary_image_async_request_t *update_product_primary_image_async_request_parseFromJSON(cJSON *update_product_primary_image_async_requestJSON);

cJSON *update_product_primary_image_async_request_convertToJSON(update_product_primary_image_async_request_t *update_product_primary_image_async_request);

#endif /* _update_product_primary_image_async_request_H_ */

