/*
 * unit_group_dto_collection_query_parameters.h
 *
 * 
 */

#ifndef _unit_group_dto_collection_query_parameters_H_
#define _unit_group_dto_collection_query_parameters_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct unit_group_dto_collection_query_parameters_t unit_group_dto_collection_query_parameters_t;




typedef struct unit_group_dto_collection_query_parameters_t {
    int top; //numeric
    int skip; //numeric
    int count; //boolean
    char *filter; // string
    char *order_by; // string
    char *search; // string
    char *select; // string
    char *expand; // string
    int is_empty; //boolean

} unit_group_dto_collection_query_parameters_t;

unit_group_dto_collection_query_parameters_t *unit_group_dto_collection_query_parameters_create(
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

void unit_group_dto_collection_query_parameters_free(unit_group_dto_collection_query_parameters_t *unit_group_dto_collection_query_parameters);

unit_group_dto_collection_query_parameters_t *unit_group_dto_collection_query_parameters_parseFromJSON(cJSON *unit_group_dto_collection_query_parametersJSON);

cJSON *unit_group_dto_collection_query_parameters_convertToJSON(unit_group_dto_collection_query_parameters_t *unit_group_dto_collection_query_parameters);

#endif /* _unit_group_dto_collection_query_parameters_H_ */

