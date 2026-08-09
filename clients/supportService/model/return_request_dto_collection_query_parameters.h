/*
 * return_request_dto_collection_query_parameters.h
 *
 * 
 */

#ifndef _return_request_dto_collection_query_parameters_H_
#define _return_request_dto_collection_query_parameters_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct return_request_dto_collection_query_parameters_t return_request_dto_collection_query_parameters_t;




typedef struct return_request_dto_collection_query_parameters_t {
    int top; //numeric
    int skip; //numeric
    int count; //boolean
    char *filter; // string
    char *order_by; // string
    char *search; // string
    char *select; // string
    char *expand; // string
    int is_empty; //boolean

} return_request_dto_collection_query_parameters_t;

return_request_dto_collection_query_parameters_t *return_request_dto_collection_query_parameters_create(
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

void return_request_dto_collection_query_parameters_free(return_request_dto_collection_query_parameters_t *return_request_dto_collection_query_parameters);

return_request_dto_collection_query_parameters_t *return_request_dto_collection_query_parameters_parseFromJSON(cJSON *return_request_dto_collection_query_parametersJSON);

cJSON *return_request_dto_collection_query_parameters_convertToJSON(return_request_dto_collection_query_parameters_t *return_request_dto_collection_query_parameters);

#endif /* _return_request_dto_collection_query_parameters_H_ */

