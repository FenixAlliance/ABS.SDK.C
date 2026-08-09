/*
 * rail_waybill_dto_collection_query_parameters.h
 *
 * 
 */

#ifndef _rail_waybill_dto_collection_query_parameters_H_
#define _rail_waybill_dto_collection_query_parameters_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct rail_waybill_dto_collection_query_parameters_t rail_waybill_dto_collection_query_parameters_t;




typedef struct rail_waybill_dto_collection_query_parameters_t {
    int top; //numeric
    int skip; //numeric
    int count; //boolean
    char *filter; // string
    char *order_by; // string
    char *search; // string
    char *select; // string
    char *expand; // string
    int is_empty; //boolean

} rail_waybill_dto_collection_query_parameters_t;

rail_waybill_dto_collection_query_parameters_t *rail_waybill_dto_collection_query_parameters_create(
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

void rail_waybill_dto_collection_query_parameters_free(rail_waybill_dto_collection_query_parameters_t *rail_waybill_dto_collection_query_parameters);

rail_waybill_dto_collection_query_parameters_t *rail_waybill_dto_collection_query_parameters_parseFromJSON(cJSON *rail_waybill_dto_collection_query_parametersJSON);

cJSON *rail_waybill_dto_collection_query_parameters_convertToJSON(rail_waybill_dto_collection_query_parameters_t *rail_waybill_dto_collection_query_parameters);

#endif /* _rail_waybill_dto_collection_query_parameters_H_ */

