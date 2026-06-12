/*
 * select_expand_query_option.h
 *
 * 
 */

#ifndef _select_expand_query_option_H_
#define _select_expand_query_option_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct select_expand_query_option_t select_expand_query_option_t;

#include "compute_query_option.h"
#include "o_data_query_context.h"
#include "object.h"
#include "select_expand_clause.h"



typedef struct select_expand_query_option_t {
    struct o_data_query_context_t *context; //model
    char *raw_select; // string
    char *raw_expand; // string
    struct compute_query_option_t *compute; //model
    object_t *validator; //object
    struct select_expand_clause_t *select_expand_clause; //model
    int levels_max_literal_expansion_depth; //numeric

} select_expand_query_option_t;

select_expand_query_option_t *select_expand_query_option_create(
    o_data_query_context_t *context,
    char *raw_select,
    char *raw_expand,
    compute_query_option_t *compute,
    object_t *validator,
    select_expand_clause_t *select_expand_clause,
    int levels_max_literal_expansion_depth
);

void select_expand_query_option_free(select_expand_query_option_t *select_expand_query_option);

select_expand_query_option_t *select_expand_query_option_parseFromJSON(cJSON *select_expand_query_optionJSON);

cJSON *select_expand_query_option_convertToJSON(select_expand_query_option_t *select_expand_query_option);

#endif /* _select_expand_query_option_H_ */

