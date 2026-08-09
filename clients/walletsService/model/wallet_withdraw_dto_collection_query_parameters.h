/*
 * wallet_withdraw_dto_collection_query_parameters.h
 *
 * 
 */

#ifndef _wallet_withdraw_dto_collection_query_parameters_H_
#define _wallet_withdraw_dto_collection_query_parameters_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct wallet_withdraw_dto_collection_query_parameters_t wallet_withdraw_dto_collection_query_parameters_t;




typedef struct wallet_withdraw_dto_collection_query_parameters_t {
    int top; //numeric
    int skip; //numeric
    int count; //boolean
    char *filter; // string
    char *order_by; // string
    char *search; // string
    char *select; // string
    char *expand; // string
    int is_empty; //boolean

} wallet_withdraw_dto_collection_query_parameters_t;

wallet_withdraw_dto_collection_query_parameters_t *wallet_withdraw_dto_collection_query_parameters_create(
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

void wallet_withdraw_dto_collection_query_parameters_free(wallet_withdraw_dto_collection_query_parameters_t *wallet_withdraw_dto_collection_query_parameters);

wallet_withdraw_dto_collection_query_parameters_t *wallet_withdraw_dto_collection_query_parameters_parseFromJSON(cJSON *wallet_withdraw_dto_collection_query_parametersJSON);

cJSON *wallet_withdraw_dto_collection_query_parameters_convertToJSON(wallet_withdraw_dto_collection_query_parameters_t *wallet_withdraw_dto_collection_query_parameters);

#endif /* _wallet_withdraw_dto_collection_query_parameters_H_ */

