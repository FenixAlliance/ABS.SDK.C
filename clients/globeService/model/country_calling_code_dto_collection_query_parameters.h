/*
 * country_calling_code_dto_collection_query_parameters.h
 *
 * 
 */

#ifndef _country_calling_code_dto_collection_query_parameters_H_
#define _country_calling_code_dto_collection_query_parameters_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct country_calling_code_dto_collection_query_parameters_t country_calling_code_dto_collection_query_parameters_t;




typedef struct country_calling_code_dto_collection_query_parameters_t {
    int top; //numeric
    int skip; //numeric
    int count; //boolean
    char *filter; // string
    char *order_by; // string
    char *search; // string
    char *select; // string
    char *expand; // string
    int is_empty; //boolean

} country_calling_code_dto_collection_query_parameters_t;

country_calling_code_dto_collection_query_parameters_t *country_calling_code_dto_collection_query_parameters_create(
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

void country_calling_code_dto_collection_query_parameters_free(country_calling_code_dto_collection_query_parameters_t *country_calling_code_dto_collection_query_parameters);

country_calling_code_dto_collection_query_parameters_t *country_calling_code_dto_collection_query_parameters_parseFromJSON(cJSON *country_calling_code_dto_collection_query_parametersJSON);

cJSON *country_calling_code_dto_collection_query_parameters_convertToJSON(country_calling_code_dto_collection_query_parameters_t *country_calling_code_dto_collection_query_parameters);

#endif /* _country_calling_code_dto_collection_query_parameters_H_ */

