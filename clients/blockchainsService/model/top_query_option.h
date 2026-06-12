/*
 * top_query_option.h
 *
 * 
 */

#ifndef _top_query_option_H_
#define _top_query_option_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct top_query_option_t top_query_option_t;

#include "o_data_query_context.h"
#include "object.h"



typedef struct top_query_option_t {
    struct o_data_query_context_t *context; //model
    char *raw_value; // string
    int value; //numeric
    object_t *validator; //object

} top_query_option_t;

top_query_option_t *top_query_option_create(
    o_data_query_context_t *context,
    char *raw_value,
    int value,
    object_t *validator
);

void top_query_option_free(top_query_option_t *top_query_option);

top_query_option_t *top_query_option_parseFromJSON(cJSON *top_query_optionJSON);

cJSON *top_query_option_convertToJSON(top_query_option_t *top_query_option);

#endif /* _top_query_option_H_ */

