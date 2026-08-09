/*
 * currency_dto_collection_query_parameters.h
 *
 * 
 */

#ifndef _currency_dto_collection_query_parameters_H_
#define _currency_dto_collection_query_parameters_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct currency_dto_collection_query_parameters_t currency_dto_collection_query_parameters_t;




typedef struct currency_dto_collection_query_parameters_t {
    int top; //numeric
    int skip; //numeric
    int count; //boolean
    char *filter; // string
    char *order_by; // string
    char *search; // string
    char *select; // string
    char *expand; // string
    int is_empty; //boolean

} currency_dto_collection_query_parameters_t;

currency_dto_collection_query_parameters_t *currency_dto_collection_query_parameters_create(
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

void currency_dto_collection_query_parameters_free(currency_dto_collection_query_parameters_t *currency_dto_collection_query_parameters);

currency_dto_collection_query_parameters_t *currency_dto_collection_query_parameters_parseFromJSON(cJSON *currency_dto_collection_query_parametersJSON);

cJSON *currency_dto_collection_query_parameters_convertToJSON(currency_dto_collection_query_parameters_t *currency_dto_collection_query_parameters);

#endif /* _currency_dto_collection_query_parameters_H_ */

