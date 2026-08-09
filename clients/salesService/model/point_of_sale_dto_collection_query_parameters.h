/*
 * point_of_sale_dto_collection_query_parameters.h
 *
 * 
 */

#ifndef _point_of_sale_dto_collection_query_parameters_H_
#define _point_of_sale_dto_collection_query_parameters_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct point_of_sale_dto_collection_query_parameters_t point_of_sale_dto_collection_query_parameters_t;




typedef struct point_of_sale_dto_collection_query_parameters_t {
    int top; //numeric
    int skip; //numeric
    int count; //boolean
    char *filter; // string
    char *order_by; // string
    char *search; // string
    char *select; // string
    char *expand; // string
    int is_empty; //boolean

} point_of_sale_dto_collection_query_parameters_t;

point_of_sale_dto_collection_query_parameters_t *point_of_sale_dto_collection_query_parameters_create(
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

void point_of_sale_dto_collection_query_parameters_free(point_of_sale_dto_collection_query_parameters_t *point_of_sale_dto_collection_query_parameters);

point_of_sale_dto_collection_query_parameters_t *point_of_sale_dto_collection_query_parameters_parseFromJSON(cJSON *point_of_sale_dto_collection_query_parametersJSON);

cJSON *point_of_sale_dto_collection_query_parameters_convertToJSON(point_of_sale_dto_collection_query_parameters_t *point_of_sale_dto_collection_query_parameters);

#endif /* _point_of_sale_dto_collection_query_parameters_H_ */

