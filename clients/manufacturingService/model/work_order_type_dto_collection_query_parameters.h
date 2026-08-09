/*
 * work_order_type_dto_collection_query_parameters.h
 *
 * 
 */

#ifndef _work_order_type_dto_collection_query_parameters_H_
#define _work_order_type_dto_collection_query_parameters_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct work_order_type_dto_collection_query_parameters_t work_order_type_dto_collection_query_parameters_t;




typedef struct work_order_type_dto_collection_query_parameters_t {
    int top; //numeric
    int skip; //numeric
    int count; //boolean
    char *filter; // string
    char *order_by; // string
    char *search; // string
    char *select; // string
    char *expand; // string
    int is_empty; //boolean

} work_order_type_dto_collection_query_parameters_t;

work_order_type_dto_collection_query_parameters_t *work_order_type_dto_collection_query_parameters_create(
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

void work_order_type_dto_collection_query_parameters_free(work_order_type_dto_collection_query_parameters_t *work_order_type_dto_collection_query_parameters);

work_order_type_dto_collection_query_parameters_t *work_order_type_dto_collection_query_parameters_parseFromJSON(cJSON *work_order_type_dto_collection_query_parametersJSON);

cJSON *work_order_type_dto_collection_query_parameters_convertToJSON(work_order_type_dto_collection_query_parameters_t *work_order_type_dto_collection_query_parameters);

#endif /* _work_order_type_dto_collection_query_parameters_H_ */

