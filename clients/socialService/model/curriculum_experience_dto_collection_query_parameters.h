/*
 * curriculum_experience_dto_collection_query_parameters.h
 *
 * 
 */

#ifndef _curriculum_experience_dto_collection_query_parameters_H_
#define _curriculum_experience_dto_collection_query_parameters_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct curriculum_experience_dto_collection_query_parameters_t curriculum_experience_dto_collection_query_parameters_t;




typedef struct curriculum_experience_dto_collection_query_parameters_t {
    int top; //numeric
    int skip; //numeric
    int count; //boolean
    char *filter; // string
    char *order_by; // string
    char *search; // string
    char *select; // string
    char *expand; // string
    int is_empty; //boolean

} curriculum_experience_dto_collection_query_parameters_t;

curriculum_experience_dto_collection_query_parameters_t *curriculum_experience_dto_collection_query_parameters_create(
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

void curriculum_experience_dto_collection_query_parameters_free(curriculum_experience_dto_collection_query_parameters_t *curriculum_experience_dto_collection_query_parameters);

curriculum_experience_dto_collection_query_parameters_t *curriculum_experience_dto_collection_query_parameters_parseFromJSON(cJSON *curriculum_experience_dto_collection_query_parametersJSON);

cJSON *curriculum_experience_dto_collection_query_parameters_convertToJSON(curriculum_experience_dto_collection_query_parameters_t *curriculum_experience_dto_collection_query_parameters);

#endif /* _curriculum_experience_dto_collection_query_parameters_H_ */

