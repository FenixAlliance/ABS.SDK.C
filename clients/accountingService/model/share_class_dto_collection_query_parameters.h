/*
 * share_class_dto_collection_query_parameters.h
 *
 * 
 */

#ifndef _share_class_dto_collection_query_parameters_H_
#define _share_class_dto_collection_query_parameters_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct share_class_dto_collection_query_parameters_t share_class_dto_collection_query_parameters_t;




typedef struct share_class_dto_collection_query_parameters_t {
    int top; //numeric
    int skip; //numeric
    int count; //boolean
    char *filter; // string
    char *order_by; // string
    char *search; // string
    char *select; // string
    char *expand; // string
    int is_empty; //boolean

} share_class_dto_collection_query_parameters_t;

share_class_dto_collection_query_parameters_t *share_class_dto_collection_query_parameters_create(
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

void share_class_dto_collection_query_parameters_free(share_class_dto_collection_query_parameters_t *share_class_dto_collection_query_parameters);

share_class_dto_collection_query_parameters_t *share_class_dto_collection_query_parameters_parseFromJSON(cJSON *share_class_dto_collection_query_parametersJSON);

cJSON *share_class_dto_collection_query_parameters_convertToJSON(share_class_dto_collection_query_parameters_t *share_class_dto_collection_query_parameters);

#endif /* _share_class_dto_collection_query_parameters_H_ */

