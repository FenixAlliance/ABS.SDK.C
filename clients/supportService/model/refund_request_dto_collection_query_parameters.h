/*
 * refund_request_dto_collection_query_parameters.h
 *
 * 
 */

#ifndef _refund_request_dto_collection_query_parameters_H_
#define _refund_request_dto_collection_query_parameters_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct refund_request_dto_collection_query_parameters_t refund_request_dto_collection_query_parameters_t;




typedef struct refund_request_dto_collection_query_parameters_t {
    int top; //numeric
    int skip; //numeric
    int count; //boolean
    char *filter; // string
    char *order_by; // string
    char *search; // string
    char *select; // string
    char *expand; // string
    int is_empty; //boolean

} refund_request_dto_collection_query_parameters_t;

refund_request_dto_collection_query_parameters_t *refund_request_dto_collection_query_parameters_create(
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

void refund_request_dto_collection_query_parameters_free(refund_request_dto_collection_query_parameters_t *refund_request_dto_collection_query_parameters);

refund_request_dto_collection_query_parameters_t *refund_request_dto_collection_query_parameters_parseFromJSON(cJSON *refund_request_dto_collection_query_parametersJSON);

cJSON *refund_request_dto_collection_query_parameters_convertToJSON(refund_request_dto_collection_query_parameters_t *refund_request_dto_collection_query_parameters);

#endif /* _refund_request_dto_collection_query_parameters_H_ */

