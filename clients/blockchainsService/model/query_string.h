/*
 * query_string.h
 *
 * 
 */

#ifndef _query_string_H_
#define _query_string_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct query_string_t query_string_t;




typedef struct query_string_t {
    char *value; // string
    int has_value; //boolean

} query_string_t;

query_string_t *query_string_create(
    char *value,
    int has_value
);

void query_string_free(query_string_t *query_string);

query_string_t *query_string_parseFromJSON(cJSON *query_stringJSON);

cJSON *query_string_convertToJSON(query_string_t *query_string);

#endif /* _query_string_H_ */

