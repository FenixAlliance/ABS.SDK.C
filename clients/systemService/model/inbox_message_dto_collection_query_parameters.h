/*
 * inbox_message_dto_collection_query_parameters.h
 *
 * 
 */

#ifndef _inbox_message_dto_collection_query_parameters_H_
#define _inbox_message_dto_collection_query_parameters_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inbox_message_dto_collection_query_parameters_t inbox_message_dto_collection_query_parameters_t;




typedef struct inbox_message_dto_collection_query_parameters_t {
    int top; //numeric
    int skip; //numeric
    int count; //boolean
    char *filter; // string
    char *order_by; // string
    char *search; // string
    char *select; // string
    char *expand; // string
    int is_empty; //boolean

} inbox_message_dto_collection_query_parameters_t;

inbox_message_dto_collection_query_parameters_t *inbox_message_dto_collection_query_parameters_create(
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

void inbox_message_dto_collection_query_parameters_free(inbox_message_dto_collection_query_parameters_t *inbox_message_dto_collection_query_parameters);

inbox_message_dto_collection_query_parameters_t *inbox_message_dto_collection_query_parameters_parseFromJSON(cJSON *inbox_message_dto_collection_query_parametersJSON);

cJSON *inbox_message_dto_collection_query_parameters_convertToJSON(inbox_message_dto_collection_query_parameters_t *inbox_message_dto_collection_query_parameters);

#endif /* _inbox_message_dto_collection_query_parameters_H_ */

