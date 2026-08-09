/*
 * deal_unit_flow_dto_collection_query_parameters.h
 *
 * 
 */

#ifndef _deal_unit_flow_dto_collection_query_parameters_H_
#define _deal_unit_flow_dto_collection_query_parameters_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct deal_unit_flow_dto_collection_query_parameters_t deal_unit_flow_dto_collection_query_parameters_t;




typedef struct deal_unit_flow_dto_collection_query_parameters_t {
    int top; //numeric
    int skip; //numeric
    int count; //boolean
    char *filter; // string
    char *order_by; // string
    char *search; // string
    char *select; // string
    char *expand; // string
    int is_empty; //boolean

} deal_unit_flow_dto_collection_query_parameters_t;

deal_unit_flow_dto_collection_query_parameters_t *deal_unit_flow_dto_collection_query_parameters_create(
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

void deal_unit_flow_dto_collection_query_parameters_free(deal_unit_flow_dto_collection_query_parameters_t *deal_unit_flow_dto_collection_query_parameters);

deal_unit_flow_dto_collection_query_parameters_t *deal_unit_flow_dto_collection_query_parameters_parseFromJSON(cJSON *deal_unit_flow_dto_collection_query_parametersJSON);

cJSON *deal_unit_flow_dto_collection_query_parameters_convertToJSON(deal_unit_flow_dto_collection_query_parameters_t *deal_unit_flow_dto_collection_query_parameters);

#endif /* _deal_unit_flow_dto_collection_query_parameters_H_ */

