/*
 * search_query_option.h
 *
 * 
 */

#ifndef _search_query_option_H_
#define _search_query_option_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct search_query_option_t search_query_option_t;

#include "o_data_query_context.h"
#include "search_clause.h"
#include "type.h"



typedef struct search_query_option_t {
    struct o_data_query_context_t *context; //model
    struct type_t *result_clr_type; //model
    struct search_clause_t *search_clause; //model
    char *raw_value; // string

} search_query_option_t;

search_query_option_t *search_query_option_create(
    o_data_query_context_t *context,
    type_t *result_clr_type,
    search_clause_t *search_clause,
    char *raw_value
);

void search_query_option_free(search_query_option_t *search_query_option);

search_query_option_t *search_query_option_parseFromJSON(cJSON *search_query_optionJSON);

cJSON *search_query_option_convertToJSON(search_query_option_t *search_query_option);

#endif /* _search_query_option_H_ */

