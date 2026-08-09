/*
 * budget_account_entry_dto_collection_query_parameters.h
 *
 * 
 */

#ifndef _budget_account_entry_dto_collection_query_parameters_H_
#define _budget_account_entry_dto_collection_query_parameters_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct budget_account_entry_dto_collection_query_parameters_t budget_account_entry_dto_collection_query_parameters_t;




typedef struct budget_account_entry_dto_collection_query_parameters_t {
    int top; //numeric
    int skip; //numeric
    int count; //boolean
    char *filter; // string
    char *order_by; // string
    char *search; // string
    char *select; // string
    char *expand; // string
    int is_empty; //boolean

} budget_account_entry_dto_collection_query_parameters_t;

budget_account_entry_dto_collection_query_parameters_t *budget_account_entry_dto_collection_query_parameters_create(
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

void budget_account_entry_dto_collection_query_parameters_free(budget_account_entry_dto_collection_query_parameters_t *budget_account_entry_dto_collection_query_parameters);

budget_account_entry_dto_collection_query_parameters_t *budget_account_entry_dto_collection_query_parameters_parseFromJSON(cJSON *budget_account_entry_dto_collection_query_parametersJSON);

cJSON *budget_account_entry_dto_collection_query_parameters_convertToJSON(budget_account_entry_dto_collection_query_parameters_t *budget_account_entry_dto_collection_query_parameters);

#endif /* _budget_account_entry_dto_collection_query_parameters_H_ */

