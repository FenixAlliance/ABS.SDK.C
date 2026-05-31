/*
 * default_query_configurations.h
 *
 * 
 */

#ifndef _default_query_configurations_H_
#define _default_query_configurations_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct default_query_configurations_t default_query_configurations_t;




typedef struct default_query_configurations_t {
    int enable_expand; //boolean
    int enable_select; //boolean
    int enable_count; //boolean
    int enable_order_by; //boolean
    int enable_filter; //boolean
    int max_top; //numeric
    int enable_skip_token; //boolean

} default_query_configurations_t;

default_query_configurations_t *default_query_configurations_create(
    int enable_expand,
    int enable_select,
    int enable_count,
    int enable_order_by,
    int enable_filter,
    int max_top,
    int enable_skip_token
);

void default_query_configurations_free(default_query_configurations_t *default_query_configurations);

default_query_configurations_t *default_query_configurations_parseFromJSON(cJSON *default_query_configurationsJSON);

cJSON *default_query_configurations_convertToJSON(default_query_configurations_t *default_query_configurations);

#endif /* _default_query_configurations_H_ */

