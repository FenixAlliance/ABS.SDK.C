/*
 * voyage_port_call_dto_collection_query_parameters.h
 *
 * 
 */

#ifndef _voyage_port_call_dto_collection_query_parameters_H_
#define _voyage_port_call_dto_collection_query_parameters_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct voyage_port_call_dto_collection_query_parameters_t voyage_port_call_dto_collection_query_parameters_t;




typedef struct voyage_port_call_dto_collection_query_parameters_t {
    int top; //numeric
    int skip; //numeric
    int count; //boolean
    char *filter; // string
    char *order_by; // string
    char *search; // string
    char *select; // string
    char *expand; // string
    int is_empty; //boolean

} voyage_port_call_dto_collection_query_parameters_t;

voyage_port_call_dto_collection_query_parameters_t *voyage_port_call_dto_collection_query_parameters_create(
    int top,
    int skip,
    int count,
    char *filter,
    char *order_by,
    char *search,
    char *select,
    char *expand,
    int is_empty
);

void voyage_port_call_dto_collection_query_parameters_free(voyage_port_call_dto_collection_query_parameters_t *voyage_port_call_dto_collection_query_parameters);

voyage_port_call_dto_collection_query_parameters_t *voyage_port_call_dto_collection_query_parameters_parseFromJSON(cJSON *voyage_port_call_dto_collection_query_parametersJSON);

cJSON *voyage_port_call_dto_collection_query_parameters_convertToJSON(voyage_port_call_dto_collection_query_parameters_t *voyage_port_call_dto_collection_query_parameters);

#endif /* _voyage_port_call_dto_collection_query_parameters_H_ */

