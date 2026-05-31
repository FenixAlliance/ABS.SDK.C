/*
 * compute_expression.h
 *
 * 
 */

#ifndef _compute_expression_H_
#define _compute_expression_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct compute_expression_t compute_expression_t;

#include "i_edm_type_reference.h"
#include "single_value_node.h"



typedef struct compute_expression_t {
    struct single_value_node_t *expression; //model
    char *alias; // string
    struct i_edm_type_reference_t *type_reference; //model

} compute_expression_t;

compute_expression_t *compute_expression_create(
    single_value_node_t *expression,
    char *alias,
    i_edm_type_reference_t *type_reference
);

void compute_expression_free(compute_expression_t *compute_expression);

compute_expression_t *compute_expression_parseFromJSON(cJSON *compute_expressionJSON);

cJSON *compute_expression_convertToJSON(compute_expression_t *compute_expression);

#endif /* _compute_expression_H_ */

