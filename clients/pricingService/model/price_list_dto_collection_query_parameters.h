/*
 * price_list_dto_collection_query_parameters.h
 *
 * 
 */

#ifndef _price_list_dto_collection_query_parameters_H_
#define _price_list_dto_collection_query_parameters_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct price_list_dto_collection_query_parameters_t price_list_dto_collection_query_parameters_t;




typedef struct price_list_dto_collection_query_parameters_t {
    int top; //numeric
    int skip; //numeric
    int count; //boolean
    char *filter; // string
    char *order_by; // string
    char *search; // string
    char *select; // string
    char *expand; // string
    int is_empty; //boolean

} price_list_dto_collection_query_parameters_t;

price_list_dto_collection_query_parameters_t *price_list_dto_collection_query_parameters_create(
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

void price_list_dto_collection_query_parameters_free(price_list_dto_collection_query_parameters_t *price_list_dto_collection_query_parameters);

price_list_dto_collection_query_parameters_t *price_list_dto_collection_query_parameters_parseFromJSON(cJSON *price_list_dto_collection_query_parametersJSON);

cJSON *price_list_dto_collection_query_parameters_convertToJSON(price_list_dto_collection_query_parameters_t *price_list_dto_collection_query_parameters);

#endif /* _price_list_dto_collection_query_parameters_H_ */

