/*
 * posting_execution_dto_collection_query_parameters.h
 *
 * 
 */

#ifndef _posting_execution_dto_collection_query_parameters_H_
#define _posting_execution_dto_collection_query_parameters_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct posting_execution_dto_collection_query_parameters_t posting_execution_dto_collection_query_parameters_t;




typedef struct posting_execution_dto_collection_query_parameters_t {
    int top; //numeric
    int skip; //numeric
    int count; //boolean
    char *filter; // string
    char *order_by; // string
    char *search; // string
    char *select; // string
    char *expand; // string
    int is_empty; //boolean

} posting_execution_dto_collection_query_parameters_t;

posting_execution_dto_collection_query_parameters_t *posting_execution_dto_collection_query_parameters_create(
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

void posting_execution_dto_collection_query_parameters_free(posting_execution_dto_collection_query_parameters_t *posting_execution_dto_collection_query_parameters);

posting_execution_dto_collection_query_parameters_t *posting_execution_dto_collection_query_parameters_parseFromJSON(cJSON *posting_execution_dto_collection_query_parametersJSON);

cJSON *posting_execution_dto_collection_query_parameters_convertToJSON(posting_execution_dto_collection_query_parameters_t *posting_execution_dto_collection_query_parameters);

#endif /* _posting_execution_dto_collection_query_parameters_H_ */

