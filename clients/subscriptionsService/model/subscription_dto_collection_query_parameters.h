/*
 * subscription_dto_collection_query_parameters.h
 *
 * 
 */

#ifndef _subscription_dto_collection_query_parameters_H_
#define _subscription_dto_collection_query_parameters_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct subscription_dto_collection_query_parameters_t subscription_dto_collection_query_parameters_t;




typedef struct subscription_dto_collection_query_parameters_t {
    int top; //numeric
    int skip; //numeric
    int count; //boolean
    char *filter; // string
    char *order_by; // string
    char *search; // string
    char *select; // string
    char *expand; // string
    int is_empty; //boolean

} subscription_dto_collection_query_parameters_t;

subscription_dto_collection_query_parameters_t *subscription_dto_collection_query_parameters_create(
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

void subscription_dto_collection_query_parameters_free(subscription_dto_collection_query_parameters_t *subscription_dto_collection_query_parameters);

subscription_dto_collection_query_parameters_t *subscription_dto_collection_query_parameters_parseFromJSON(cJSON *subscription_dto_collection_query_parametersJSON);

cJSON *subscription_dto_collection_query_parameters_convertToJSON(subscription_dto_collection_query_parameters_t *subscription_dto_collection_query_parameters);

#endif /* _subscription_dto_collection_query_parameters_H_ */

