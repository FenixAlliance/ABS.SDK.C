/*
 * asset_depreciation_record_dto_collection_query_parameters.h
 *
 * 
 */

#ifndef _asset_depreciation_record_dto_collection_query_parameters_H_
#define _asset_depreciation_record_dto_collection_query_parameters_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct asset_depreciation_record_dto_collection_query_parameters_t asset_depreciation_record_dto_collection_query_parameters_t;




typedef struct asset_depreciation_record_dto_collection_query_parameters_t {
    int top; //numeric
    int skip; //numeric
    int count; //boolean
    char *filter; // string
    char *order_by; // string
    char *search; // string
    char *select; // string
    char *expand; // string
    int is_empty; //boolean

} asset_depreciation_record_dto_collection_query_parameters_t;

asset_depreciation_record_dto_collection_query_parameters_t *asset_depreciation_record_dto_collection_query_parameters_create(
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

void asset_depreciation_record_dto_collection_query_parameters_free(asset_depreciation_record_dto_collection_query_parameters_t *asset_depreciation_record_dto_collection_query_parameters);

asset_depreciation_record_dto_collection_query_parameters_t *asset_depreciation_record_dto_collection_query_parameters_parseFromJSON(cJSON *asset_depreciation_record_dto_collection_query_parametersJSON);

cJSON *asset_depreciation_record_dto_collection_query_parameters_convertToJSON(asset_depreciation_record_dto_collection_query_parameters_t *asset_depreciation_record_dto_collection_query_parameters);

#endif /* _asset_depreciation_record_dto_collection_query_parameters_H_ */

