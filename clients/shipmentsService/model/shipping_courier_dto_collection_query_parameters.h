/*
 * shipping_courier_dto_collection_query_parameters.h
 *
 * 
 */

#ifndef _shipping_courier_dto_collection_query_parameters_H_
#define _shipping_courier_dto_collection_query_parameters_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct shipping_courier_dto_collection_query_parameters_t shipping_courier_dto_collection_query_parameters_t;




typedef struct shipping_courier_dto_collection_query_parameters_t {
    int top; //numeric
    int skip; //numeric
    int count; //boolean
    char *filter; // string
    char *order_by; // string
    char *search; // string
    char *select; // string
    char *expand; // string
    int is_empty; //boolean

} shipping_courier_dto_collection_query_parameters_t;

shipping_courier_dto_collection_query_parameters_t *shipping_courier_dto_collection_query_parameters_create(
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

void shipping_courier_dto_collection_query_parameters_free(shipping_courier_dto_collection_query_parameters_t *shipping_courier_dto_collection_query_parameters);

shipping_courier_dto_collection_query_parameters_t *shipping_courier_dto_collection_query_parameters_parseFromJSON(cJSON *shipping_courier_dto_collection_query_parametersJSON);

cJSON *shipping_courier_dto_collection_query_parameters_convertToJSON(shipping_courier_dto_collection_query_parameters_t *shipping_courier_dto_collection_query_parameters);

#endif /* _shipping_courier_dto_collection_query_parameters_H_ */

