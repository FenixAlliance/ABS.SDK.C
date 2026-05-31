/*
 * compute_query_option.h
 *
 * 
 */

#ifndef _compute_query_option_H_
#define _compute_query_option_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct compute_query_option_t compute_query_option_t;

#include "compute_clause.h"
#include "o_data_query_context.h"
#include "object.h"
#include "type.h"



typedef struct compute_query_option_t {
    struct o_data_query_context_t *context; //model
    struct type_t *result_clr_type; //model
    struct compute_clause_t *compute_clause; //model
    char *raw_value; // string
    object_t *validator; //object

} compute_query_option_t;

compute_query_option_t *compute_query_option_create(
    o_data_query_context_t *context,
    type_t *result_clr_type,
    compute_clause_t *compute_clause,
    char *raw_value,
    object_t *validator
);

void compute_query_option_free(compute_query_option_t *compute_query_option);

compute_query_option_t *compute_query_option_parseFromJSON(cJSON *compute_query_optionJSON);

cJSON *compute_query_option_convertToJSON(compute_query_option_t *compute_query_option);

#endif /* _compute_query_option_H_ */

