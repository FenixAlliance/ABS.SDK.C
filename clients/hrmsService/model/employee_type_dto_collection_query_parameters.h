/*
 * employee_type_dto_collection_query_parameters.h
 *
 * 
 */

#ifndef _employee_type_dto_collection_query_parameters_H_
#define _employee_type_dto_collection_query_parameters_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct employee_type_dto_collection_query_parameters_t employee_type_dto_collection_query_parameters_t;




typedef struct employee_type_dto_collection_query_parameters_t {
    int top; //numeric
    int skip; //numeric
    int count; //boolean
    char *filter; // string
    char *order_by; // string
    char *search; // string
    char *select; // string
    char *expand; // string
    int is_empty; //boolean

} employee_type_dto_collection_query_parameters_t;

employee_type_dto_collection_query_parameters_t *employee_type_dto_collection_query_parameters_create(
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

void employee_type_dto_collection_query_parameters_free(employee_type_dto_collection_query_parameters_t *employee_type_dto_collection_query_parameters);

employee_type_dto_collection_query_parameters_t *employee_type_dto_collection_query_parameters_parseFromJSON(cJSON *employee_type_dto_collection_query_parametersJSON);

cJSON *employee_type_dto_collection_query_parameters_convertToJSON(employee_type_dto_collection_query_parameters_t *employee_type_dto_collection_query_parameters);

#endif /* _employee_type_dto_collection_query_parameters_H_ */

