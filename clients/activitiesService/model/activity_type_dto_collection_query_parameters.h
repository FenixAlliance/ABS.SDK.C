/*
 * activity_type_dto_collection_query_parameters.h
 *
 * 
 */

#ifndef _activity_type_dto_collection_query_parameters_H_
#define _activity_type_dto_collection_query_parameters_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct activity_type_dto_collection_query_parameters_t activity_type_dto_collection_query_parameters_t;




typedef struct activity_type_dto_collection_query_parameters_t {
    int top; //numeric
    int skip; //numeric
    int count; //boolean
    char *filter; // string
    char *order_by; // string
    char *search; // string
    char *select; // string
    char *expand; // string
    int is_empty; //boolean

} activity_type_dto_collection_query_parameters_t;

activity_type_dto_collection_query_parameters_t *activity_type_dto_collection_query_parameters_create(
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

void activity_type_dto_collection_query_parameters_free(activity_type_dto_collection_query_parameters_t *activity_type_dto_collection_query_parameters);

activity_type_dto_collection_query_parameters_t *activity_type_dto_collection_query_parameters_parseFromJSON(cJSON *activity_type_dto_collection_query_parametersJSON);

cJSON *activity_type_dto_collection_query_parameters_convertToJSON(activity_type_dto_collection_query_parameters_t *activity_type_dto_collection_query_parameters);

#endif /* _activity_type_dto_collection_query_parameters_H_ */

