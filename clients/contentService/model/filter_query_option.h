/*
 * filter_query_option.h
 *
 * 
 */

#ifndef _filter_query_option_H_
#define _filter_query_option_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct filter_query_option_t filter_query_option_t;

#include "compute_query_option.h"
#include "filter_clause.h"
#include "o_data_query_context.h"
#include "object.h"



typedef struct filter_query_option_t {
    struct o_data_query_context_t *context; //model
    object_t *validator; //object
    struct compute_query_option_t *compute; //model
    struct filter_clause_t *filter_clause; //model
    char *raw_value; // string

} filter_query_option_t;

filter_query_option_t *filter_query_option_create(
    o_data_query_context_t *context,
    object_t *validator,
    compute_query_option_t *compute,
    filter_clause_t *filter_clause,
    char *raw_value
);

void filter_query_option_free(filter_query_option_t *filter_query_option);

filter_query_option_t *filter_query_option_parseFromJSON(cJSON *filter_query_optionJSON);

cJSON *filter_query_option_convertToJSON(filter_query_option_t *filter_query_option);

#endif /* _filter_query_option_H_ */

