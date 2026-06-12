/*
 * batch_stock_item_update_request.h
 *
 * 
 */

#ifndef _batch_stock_item_update_request_H_
#define _batch_stock_item_update_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct batch_stock_item_update_request_t batch_stock_item_update_request_t;




typedef struct batch_stock_item_update_request_t {
    list_t *item_ids; //primitive container
    int published; //boolean
    int taxable; //boolean
    list_t *add_tax_policy_ids; //primitive container
    list_t *remove_tax_policy_ids; //primitive container

} batch_stock_item_update_request_t;

batch_stock_item_update_request_t *batch_stock_item_update_request_create(
    list_t *item_ids,
    int published,
    int taxable,
    list_t *add_tax_policy_ids,
    list_t *remove_tax_policy_ids
);

void batch_stock_item_update_request_free(batch_stock_item_update_request_t *batch_stock_item_update_request);

batch_stock_item_update_request_t *batch_stock_item_update_request_parseFromJSON(cJSON *batch_stock_item_update_requestJSON);

cJSON *batch_stock_item_update_request_convertToJSON(batch_stock_item_update_request_t *batch_stock_item_update_request);

#endif /* _batch_stock_item_update_request_H_ */

