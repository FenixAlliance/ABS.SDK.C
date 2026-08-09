/*
 * bank_account_dto_collection_query_parameters.h
 *
 * 
 */

#ifndef _bank_account_dto_collection_query_parameters_H_
#define _bank_account_dto_collection_query_parameters_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct bank_account_dto_collection_query_parameters_t bank_account_dto_collection_query_parameters_t;




typedef struct bank_account_dto_collection_query_parameters_t {
    int top; //numeric
    int skip; //numeric
    int count; //boolean
    char *filter; // string
    char *order_by; // string
    char *search; // string
    char *select; // string
    char *expand; // string
    int is_empty; //boolean

} bank_account_dto_collection_query_parameters_t;

bank_account_dto_collection_query_parameters_t *bank_account_dto_collection_query_parameters_create(
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

void bank_account_dto_collection_query_parameters_free(bank_account_dto_collection_query_parameters_t *bank_account_dto_collection_query_parameters);

bank_account_dto_collection_query_parameters_t *bank_account_dto_collection_query_parameters_parseFromJSON(cJSON *bank_account_dto_collection_query_parametersJSON);

cJSON *bank_account_dto_collection_query_parameters_convertToJSON(bank_account_dto_collection_query_parameters_t *bank_account_dto_collection_query_parameters);

#endif /* _bank_account_dto_collection_query_parameters_H_ */

