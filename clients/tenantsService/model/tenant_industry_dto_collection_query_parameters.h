/*
 * tenant_industry_dto_collection_query_parameters.h
 *
 * 
 */

#ifndef _tenant_industry_dto_collection_query_parameters_H_
#define _tenant_industry_dto_collection_query_parameters_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct tenant_industry_dto_collection_query_parameters_t tenant_industry_dto_collection_query_parameters_t;




typedef struct tenant_industry_dto_collection_query_parameters_t {
    int top; //numeric
    int skip; //numeric
    int count; //boolean
    char *filter; // string
    char *order_by; // string
    char *search; // string
    char *select; // string
    char *expand; // string
    int is_empty; //boolean

} tenant_industry_dto_collection_query_parameters_t;

tenant_industry_dto_collection_query_parameters_t *tenant_industry_dto_collection_query_parameters_create(
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

void tenant_industry_dto_collection_query_parameters_free(tenant_industry_dto_collection_query_parameters_t *tenant_industry_dto_collection_query_parameters);

tenant_industry_dto_collection_query_parameters_t *tenant_industry_dto_collection_query_parameters_parseFromJSON(cJSON *tenant_industry_dto_collection_query_parametersJSON);

cJSON *tenant_industry_dto_collection_query_parameters_convertToJSON(tenant_industry_dto_collection_query_parameters_t *tenant_industry_dto_collection_query_parameters);

#endif /* _tenant_industry_dto_collection_query_parameters_H_ */

