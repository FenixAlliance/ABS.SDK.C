/*
 * signed_document_dto_collection_query_parameters.h
 *
 * 
 */

#ifndef _signed_document_dto_collection_query_parameters_H_
#define _signed_document_dto_collection_query_parameters_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct signed_document_dto_collection_query_parameters_t signed_document_dto_collection_query_parameters_t;




typedef struct signed_document_dto_collection_query_parameters_t {
    int top; //numeric
    int skip; //numeric
    int count; //boolean
    char *filter; // string
    char *order_by; // string
    char *search; // string
    char *select; // string
    char *expand; // string
    int is_empty; //boolean

} signed_document_dto_collection_query_parameters_t;

signed_document_dto_collection_query_parameters_t *signed_document_dto_collection_query_parameters_create(
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

void signed_document_dto_collection_query_parameters_free(signed_document_dto_collection_query_parameters_t *signed_document_dto_collection_query_parameters);

signed_document_dto_collection_query_parameters_t *signed_document_dto_collection_query_parameters_parseFromJSON(cJSON *signed_document_dto_collection_query_parametersJSON);

cJSON *signed_document_dto_collection_query_parameters_convertToJSON(signed_document_dto_collection_query_parameters_t *signed_document_dto_collection_query_parameters);

#endif /* _signed_document_dto_collection_query_parameters_H_ */

