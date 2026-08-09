/*
 * leave_type_dto_collection_query_parameters.h
 *
 * 
 */

#ifndef _leave_type_dto_collection_query_parameters_H_
#define _leave_type_dto_collection_query_parameters_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct leave_type_dto_collection_query_parameters_t leave_type_dto_collection_query_parameters_t;




typedef struct leave_type_dto_collection_query_parameters_t {
    int top; //numeric
    int skip; //numeric
    int count; //boolean
    char *filter; // string
    char *order_by; // string
    char *search; // string
    char *select; // string
    char *expand; // string
    int is_empty; //boolean

} leave_type_dto_collection_query_parameters_t;

leave_type_dto_collection_query_parameters_t *leave_type_dto_collection_query_parameters_create(
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

void leave_type_dto_collection_query_parameters_free(leave_type_dto_collection_query_parameters_t *leave_type_dto_collection_query_parameters);

leave_type_dto_collection_query_parameters_t *leave_type_dto_collection_query_parameters_parseFromJSON(cJSON *leave_type_dto_collection_query_parametersJSON);

cJSON *leave_type_dto_collection_query_parameters_convertToJSON(leave_type_dto_collection_query_parameters_t *leave_type_dto_collection_query_parameters);

#endif /* _leave_type_dto_collection_query_parameters_H_ */

