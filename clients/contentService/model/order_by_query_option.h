/*
 * order_by_query_option.h
 *
 * 
 */

#ifndef _order_by_query_option_H_
#define _order_by_query_option_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_by_query_option_t order_by_query_option_t;

#include "compute_query_option.h"
#include "o_data_query_context.h"
#include "object.h"
#include "order_by_clause.h"
#include "order_by_node.h"



typedef struct order_by_query_option_t {
    struct o_data_query_context_t *context; //model
    list_t *order_by_nodes; //nonprimitive container
    char *raw_value; // string
    object_t *validator; //object
    struct compute_query_option_t *compute; //model
    struct order_by_clause_t *order_by_clause; //model

} order_by_query_option_t;

order_by_query_option_t *order_by_query_option_create(
    o_data_query_context_t *context,
    list_t *order_by_nodes,
    char *raw_value,
    object_t *validator,
    compute_query_option_t *compute,
    order_by_clause_t *order_by_clause
);

void order_by_query_option_free(order_by_query_option_t *order_by_query_option);

order_by_query_option_t *order_by_query_option_parseFromJSON(cJSON *order_by_query_optionJSON);

cJSON *order_by_query_option_convertToJSON(order_by_query_option_t *order_by_query_option);

#endif /* _order_by_query_option_H_ */

