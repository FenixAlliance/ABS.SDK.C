/*
 * order_by_clause.h
 *
 * 
 */

#ifndef _order_by_clause_H_
#define _order_by_clause_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_by_clause_t order_by_clause_t;

#include "i_edm_type_reference.h"
#include "range_variable.h"
#include "single_value_node.h"

// Enum DIRECTION for order_by_clause

typedef enum  { contentservice_order_by_clause_DIRECTION_NULL = 0, contentservice_order_by_clause_DIRECTION_Ascending, contentservice_order_by_clause_DIRECTION_Descending } contentservice_order_by_clause_DIRECTION_e;

char* order_by_clause_direction_ToString(contentservice_order_by_clause_DIRECTION_e direction);

contentservice_order_by_clause_DIRECTION_e order_by_clause_direction_FromString(char* direction);



typedef struct order_by_clause_t {
    struct order_by_clause_t *then_by; //model
    struct single_value_node_t *expression; //model
    contentservice_order_by_clause_DIRECTION_e direction; //enum
    struct range_variable_t *range_variable; //model
    struct i_edm_type_reference_t *item_type; //model

} order_by_clause_t;

order_by_clause_t *order_by_clause_create(
    order_by_clause_t *then_by,
    single_value_node_t *expression,
    contentservice_order_by_clause_DIRECTION_e direction,
    range_variable_t *range_variable,
    i_edm_type_reference_t *item_type
);

void order_by_clause_free(order_by_clause_t *order_by_clause);

order_by_clause_t *order_by_clause_parseFromJSON(cJSON *order_by_clauseJSON);

cJSON *order_by_clause_convertToJSON(order_by_clause_t *order_by_clause);

#endif /* _order_by_clause_H_ */

