/*
 * order_by_node.h
 *
 * 
 */

#ifndef _order_by_node_H_
#define _order_by_node_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_by_node_t order_by_node_t;


// Enum DIRECTION for order_by_node

typedef enum  { contentservice_order_by_node_DIRECTION_NULL = 0, contentservice_order_by_node_DIRECTION_Ascending, contentservice_order_by_node_DIRECTION_Descending } contentservice_order_by_node_DIRECTION_e;

char* order_by_node_direction_ToString(contentservice_order_by_node_DIRECTION_e direction);

contentservice_order_by_node_DIRECTION_e order_by_node_direction_FromString(char* direction);



typedef struct order_by_node_t {
    contentservice_order_by_node_DIRECTION_e direction; //enum

} order_by_node_t;

order_by_node_t *order_by_node_create(
    contentservice_order_by_node_DIRECTION_e direction
);

void order_by_node_free(order_by_node_t *order_by_node);

order_by_node_t *order_by_node_parseFromJSON(cJSON *order_by_nodeJSON);

cJSON *order_by_node_convertToJSON(order_by_node_t *order_by_node);

#endif /* _order_by_node_H_ */

