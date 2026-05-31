/*
 * skip_token_query_option.h
 *
 * 
 */

#ifndef _skip_token_query_option_H_
#define _skip_token_query_option_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct skip_token_query_option_t skip_token_query_option_t;

#include "o_data_query_context.h"
#include "object.h"



typedef struct skip_token_query_option_t {
    char *raw_value; // string
    struct o_data_query_context_t *context; //model
    object_t *validator; //object
    object_t *handler; //object

} skip_token_query_option_t;

skip_token_query_option_t *skip_token_query_option_create(
    char *raw_value,
    o_data_query_context_t *context,
    object_t *validator,
    object_t *handler
);

void skip_token_query_option_free(skip_token_query_option_t *skip_token_query_option);

skip_token_query_option_t *skip_token_query_option_parseFromJSON(cJSON *skip_token_query_optionJSON);

cJSON *skip_token_query_option_convertToJSON(skip_token_query_option_t *skip_token_query_option);

#endif /* _skip_token_query_option_H_ */

