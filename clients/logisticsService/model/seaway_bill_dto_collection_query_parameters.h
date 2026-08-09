/*
 * seaway_bill_dto_collection_query_parameters.h
 *
 * 
 */

#ifndef _seaway_bill_dto_collection_query_parameters_H_
#define _seaway_bill_dto_collection_query_parameters_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct seaway_bill_dto_collection_query_parameters_t seaway_bill_dto_collection_query_parameters_t;




typedef struct seaway_bill_dto_collection_query_parameters_t {
    int top; //numeric
    int skip; //numeric
    int count; //boolean
    char *filter; // string
    char *order_by; // string
    char *search; // string
    char *select; // string
    char *expand; // string
    int is_empty; //boolean

} seaway_bill_dto_collection_query_parameters_t;

seaway_bill_dto_collection_query_parameters_t *seaway_bill_dto_collection_query_parameters_create(
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

void seaway_bill_dto_collection_query_parameters_free(seaway_bill_dto_collection_query_parameters_t *seaway_bill_dto_collection_query_parameters);

seaway_bill_dto_collection_query_parameters_t *seaway_bill_dto_collection_query_parameters_parseFromJSON(cJSON *seaway_bill_dto_collection_query_parametersJSON);

cJSON *seaway_bill_dto_collection_query_parameters_convertToJSON(seaway_bill_dto_collection_query_parameters_t *seaway_bill_dto_collection_query_parameters);

#endif /* _seaway_bill_dto_collection_query_parameters_H_ */

