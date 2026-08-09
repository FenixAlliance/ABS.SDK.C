/*
 * tax_rate_dto_collection_query_parameters.h
 *
 * 
 */

#ifndef _tax_rate_dto_collection_query_parameters_H_
#define _tax_rate_dto_collection_query_parameters_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct tax_rate_dto_collection_query_parameters_t tax_rate_dto_collection_query_parameters_t;




typedef struct tax_rate_dto_collection_query_parameters_t {
    int top; //numeric
    int skip; //numeric
    int count; //boolean
    char *filter; // string
    char *order_by; // string
    char *search; // string
    char *select; // string
    char *expand; // string
    int is_empty; //boolean

} tax_rate_dto_collection_query_parameters_t;

tax_rate_dto_collection_query_parameters_t *tax_rate_dto_collection_query_parameters_create(
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

void tax_rate_dto_collection_query_parameters_free(tax_rate_dto_collection_query_parameters_t *tax_rate_dto_collection_query_parameters);

tax_rate_dto_collection_query_parameters_t *tax_rate_dto_collection_query_parameters_parseFromJSON(cJSON *tax_rate_dto_collection_query_parametersJSON);

cJSON *tax_rate_dto_collection_query_parameters_convertToJSON(tax_rate_dto_collection_query_parameters_t *tax_rate_dto_collection_query_parameters);

#endif /* _tax_rate_dto_collection_query_parameters_H_ */

