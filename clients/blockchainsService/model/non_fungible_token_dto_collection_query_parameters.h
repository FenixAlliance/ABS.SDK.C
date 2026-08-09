/*
 * non_fungible_token_dto_collection_query_parameters.h
 *
 * 
 */

#ifndef _non_fungible_token_dto_collection_query_parameters_H_
#define _non_fungible_token_dto_collection_query_parameters_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct non_fungible_token_dto_collection_query_parameters_t non_fungible_token_dto_collection_query_parameters_t;




typedef struct non_fungible_token_dto_collection_query_parameters_t {
    int top; //numeric
    int skip; //numeric
    int count; //boolean
    char *filter; // string
    char *order_by; // string
    char *search; // string
    char *select; // string
    char *expand; // string
    int is_empty; //boolean

} non_fungible_token_dto_collection_query_parameters_t;

non_fungible_token_dto_collection_query_parameters_t *non_fungible_token_dto_collection_query_parameters_create(
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

void non_fungible_token_dto_collection_query_parameters_free(non_fungible_token_dto_collection_query_parameters_t *non_fungible_token_dto_collection_query_parameters);

non_fungible_token_dto_collection_query_parameters_t *non_fungible_token_dto_collection_query_parameters_parseFromJSON(cJSON *non_fungible_token_dto_collection_query_parametersJSON);

cJSON *non_fungible_token_dto_collection_query_parameters_convertToJSON(non_fungible_token_dto_collection_query_parameters_t *non_fungible_token_dto_collection_query_parameters);

#endif /* _non_fungible_token_dto_collection_query_parameters_H_ */

