/*
 * skip_query_option.h
 *
 * 
 */

#ifndef _skip_query_option_H_
#define _skip_query_option_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct skip_query_option_t skip_query_option_t;

#include "o_data_query_context.h"
#include "object.h"



typedef struct skip_query_option_t {
    struct o_data_query_context_t *context; //model
    char *raw_value; // string
    int value; //numeric
    object_t *validator; //object

} skip_query_option_t;

skip_query_option_t *skip_query_option_create(
    o_data_query_context_t *context,
    char *raw_value,
    int value,
    object_t *validator
);

void skip_query_option_free(skip_query_option_t *skip_query_option);

skip_query_option_t *skip_query_option_parseFromJSON(cJSON *skip_query_optionJSON);

cJSON *skip_query_option_convertToJSON(skip_query_option_t *skip_query_option);

#endif /* _skip_query_option_H_ */

