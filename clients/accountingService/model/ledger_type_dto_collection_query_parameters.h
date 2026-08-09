/*
 * ledger_type_dto_collection_query_parameters.h
 *
 * 
 */

#ifndef _ledger_type_dto_collection_query_parameters_H_
#define _ledger_type_dto_collection_query_parameters_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ledger_type_dto_collection_query_parameters_t ledger_type_dto_collection_query_parameters_t;




typedef struct ledger_type_dto_collection_query_parameters_t {
    int top; //numeric
    int skip; //numeric
    int count; //boolean
    char *filter; // string
    char *order_by; // string
    char *search; // string
    char *select; // string
    char *expand; // string
    int is_empty; //boolean

} ledger_type_dto_collection_query_parameters_t;

ledger_type_dto_collection_query_parameters_t *ledger_type_dto_collection_query_parameters_create(
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

void ledger_type_dto_collection_query_parameters_free(ledger_type_dto_collection_query_parameters_t *ledger_type_dto_collection_query_parameters);

ledger_type_dto_collection_query_parameters_t *ledger_type_dto_collection_query_parameters_parseFromJSON(cJSON *ledger_type_dto_collection_query_parametersJSON);

cJSON *ledger_type_dto_collection_query_parameters_convertToJSON(ledger_type_dto_collection_query_parameters_t *ledger_type_dto_collection_query_parameters);

#endif /* _ledger_type_dto_collection_query_parameters_H_ */

