/*
 * fiscal_year_dto_collection_query_parameters.h
 *
 * 
 */

#ifndef _fiscal_year_dto_collection_query_parameters_H_
#define _fiscal_year_dto_collection_query_parameters_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct fiscal_year_dto_collection_query_parameters_t fiscal_year_dto_collection_query_parameters_t;




typedef struct fiscal_year_dto_collection_query_parameters_t {
    int top; //numeric
    int skip; //numeric
    int count; //boolean
    char *filter; // string
    char *order_by; // string
    char *search; // string
    char *select; // string
    char *expand; // string
    int is_empty; //boolean

} fiscal_year_dto_collection_query_parameters_t;

fiscal_year_dto_collection_query_parameters_t *fiscal_year_dto_collection_query_parameters_create(
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

void fiscal_year_dto_collection_query_parameters_free(fiscal_year_dto_collection_query_parameters_t *fiscal_year_dto_collection_query_parameters);

fiscal_year_dto_collection_query_parameters_t *fiscal_year_dto_collection_query_parameters_parseFromJSON(cJSON *fiscal_year_dto_collection_query_parametersJSON);

cJSON *fiscal_year_dto_collection_query_parameters_convertToJSON(fiscal_year_dto_collection_query_parameters_t *fiscal_year_dto_collection_query_parameters);

#endif /* _fiscal_year_dto_collection_query_parameters_H_ */

