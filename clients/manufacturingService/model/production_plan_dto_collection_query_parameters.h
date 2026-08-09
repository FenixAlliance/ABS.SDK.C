/*
 * production_plan_dto_collection_query_parameters.h
 *
 * 
 */

#ifndef _production_plan_dto_collection_query_parameters_H_
#define _production_plan_dto_collection_query_parameters_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct production_plan_dto_collection_query_parameters_t production_plan_dto_collection_query_parameters_t;




typedef struct production_plan_dto_collection_query_parameters_t {
    int top; //numeric
    int skip; //numeric
    int count; //boolean
    char *filter; // string
    char *order_by; // string
    char *search; // string
    char *select; // string
    char *expand; // string
    int is_empty; //boolean

} production_plan_dto_collection_query_parameters_t;

production_plan_dto_collection_query_parameters_t *production_plan_dto_collection_query_parameters_create(
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

void production_plan_dto_collection_query_parameters_free(production_plan_dto_collection_query_parameters_t *production_plan_dto_collection_query_parameters);

production_plan_dto_collection_query_parameters_t *production_plan_dto_collection_query_parameters_parseFromJSON(cJSON *production_plan_dto_collection_query_parametersJSON);

cJSON *production_plan_dto_collection_query_parameters_convertToJSON(production_plan_dto_collection_query_parameters_t *production_plan_dto_collection_query_parameters);

#endif /* _production_plan_dto_collection_query_parameters_H_ */

