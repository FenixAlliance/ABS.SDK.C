/*
 * filter_clause.h
 *
 * 
 */

#ifndef _filter_clause_H_
#define _filter_clause_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct filter_clause_t filter_clause_t;

#include "i_edm_type_reference.h"
#include "range_variable.h"
#include "single_value_node.h"



typedef struct filter_clause_t {
    struct single_value_node_t *expression; //model
    struct range_variable_t *range_variable; //model
    struct i_edm_type_reference_t *item_type; //model

} filter_clause_t;

filter_clause_t *filter_clause_create(
    single_value_node_t *expression,
    range_variable_t *range_variable,
    i_edm_type_reference_t *item_type
);

void filter_clause_free(filter_clause_t *filter_clause);

filter_clause_t *filter_clause_parseFromJSON(cJSON *filter_clauseJSON);

cJSON *filter_clause_convertToJSON(filter_clause_t *filter_clause);

#endif /* _filter_clause_H_ */

