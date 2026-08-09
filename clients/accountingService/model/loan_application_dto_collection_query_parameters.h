/*
 * loan_application_dto_collection_query_parameters.h
 *
 * 
 */

#ifndef _loan_application_dto_collection_query_parameters_H_
#define _loan_application_dto_collection_query_parameters_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct loan_application_dto_collection_query_parameters_t loan_application_dto_collection_query_parameters_t;




typedef struct loan_application_dto_collection_query_parameters_t {
    int top; //numeric
    int skip; //numeric
    int count; //boolean
    char *filter; // string
    char *order_by; // string
    char *search; // string
    char *select; // string
    char *expand; // string
    int is_empty; //boolean

} loan_application_dto_collection_query_parameters_t;

loan_application_dto_collection_query_parameters_t *loan_application_dto_collection_query_parameters_create(
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

void loan_application_dto_collection_query_parameters_free(loan_application_dto_collection_query_parameters_t *loan_application_dto_collection_query_parameters);

loan_application_dto_collection_query_parameters_t *loan_application_dto_collection_query_parameters_parseFromJSON(cJSON *loan_application_dto_collection_query_parametersJSON);

cJSON *loan_application_dto_collection_query_parameters_convertToJSON(loan_application_dto_collection_query_parameters_t *loan_application_dto_collection_query_parameters);

#endif /* _loan_application_dto_collection_query_parameters_H_ */

