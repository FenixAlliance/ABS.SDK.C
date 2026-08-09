/*
 * web_page_category_dto_collection_query_parameters.h
 *
 * 
 */

#ifndef _web_page_category_dto_collection_query_parameters_H_
#define _web_page_category_dto_collection_query_parameters_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct web_page_category_dto_collection_query_parameters_t web_page_category_dto_collection_query_parameters_t;




typedef struct web_page_category_dto_collection_query_parameters_t {
    int top; //numeric
    int skip; //numeric
    int count; //boolean
    char *filter; // string
    char *order_by; // string
    char *search; // string
    char *select; // string
    char *expand; // string
    int is_empty; //boolean

} web_page_category_dto_collection_query_parameters_t;

web_page_category_dto_collection_query_parameters_t *web_page_category_dto_collection_query_parameters_create(
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

void web_page_category_dto_collection_query_parameters_free(web_page_category_dto_collection_query_parameters_t *web_page_category_dto_collection_query_parameters);

web_page_category_dto_collection_query_parameters_t *web_page_category_dto_collection_query_parameters_parseFromJSON(cJSON *web_page_category_dto_collection_query_parametersJSON);

cJSON *web_page_category_dto_collection_query_parameters_convertToJSON(web_page_category_dto_collection_query_parameters_t *web_page_category_dto_collection_query_parameters);

#endif /* _web_page_category_dto_collection_query_parameters_H_ */

