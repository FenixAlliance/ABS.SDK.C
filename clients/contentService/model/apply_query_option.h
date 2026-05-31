/*
 * apply_query_option.h
 *
 * 
 */

#ifndef _apply_query_option_H_
#define _apply_query_option_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct apply_query_option_t apply_query_option_t;

#include "apply_clause.h"
#include "o_data_query_context.h"
#include "type.h"



typedef struct apply_query_option_t {
    struct o_data_query_context_t *context; //model
    struct type_t *result_clr_type; //model
    struct apply_clause_t *apply_clause; //model
    char *raw_value; // string

} apply_query_option_t;

apply_query_option_t *apply_query_option_create(
    o_data_query_context_t *context,
    type_t *result_clr_type,
    apply_clause_t *apply_clause,
    char *raw_value
);

void apply_query_option_free(apply_query_option_t *apply_query_option);

apply_query_option_t *apply_query_option_parseFromJSON(cJSON *apply_query_optionJSON);

cJSON *apply_query_option_convertToJSON(apply_query_option_t *apply_query_option);

#endif /* _apply_query_option_H_ */

