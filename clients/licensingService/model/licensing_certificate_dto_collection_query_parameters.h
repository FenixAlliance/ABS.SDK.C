/*
 * licensing_certificate_dto_collection_query_parameters.h
 *
 * 
 */

#ifndef _licensing_certificate_dto_collection_query_parameters_H_
#define _licensing_certificate_dto_collection_query_parameters_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct licensing_certificate_dto_collection_query_parameters_t licensing_certificate_dto_collection_query_parameters_t;




typedef struct licensing_certificate_dto_collection_query_parameters_t {
    int top; //numeric
    int skip; //numeric
    int count; //boolean
    char *filter; // string
    char *order_by; // string
    char *search; // string
    char *select; // string
    char *expand; // string
    int is_empty; //boolean

} licensing_certificate_dto_collection_query_parameters_t;

licensing_certificate_dto_collection_query_parameters_t *licensing_certificate_dto_collection_query_parameters_create(
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

void licensing_certificate_dto_collection_query_parameters_free(licensing_certificate_dto_collection_query_parameters_t *licensing_certificate_dto_collection_query_parameters);

licensing_certificate_dto_collection_query_parameters_t *licensing_certificate_dto_collection_query_parameters_parseFromJSON(cJSON *licensing_certificate_dto_collection_query_parametersJSON);

cJSON *licensing_certificate_dto_collection_query_parameters_convertToJSON(licensing_certificate_dto_collection_query_parameters_t *licensing_certificate_dto_collection_query_parameters);

#endif /* _licensing_certificate_dto_collection_query_parameters_H_ */

