/*
 * financial_book_dto_collection_query_parameters.h
 *
 * 
 */

#ifndef _financial_book_dto_collection_query_parameters_H_
#define _financial_book_dto_collection_query_parameters_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct financial_book_dto_collection_query_parameters_t financial_book_dto_collection_query_parameters_t;




typedef struct financial_book_dto_collection_query_parameters_t {
    int top; //numeric
    int skip; //numeric
    int count; //boolean
    char *filter; // string
    char *order_by; // string
    char *search; // string
    char *select; // string
    char *expand; // string
    int is_empty; //boolean

} financial_book_dto_collection_query_parameters_t;

financial_book_dto_collection_query_parameters_t *financial_book_dto_collection_query_parameters_create(
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

void financial_book_dto_collection_query_parameters_free(financial_book_dto_collection_query_parameters_t *financial_book_dto_collection_query_parameters);

financial_book_dto_collection_query_parameters_t *financial_book_dto_collection_query_parameters_parseFromJSON(cJSON *financial_book_dto_collection_query_parametersJSON);

cJSON *financial_book_dto_collection_query_parameters_convertToJSON(financial_book_dto_collection_query_parameters_t *financial_book_dto_collection_query_parameters);

#endif /* _financial_book_dto_collection_query_parameters_H_ */

