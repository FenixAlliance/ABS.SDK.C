/*
 * applied_item_tax_record_dto_collection_query_parameters.h
 *
 * 
 */

#ifndef _applied_item_tax_record_dto_collection_query_parameters_H_
#define _applied_item_tax_record_dto_collection_query_parameters_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct applied_item_tax_record_dto_collection_query_parameters_t applied_item_tax_record_dto_collection_query_parameters_t;




typedef struct applied_item_tax_record_dto_collection_query_parameters_t {
    int top; //numeric
    int skip; //numeric
    int count; //boolean
    char *filter; // string
    char *order_by; // string
    char *search; // string
    char *select; // string
    char *expand; // string
    int is_empty; //boolean

} applied_item_tax_record_dto_collection_query_parameters_t;

applied_item_tax_record_dto_collection_query_parameters_t *applied_item_tax_record_dto_collection_query_parameters_create(
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

void applied_item_tax_record_dto_collection_query_parameters_free(applied_item_tax_record_dto_collection_query_parameters_t *applied_item_tax_record_dto_collection_query_parameters);

applied_item_tax_record_dto_collection_query_parameters_t *applied_item_tax_record_dto_collection_query_parameters_parseFromJSON(cJSON *applied_item_tax_record_dto_collection_query_parametersJSON);

cJSON *applied_item_tax_record_dto_collection_query_parameters_convertToJSON(applied_item_tax_record_dto_collection_query_parameters_t *applied_item_tax_record_dto_collection_query_parameters);

#endif /* _applied_item_tax_record_dto_collection_query_parameters_H_ */

