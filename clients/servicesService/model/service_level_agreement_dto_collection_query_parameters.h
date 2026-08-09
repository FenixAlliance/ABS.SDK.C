/*
 * service_level_agreement_dto_collection_query_parameters.h
 *
 * 
 */

#ifndef _service_level_agreement_dto_collection_query_parameters_H_
#define _service_level_agreement_dto_collection_query_parameters_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct service_level_agreement_dto_collection_query_parameters_t service_level_agreement_dto_collection_query_parameters_t;




typedef struct service_level_agreement_dto_collection_query_parameters_t {
    int top; //numeric
    int skip; //numeric
    int count; //boolean
    char *filter; // string
    char *order_by; // string
    char *search; // string
    char *select; // string
    char *expand; // string
    int is_empty; //boolean

} service_level_agreement_dto_collection_query_parameters_t;

service_level_agreement_dto_collection_query_parameters_t *service_level_agreement_dto_collection_query_parameters_create(
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

void service_level_agreement_dto_collection_query_parameters_free(service_level_agreement_dto_collection_query_parameters_t *service_level_agreement_dto_collection_query_parameters);

service_level_agreement_dto_collection_query_parameters_t *service_level_agreement_dto_collection_query_parameters_parseFromJSON(cJSON *service_level_agreement_dto_collection_query_parametersJSON);

cJSON *service_level_agreement_dto_collection_query_parameters_convertToJSON(service_level_agreement_dto_collection_query_parameters_t *service_level_agreement_dto_collection_query_parameters);

#endif /* _service_level_agreement_dto_collection_query_parameters_H_ */

