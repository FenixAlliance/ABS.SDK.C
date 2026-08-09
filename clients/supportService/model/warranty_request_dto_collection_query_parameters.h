/*
 * warranty_request_dto_collection_query_parameters.h
 *
 * 
 */

#ifndef _warranty_request_dto_collection_query_parameters_H_
#define _warranty_request_dto_collection_query_parameters_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct warranty_request_dto_collection_query_parameters_t warranty_request_dto_collection_query_parameters_t;




typedef struct warranty_request_dto_collection_query_parameters_t {
    int top; //numeric
    int skip; //numeric
    int count; //boolean
    char *filter; // string
    char *order_by; // string
    char *search; // string
    char *select; // string
    char *expand; // string
    int is_empty; //boolean

} warranty_request_dto_collection_query_parameters_t;

warranty_request_dto_collection_query_parameters_t *warranty_request_dto_collection_query_parameters_create(
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

void warranty_request_dto_collection_query_parameters_free(warranty_request_dto_collection_query_parameters_t *warranty_request_dto_collection_query_parameters);

warranty_request_dto_collection_query_parameters_t *warranty_request_dto_collection_query_parameters_parseFromJSON(cJSON *warranty_request_dto_collection_query_parametersJSON);

cJSON *warranty_request_dto_collection_query_parameters_convertToJSON(warranty_request_dto_collection_query_parameters_t *warranty_request_dto_collection_query_parameters);

#endif /* _warranty_request_dto_collection_query_parameters_H_ */

