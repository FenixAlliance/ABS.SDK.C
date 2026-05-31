/*
 * o_data_raw_query_options.h
 *
 * 
 */

#ifndef _o_data_raw_query_options_H_
#define _o_data_raw_query_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct o_data_raw_query_options_t o_data_raw_query_options_t;




typedef struct o_data_raw_query_options_t {
    char *filter; // string
    char *apply; // string
    char *compute; // string
    char *search; // string
    char *order_by; // string
    char *top; // string
    char *skip; // string
    char *select; // string
    char *expand; // string
    char *count; // string
    char *format; // string
    char *skip_token; // string
    char *delta_token; // string

} o_data_raw_query_options_t;

o_data_raw_query_options_t *o_data_raw_query_options_create(
    char *filter,
    char *apply,
    char *compute,
    char *search,
    char *order_by,
    char *top,
    char *skip,
    char *select,
    char *expand,
    char *count,
    char *format,
    char *skip_token,
    char *delta_token
);

void o_data_raw_query_options_free(o_data_raw_query_options_t *o_data_raw_query_options);

o_data_raw_query_options_t *o_data_raw_query_options_parseFromJSON(cJSON *o_data_raw_query_optionsJSON);

cJSON *o_data_raw_query_options_convertToJSON(o_data_raw_query_options_t *o_data_raw_query_options);

#endif /* _o_data_raw_query_options_H_ */

