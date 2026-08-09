/*
 * waybill_line_dto_collection_query_parameters.h
 *
 * 
 */

#ifndef _waybill_line_dto_collection_query_parameters_H_
#define _waybill_line_dto_collection_query_parameters_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct waybill_line_dto_collection_query_parameters_t waybill_line_dto_collection_query_parameters_t;




typedef struct waybill_line_dto_collection_query_parameters_t {
    int top; //numeric
    int skip; //numeric
    int count; //boolean
    char *filter; // string
    char *order_by; // string
    char *search; // string
    char *select; // string
    char *expand; // string
    int is_empty; //boolean

} waybill_line_dto_collection_query_parameters_t;

waybill_line_dto_collection_query_parameters_t *waybill_line_dto_collection_query_parameters_create(
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

void waybill_line_dto_collection_query_parameters_free(waybill_line_dto_collection_query_parameters_t *waybill_line_dto_collection_query_parameters);

waybill_line_dto_collection_query_parameters_t *waybill_line_dto_collection_query_parameters_parseFromJSON(cJSON *waybill_line_dto_collection_query_parametersJSON);

cJSON *waybill_line_dto_collection_query_parameters_convertToJSON(waybill_line_dto_collection_query_parameters_t *waybill_line_dto_collection_query_parameters);

#endif /* _waybill_line_dto_collection_query_parameters_H_ */

