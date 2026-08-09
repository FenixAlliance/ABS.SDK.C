/*
 * signing_profile_graphical_representation_dto_collection_query_parameters.h
 *
 * 
 */

#ifndef _signing_profile_graphical_representation_dto_collection_query_parameters_H_
#define _signing_profile_graphical_representation_dto_collection_query_parameters_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct signing_profile_graphical_representation_dto_collection_query_parameters_t signing_profile_graphical_representation_dto_collection_query_parameters_t;




typedef struct signing_profile_graphical_representation_dto_collection_query_parameters_t {
    int top; //numeric
    int skip; //numeric
    int count; //boolean
    char *filter; // string
    char *order_by; // string
    char *search; // string
    char *select; // string
    char *expand; // string
    int is_empty; //boolean

} signing_profile_graphical_representation_dto_collection_query_parameters_t;

signing_profile_graphical_representation_dto_collection_query_parameters_t *signing_profile_graphical_representation_dto_collection_query_parameters_create(
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

void signing_profile_graphical_representation_dto_collection_query_parameters_free(signing_profile_graphical_representation_dto_collection_query_parameters_t *signing_profile_graphical_representation_dto_collection_query_parameters);

signing_profile_graphical_representation_dto_collection_query_parameters_t *signing_profile_graphical_representation_dto_collection_query_parameters_parseFromJSON(cJSON *signing_profile_graphical_representation_dto_collection_query_parametersJSON);

cJSON *signing_profile_graphical_representation_dto_collection_query_parameters_convertToJSON(signing_profile_graphical_representation_dto_collection_query_parameters_t *signing_profile_graphical_representation_dto_collection_query_parameters);

#endif /* _signing_profile_graphical_representation_dto_collection_query_parameters_H_ */

