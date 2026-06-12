/*
 * count_query_option.h
 *
 * 
 */

#ifndef _count_query_option_H_
#define _count_query_option_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct count_query_option_t count_query_option_t;

#include "o_data_query_context.h"
#include "object.h"



typedef struct count_query_option_t {
    struct o_data_query_context_t *context; //model
    char *raw_value; // string
    int value; //boolean
    object_t *validator; //object

} count_query_option_t;

count_query_option_t *count_query_option_create(
    o_data_query_context_t *context,
    char *raw_value,
    int value,
    object_t *validator
);

void count_query_option_free(count_query_option_t *count_query_option);

count_query_option_t *count_query_option_parseFromJSON(cJSON *count_query_optionJSON);

cJSON *count_query_option_convertToJSON(count_query_option_t *count_query_option);

#endif /* _count_query_option_H_ */

